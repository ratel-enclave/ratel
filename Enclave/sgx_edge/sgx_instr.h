#ifndef _SGX_EDGE_INSTR_H__
#define _SGX_EDGE_INSTR_H__

#include "sgx_defines.h"

/* All sensitive machine instructions
*/
void sgx_instr_cpuid(int res[4], int eax, int ecx);

void sgx_instr_rdtsc(uint64 *res);

long sgx_instr_syscall_dr_generic(long sysnum, long num_args,
                                  long arg1, long arg2, long arg3,
                                  long arg4, long arg5, long arg6);

long sgx_instr_syscall_dr_individual(long arg1, long arg2, long arg3,
                                     long arg4, long arg5, long arg6);

long sgx_instr_syscall_codecache(long sysnum, long arg1, long arg2, long arg3,
                                 long arg4, long arg5, long arg6);
#endif // _SGX_EDGE_INSTR_H__