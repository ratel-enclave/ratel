#ifndef DYNAMORIO_T_H__
#define DYNAMORIO_T_H__

#include <stdint.h>
#include <wchar.h>
#include <stddef.h>
#include "sgx_edger8r.h" /* for sgx_ocall etc. */


#include <stdlib.h> /* for size_t */

#define SGX_CAST(type, item) ((type)(item))

#ifdef __cplusplus
extern "C" {
#endif


int sgxdbi_enclave_entry(long int argc, char** p_argv, char** p_env);

sgx_status_t SGX_CDECL ocall_print_str(const char* str);
sgx_status_t SGX_CDECL ocall_print_syscallname(long int sysno);
sgx_status_t SGX_CDECL ocall_cpuid_ToNN(void* T, int l, int eax, int ecx);
sgx_status_t SGX_CDECL ocall_rdtsc_To(void* T, int l);
sgx_status_t SGX_CDECL ocall_syscall_0(long int* retval, long int sysno);
sgx_status_t SGX_CDECL ocall_syscall_1_S(long int* retval, long int sysno, char* S);
sgx_status_t SGX_CDECL ocall_syscall_1_N(long int* retval, long int sysno, long int N1);
sgx_status_t SGX_CDECL ocall_syscall_1_Ti(long int* retval, long int sysno, void* T, int l);
sgx_status_t SGX_CDECL ocall_syscall_1_To(long int* retval, long int sysno, void* T, int l);
sgx_status_t SGX_CDECL ocall_syscall_2_NN(long int* retval, long int sysno, long int N1, long int N2);
sgx_status_t SGX_CDECL ocall_syscall_2_NTi(long int* retval, long int sysno, long int N, void* T, int l);
sgx_status_t SGX_CDECL ocall_syscall_2_NTo(long int* retval, long int sysno, long int N, void* T, int l);
sgx_status_t SGX_CDECL ocall_syscall_2_SN(long int* retval, long int sysno, const char* S, long int N1);
sgx_status_t SGX_CDECL ocall_syscall_2_STi(long int* retval, long int sysno, const char* S, void* T, int l);
sgx_status_t SGX_CDECL ocall_syscall_2_STo(long int* retval, long int sysno, const char* S, void* T, int l);
sgx_status_t SGX_CDECL ocall_syscall_2_PoN(long int* retval, long int sysno, void* T, int l);
sgx_status_t SGX_CDECL ocall_syscall_2_VoN(long int* retval, long int sysno, void* T, int l);
sgx_status_t SGX_CDECL ocall_syscall_2_ToN(long int* retval, long int sysno, void* T, int l, long int N);
sgx_status_t SGX_CDECL ocall_syscall_3_NNN(long int* retval, long int sysno, long int N1, long int N2, long int N3);
sgx_status_t SGX_CDECL ocall_syscall_3_NNVio(long int* retval, long int sysno, long int N1, long int N2, void* T, long int l);
sgx_status_t SGX_CDECL ocall_syscall_3_SNN(long int* retval, long int sysno, const char* S, long int N1, long int N2);
sgx_status_t SGX_CDECL ocall_syscall_3_SPoN(long int* retval, long int sysno, const char* S, void* P, long int N);
sgx_status_t SGX_CDECL ocall_syscall_3_NPoN(long int* retval, long int sysno, long int N1, void* T, long int N2);
sgx_status_t SGX_CDECL ocall_syscall_3_NPiN(long int* retval, long int sysno, long int N1, void* T, long int N2);
sgx_status_t SGX_CDECL ocall_syscall_3_NToN(long int* retval, long int sysno, long int N1, void* T, long int dumb, long int N2);
sgx_status_t SGX_CDECL ocall_syscall_3_NToPo(long int* retval, long int sysno, long int N1, void* T, long int dumb, int* N2);
sgx_status_t SGX_CDECL ocall_syscall_3_NTiN(long int* retval, long int sysno, long int N1, void* T, long int dumb, long int N2);
sgx_status_t SGX_CDECL ocall_syscall_3_ToNN(long int* retval, long int sysno, void* T, long int dumb, long int N1, long int N2);
sgx_status_t SGX_CDECL ocall_syscall_3_NTiTo(long int* retval, long int sysno, long int N1, void* T1, long int dumb1, void* T2, long int dumb2);
sgx_status_t SGX_CDECL ocall_syscall_3_NNTi(long int* retval, long int sysno, long int N1, long int N2, void* T1, long int dumb1);
sgx_status_t SGX_CDECL ocall_syscall_3_NNTo(long int* retval, long int sysno, long int N1, long int N2, void* T1, long int dumb1);
sgx_status_t SGX_CDECL ocall_syscall_4_NNNN(long int* retval, long int sysno, long int N1, long int N2, long int N3, long int N4);
sgx_status_t SGX_CDECL ocall_syscall_4_NToNN(long int* retval, long int sysno, long int N1, void* T, long int dumb, long int N2, long int N3);
sgx_status_t SGX_CDECL ocall_syscall_4_NTiToN(long int* retval, long int sysno, long int N1, void* Ti, long int l1, void* To, long int l2, long int N2);
sgx_status_t SGX_CDECL ocall_syscall_5_NNNNN(long int* retval, long int sysno, long int N1, long int N2, long int N3, long int N4, long int N5);
sgx_status_t SGX_CDECL ocall_syscall_5_NNNVioN(long int* retval, long int sysno, long int N1, long int N2, long int N3, void* V1, long int N5);
sgx_status_t SGX_CDECL ocall_syscall_5_NNNVioPio(long int* retval, long int sysno, long int N1, long int N2, long int N3, void* V1, int* N5);
sgx_status_t SGX_CDECL ocall_syscall_6_NNNNNN(long int* retval, long int sysno, long int N1, long int N2, long int N3, long int N4, long int N5, long int N6);
sgx_status_t SGX_CDECL ocall_syscall_6_PoNNTiPoN(long int* retval, long int sysno, int* V1, long int N1, long int N2, void* T, long int l, int* V2, long int N3);
sgx_status_t SGX_CDECL ocall_syscall_6_NVoNNToN(long int* retval, long int sysno, long int N1, void* V1, long int N2, long int N3, void* T1, int N4);
sgx_status_t SGX_CDECL ocall_syscall_6_NVoNNToPo(long int* retval, long int sysno, long int N1, void* V1, long int N2, long int N3, void* T1, int* N4);
sgx_status_t SGX_CDECL sgxapp_reg_sighandler(int signum);
sgx_status_t SGX_CDECL sgx_oc_cpuidex(int cpuinfo[4], int leaf, int subleaf);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif
