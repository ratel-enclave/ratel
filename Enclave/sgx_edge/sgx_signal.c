#include "sgx_signal.h"
#include "ucontext.h"
#include "os_public.h"

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

/* GPR context for recovering machine state from signal handling */
struct simu_pt_regs
{
    unsigned long r8;
    unsigned long r9;
    unsigned long r10;
    unsigned long r11;
    unsigned long r12;
    unsigned long r13;
    unsigned long r14;
    unsigned long r15;

    unsigned long rdi;
    unsigned long rsi;
    unsigned long rbp;
    unsigned long rbx;
    unsigned long rdx;
    unsigned long rax;
    unsigned long rcx;

    unsigned long eflags;
    unsigned long rsp;
    unsigned long rip;
};

/* simulate syscall sigreturn */
void ocall_sigreturn_simulation(long prt)
{
    struct simu_pt_regs regs;
    ucontext_t *thisUCP;
    sigcontext_t *sc;

    /* 1. retrive sigcontext */
    thisUCP = (ucontext_t *)prt;
    // ASSERT(thisUCP != NULL);
    sc = SIGCXT_FROM_UCXT(thisUCP);
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
    __asm__ volatile("gs\n\t"
                     "mov %[RIP], 0\n\t"
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
                     "gs\n\t"
                     "jmp *0\n\t" // jmp *gs:[0]
                     :
                     : [RIP] "r"(regs.rip), [REG] "r"(&regs)
                     :);

    ASSERT_NOT_REACHED();
}