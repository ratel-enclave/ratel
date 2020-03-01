/* **********************************************************
 * Copyright (c) 2018-2020 Ratel Authors.  All rights reserved.
 * **********************************************************/

/*
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * * Redistributions of source code must retain the above copyright notice,
 *   this list of conditions and the following disclaimer.
 *
 * * Redistributions in binary form must reproduce the above copyright notice,
 *   this list of conditions and the following disclaimer in the documentation
 *   and/or other materials provided with the distribution.
 *
 * * Neither the name of the copyright holder nor the names of its contributors may be
 *   used to endorse or promote products derived from this software without
 *   specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL VMWARE, INC. OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH
 * DAMAGE.
 */

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
long ocall_sigreturn_simulation(long prt);

#endif //_SGX_EDGE_SIGNAL_H__