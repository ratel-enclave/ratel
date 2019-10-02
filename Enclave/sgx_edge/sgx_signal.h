#ifndef _SGX_EDGE_SIGNAL_H__
#define _SGX_EDGE_SIGNAL_H__

#include "sgx_defines.h"

/* GPR context for recovering machine state from signal handling */
typedef struct _simu_pt_regs
{
    ulong r8;
    ulong r9;
    ulong r10;
    ulong r11;
    ulong r12;
    ulong r13;
    ulong r14;
    ulong r15;

    ulong rdi;
    ulong rsi;
    ulong rbp;
    ulong rbx;
    ulong rdx;
    ulong rax;
    ulong rcx;

    ulong eflags;
    ulong rsp;
    ulong rip;
} simu_pt_regs;

typedef struct _simu_sigcontext_t
{
    ulong r8;
    ulong r9;
    ulong r10;
    ulong r11;
    ulong r12;
    ulong r13;
    ulong r14;
    ulong r15;
    ulong rdi;
    ulong rsi;
    ulong rbp;
    ulong rbx;
    ulong rdx;
    ulong rax;
    ulong rcx;
    ulong rsp;
    ulong rip;
    ulong eflags; /* RFLAGS */
    ushort cs;
    ushort gs;
    ushort fs;
    ushort __pad0;
    ulong err;
    ulong trapno;
    ulong oldmask;
    ulong cr2;
    ulong *fpstate; /* zero when no FPU context */
    ulong reserved1[8];
} simu_sigcontext_t;

typedef struct _simu_ucontext_t
{
    ulong uc_flags;
    struct _simu_ucontext_t *uc_link;
    char uc_stack[24];
    simu_sigcontext_t uc_mcontext;
    char uc_sigmask[128];
    char __fpregs_mem[512];
} simu_ucontext_t;

long ocall_sigaltstack(long ss_ptr, long oldss_ptr);

long ocall_rt_sigprocmask(long how, long set_ptr, long oldset_ptr, long _r10);

long ocall_rt_sigaction(long signum, long act_ptr, long oldact_ptr, long _r10);

/* simulate sigreturn */
void ocall_sigreturn_simulation(long prt);

#endif //_SGX_EDGE_SIGNAL_H__