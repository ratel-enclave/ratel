#include "../dynamorio_t.h"
#include "asm_defines.asm"


typedef unsigned long ulong;
typedef unsigned char byte;
typedef unsigned char bool;
#define true    (1)
#define false   (0)


typedef struct
{
    uint64_t a_type;      /* Entry type */
    uint64_t a_val;       /* Integer value */
} Elf64_auxv_t;


/* Legal values for a_type (entry type).  */
#define AT_NULL         0               /* End of vector */
#define AT_IGNORE       1               /* Entry should be ignored */
#define AT_EXECFD       2               /* File descriptor of program */
#define AT_PHDR         3               /* Program headers for program */
#define AT_PHENT        4               /* Size of program header entry */
#define AT_PHNUM        5               /* Number of program headers */
#define AT_PAGESZ       6               /* System page size */
#define AT_BASE         7               /* Base address of interpreter */
#define AT_FLAGS        8               /* Flags */
#define AT_ENTRY        9               /* Entry point of program */
#define AT_NOTELF       10              /* Program is not ELF */
#define AT_UID          11              /* Real uid */
#define AT_EUID         12              /* Effective uid */
#define AT_GID          13              /* Real gid */
#define AT_EGID         14              /* Effective gid */
#define AT_CLKTCK       17              /* Frequency of times() */
/* Pointer to the global system page used for system calls and other nice things.  */
#define AT_SYSINFO      32
#define AT_SYSINFO_EHDR 33


/*-----------------sgxdbi_enclave_entry: entry point of our sgxdbi system--------------*/
unsigned long ORIGINAL_INIT_STACK;

extern void original_dynamorio_start(int argc, char* argv[], char *envp[]);

void sgxdbi_enclave_entry(long argc, char** argv, char** envp)
{
    ulong new_stack_base;   // the start address of new stack
    ulong *pStack, *t;
    int  nPtr;      // The number of pointers putting on the new stack.

    /* reserve space for putting argc, & NULL-pointers & axuv */
    nPtr = argc + 3 + 60;

    /* Count the number of env variables */
    for (t = (ulong*)envp; *t != 0/*NULL*/; t++, nPtr++);

    /* create a local stack */
    asm volatile ("mov %%rsp, %0": "=rm" (new_stack_base));
    new_stack_base -= nPtr * sizeof(ulong);
    new_stack_base &= ~(0xf);   // aligned to 16 bytes boundary


    /* fill the new stack as it is prepared by the kernel's ELF loader */
    pStack = (ulong*)new_stack_base;
    *pStack++ = argc;

    //copy argv[]
    for (t = (ulong*)argv; *t != 0/*NULL*/; t++) *pStack++ = *t;
    *pStack++ = 0/*NULL*/;

    //copy envp[]
    for (t = (ulong*)envp; *t != 0/*NULL*/; t++) *pStack++ = *t;
    *pStack++ = 0/*NULL*/;
    t++;

    //copy auxv[]
    Elf64_auxv_t *auxv_n = (Elf64_auxv_t*)pStack;
    Elf64_auxv_t *auxv_o = (Elf64_auxv_t*)t;
    do {
        *auxv_n = *auxv_o;

        /* Hide the vdso page */
        if (auxv_n->a_type == AT_SYSINFO)
            auxv_n->a_val = 0;
        else if (auxv_n->a_type == AT_SYSINFO_EHDR)
            auxv_n->a_val = 0;

        auxv_o++;
        auxv_n++;

    } while (auxv_o->a_type != AT_NULL);


    /* switch to the new stack */
    asm volatile ("\tmov %%rbp, %0   \n"
            "\tmov %1, %%rsp   \n"
            //"\txor %%rdi,%%rdi \n"
            "\tjmp *%2   \n"
            :"=rm"(ORIGINAL_INIT_STACK)
            :"rm"(new_stack_base), "rm"(original_dynamorio_start));
    /* unexpected_return(); */
}

void sgxdbi_enclave_exit(void)
{
    /* switch-back to the initial stack */
    asm volatile ("\tmov %0, %%rbp \n"
            "\tpop %%rsp   \n"
            "jmp *%%rsp   \n\t"
            ::"rm"(ORIGINAL_INIT_STACK));

    /* unexpected_return(); */
}
