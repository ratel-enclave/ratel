#include "dynamorio_u.h"
#include <errno.h>

typedef struct ms_sgxdbi_enclave_entry_t {
	int ms_retval;
	long int ms_argc;
	char** ms_p_argv;
	char** ms_p_env;
} ms_sgxdbi_enclave_entry_t;

typedef struct ms_ocall_print_str_t {
	char* ms_str;
} ms_ocall_print_str_t;

typedef struct ms_ocall_print_syscallname_t {
	long int ms_sysno;
} ms_ocall_print_syscallname_t;

typedef struct ms_ocall_cpuid_ToNN_t {
	void* ms_T;
	int ms_l;
	int ms_eax;
	int ms_ecx;
} ms_ocall_cpuid_ToNN_t;

typedef struct ms_ocall_rdtsc_To_t {
	void* ms_T;
	int ms_l;
} ms_ocall_rdtsc_To_t;

typedef struct ms_ocall_syscall_0_t {
	long int ms_retval;
	long int ms_sysno;
} ms_ocall_syscall_0_t;

typedef struct ms_ocall_syscall_1_S_t {
	long int ms_retval;
	long int ms_sysno;
	char* ms_S;
} ms_ocall_syscall_1_S_t;

typedef struct ms_ocall_syscall_1_N_t {
	long int ms_retval;
	long int ms_sysno;
	long int ms_N1;
} ms_ocall_syscall_1_N_t;

typedef struct ms_ocall_syscall_1_Ti_t {
	long int ms_retval;
	long int ms_sysno;
	void* ms_T;
	int ms_l;
} ms_ocall_syscall_1_Ti_t;

typedef struct ms_ocall_syscall_1_To_t {
	long int ms_retval;
	long int ms_sysno;
	void* ms_T;
	int ms_l;
} ms_ocall_syscall_1_To_t;

typedef struct ms_ocall_syscall_2_NN_t {
	long int ms_retval;
	long int ms_sysno;
	long int ms_N1;
	long int ms_N2;
} ms_ocall_syscall_2_NN_t;

typedef struct ms_ocall_syscall_2_NTi_t {
	long int ms_retval;
	long int ms_sysno;
	long int ms_N;
	void* ms_T;
	int ms_l;
} ms_ocall_syscall_2_NTi_t;

typedef struct ms_ocall_syscall_2_NTo_t {
	long int ms_retval;
	long int ms_sysno;
	long int ms_N;
	void* ms_T;
	int ms_l;
} ms_ocall_syscall_2_NTo_t;

typedef struct ms_ocall_syscall_2_SN_t {
	long int ms_retval;
	long int ms_sysno;
	char* ms_S;
	long int ms_N1;
} ms_ocall_syscall_2_SN_t;

typedef struct ms_ocall_syscall_2_STi_t {
	long int ms_retval;
	long int ms_sysno;
	char* ms_S;
	void* ms_T;
	int ms_l;
} ms_ocall_syscall_2_STi_t;

typedef struct ms_ocall_syscall_2_STo_t {
	long int ms_retval;
	long int ms_sysno;
	char* ms_S;
	void* ms_T;
	int ms_l;
} ms_ocall_syscall_2_STo_t;

typedef struct ms_ocall_syscall_2_PoN_t {
	long int ms_retval;
	long int ms_sysno;
	void* ms_T;
	int ms_l;
} ms_ocall_syscall_2_PoN_t;

typedef struct ms_ocall_syscall_2_VoN_t {
	long int ms_retval;
	long int ms_sysno;
	void* ms_T;
	int ms_l;
} ms_ocall_syscall_2_VoN_t;

typedef struct ms_ocall_syscall_2_ToN_t {
	long int ms_retval;
	long int ms_sysno;
	void* ms_T;
	int ms_l;
	long int ms_N;
} ms_ocall_syscall_2_ToN_t;

typedef struct ms_ocall_syscall_3_NNN_t {
	long int ms_retval;
	long int ms_sysno;
	long int ms_N1;
	long int ms_N2;
	long int ms_N3;
} ms_ocall_syscall_3_NNN_t;

typedef struct ms_ocall_syscall_3_NNVio_t {
	long int ms_retval;
	long int ms_sysno;
	long int ms_N1;
	long int ms_N2;
	void* ms_T;
	long int ms_l;
} ms_ocall_syscall_3_NNVio_t;

typedef struct ms_ocall_syscall_3_SNN_t {
	long int ms_retval;
	long int ms_sysno;
	char* ms_S;
	long int ms_N1;
	long int ms_N2;
} ms_ocall_syscall_3_SNN_t;

typedef struct ms_ocall_syscall_3_SPoN_t {
	long int ms_retval;
	long int ms_sysno;
	char* ms_S;
	void* ms_P;
	long int ms_N;
} ms_ocall_syscall_3_SPoN_t;

typedef struct ms_ocall_syscall_3_NPoN_t {
	long int ms_retval;
	long int ms_sysno;
	long int ms_N1;
	void* ms_T;
	long int ms_N2;
} ms_ocall_syscall_3_NPoN_t;

typedef struct ms_ocall_syscall_3_NPiN_t {
	long int ms_retval;
	long int ms_sysno;
	long int ms_N1;
	void* ms_T;
	long int ms_N2;
} ms_ocall_syscall_3_NPiN_t;

typedef struct ms_ocall_syscall_3_NToN_t {
	long int ms_retval;
	long int ms_sysno;
	long int ms_N1;
	void* ms_T;
	long int ms_dumb;
	long int ms_N2;
} ms_ocall_syscall_3_NToN_t;

typedef struct ms_ocall_syscall_3_NToPo_t {
	long int ms_retval;
	long int ms_sysno;
	long int ms_N1;
	void* ms_T;
	long int ms_dumb;
	int* ms_N2;
} ms_ocall_syscall_3_NToPo_t;

typedef struct ms_ocall_syscall_3_NTiN_t {
	long int ms_retval;
	long int ms_sysno;
	long int ms_N1;
	void* ms_T;
	long int ms_dumb;
	long int ms_N2;
} ms_ocall_syscall_3_NTiN_t;

typedef struct ms_ocall_syscall_3_ToNN_t {
	long int ms_retval;
	long int ms_sysno;
	void* ms_T;
	long int ms_dumb;
	long int ms_N1;
	long int ms_N2;
} ms_ocall_syscall_3_ToNN_t;

typedef struct ms_ocall_syscall_3_NTiTo_t {
	long int ms_retval;
	long int ms_sysno;
	long int ms_N1;
	void* ms_T1;
	long int ms_dumb1;
	void* ms_T2;
	long int ms_dumb2;
} ms_ocall_syscall_3_NTiTo_t;

typedef struct ms_ocall_syscall_3_NNTi_t {
	long int ms_retval;
	long int ms_sysno;
	long int ms_N1;
	long int ms_N2;
	void* ms_T1;
	long int ms_dumb1;
} ms_ocall_syscall_3_NNTi_t;

typedef struct ms_ocall_syscall_3_NNTo_t {
	long int ms_retval;
	long int ms_sysno;
	long int ms_N1;
	long int ms_N2;
	void* ms_T1;
	long int ms_dumb1;
} ms_ocall_syscall_3_NNTo_t;

typedef struct ms_ocall_syscall_4_NNNN_t {
	long int ms_retval;
	long int ms_sysno;
	long int ms_N1;
	long int ms_N2;
	long int ms_N3;
	long int ms_N4;
} ms_ocall_syscall_4_NNNN_t;

typedef struct ms_ocall_syscall_4_NToNN_t {
	long int ms_retval;
	long int ms_sysno;
	long int ms_N1;
	void* ms_T;
	long int ms_dumb;
	long int ms_N2;
	long int ms_N3;
} ms_ocall_syscall_4_NToNN_t;

typedef struct ms_ocall_syscall_4_NTiToN_t {
	long int ms_retval;
	long int ms_sysno;
	long int ms_N1;
	void* ms_Ti;
	long int ms_l1;
	void* ms_To;
	long int ms_l2;
	long int ms_N2;
} ms_ocall_syscall_4_NTiToN_t;

typedef struct ms_ocall_syscall_5_NNNNN_t {
	long int ms_retval;
	long int ms_sysno;
	long int ms_N1;
	long int ms_N2;
	long int ms_N3;
	long int ms_N4;
	long int ms_N5;
} ms_ocall_syscall_5_NNNNN_t;

typedef struct ms_ocall_syscall_5_NNNVioN_t {
	long int ms_retval;
	long int ms_sysno;
	long int ms_N1;
	long int ms_N2;
	long int ms_N3;
	void* ms_V1;
	long int ms_N5;
} ms_ocall_syscall_5_NNNVioN_t;

typedef struct ms_ocall_syscall_5_NNNVioPio_t {
	long int ms_retval;
	long int ms_sysno;
	long int ms_N1;
	long int ms_N2;
	long int ms_N3;
	void* ms_V1;
	int* ms_N5;
} ms_ocall_syscall_5_NNNVioPio_t;

typedef struct ms_ocall_syscall_6_NNNNNN_t {
	long int ms_retval;
	long int ms_sysno;
	long int ms_N1;
	long int ms_N2;
	long int ms_N3;
	long int ms_N4;
	long int ms_N5;
	long int ms_N6;
} ms_ocall_syscall_6_NNNNNN_t;

typedef struct ms_ocall_syscall_6_PoNNTiPoN_t {
	long int ms_retval;
	long int ms_sysno;
	int* ms_V1;
	long int ms_N1;
	long int ms_N2;
	void* ms_T;
	long int ms_l;
	int* ms_V2;
	long int ms_N3;
} ms_ocall_syscall_6_PoNNTiPoN_t;

typedef struct ms_ocall_syscall_6_NVoNNToN_t {
	long int ms_retval;
	long int ms_sysno;
	long int ms_N1;
	void* ms_V1;
	long int ms_N2;
	long int ms_N3;
	void* ms_T1;
	int ms_N4;
} ms_ocall_syscall_6_NVoNNToN_t;

typedef struct ms_ocall_syscall_6_NVoNNToPo_t {
	long int ms_retval;
	long int ms_sysno;
	long int ms_N1;
	void* ms_V1;
	long int ms_N2;
	long int ms_N3;
	void* ms_T1;
	int* ms_N4;
} ms_ocall_syscall_6_NVoNNToPo_t;

typedef struct ms_sgxapp_reg_sighandler_t {
	int ms_signum;
} ms_sgxapp_reg_sighandler_t;

typedef struct ms_sgx_oc_cpuidex_t {
	int* ms_cpuinfo;
	int ms_leaf;
	int ms_subleaf;
} ms_sgx_oc_cpuidex_t;

static sgx_status_t SGX_CDECL dynamorio_ocall_print_str(void* pms)
{
	ms_ocall_print_str_t* ms = SGX_CAST(ms_ocall_print_str_t*, pms);
	ocall_print_str((const char*)ms->ms_str);

	return SGX_SUCCESS;
}

static sgx_status_t SGX_CDECL dynamorio_ocall_print_syscallname(void* pms)
{
	ms_ocall_print_syscallname_t* ms = SGX_CAST(ms_ocall_print_syscallname_t*, pms);
	ocall_print_syscallname(ms->ms_sysno);

	return SGX_SUCCESS;
}

static sgx_status_t SGX_CDECL dynamorio_ocall_cpuid_ToNN(void* pms)
{
	ms_ocall_cpuid_ToNN_t* ms = SGX_CAST(ms_ocall_cpuid_ToNN_t*, pms);
	ocall_cpuid_ToNN(ms->ms_T, ms->ms_l, ms->ms_eax, ms->ms_ecx);

	return SGX_SUCCESS;
}

static sgx_status_t SGX_CDECL dynamorio_ocall_rdtsc_To(void* pms)
{
	ms_ocall_rdtsc_To_t* ms = SGX_CAST(ms_ocall_rdtsc_To_t*, pms);
	ocall_rdtsc_To(ms->ms_T, ms->ms_l);

	return SGX_SUCCESS;
}

static sgx_status_t SGX_CDECL dynamorio_ocall_syscall_0(void* pms)
{
	ms_ocall_syscall_0_t* ms = SGX_CAST(ms_ocall_syscall_0_t*, pms);
	ms->ms_retval = ocall_syscall_0(ms->ms_sysno);

	return SGX_SUCCESS;
}

static sgx_status_t SGX_CDECL dynamorio_ocall_syscall_1_S(void* pms)
{
	ms_ocall_syscall_1_S_t* ms = SGX_CAST(ms_ocall_syscall_1_S_t*, pms);
	ms->ms_retval = ocall_syscall_1_S(ms->ms_sysno, ms->ms_S);

	return SGX_SUCCESS;
}

static sgx_status_t SGX_CDECL dynamorio_ocall_syscall_1_N(void* pms)
{
	ms_ocall_syscall_1_N_t* ms = SGX_CAST(ms_ocall_syscall_1_N_t*, pms);
	ms->ms_retval = ocall_syscall_1_N(ms->ms_sysno, ms->ms_N1);

	return SGX_SUCCESS;
}

static sgx_status_t SGX_CDECL dynamorio_ocall_syscall_1_Ti(void* pms)
{
	ms_ocall_syscall_1_Ti_t* ms = SGX_CAST(ms_ocall_syscall_1_Ti_t*, pms);
	ms->ms_retval = ocall_syscall_1_Ti(ms->ms_sysno, ms->ms_T, ms->ms_l);

	return SGX_SUCCESS;
}

static sgx_status_t SGX_CDECL dynamorio_ocall_syscall_1_To(void* pms)
{
	ms_ocall_syscall_1_To_t* ms = SGX_CAST(ms_ocall_syscall_1_To_t*, pms);
	ms->ms_retval = ocall_syscall_1_To(ms->ms_sysno, ms->ms_T, ms->ms_l);

	return SGX_SUCCESS;
}

static sgx_status_t SGX_CDECL dynamorio_ocall_syscall_2_NN(void* pms)
{
	ms_ocall_syscall_2_NN_t* ms = SGX_CAST(ms_ocall_syscall_2_NN_t*, pms);
	ms->ms_retval = ocall_syscall_2_NN(ms->ms_sysno, ms->ms_N1, ms->ms_N2);

	return SGX_SUCCESS;
}

static sgx_status_t SGX_CDECL dynamorio_ocall_syscall_2_NTi(void* pms)
{
	ms_ocall_syscall_2_NTi_t* ms = SGX_CAST(ms_ocall_syscall_2_NTi_t*, pms);
	ms->ms_retval = ocall_syscall_2_NTi(ms->ms_sysno, ms->ms_N, ms->ms_T, ms->ms_l);

	return SGX_SUCCESS;
}

static sgx_status_t SGX_CDECL dynamorio_ocall_syscall_2_NTo(void* pms)
{
	ms_ocall_syscall_2_NTo_t* ms = SGX_CAST(ms_ocall_syscall_2_NTo_t*, pms);
	ms->ms_retval = ocall_syscall_2_NTo(ms->ms_sysno, ms->ms_N, ms->ms_T, ms->ms_l);

	return SGX_SUCCESS;
}

static sgx_status_t SGX_CDECL dynamorio_ocall_syscall_2_SN(void* pms)
{
	ms_ocall_syscall_2_SN_t* ms = SGX_CAST(ms_ocall_syscall_2_SN_t*, pms);
	ms->ms_retval = ocall_syscall_2_SN(ms->ms_sysno, (const char*)ms->ms_S, ms->ms_N1);

	return SGX_SUCCESS;
}

static sgx_status_t SGX_CDECL dynamorio_ocall_syscall_2_STi(void* pms)
{
	ms_ocall_syscall_2_STi_t* ms = SGX_CAST(ms_ocall_syscall_2_STi_t*, pms);
	ms->ms_retval = ocall_syscall_2_STi(ms->ms_sysno, (const char*)ms->ms_S, ms->ms_T, ms->ms_l);

	return SGX_SUCCESS;
}

static sgx_status_t SGX_CDECL dynamorio_ocall_syscall_2_STo(void* pms)
{
	ms_ocall_syscall_2_STo_t* ms = SGX_CAST(ms_ocall_syscall_2_STo_t*, pms);
	ms->ms_retval = ocall_syscall_2_STo(ms->ms_sysno, (const char*)ms->ms_S, ms->ms_T, ms->ms_l);

	return SGX_SUCCESS;
}

static sgx_status_t SGX_CDECL dynamorio_ocall_syscall_2_PoN(void* pms)
{
	ms_ocall_syscall_2_PoN_t* ms = SGX_CAST(ms_ocall_syscall_2_PoN_t*, pms);
	ms->ms_retval = ocall_syscall_2_PoN(ms->ms_sysno, ms->ms_T, ms->ms_l);

	return SGX_SUCCESS;
}

static sgx_status_t SGX_CDECL dynamorio_ocall_syscall_2_VoN(void* pms)
{
	ms_ocall_syscall_2_VoN_t* ms = SGX_CAST(ms_ocall_syscall_2_VoN_t*, pms);
	ms->ms_retval = ocall_syscall_2_VoN(ms->ms_sysno, ms->ms_T, ms->ms_l);

	return SGX_SUCCESS;
}

static sgx_status_t SGX_CDECL dynamorio_ocall_syscall_2_ToN(void* pms)
{
	ms_ocall_syscall_2_ToN_t* ms = SGX_CAST(ms_ocall_syscall_2_ToN_t*, pms);
	ms->ms_retval = ocall_syscall_2_ToN(ms->ms_sysno, ms->ms_T, ms->ms_l, ms->ms_N);

	return SGX_SUCCESS;
}

static sgx_status_t SGX_CDECL dynamorio_ocall_syscall_3_NNN(void* pms)
{
	ms_ocall_syscall_3_NNN_t* ms = SGX_CAST(ms_ocall_syscall_3_NNN_t*, pms);
	ms->ms_retval = ocall_syscall_3_NNN(ms->ms_sysno, ms->ms_N1, ms->ms_N2, ms->ms_N3);

	return SGX_SUCCESS;
}

static sgx_status_t SGX_CDECL dynamorio_ocall_syscall_3_NNVio(void* pms)
{
	ms_ocall_syscall_3_NNVio_t* ms = SGX_CAST(ms_ocall_syscall_3_NNVio_t*, pms);
	ms->ms_retval = ocall_syscall_3_NNVio(ms->ms_sysno, ms->ms_N1, ms->ms_N2, ms->ms_T, ms->ms_l);

	return SGX_SUCCESS;
}

static sgx_status_t SGX_CDECL dynamorio_ocall_syscall_3_SNN(void* pms)
{
	ms_ocall_syscall_3_SNN_t* ms = SGX_CAST(ms_ocall_syscall_3_SNN_t*, pms);
	ms->ms_retval = ocall_syscall_3_SNN(ms->ms_sysno, (const char*)ms->ms_S, ms->ms_N1, ms->ms_N2);

	return SGX_SUCCESS;
}

static sgx_status_t SGX_CDECL dynamorio_ocall_syscall_3_SPoN(void* pms)
{
	ms_ocall_syscall_3_SPoN_t* ms = SGX_CAST(ms_ocall_syscall_3_SPoN_t*, pms);
	ms->ms_retval = ocall_syscall_3_SPoN(ms->ms_sysno, (const char*)ms->ms_S, ms->ms_P, ms->ms_N);

	return SGX_SUCCESS;
}

static sgx_status_t SGX_CDECL dynamorio_ocall_syscall_3_NPoN(void* pms)
{
	ms_ocall_syscall_3_NPoN_t* ms = SGX_CAST(ms_ocall_syscall_3_NPoN_t*, pms);
	ms->ms_retval = ocall_syscall_3_NPoN(ms->ms_sysno, ms->ms_N1, ms->ms_T, ms->ms_N2);

	return SGX_SUCCESS;
}

static sgx_status_t SGX_CDECL dynamorio_ocall_syscall_3_NPiN(void* pms)
{
	ms_ocall_syscall_3_NPiN_t* ms = SGX_CAST(ms_ocall_syscall_3_NPiN_t*, pms);
	ms->ms_retval = ocall_syscall_3_NPiN(ms->ms_sysno, ms->ms_N1, ms->ms_T, ms->ms_N2);

	return SGX_SUCCESS;
}

static sgx_status_t SGX_CDECL dynamorio_ocall_syscall_3_NToN(void* pms)
{
	ms_ocall_syscall_3_NToN_t* ms = SGX_CAST(ms_ocall_syscall_3_NToN_t*, pms);
	ms->ms_retval = ocall_syscall_3_NToN(ms->ms_sysno, ms->ms_N1, ms->ms_T, ms->ms_dumb, ms->ms_N2);

	return SGX_SUCCESS;
}

static sgx_status_t SGX_CDECL dynamorio_ocall_syscall_3_NToPo(void* pms)
{
	ms_ocall_syscall_3_NToPo_t* ms = SGX_CAST(ms_ocall_syscall_3_NToPo_t*, pms);
	ms->ms_retval = ocall_syscall_3_NToPo(ms->ms_sysno, ms->ms_N1, ms->ms_T, ms->ms_dumb, ms->ms_N2);

	return SGX_SUCCESS;
}

static sgx_status_t SGX_CDECL dynamorio_ocall_syscall_3_NTiN(void* pms)
{
	ms_ocall_syscall_3_NTiN_t* ms = SGX_CAST(ms_ocall_syscall_3_NTiN_t*, pms);
	ms->ms_retval = ocall_syscall_3_NTiN(ms->ms_sysno, ms->ms_N1, ms->ms_T, ms->ms_dumb, ms->ms_N2);

	return SGX_SUCCESS;
}

static sgx_status_t SGX_CDECL dynamorio_ocall_syscall_3_ToNN(void* pms)
{
	ms_ocall_syscall_3_ToNN_t* ms = SGX_CAST(ms_ocall_syscall_3_ToNN_t*, pms);
	ms->ms_retval = ocall_syscall_3_ToNN(ms->ms_sysno, ms->ms_T, ms->ms_dumb, ms->ms_N1, ms->ms_N2);

	return SGX_SUCCESS;
}

static sgx_status_t SGX_CDECL dynamorio_ocall_syscall_3_NTiTo(void* pms)
{
	ms_ocall_syscall_3_NTiTo_t* ms = SGX_CAST(ms_ocall_syscall_3_NTiTo_t*, pms);
	ms->ms_retval = ocall_syscall_3_NTiTo(ms->ms_sysno, ms->ms_N1, ms->ms_T1, ms->ms_dumb1, ms->ms_T2, ms->ms_dumb2);

	return SGX_SUCCESS;
}

static sgx_status_t SGX_CDECL dynamorio_ocall_syscall_3_NNTi(void* pms)
{
	ms_ocall_syscall_3_NNTi_t* ms = SGX_CAST(ms_ocall_syscall_3_NNTi_t*, pms);
	ms->ms_retval = ocall_syscall_3_NNTi(ms->ms_sysno, ms->ms_N1, ms->ms_N2, ms->ms_T1, ms->ms_dumb1);

	return SGX_SUCCESS;
}

static sgx_status_t SGX_CDECL dynamorio_ocall_syscall_3_NNTo(void* pms)
{
	ms_ocall_syscall_3_NNTo_t* ms = SGX_CAST(ms_ocall_syscall_3_NNTo_t*, pms);
	ms->ms_retval = ocall_syscall_3_NNTo(ms->ms_sysno, ms->ms_N1, ms->ms_N2, ms->ms_T1, ms->ms_dumb1);

	return SGX_SUCCESS;
}

static sgx_status_t SGX_CDECL dynamorio_ocall_syscall_4_NNNN(void* pms)
{
	ms_ocall_syscall_4_NNNN_t* ms = SGX_CAST(ms_ocall_syscall_4_NNNN_t*, pms);
	ms->ms_retval = ocall_syscall_4_NNNN(ms->ms_sysno, ms->ms_N1, ms->ms_N2, ms->ms_N3, ms->ms_N4);

	return SGX_SUCCESS;
}

static sgx_status_t SGX_CDECL dynamorio_ocall_syscall_4_NToNN(void* pms)
{
	ms_ocall_syscall_4_NToNN_t* ms = SGX_CAST(ms_ocall_syscall_4_NToNN_t*, pms);
	ms->ms_retval = ocall_syscall_4_NToNN(ms->ms_sysno, ms->ms_N1, ms->ms_T, ms->ms_dumb, ms->ms_N2, ms->ms_N3);

	return SGX_SUCCESS;
}

static sgx_status_t SGX_CDECL dynamorio_ocall_syscall_4_NTiToN(void* pms)
{
	ms_ocall_syscall_4_NTiToN_t* ms = SGX_CAST(ms_ocall_syscall_4_NTiToN_t*, pms);
	ms->ms_retval = ocall_syscall_4_NTiToN(ms->ms_sysno, ms->ms_N1, ms->ms_Ti, ms->ms_l1, ms->ms_To, ms->ms_l2, ms->ms_N2);

	return SGX_SUCCESS;
}

static sgx_status_t SGX_CDECL dynamorio_ocall_syscall_5_NNNNN(void* pms)
{
	ms_ocall_syscall_5_NNNNN_t* ms = SGX_CAST(ms_ocall_syscall_5_NNNNN_t*, pms);
	ms->ms_retval = ocall_syscall_5_NNNNN(ms->ms_sysno, ms->ms_N1, ms->ms_N2, ms->ms_N3, ms->ms_N4, ms->ms_N5);

	return SGX_SUCCESS;
}

static sgx_status_t SGX_CDECL dynamorio_ocall_syscall_5_NNNVioN(void* pms)
{
	ms_ocall_syscall_5_NNNVioN_t* ms = SGX_CAST(ms_ocall_syscall_5_NNNVioN_t*, pms);
	ms->ms_retval = ocall_syscall_5_NNNVioN(ms->ms_sysno, ms->ms_N1, ms->ms_N2, ms->ms_N3, ms->ms_V1, ms->ms_N5);

	return SGX_SUCCESS;
}

static sgx_status_t SGX_CDECL dynamorio_ocall_syscall_5_NNNVioPio(void* pms)
{
	ms_ocall_syscall_5_NNNVioPio_t* ms = SGX_CAST(ms_ocall_syscall_5_NNNVioPio_t*, pms);
	ms->ms_retval = ocall_syscall_5_NNNVioPio(ms->ms_sysno, ms->ms_N1, ms->ms_N2, ms->ms_N3, ms->ms_V1, ms->ms_N5);

	return SGX_SUCCESS;
}

static sgx_status_t SGX_CDECL dynamorio_ocall_syscall_6_NNNNNN(void* pms)
{
	ms_ocall_syscall_6_NNNNNN_t* ms = SGX_CAST(ms_ocall_syscall_6_NNNNNN_t*, pms);
	ms->ms_retval = ocall_syscall_6_NNNNNN(ms->ms_sysno, ms->ms_N1, ms->ms_N2, ms->ms_N3, ms->ms_N4, ms->ms_N5, ms->ms_N6);

	return SGX_SUCCESS;
}

static sgx_status_t SGX_CDECL dynamorio_ocall_syscall_6_PoNNTiPoN(void* pms)
{
	ms_ocall_syscall_6_PoNNTiPoN_t* ms = SGX_CAST(ms_ocall_syscall_6_PoNNTiPoN_t*, pms);
	ms->ms_retval = ocall_syscall_6_PoNNTiPoN(ms->ms_sysno, ms->ms_V1, ms->ms_N1, ms->ms_N2, ms->ms_T, ms->ms_l, ms->ms_V2, ms->ms_N3);

	return SGX_SUCCESS;
}

static sgx_status_t SGX_CDECL dynamorio_ocall_syscall_6_NVoNNToN(void* pms)
{
	ms_ocall_syscall_6_NVoNNToN_t* ms = SGX_CAST(ms_ocall_syscall_6_NVoNNToN_t*, pms);
	ms->ms_retval = ocall_syscall_6_NVoNNToN(ms->ms_sysno, ms->ms_N1, ms->ms_V1, ms->ms_N2, ms->ms_N3, ms->ms_T1, ms->ms_N4);

	return SGX_SUCCESS;
}

static sgx_status_t SGX_CDECL dynamorio_ocall_syscall_6_NVoNNToPo(void* pms)
{
	ms_ocall_syscall_6_NVoNNToPo_t* ms = SGX_CAST(ms_ocall_syscall_6_NVoNNToPo_t*, pms);
	ms->ms_retval = ocall_syscall_6_NVoNNToPo(ms->ms_sysno, ms->ms_N1, ms->ms_V1, ms->ms_N2, ms->ms_N3, ms->ms_T1, ms->ms_N4);

	return SGX_SUCCESS;
}

static sgx_status_t SGX_CDECL dynamorio_sgxapp_reg_sighandler(void* pms)
{
	ms_sgxapp_reg_sighandler_t* ms = SGX_CAST(ms_sgxapp_reg_sighandler_t*, pms);
	sgxapp_reg_sighandler(ms->ms_signum);

	return SGX_SUCCESS;
}

static sgx_status_t SGX_CDECL dynamorio_sgx_oc_cpuidex(void* pms)
{
	ms_sgx_oc_cpuidex_t* ms = SGX_CAST(ms_sgx_oc_cpuidex_t*, pms);
	sgx_oc_cpuidex(ms->ms_cpuinfo, ms->ms_leaf, ms->ms_subleaf);

	return SGX_SUCCESS;
}

static const struct {
	size_t nr_ocall;
	void * table[43];
} ocall_table_dynamorio = {
	43,
	{
		(void*)dynamorio_ocall_print_str,
		(void*)dynamorio_ocall_print_syscallname,
		(void*)dynamorio_ocall_cpuid_ToNN,
		(void*)dynamorio_ocall_rdtsc_To,
		(void*)dynamorio_ocall_syscall_0,
		(void*)dynamorio_ocall_syscall_1_S,
		(void*)dynamorio_ocall_syscall_1_N,
		(void*)dynamorio_ocall_syscall_1_Ti,
		(void*)dynamorio_ocall_syscall_1_To,
		(void*)dynamorio_ocall_syscall_2_NN,
		(void*)dynamorio_ocall_syscall_2_NTi,
		(void*)dynamorio_ocall_syscall_2_NTo,
		(void*)dynamorio_ocall_syscall_2_SN,
		(void*)dynamorio_ocall_syscall_2_STi,
		(void*)dynamorio_ocall_syscall_2_STo,
		(void*)dynamorio_ocall_syscall_2_PoN,
		(void*)dynamorio_ocall_syscall_2_VoN,
		(void*)dynamorio_ocall_syscall_2_ToN,
		(void*)dynamorio_ocall_syscall_3_NNN,
		(void*)dynamorio_ocall_syscall_3_NNVio,
		(void*)dynamorio_ocall_syscall_3_SNN,
		(void*)dynamorio_ocall_syscall_3_SPoN,
		(void*)dynamorio_ocall_syscall_3_NPoN,
		(void*)dynamorio_ocall_syscall_3_NPiN,
		(void*)dynamorio_ocall_syscall_3_NToN,
		(void*)dynamorio_ocall_syscall_3_NToPo,
		(void*)dynamorio_ocall_syscall_3_NTiN,
		(void*)dynamorio_ocall_syscall_3_ToNN,
		(void*)dynamorio_ocall_syscall_3_NTiTo,
		(void*)dynamorio_ocall_syscall_3_NNTi,
		(void*)dynamorio_ocall_syscall_3_NNTo,
		(void*)dynamorio_ocall_syscall_4_NNNN,
		(void*)dynamorio_ocall_syscall_4_NToNN,
		(void*)dynamorio_ocall_syscall_4_NTiToN,
		(void*)dynamorio_ocall_syscall_5_NNNNN,
		(void*)dynamorio_ocall_syscall_5_NNNVioN,
		(void*)dynamorio_ocall_syscall_5_NNNVioPio,
		(void*)dynamorio_ocall_syscall_6_NNNNNN,
		(void*)dynamorio_ocall_syscall_6_PoNNTiPoN,
		(void*)dynamorio_ocall_syscall_6_NVoNNToN,
		(void*)dynamorio_ocall_syscall_6_NVoNNToPo,
		(void*)dynamorio_sgxapp_reg_sighandler,
		(void*)dynamorio_sgx_oc_cpuidex,
	}
};
sgx_status_t sgxdbi_enclave_entry(sgx_enclave_id_t eid, int* retval, long int argc, char** p_argv, char** p_env)
{
	sgx_status_t status;
	ms_sgxdbi_enclave_entry_t ms;
	ms.ms_argc = argc;
	ms.ms_p_argv = p_argv;
	ms.ms_p_env = p_env;
	status = sgx_ecall(eid, 0, &ocall_table_dynamorio, &ms);
	if (status == SGX_SUCCESS && retval) *retval = ms.ms_retval;
	return status;
}

