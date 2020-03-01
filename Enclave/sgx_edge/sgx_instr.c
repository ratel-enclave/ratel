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

#include "../dynamorio_t.h"
#include "sgx_cpuid.h"

#include "call_out.h"
#include "sgx_instr.h"

void crash_me(void)
{
    __asm__ __volatile__("int3"); // ASSERT(false);
}

/* CPUID */
void sgx_instr_cpuid(int res[4], int eax, int ecx)
{
    // ocall_cpuid_ToNN(res, sizeof(int)*4, eax, ecx);
    sgx_cpuidex(res, eax, ecx);
}

/* RDTSC */
void sgx_instr_rdtsc(uint64 *res)
{
    ocall_rdtsc_To(res, sizeof(unsigned long long));
}

/* syscall from dynamorio, generic solution */
long sgx_instr_syscall_dr_generic(long sysnum, long num_args,
                                  long arg1, long arg2, long arg3,
                                  long arg4, long arg5, long arg6)
{
    switch (num_args)
    {
    case 0:
        return sgx_ocall_syscall_0(sysnum);

    case 1:
        return sgx_ocall_syscall_1(sysnum, arg1);

    case 2:
        return sgx_ocall_syscall_2(sysnum, arg1, arg2);

    case 3:
        return sgx_ocall_syscall_3(sysnum, arg1, arg2, arg3);

    case 4:
        return sgx_ocall_syscall_4(sysnum, arg1, arg2, arg3, arg4);

    case 5:
        return sgx_ocall_syscall_5(sysnum, arg1, arg2, arg3, arg4, arg5);

    case 6:
        return sgx_ocall_syscall_6(sysnum, arg1, arg2, arg3, arg4, arg5, arg6);

    default:
        crash_me();
        return -1;
    }
}

/* syscall from dynamorio, individual solution */
long sgx_instr_syscall_dr_individual(long arg1, long arg2, long arg3,
                                     long arg4, long arg5, long arg6)
{
    long sysno;

    /* gcc uses rcx for passing the forth parameter */
    asm volatile(
        "mov %%rax, %0\n\t"
        "mov %%r10, %1\n\t"
        : "=rm"(sysno), "=rm"(arg4));

    return sgx_ocall_syscall(sysno, arg1, arg2, arg3, arg4, arg5, arg6);
}

/* syscall from target application, i.e. code cache */
long sgx_instr_syscall_codecache(long sysno, long arg1, long arg2, long arg3,
                                 long arg4, long arg5, long arg6)
{
    return sgx_ocall_syscall(sysno, arg1, arg2, arg3, arg4, arg5, arg6);
}
