#include "../dynamorio_t.h"
#include "sgx_mm.h"
#include "asm_defines.asm"

#include "call_out.h"
#include "syscall.h"
#include "unistd_64.h"
#include "thread_stub.h"


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
unsigned long SGXDBI_INIT_STACK;

extern void sgxdbi_to_dynamorio_stub(ulong new_stack);

int sgxdbi_enclave_entry(long argc, char** argv, char** envp)
{
    sgx_mm_init();

    ulong new_stack_base;   // the start address of new stack
    ulong *pStack, *pt;
    char *argvs;
    int  nPtr;      // The number of pointers putting on the new stack.

    /* reserve space for putting argc, & NULL-pointers & axuv */
    nPtr = argc + 3 + 60;

    /* Count the number of env variables */
    for (pt = (ulong*)envp; *pt != 0/*NULL*/; pt++, nPtr++);

    /* create a local stack */
    asm volatile ("mov %%rsp, %0": "=rm" (new_stack_base));
    new_stack_base &= ~(0xf);   // aligned to 16 bytes boundary
    new_stack_base -= 256;      // space for arguments. fixing-me to defend against buffer-ovfl
    argvs = (char*)new_stack_base;
    new_stack_base -= nPtr * sizeof(ulong);
    new_stack_base &= ~(0xf);   // aligned to 16 bytes boundary


    /* fill the new stack as it is prepared by the kernel's ELF loader */
    pStack = (ulong*)new_stack_base;
    *pStack++ = argc;

    //copy argv[]; only 256 bytes available, fixing-me to defend against buffer-ovfl
    char *s, *d;
    *pStack = (ulong)argvs;
    for (pt = (ulong*)argv; *pt != 0/*NULL*/; pt++) {
        //copy an argv
        d = *(char**)pStack;
        s = *(char**)pt;
        while (*s != 0) *d++ = *s++;
        *d = 0;

        d++, pStack++;
        *pStack = (ulong)d;
    }
    *pStack++ = 0/*NULL*/;

    //copy envp[]
    for (pt = (ulong*)envp; *pt != 0/*NULL*/; pt++) *pStack++ = *pt;
    *pStack++ = 0/*NULL*/;
    pt++;

    //copy auxv[]
    Elf64_auxv_t *auxv_n = (Elf64_auxv_t*)pStack;
    Elf64_auxv_t *auxv_o = (Elf64_auxv_t*)pt;
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


    int ret;
    /* switch to the new stack */
    // sgxdbi_to_dynamorio_stub(new_stack_base);
    asm volatile (
        "\tmov  %1, %%rdi\n"
        "\tcall *%2\n"
        "\tmov  %%eax, %0"
        :"=rm"(ret) : "rm"(new_stack_base), "rm"(sgxdbi_to_dynamorio_stub)
    );

    sgx_mm_exit();

    return ret;
}

#include <assert.h>
int ecall_thread_entry(void *tls_helper_table, size_t size)
{
    long ret = 0;

    assert(NULL != tls_helper_table);
    assert(sizeof(sgx_dbi_tls_helper_t) == size);

    sgx_thread_stub((sgx_dbi_tls_helper_t *)tls_helper_table);

    assert(false && "Not reached!");

    return ret;
}