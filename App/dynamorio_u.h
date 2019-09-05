#ifndef DYNAMORIO_U_H__
#define DYNAMORIO_U_H__

#include <stdint.h>
#include <wchar.h>
#include <stddef.h>
#include <string.h>
#include "sgx_edger8r.h" /* for sgx_satus_t etc. */


#include <stdlib.h> /* for size_t */

#define SGX_CAST(type, item) ((type)(item))

#ifdef __cplusplus
extern "C" {
#endif

void SGX_UBRIDGE(SGX_NOCONVENTION, ocall_print_str, (const char* str));
void SGX_UBRIDGE(SGX_NOCONVENTION, ocall_print_syscallname, (long int sysno));
void SGX_UBRIDGE(SGX_NOCONVENTION, ocall_cpuid_ToNN, (void* T, int l, int eax, int ecx));
void SGX_UBRIDGE(SGX_NOCONVENTION, ocall_rdtsc_To, (void* T, int l));
long int SGX_UBRIDGE(SGX_NOCONVENTION, ocall_syscall_0, (long int sysno));
long int SGX_UBRIDGE(SGX_NOCONVENTION, ocall_syscall_1_S, (long int sysno, char* S));
long int SGX_UBRIDGE(SGX_NOCONVENTION, ocall_syscall_1_N, (long int sysno, long int N1));
long int SGX_UBRIDGE(SGX_NOCONVENTION, ocall_syscall_1_Ti, (long int sysno, void* T, int l));
long int SGX_UBRIDGE(SGX_NOCONVENTION, ocall_syscall_1_To, (long int sysno, void* T, int l));
long int SGX_UBRIDGE(SGX_NOCONVENTION, ocall_syscall_2_NN, (long int sysno, long int N1, long int N2));
long int SGX_UBRIDGE(SGX_NOCONVENTION, ocall_syscall_2_NTi, (long int sysno, long int N, void* T, int l));
long int SGX_UBRIDGE(SGX_NOCONVENTION, ocall_syscall_2_NTo, (long int sysno, long int N, void* T, int l));
long int SGX_UBRIDGE(SGX_NOCONVENTION, ocall_syscall_2_SN, (long int sysno, const char* S, long int N1));
long int SGX_UBRIDGE(SGX_NOCONVENTION, ocall_syscall_2_STi, (long int sysno, const char* S, void* T, int l));
long int SGX_UBRIDGE(SGX_NOCONVENTION, ocall_syscall_2_STo, (long int sysno, const char* S, void* T, int l));
long int SGX_UBRIDGE(SGX_NOCONVENTION, ocall_syscall_2_PoN, (long int sysno, void* T, int l));
long int SGX_UBRIDGE(SGX_NOCONVENTION, ocall_syscall_2_VoN, (long int sysno, void* T, int l));
long int SGX_UBRIDGE(SGX_NOCONVENTION, ocall_syscall_2_ToN, (long int sysno, void* T, int l, long int N));
long int SGX_UBRIDGE(SGX_NOCONVENTION, ocall_syscall_3_NNN, (long int sysno, long int N1, long int N2, long int N3));
long int SGX_UBRIDGE(SGX_NOCONVENTION, ocall_syscall_3_NNVio, (long int sysno, long int N1, long int N2, void* T, long int l));
long int SGX_UBRIDGE(SGX_NOCONVENTION, ocall_syscall_3_SNN, (long int sysno, const char* S, long int N1, long int N2));
long int SGX_UBRIDGE(SGX_NOCONVENTION, ocall_syscall_3_SPoN, (long int sysno, const char* S, void* P, long int N));
long int SGX_UBRIDGE(SGX_NOCONVENTION, ocall_syscall_3_NPoN, (long int sysno, long int N1, void* T, long int N2));
long int SGX_UBRIDGE(SGX_NOCONVENTION, ocall_syscall_3_NPiN, (long int sysno, long int N1, void* T, long int N2));
long int SGX_UBRIDGE(SGX_NOCONVENTION, ocall_syscall_3_NToN, (long int sysno, long int N1, void* T, long int dumb, long int N2));
long int SGX_UBRIDGE(SGX_NOCONVENTION, ocall_syscall_3_NToPo, (long int sysno, long int N1, void* T, long int dumb, int* N2));
long int SGX_UBRIDGE(SGX_NOCONVENTION, ocall_syscall_3_NTiN, (long int sysno, long int N1, void* T, long int dumb, long int N2));
long int SGX_UBRIDGE(SGX_NOCONVENTION, ocall_syscall_3_ToNN, (long int sysno, void* T, long int dumb, long int N1, long int N2));
long int SGX_UBRIDGE(SGX_NOCONVENTION, ocall_syscall_3_NTiTo, (long int sysno, long int N1, void* T1, long int dumb1, void* T2, long int dumb2));
long int SGX_UBRIDGE(SGX_NOCONVENTION, ocall_syscall_3_NNTi, (long int sysno, long int N1, long int N2, void* T1, long int dumb1));
long int SGX_UBRIDGE(SGX_NOCONVENTION, ocall_syscall_3_NNTo, (long int sysno, long int N1, long int N2, void* T1, long int dumb1));
long int SGX_UBRIDGE(SGX_NOCONVENTION, ocall_syscall_4_NNNN, (long int sysno, long int N1, long int N2, long int N3, long int N4));
long int SGX_UBRIDGE(SGX_NOCONVENTION, ocall_syscall_4_NToNN, (long int sysno, long int N1, void* T, long int dumb, long int N2, long int N3));
long int SGX_UBRIDGE(SGX_NOCONVENTION, ocall_syscall_4_NTiToN, (long int sysno, long int N1, void* Ti, long int l1, void* To, long int l2, long int N2));
long int SGX_UBRIDGE(SGX_NOCONVENTION, ocall_syscall_5_NNNNN, (long int sysno, long int N1, long int N2, long int N3, long int N4, long int N5));
long int SGX_UBRIDGE(SGX_NOCONVENTION, ocall_syscall_5_NNNVioN, (long int sysno, long int N1, long int N2, long int N3, void* V1, long int N5));
long int SGX_UBRIDGE(SGX_NOCONVENTION, ocall_syscall_5_NNNVioPio, (long int sysno, long int N1, long int N2, long int N3, void* V1, int* N5));
long int SGX_UBRIDGE(SGX_NOCONVENTION, ocall_syscall_6_NNNNNN, (long int sysno, long int N1, long int N2, long int N3, long int N4, long int N5, long int N6));
long int SGX_UBRIDGE(SGX_NOCONVENTION, ocall_syscall_6_PoNNTiPoN, (long int sysno, int* V1, long int N1, long int N2, void* T, long int l, int* V2, long int N3));
long int SGX_UBRIDGE(SGX_NOCONVENTION, ocall_syscall_6_NVoNNToN, (long int sysno, long int N1, void* V1, long int N2, long int N3, void* T1, int N4));
long int SGX_UBRIDGE(SGX_NOCONVENTION, ocall_syscall_6_NVoNNToPo, (long int sysno, long int N1, void* V1, long int N2, long int N3, void* T1, int* N4));
void SGX_UBRIDGE(SGX_NOCONVENTION, sgxapp_reg_sighandler, (int signum));
void SGX_UBRIDGE(SGX_CDECL, sgx_oc_cpuidex, (int cpuinfo[4], int leaf, int subleaf));

sgx_status_t sgxdbi_enclave_entry(sgx_enclave_id_t eid, int* retval, long int argc, char** p_argv, char** p_env);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif
