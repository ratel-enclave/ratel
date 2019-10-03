#include <string.h>

#include "struct_size.h"
#include "sgx_signal.h"


/* fix-me: set a flag to indirect this syscall execute successfully,
   and allow master_signal_handler checks this flag. */
long ocall_sigaltstack(long ss_ptr, long oldss_ptr)
{
    return 0;
}

long ocall_rt_sigprocmask(long how, long set_ptr, long oldset_ptr, long _r10)
{
    return 0;
}

/* Keep the data of returned back by sigaction syscall for simulating kernel activity */
typedef struct _sigaction_data_keepper_t
{
    unsigned char cnt[len_kernel_sigaction];
} sigaction_data_keepper_t;
#define SA_KEEPPER_SIZE 65

static sigaction_data_keepper_t sigaction_data[SA_KEEPPER_SIZE];

typedef int (*sgx_exception_handler_t)(void *sgx_info);
extern void *sgx_register_exception_handler(int is_first_handler, sgx_exception_handler_t h);
extern int master_signal_handler(void *sgx_info);
extern void sgxapp_reg_sighandler(int signum);

long ocall_rt_sigaction(long signum, long act_ptr, long oldact_ptr, long _r10)
{
    static int dynamoRIO_registered_master_handler = 0; // false
    sigaction_data_keepper_t *newact, *oldact;

    if (dynamoRIO_registered_master_handler == 0)
    {
        dynamoRIO_registered_master_handler = 1; // true
        sgx_register_exception_handler(0, (sgx_exception_handler_t)master_signal_handler);
    }
    sgxapp_reg_sighandler(signum);

    /* simulate the kernel to set old_act */
    newact = (sigaction_data_keepper_t *)act_ptr;
    oldact = (sigaction_data_keepper_t *)oldact_ptr;

    if (oldact != SGX_NULL)
        memcpy(oldact, &sigaction_data[signum], sizeof(sigaction_data_keepper_t));
    if (newact != SGX_NULL)
        memcpy(&sigaction_data[signum], newact, sizeof(sigaction_data_keepper_t));

    // returns 0 on success
    return 0;
}

static long sc_ip;
/* simulate syscall sigreturn */
long ocall_sigreturn_simulation(long prt)
{
    simu_ucontext_t *thisUCP;
    simu_sigcontext_t *sc;
    simu_pt_regs regs;

    /* 1. retrive sigcontext */
    thisUCP = (simu_ucontext_t *)prt;
    // ASSERT(thisUCP != SGX_NULL);
    sc = &thisUCP->uc_mcontext;
    regs.r8 = sc->r8;
    regs.r9 = sc->r9;
    regs.r10 = sc->r10;
    regs.r11 = sc->r11;
    regs.r12 = sc->r12;
    regs.r13 = sc->r13;
    regs.r14 = sc->r14;
    regs.r15 = sc->r15;

    regs.rdi = sc->rdi;
    regs.rsi = sc->rsi;
    regs.rbp = sc->rbp;
    regs.rbx = sc->rbx;
    regs.rdx = sc->rdx;
    regs.rax = sc->rax;
    regs.rcx = sc->rcx;

    regs.eflags = sc->eflags;
    regs.rsp = sc->rsp;
    regs.rip = sc->rip;

    /* return back by modifying registers */
    __asm__ volatile( // mov %[RIP], gs:[0]
        "mov %[RIP], %[SC_PC]\n\t"
        "mov %[REG], %%rsp\n\t"

        "pop %%r8\n\t"
        "pop %%r9\n\t"
        "pop %%r10\n\t"
        "pop %%r11\n\t"
        "pop %%r12\n\t"
        "pop %%r13\n\t"
        "pop %%r14\n\t"
        "pop %%r15\n\t"

        "pop %%rdi\n\t"
        "pop %%rsi\n\t"
        "pop %%rbp\n\t"
        "pop %%rbx\n\t"
        "pop %%rdx\n\t"
        "pop %%rax\n\t"
        "pop %%rcx\n\t"

        "add $8, %%rsp\n\t" // "popf\n\t"
        "pop %%rsp\n\t"
        //  jmp *gs:[0]
        "jmp *%[SC_PC]\n\t" //
        : [SC_PC] "=m" (sc_ip)
        : [RIP] "r"(regs.rip), [REG] "r"(&regs)
        );

    // ASSERT_NOT_REACHED();
    return 0;
}