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

//unsigned long global_sp;
//void dynamorio_enclave_entry(unsigned long execve_sp)
void dyn_enclave_entry(int argc, char* argv[], char*envp[])
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

    return;
}

