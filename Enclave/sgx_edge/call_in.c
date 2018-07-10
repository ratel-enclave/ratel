#include "../dynamorio_t.h"
#include "asm_defines.asm"
//#include "arch_exports.h"


//extern void _start(void);
extern void _start(int argc, char* argv[], char *envp[]);
extern void unexpected_return(void);
extern void *dynamo_memcpy(void *dest, const void *src, size_t n);

/*void inner_overwrite_stack(void* sta, int stack_size)
{
    uint64_t *frame_addr = (uint64_t*)__builtin_frame_address(0);
    int offset = last_fp - frame_addr;

    if (offset!=0)  {
        printf("two stacks don't have the same size \n");
        abort();
    }

    memcpy(last_fp, sta, stack_size*WORD_SIZE);
    void *ret_addr = __builtin_return_address(0);
    if (ret_addr!=parent_ret_p) {
        printf("overwritten stack error\n");
        abort();
    }
}*/

typedef struct
{
    uint64_t a_type;      /* Entry type */
    union
    {
        uint64_t a_val;       /* Integer value */
        /* We use to have pointer elements added here.  We cannot do that,
         *            *      though, since it does not work when using 32-bit definitions
         *                       *           on 64-bit platforms and vice versa.  */
    } a_un;
} Elf64_auxv_t;

#define AT_NULL     0       /* End of vector */

typedef void (*fp_entry) (int argc, char* argv[], char* envp[]);

void call_libstart(int argc, char**argv, char** envp, void *libstart)
{
#define MAX_ENVP    160
    char *new_stack[MAX_ENVP] = {0};
    char **pstack = new_stack;
    char *oldsp = NULL;
    char **t;
    int n;

    //Count the number of env variables
    for (t = envp, n = 0; *t != NULL; t++, n++);

    //create a local stack
    n += argc + 3;
    /*assert(n < MAX_ENVP);*/

    //fill the stack
    *(long*)pstack = argc;
    pstack++;

    //copy argv[]
    for (t = argv, n = 0; *t != NULL && n < MAX_ENVP; t++, pstack++)
        *pstack = *t;
    *pstack++ = NULL;
    /*assert(new_stack[1] == argv[0]);*/

    //copy envp[]
    for (t = envp, n = 0; *t != NULL && n < MAX_ENVP; t++, pstack++)
        *pstack = *t;
    *pstack++ = NULL;
    /*assert(new_stack[argc+2] == envp[0]);*/

    //copy auxv[]
    Elf64_auxv_t *auxv_n = (Elf64_auxv_t*)pstack;
    Elf64_auxv_t *auxv_o = (Elf64_auxv_t*)(t+1);
    do {
        *auxv_n = *auxv_o;
        auxv_n++;
        auxv_o++;
    } while (auxv_o->a_type != AT_NULL);

    /*asm volatile ("\n\t"*/
    /*"push %0    \n\t"*/
    /*"push %1    \n\t"*/
    /*"push %2    \n\t"*/
    /*"xor %%rdi,%%rdi  \n\t"*/
    /*"jmp *%3   \n\t"*/
    /*::"rm"(envp), "rm"(argv), "rm"((long)argc), "rm"(libstart));*/

    asm volatile ("mov %%rsp, %0   \n\t"
            "mov %1, %%rsp   \n\t"
            /*"xor %%rdi,%%rdi  \n\t"*/
            "jmp *%2   \n\t"
            ::"rm"(oldsp), "rm"(new_stack), "rm"(libstart));

    //fix-me: restore the original stack to exit current process elegently.
}

//unsigned long global_sp;
//void dynamorio_enclave_entry(unsigned long execve_sp)
void dyn_enclave_entry(int argc, char***p_argv, char***p_envp)
{
    //unsigned long newsp, sz;
    //int argc;
    //char* argv[], char* envp[];
    //ocall_all_syscalls("This is a test\n");
    //restore the stack
    //asm volatile ("mov %%rsp, %0 \n\t"
    //        :"=rm"(global_sp)::);

    //sz = 0x2000 - (execve_sp & 0xfff) - sizeof(long);
    //newsp = global_sp - sz - 0x1000;
    //dynamo_memcpy((void*)newsp, (void*)execve_sp, sz);

    //restore the stack in the encalve
	//inner_overwrite_stack();

	//Jump to the entry of original dynamorio version, .i.e. _start
    //asm volatile ( "mov %1, %%rsp \n\t"
    //        "xor %%rdi, %%rdi \n\t"
    //        "jmp *%0 \n\t"
    //        ::"r"(_start),"rm"(newsp));
    //asm volatile (
    //        "jmp *%0 \n\t"
    //        ::"r"(_start),"rm"(newsp));
    //_start(argc, argv, envp);
    //unexpected_return();
    ocall_print_str("I am in dyn_enclave_entry.");

    call_libstart(argc, *p_argv, *p_envp, (void*)_start);

    return;
}

