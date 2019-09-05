#include "dynamorio_t.h"

#include "sgx_trts.h" /* for sgx_ocalloc, sgx_is_outside_enclave */

#include <errno.h>
#include <string.h> /* for memcpy etc */
#include <stdlib.h> /* for malloc/free etc */

#define CHECK_REF_POINTER(ptr, siz) do {	\
	if (!(ptr) || ! sgx_is_outside_enclave((ptr), (siz)))	\
		return SGX_ERROR_INVALID_PARAMETER;\
} while (0)

#define CHECK_UNIQUE_POINTER(ptr, siz) do {	\
	if ((ptr) && ! sgx_is_outside_enclave((ptr), (siz)))	\
		return SGX_ERROR_INVALID_PARAMETER;\
} while (0)


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

static sgx_status_t SGX_CDECL sgx_sgxdbi_enclave_entry(void* pms)
{
	CHECK_REF_POINTER(pms, sizeof(ms_sgxdbi_enclave_entry_t));
	ms_sgxdbi_enclave_entry_t* ms = SGX_CAST(ms_sgxdbi_enclave_entry_t*, pms);
	sgx_status_t status = SGX_SUCCESS;
	char** _tmp_p_argv = ms->ms_p_argv;
	char** _tmp_p_env = ms->ms_p_env;


	ms->ms_retval = sgxdbi_enclave_entry(ms->ms_argc, _tmp_p_argv, _tmp_p_env);


	return status;
}

SGX_EXTERNC const struct {
	size_t nr_ecall;
	struct {void* ecall_addr; uint8_t is_priv;} ecall_table[1];
} g_ecall_table = {
	1,
	{
		{(void*)(uintptr_t)sgx_sgxdbi_enclave_entry, 0},
	}
};

SGX_EXTERNC const struct {
	size_t nr_ocall;
	uint8_t entry_table[43][1];
} g_dyn_entry_table = {
	43,
	{
		{0, },
		{0, },
		{0, },
		{0, },
		{0, },
		{0, },
		{0, },
		{0, },
		{0, },
		{0, },
		{0, },
		{0, },
		{0, },
		{0, },
		{0, },
		{0, },
		{0, },
		{0, },
		{0, },
		{0, },
		{0, },
		{0, },
		{0, },
		{0, },
		{0, },
		{0, },
		{0, },
		{0, },
		{0, },
		{0, },
		{0, },
		{0, },
		{0, },
		{0, },
		{0, },
		{0, },
		{0, },
		{0, },
		{0, },
		{0, },
		{0, },
		{0, },
		{0, },
	}
};


sgx_status_t SGX_CDECL ocall_print_str(const char* str)
{
	sgx_status_t status = SGX_SUCCESS;
	size_t _len_str = str ? strlen(str) + 1 : 0;

	ms_ocall_print_str_t* ms = NULL;
	size_t ocalloc_size = sizeof(ms_ocall_print_str_t);
	void *__tmp = NULL;

	ocalloc_size += (str != NULL && sgx_is_within_enclave(str, _len_str)) ? _len_str : 0;

	__tmp = sgx_ocalloc(ocalloc_size);
	if (__tmp == NULL) {
		sgx_ocfree();
		return SGX_ERROR_UNEXPECTED;
	}
	ms = (ms_ocall_print_str_t*)__tmp;
	__tmp = (void *)((size_t)__tmp + sizeof(ms_ocall_print_str_t));

	if (str != NULL && sgx_is_within_enclave(str, _len_str)) {
		ms->ms_str = (char*)__tmp;
		__tmp = (void *)((size_t)__tmp + _len_str);
		memcpy((void*)ms->ms_str, str, _len_str);
	} else if (str == NULL) {
		ms->ms_str = NULL;
	} else {
		sgx_ocfree();
		return SGX_ERROR_INVALID_PARAMETER;
	}
	
	status = sgx_ocall(0, ms);


	sgx_ocfree();
	return status;
}

sgx_status_t SGX_CDECL ocall_print_syscallname(long int sysno)
{
	sgx_status_t status = SGX_SUCCESS;

	ms_ocall_print_syscallname_t* ms = NULL;
	size_t ocalloc_size = sizeof(ms_ocall_print_syscallname_t);
	void *__tmp = NULL;


	__tmp = sgx_ocalloc(ocalloc_size);
	if (__tmp == NULL) {
		sgx_ocfree();
		return SGX_ERROR_UNEXPECTED;
	}
	ms = (ms_ocall_print_syscallname_t*)__tmp;
	__tmp = (void *)((size_t)__tmp + sizeof(ms_ocall_print_syscallname_t));

	ms->ms_sysno = sysno;
	status = sgx_ocall(1, ms);


	sgx_ocfree();
	return status;
}

sgx_status_t SGX_CDECL ocall_cpuid_ToNN(void* T, int l, int eax, int ecx)
{
	sgx_status_t status = SGX_SUCCESS;
	size_t _len_T = l;

	ms_ocall_cpuid_ToNN_t* ms = NULL;
	size_t ocalloc_size = sizeof(ms_ocall_cpuid_ToNN_t);
	void *__tmp = NULL;

	ocalloc_size += (T != NULL && sgx_is_within_enclave(T, _len_T)) ? _len_T : 0;

	__tmp = sgx_ocalloc(ocalloc_size);
	if (__tmp == NULL) {
		sgx_ocfree();
		return SGX_ERROR_UNEXPECTED;
	}
	ms = (ms_ocall_cpuid_ToNN_t*)__tmp;
	__tmp = (void *)((size_t)__tmp + sizeof(ms_ocall_cpuid_ToNN_t));

	if (T != NULL && sgx_is_within_enclave(T, _len_T)) {
		ms->ms_T = (void*)__tmp;
		__tmp = (void *)((size_t)__tmp + _len_T);
		memset(ms->ms_T, 0, _len_T);
	} else if (T == NULL) {
		ms->ms_T = NULL;
	} else {
		sgx_ocfree();
		return SGX_ERROR_INVALID_PARAMETER;
	}
	
	ms->ms_l = l;
	ms->ms_eax = eax;
	ms->ms_ecx = ecx;
	status = sgx_ocall(2, ms);

	if (T) memcpy((void*)T, ms->ms_T, _len_T);

	sgx_ocfree();
	return status;
}

sgx_status_t SGX_CDECL ocall_rdtsc_To(void* T, int l)
{
	sgx_status_t status = SGX_SUCCESS;
	size_t _len_T = l;

	ms_ocall_rdtsc_To_t* ms = NULL;
	size_t ocalloc_size = sizeof(ms_ocall_rdtsc_To_t);
	void *__tmp = NULL;

	ocalloc_size += (T != NULL && sgx_is_within_enclave(T, _len_T)) ? _len_T : 0;

	__tmp = sgx_ocalloc(ocalloc_size);
	if (__tmp == NULL) {
		sgx_ocfree();
		return SGX_ERROR_UNEXPECTED;
	}
	ms = (ms_ocall_rdtsc_To_t*)__tmp;
	__tmp = (void *)((size_t)__tmp + sizeof(ms_ocall_rdtsc_To_t));

	if (T != NULL && sgx_is_within_enclave(T, _len_T)) {
		ms->ms_T = (void*)__tmp;
		__tmp = (void *)((size_t)__tmp + _len_T);
		memset(ms->ms_T, 0, _len_T);
	} else if (T == NULL) {
		ms->ms_T = NULL;
	} else {
		sgx_ocfree();
		return SGX_ERROR_INVALID_PARAMETER;
	}
	
	ms->ms_l = l;
	status = sgx_ocall(3, ms);

	if (T) memcpy((void*)T, ms->ms_T, _len_T);

	sgx_ocfree();
	return status;
}

sgx_status_t SGX_CDECL ocall_syscall_0(long int* retval, long int sysno)
{
	sgx_status_t status = SGX_SUCCESS;

	ms_ocall_syscall_0_t* ms = NULL;
	size_t ocalloc_size = sizeof(ms_ocall_syscall_0_t);
	void *__tmp = NULL;


	__tmp = sgx_ocalloc(ocalloc_size);
	if (__tmp == NULL) {
		sgx_ocfree();
		return SGX_ERROR_UNEXPECTED;
	}
	ms = (ms_ocall_syscall_0_t*)__tmp;
	__tmp = (void *)((size_t)__tmp + sizeof(ms_ocall_syscall_0_t));

	ms->ms_sysno = sysno;
	status = sgx_ocall(4, ms);

	if (retval) *retval = ms->ms_retval;

	sgx_ocfree();
	return status;
}

sgx_status_t SGX_CDECL ocall_syscall_1_S(long int* retval, long int sysno, char* S)
{
	sgx_status_t status = SGX_SUCCESS;
	size_t _len_S = S ? strlen(S) + 1 : 0;

	ms_ocall_syscall_1_S_t* ms = NULL;
	size_t ocalloc_size = sizeof(ms_ocall_syscall_1_S_t);
	void *__tmp = NULL;

	ocalloc_size += (S != NULL && sgx_is_within_enclave(S, _len_S)) ? _len_S : 0;

	__tmp = sgx_ocalloc(ocalloc_size);
	if (__tmp == NULL) {
		sgx_ocfree();
		return SGX_ERROR_UNEXPECTED;
	}
	ms = (ms_ocall_syscall_1_S_t*)__tmp;
	__tmp = (void *)((size_t)__tmp + sizeof(ms_ocall_syscall_1_S_t));

	ms->ms_sysno = sysno;
	if (S != NULL && sgx_is_within_enclave(S, _len_S)) {
		ms->ms_S = (char*)__tmp;
		__tmp = (void *)((size_t)__tmp + _len_S);
		memcpy(ms->ms_S, S, _len_S);
	} else if (S == NULL) {
		ms->ms_S = NULL;
	} else {
		sgx_ocfree();
		return SGX_ERROR_INVALID_PARAMETER;
	}
	
	status = sgx_ocall(5, ms);

	if (retval) *retval = ms->ms_retval;

	sgx_ocfree();
	return status;
}

sgx_status_t SGX_CDECL ocall_syscall_1_N(long int* retval, long int sysno, long int N1)
{
	sgx_status_t status = SGX_SUCCESS;

	ms_ocall_syscall_1_N_t* ms = NULL;
	size_t ocalloc_size = sizeof(ms_ocall_syscall_1_N_t);
	void *__tmp = NULL;


	__tmp = sgx_ocalloc(ocalloc_size);
	if (__tmp == NULL) {
		sgx_ocfree();
		return SGX_ERROR_UNEXPECTED;
	}
	ms = (ms_ocall_syscall_1_N_t*)__tmp;
	__tmp = (void *)((size_t)__tmp + sizeof(ms_ocall_syscall_1_N_t));

	ms->ms_sysno = sysno;
	ms->ms_N1 = N1;
	status = sgx_ocall(6, ms);

	if (retval) *retval = ms->ms_retval;

	sgx_ocfree();
	return status;
}

sgx_status_t SGX_CDECL ocall_syscall_1_Ti(long int* retval, long int sysno, void* T, int l)
{
	sgx_status_t status = SGX_SUCCESS;
	size_t _len_T = l;

	ms_ocall_syscall_1_Ti_t* ms = NULL;
	size_t ocalloc_size = sizeof(ms_ocall_syscall_1_Ti_t);
	void *__tmp = NULL;

	ocalloc_size += (T != NULL && sgx_is_within_enclave(T, _len_T)) ? _len_T : 0;

	__tmp = sgx_ocalloc(ocalloc_size);
	if (__tmp == NULL) {
		sgx_ocfree();
		return SGX_ERROR_UNEXPECTED;
	}
	ms = (ms_ocall_syscall_1_Ti_t*)__tmp;
	__tmp = (void *)((size_t)__tmp + sizeof(ms_ocall_syscall_1_Ti_t));

	ms->ms_sysno = sysno;
	if (T != NULL && sgx_is_within_enclave(T, _len_T)) {
		ms->ms_T = (void*)__tmp;
		__tmp = (void *)((size_t)__tmp + _len_T);
		memcpy(ms->ms_T, T, _len_T);
	} else if (T == NULL) {
		ms->ms_T = NULL;
	} else {
		sgx_ocfree();
		return SGX_ERROR_INVALID_PARAMETER;
	}
	
	ms->ms_l = l;
	status = sgx_ocall(7, ms);

	if (retval) *retval = ms->ms_retval;

	sgx_ocfree();
	return status;
}

sgx_status_t SGX_CDECL ocall_syscall_1_To(long int* retval, long int sysno, void* T, int l)
{
	sgx_status_t status = SGX_SUCCESS;
	size_t _len_T = l;

	ms_ocall_syscall_1_To_t* ms = NULL;
	size_t ocalloc_size = sizeof(ms_ocall_syscall_1_To_t);
	void *__tmp = NULL;

	ocalloc_size += (T != NULL && sgx_is_within_enclave(T, _len_T)) ? _len_T : 0;

	__tmp = sgx_ocalloc(ocalloc_size);
	if (__tmp == NULL) {
		sgx_ocfree();
		return SGX_ERROR_UNEXPECTED;
	}
	ms = (ms_ocall_syscall_1_To_t*)__tmp;
	__tmp = (void *)((size_t)__tmp + sizeof(ms_ocall_syscall_1_To_t));

	ms->ms_sysno = sysno;
	if (T != NULL && sgx_is_within_enclave(T, _len_T)) {
		ms->ms_T = (void*)__tmp;
		__tmp = (void *)((size_t)__tmp + _len_T);
		memset(ms->ms_T, 0, _len_T);
	} else if (T == NULL) {
		ms->ms_T = NULL;
	} else {
		sgx_ocfree();
		return SGX_ERROR_INVALID_PARAMETER;
	}
	
	ms->ms_l = l;
	status = sgx_ocall(8, ms);

	if (retval) *retval = ms->ms_retval;
	if (T) memcpy((void*)T, ms->ms_T, _len_T);

	sgx_ocfree();
	return status;
}

sgx_status_t SGX_CDECL ocall_syscall_2_NN(long int* retval, long int sysno, long int N1, long int N2)
{
	sgx_status_t status = SGX_SUCCESS;

	ms_ocall_syscall_2_NN_t* ms = NULL;
	size_t ocalloc_size = sizeof(ms_ocall_syscall_2_NN_t);
	void *__tmp = NULL;


	__tmp = sgx_ocalloc(ocalloc_size);
	if (__tmp == NULL) {
		sgx_ocfree();
		return SGX_ERROR_UNEXPECTED;
	}
	ms = (ms_ocall_syscall_2_NN_t*)__tmp;
	__tmp = (void *)((size_t)__tmp + sizeof(ms_ocall_syscall_2_NN_t));

	ms->ms_sysno = sysno;
	ms->ms_N1 = N1;
	ms->ms_N2 = N2;
	status = sgx_ocall(9, ms);

	if (retval) *retval = ms->ms_retval;

	sgx_ocfree();
	return status;
}

sgx_status_t SGX_CDECL ocall_syscall_2_NTi(long int* retval, long int sysno, long int N, void* T, int l)
{
	sgx_status_t status = SGX_SUCCESS;
	size_t _len_T = l;

	ms_ocall_syscall_2_NTi_t* ms = NULL;
	size_t ocalloc_size = sizeof(ms_ocall_syscall_2_NTi_t);
	void *__tmp = NULL;

	ocalloc_size += (T != NULL && sgx_is_within_enclave(T, _len_T)) ? _len_T : 0;

	__tmp = sgx_ocalloc(ocalloc_size);
	if (__tmp == NULL) {
		sgx_ocfree();
		return SGX_ERROR_UNEXPECTED;
	}
	ms = (ms_ocall_syscall_2_NTi_t*)__tmp;
	__tmp = (void *)((size_t)__tmp + sizeof(ms_ocall_syscall_2_NTi_t));

	ms->ms_sysno = sysno;
	ms->ms_N = N;
	if (T != NULL && sgx_is_within_enclave(T, _len_T)) {
		ms->ms_T = (void*)__tmp;
		__tmp = (void *)((size_t)__tmp + _len_T);
		memcpy(ms->ms_T, T, _len_T);
	} else if (T == NULL) {
		ms->ms_T = NULL;
	} else {
		sgx_ocfree();
		return SGX_ERROR_INVALID_PARAMETER;
	}
	
	ms->ms_l = l;
	status = sgx_ocall(10, ms);

	if (retval) *retval = ms->ms_retval;

	sgx_ocfree();
	return status;
}

sgx_status_t SGX_CDECL ocall_syscall_2_NTo(long int* retval, long int sysno, long int N, void* T, int l)
{
	sgx_status_t status = SGX_SUCCESS;
	size_t _len_T = l;

	ms_ocall_syscall_2_NTo_t* ms = NULL;
	size_t ocalloc_size = sizeof(ms_ocall_syscall_2_NTo_t);
	void *__tmp = NULL;

	ocalloc_size += (T != NULL && sgx_is_within_enclave(T, _len_T)) ? _len_T : 0;

	__tmp = sgx_ocalloc(ocalloc_size);
	if (__tmp == NULL) {
		sgx_ocfree();
		return SGX_ERROR_UNEXPECTED;
	}
	ms = (ms_ocall_syscall_2_NTo_t*)__tmp;
	__tmp = (void *)((size_t)__tmp + sizeof(ms_ocall_syscall_2_NTo_t));

	ms->ms_sysno = sysno;
	ms->ms_N = N;
	if (T != NULL && sgx_is_within_enclave(T, _len_T)) {
		ms->ms_T = (void*)__tmp;
		__tmp = (void *)((size_t)__tmp + _len_T);
		memset(ms->ms_T, 0, _len_T);
	} else if (T == NULL) {
		ms->ms_T = NULL;
	} else {
		sgx_ocfree();
		return SGX_ERROR_INVALID_PARAMETER;
	}
	
	ms->ms_l = l;
	status = sgx_ocall(11, ms);

	if (retval) *retval = ms->ms_retval;
	if (T) memcpy((void*)T, ms->ms_T, _len_T);

	sgx_ocfree();
	return status;
}

sgx_status_t SGX_CDECL ocall_syscall_2_SN(long int* retval, long int sysno, const char* S, long int N1)
{
	sgx_status_t status = SGX_SUCCESS;
	size_t _len_S = S ? strlen(S) + 1 : 0;

	ms_ocall_syscall_2_SN_t* ms = NULL;
	size_t ocalloc_size = sizeof(ms_ocall_syscall_2_SN_t);
	void *__tmp = NULL;

	ocalloc_size += (S != NULL && sgx_is_within_enclave(S, _len_S)) ? _len_S : 0;

	__tmp = sgx_ocalloc(ocalloc_size);
	if (__tmp == NULL) {
		sgx_ocfree();
		return SGX_ERROR_UNEXPECTED;
	}
	ms = (ms_ocall_syscall_2_SN_t*)__tmp;
	__tmp = (void *)((size_t)__tmp + sizeof(ms_ocall_syscall_2_SN_t));

	ms->ms_sysno = sysno;
	if (S != NULL && sgx_is_within_enclave(S, _len_S)) {
		ms->ms_S = (char*)__tmp;
		__tmp = (void *)((size_t)__tmp + _len_S);
		memcpy((void*)ms->ms_S, S, _len_S);
	} else if (S == NULL) {
		ms->ms_S = NULL;
	} else {
		sgx_ocfree();
		return SGX_ERROR_INVALID_PARAMETER;
	}
	
	ms->ms_N1 = N1;
	status = sgx_ocall(12, ms);

	if (retval) *retval = ms->ms_retval;

	sgx_ocfree();
	return status;
}

sgx_status_t SGX_CDECL ocall_syscall_2_STi(long int* retval, long int sysno, const char* S, void* T, int l)
{
	sgx_status_t status = SGX_SUCCESS;
	size_t _len_S = S ? strlen(S) + 1 : 0;
	size_t _len_T = l;

	ms_ocall_syscall_2_STi_t* ms = NULL;
	size_t ocalloc_size = sizeof(ms_ocall_syscall_2_STi_t);
	void *__tmp = NULL;

	ocalloc_size += (S != NULL && sgx_is_within_enclave(S, _len_S)) ? _len_S : 0;
	ocalloc_size += (T != NULL && sgx_is_within_enclave(T, _len_T)) ? _len_T : 0;

	__tmp = sgx_ocalloc(ocalloc_size);
	if (__tmp == NULL) {
		sgx_ocfree();
		return SGX_ERROR_UNEXPECTED;
	}
	ms = (ms_ocall_syscall_2_STi_t*)__tmp;
	__tmp = (void *)((size_t)__tmp + sizeof(ms_ocall_syscall_2_STi_t));

	ms->ms_sysno = sysno;
	if (S != NULL && sgx_is_within_enclave(S, _len_S)) {
		ms->ms_S = (char*)__tmp;
		__tmp = (void *)((size_t)__tmp + _len_S);
		memcpy((void*)ms->ms_S, S, _len_S);
	} else if (S == NULL) {
		ms->ms_S = NULL;
	} else {
		sgx_ocfree();
		return SGX_ERROR_INVALID_PARAMETER;
	}
	
	if (T != NULL && sgx_is_within_enclave(T, _len_T)) {
		ms->ms_T = (void*)__tmp;
		__tmp = (void *)((size_t)__tmp + _len_T);
		memcpy(ms->ms_T, T, _len_T);
	} else if (T == NULL) {
		ms->ms_T = NULL;
	} else {
		sgx_ocfree();
		return SGX_ERROR_INVALID_PARAMETER;
	}
	
	ms->ms_l = l;
	status = sgx_ocall(13, ms);

	if (retval) *retval = ms->ms_retval;

	sgx_ocfree();
	return status;
}

sgx_status_t SGX_CDECL ocall_syscall_2_STo(long int* retval, long int sysno, const char* S, void* T, int l)
{
	sgx_status_t status = SGX_SUCCESS;
	size_t _len_S = S ? strlen(S) + 1 : 0;
	size_t _len_T = l;

	ms_ocall_syscall_2_STo_t* ms = NULL;
	size_t ocalloc_size = sizeof(ms_ocall_syscall_2_STo_t);
	void *__tmp = NULL;

	ocalloc_size += (S != NULL && sgx_is_within_enclave(S, _len_S)) ? _len_S : 0;
	ocalloc_size += (T != NULL && sgx_is_within_enclave(T, _len_T)) ? _len_T : 0;

	__tmp = sgx_ocalloc(ocalloc_size);
	if (__tmp == NULL) {
		sgx_ocfree();
		return SGX_ERROR_UNEXPECTED;
	}
	ms = (ms_ocall_syscall_2_STo_t*)__tmp;
	__tmp = (void *)((size_t)__tmp + sizeof(ms_ocall_syscall_2_STo_t));

	ms->ms_sysno = sysno;
	if (S != NULL && sgx_is_within_enclave(S, _len_S)) {
		ms->ms_S = (char*)__tmp;
		__tmp = (void *)((size_t)__tmp + _len_S);
		memcpy((void*)ms->ms_S, S, _len_S);
	} else if (S == NULL) {
		ms->ms_S = NULL;
	} else {
		sgx_ocfree();
		return SGX_ERROR_INVALID_PARAMETER;
	}
	
	if (T != NULL && sgx_is_within_enclave(T, _len_T)) {
		ms->ms_T = (void*)__tmp;
		__tmp = (void *)((size_t)__tmp + _len_T);
		memset(ms->ms_T, 0, _len_T);
	} else if (T == NULL) {
		ms->ms_T = NULL;
	} else {
		sgx_ocfree();
		return SGX_ERROR_INVALID_PARAMETER;
	}
	
	ms->ms_l = l;
	status = sgx_ocall(14, ms);

	if (retval) *retval = ms->ms_retval;
	if (T) memcpy((void*)T, ms->ms_T, _len_T);

	sgx_ocfree();
	return status;
}

sgx_status_t SGX_CDECL ocall_syscall_2_PoN(long int* retval, long int sysno, void* T, int l)
{
	sgx_status_t status = SGX_SUCCESS;
	size_t _len_T = l;

	ms_ocall_syscall_2_PoN_t* ms = NULL;
	size_t ocalloc_size = sizeof(ms_ocall_syscall_2_PoN_t);
	void *__tmp = NULL;

	ocalloc_size += (T != NULL && sgx_is_within_enclave(T, _len_T)) ? _len_T : 0;

	__tmp = sgx_ocalloc(ocalloc_size);
	if (__tmp == NULL) {
		sgx_ocfree();
		return SGX_ERROR_UNEXPECTED;
	}
	ms = (ms_ocall_syscall_2_PoN_t*)__tmp;
	__tmp = (void *)((size_t)__tmp + sizeof(ms_ocall_syscall_2_PoN_t));

	ms->ms_sysno = sysno;
	if (T != NULL && sgx_is_within_enclave(T, _len_T)) {
		ms->ms_T = (void*)__tmp;
		__tmp = (void *)((size_t)__tmp + _len_T);
		memset(ms->ms_T, 0, _len_T);
	} else if (T == NULL) {
		ms->ms_T = NULL;
	} else {
		sgx_ocfree();
		return SGX_ERROR_INVALID_PARAMETER;
	}
	
	ms->ms_l = l;
	status = sgx_ocall(15, ms);

	if (retval) *retval = ms->ms_retval;
	if (T) memcpy((void*)T, ms->ms_T, _len_T);

	sgx_ocfree();
	return status;
}

sgx_status_t SGX_CDECL ocall_syscall_2_VoN(long int* retval, long int sysno, void* T, int l)
{
	sgx_status_t status = SGX_SUCCESS;
	size_t _len_T = l;

	ms_ocall_syscall_2_VoN_t* ms = NULL;
	size_t ocalloc_size = sizeof(ms_ocall_syscall_2_VoN_t);
	void *__tmp = NULL;

	ocalloc_size += (T != NULL && sgx_is_within_enclave(T, _len_T)) ? _len_T : 0;

	__tmp = sgx_ocalloc(ocalloc_size);
	if (__tmp == NULL) {
		sgx_ocfree();
		return SGX_ERROR_UNEXPECTED;
	}
	ms = (ms_ocall_syscall_2_VoN_t*)__tmp;
	__tmp = (void *)((size_t)__tmp + sizeof(ms_ocall_syscall_2_VoN_t));

	ms->ms_sysno = sysno;
	if (T != NULL && sgx_is_within_enclave(T, _len_T)) {
		ms->ms_T = (void*)__tmp;
		__tmp = (void *)((size_t)__tmp + _len_T);
		memset(ms->ms_T, 0, _len_T);
	} else if (T == NULL) {
		ms->ms_T = NULL;
	} else {
		sgx_ocfree();
		return SGX_ERROR_INVALID_PARAMETER;
	}
	
	ms->ms_l = l;
	status = sgx_ocall(16, ms);

	if (retval) *retval = ms->ms_retval;
	if (T) memcpy((void*)T, ms->ms_T, _len_T);

	sgx_ocfree();
	return status;
}

sgx_status_t SGX_CDECL ocall_syscall_2_ToN(long int* retval, long int sysno, void* T, int l, long int N)
{
	sgx_status_t status = SGX_SUCCESS;
	size_t _len_T = l;

	ms_ocall_syscall_2_ToN_t* ms = NULL;
	size_t ocalloc_size = sizeof(ms_ocall_syscall_2_ToN_t);
	void *__tmp = NULL;

	ocalloc_size += (T != NULL && sgx_is_within_enclave(T, _len_T)) ? _len_T : 0;

	__tmp = sgx_ocalloc(ocalloc_size);
	if (__tmp == NULL) {
		sgx_ocfree();
		return SGX_ERROR_UNEXPECTED;
	}
	ms = (ms_ocall_syscall_2_ToN_t*)__tmp;
	__tmp = (void *)((size_t)__tmp + sizeof(ms_ocall_syscall_2_ToN_t));

	ms->ms_sysno = sysno;
	if (T != NULL && sgx_is_within_enclave(T, _len_T)) {
		ms->ms_T = (void*)__tmp;
		__tmp = (void *)((size_t)__tmp + _len_T);
		memset(ms->ms_T, 0, _len_T);
	} else if (T == NULL) {
		ms->ms_T = NULL;
	} else {
		sgx_ocfree();
		return SGX_ERROR_INVALID_PARAMETER;
	}
	
	ms->ms_l = l;
	ms->ms_N = N;
	status = sgx_ocall(17, ms);

	if (retval) *retval = ms->ms_retval;
	if (T) memcpy((void*)T, ms->ms_T, _len_T);

	sgx_ocfree();
	return status;
}

sgx_status_t SGX_CDECL ocall_syscall_3_NNN(long int* retval, long int sysno, long int N1, long int N2, long int N3)
{
	sgx_status_t status = SGX_SUCCESS;

	ms_ocall_syscall_3_NNN_t* ms = NULL;
	size_t ocalloc_size = sizeof(ms_ocall_syscall_3_NNN_t);
	void *__tmp = NULL;


	__tmp = sgx_ocalloc(ocalloc_size);
	if (__tmp == NULL) {
		sgx_ocfree();
		return SGX_ERROR_UNEXPECTED;
	}
	ms = (ms_ocall_syscall_3_NNN_t*)__tmp;
	__tmp = (void *)((size_t)__tmp + sizeof(ms_ocall_syscall_3_NNN_t));

	ms->ms_sysno = sysno;
	ms->ms_N1 = N1;
	ms->ms_N2 = N2;
	ms->ms_N3 = N3;
	status = sgx_ocall(18, ms);

	if (retval) *retval = ms->ms_retval;

	sgx_ocfree();
	return status;
}

sgx_status_t SGX_CDECL ocall_syscall_3_NNVio(long int* retval, long int sysno, long int N1, long int N2, void* T, long int l)
{
	sgx_status_t status = SGX_SUCCESS;
	size_t _len_T = l;

	ms_ocall_syscall_3_NNVio_t* ms = NULL;
	size_t ocalloc_size = sizeof(ms_ocall_syscall_3_NNVio_t);
	void *__tmp = NULL;

	ocalloc_size += (T != NULL && sgx_is_within_enclave(T, _len_T)) ? _len_T : 0;

	__tmp = sgx_ocalloc(ocalloc_size);
	if (__tmp == NULL) {
		sgx_ocfree();
		return SGX_ERROR_UNEXPECTED;
	}
	ms = (ms_ocall_syscall_3_NNVio_t*)__tmp;
	__tmp = (void *)((size_t)__tmp + sizeof(ms_ocall_syscall_3_NNVio_t));

	ms->ms_sysno = sysno;
	ms->ms_N1 = N1;
	ms->ms_N2 = N2;
	if (T != NULL && sgx_is_within_enclave(T, _len_T)) {
		ms->ms_T = (void*)__tmp;
		__tmp = (void *)((size_t)__tmp + _len_T);
		memcpy(ms->ms_T, T, _len_T);
	} else if (T == NULL) {
		ms->ms_T = NULL;
	} else {
		sgx_ocfree();
		return SGX_ERROR_INVALID_PARAMETER;
	}
	
	ms->ms_l = l;
	status = sgx_ocall(19, ms);

	if (retval) *retval = ms->ms_retval;
	if (T) memcpy((void*)T, ms->ms_T, _len_T);

	sgx_ocfree();
	return status;
}

sgx_status_t SGX_CDECL ocall_syscall_3_SNN(long int* retval, long int sysno, const char* S, long int N1, long int N2)
{
	sgx_status_t status = SGX_SUCCESS;
	size_t _len_S = S ? strlen(S) + 1 : 0;

	ms_ocall_syscall_3_SNN_t* ms = NULL;
	size_t ocalloc_size = sizeof(ms_ocall_syscall_3_SNN_t);
	void *__tmp = NULL;

	ocalloc_size += (S != NULL && sgx_is_within_enclave(S, _len_S)) ? _len_S : 0;

	__tmp = sgx_ocalloc(ocalloc_size);
	if (__tmp == NULL) {
		sgx_ocfree();
		return SGX_ERROR_UNEXPECTED;
	}
	ms = (ms_ocall_syscall_3_SNN_t*)__tmp;
	__tmp = (void *)((size_t)__tmp + sizeof(ms_ocall_syscall_3_SNN_t));

	ms->ms_sysno = sysno;
	if (S != NULL && sgx_is_within_enclave(S, _len_S)) {
		ms->ms_S = (char*)__tmp;
		__tmp = (void *)((size_t)__tmp + _len_S);
		memcpy((void*)ms->ms_S, S, _len_S);
	} else if (S == NULL) {
		ms->ms_S = NULL;
	} else {
		sgx_ocfree();
		return SGX_ERROR_INVALID_PARAMETER;
	}
	
	ms->ms_N1 = N1;
	ms->ms_N2 = N2;
	status = sgx_ocall(20, ms);

	if (retval) *retval = ms->ms_retval;

	sgx_ocfree();
	return status;
}

sgx_status_t SGX_CDECL ocall_syscall_3_SPoN(long int* retval, long int sysno, const char* S, void* P, long int N)
{
	sgx_status_t status = SGX_SUCCESS;
	size_t _len_S = S ? strlen(S) + 1 : 0;
	size_t _len_P = N;

	ms_ocall_syscall_3_SPoN_t* ms = NULL;
	size_t ocalloc_size = sizeof(ms_ocall_syscall_3_SPoN_t);
	void *__tmp = NULL;

	ocalloc_size += (S != NULL && sgx_is_within_enclave(S, _len_S)) ? _len_S : 0;
	ocalloc_size += (P != NULL && sgx_is_within_enclave(P, _len_P)) ? _len_P : 0;

	__tmp = sgx_ocalloc(ocalloc_size);
	if (__tmp == NULL) {
		sgx_ocfree();
		return SGX_ERROR_UNEXPECTED;
	}
	ms = (ms_ocall_syscall_3_SPoN_t*)__tmp;
	__tmp = (void *)((size_t)__tmp + sizeof(ms_ocall_syscall_3_SPoN_t));

	ms->ms_sysno = sysno;
	if (S != NULL && sgx_is_within_enclave(S, _len_S)) {
		ms->ms_S = (char*)__tmp;
		__tmp = (void *)((size_t)__tmp + _len_S);
		memcpy((void*)ms->ms_S, S, _len_S);
	} else if (S == NULL) {
		ms->ms_S = NULL;
	} else {
		sgx_ocfree();
		return SGX_ERROR_INVALID_PARAMETER;
	}
	
	if (P != NULL && sgx_is_within_enclave(P, _len_P)) {
		ms->ms_P = (void*)__tmp;
		__tmp = (void *)((size_t)__tmp + _len_P);
		memset(ms->ms_P, 0, _len_P);
	} else if (P == NULL) {
		ms->ms_P = NULL;
	} else {
		sgx_ocfree();
		return SGX_ERROR_INVALID_PARAMETER;
	}
	
	ms->ms_N = N;
	status = sgx_ocall(21, ms);

	if (retval) *retval = ms->ms_retval;
	if (P) memcpy((void*)P, ms->ms_P, _len_P);

	sgx_ocfree();
	return status;
}

sgx_status_t SGX_CDECL ocall_syscall_3_NPoN(long int* retval, long int sysno, long int N1, void* T, long int N2)
{
	sgx_status_t status = SGX_SUCCESS;
	size_t _len_T = N2;

	ms_ocall_syscall_3_NPoN_t* ms = NULL;
	size_t ocalloc_size = sizeof(ms_ocall_syscall_3_NPoN_t);
	void *__tmp = NULL;

	ocalloc_size += (T != NULL && sgx_is_within_enclave(T, _len_T)) ? _len_T : 0;

	__tmp = sgx_ocalloc(ocalloc_size);
	if (__tmp == NULL) {
		sgx_ocfree();
		return SGX_ERROR_UNEXPECTED;
	}
	ms = (ms_ocall_syscall_3_NPoN_t*)__tmp;
	__tmp = (void *)((size_t)__tmp + sizeof(ms_ocall_syscall_3_NPoN_t));

	ms->ms_sysno = sysno;
	ms->ms_N1 = N1;
	if (T != NULL && sgx_is_within_enclave(T, _len_T)) {
		ms->ms_T = (void*)__tmp;
		__tmp = (void *)((size_t)__tmp + _len_T);
		memset(ms->ms_T, 0, _len_T);
	} else if (T == NULL) {
		ms->ms_T = NULL;
	} else {
		sgx_ocfree();
		return SGX_ERROR_INVALID_PARAMETER;
	}
	
	ms->ms_N2 = N2;
	status = sgx_ocall(22, ms);

	if (retval) *retval = ms->ms_retval;
	if (T) memcpy((void*)T, ms->ms_T, _len_T);

	sgx_ocfree();
	return status;
}

sgx_status_t SGX_CDECL ocall_syscall_3_NPiN(long int* retval, long int sysno, long int N1, void* T, long int N2)
{
	sgx_status_t status = SGX_SUCCESS;
	size_t _len_T = N2;

	ms_ocall_syscall_3_NPiN_t* ms = NULL;
	size_t ocalloc_size = sizeof(ms_ocall_syscall_3_NPiN_t);
	void *__tmp = NULL;

	ocalloc_size += (T != NULL && sgx_is_within_enclave(T, _len_T)) ? _len_T : 0;

	__tmp = sgx_ocalloc(ocalloc_size);
	if (__tmp == NULL) {
		sgx_ocfree();
		return SGX_ERROR_UNEXPECTED;
	}
	ms = (ms_ocall_syscall_3_NPiN_t*)__tmp;
	__tmp = (void *)((size_t)__tmp + sizeof(ms_ocall_syscall_3_NPiN_t));

	ms->ms_sysno = sysno;
	ms->ms_N1 = N1;
	if (T != NULL && sgx_is_within_enclave(T, _len_T)) {
		ms->ms_T = (void*)__tmp;
		__tmp = (void *)((size_t)__tmp + _len_T);
		memcpy(ms->ms_T, T, _len_T);
	} else if (T == NULL) {
		ms->ms_T = NULL;
	} else {
		sgx_ocfree();
		return SGX_ERROR_INVALID_PARAMETER;
	}
	
	ms->ms_N2 = N2;
	status = sgx_ocall(23, ms);

	if (retval) *retval = ms->ms_retval;

	sgx_ocfree();
	return status;
}

sgx_status_t SGX_CDECL ocall_syscall_3_NToN(long int* retval, long int sysno, long int N1, void* T, long int dumb, long int N2)
{
	sgx_status_t status = SGX_SUCCESS;
	size_t _len_T = dumb;

	ms_ocall_syscall_3_NToN_t* ms = NULL;
	size_t ocalloc_size = sizeof(ms_ocall_syscall_3_NToN_t);
	void *__tmp = NULL;

	ocalloc_size += (T != NULL && sgx_is_within_enclave(T, _len_T)) ? _len_T : 0;

	__tmp = sgx_ocalloc(ocalloc_size);
	if (__tmp == NULL) {
		sgx_ocfree();
		return SGX_ERROR_UNEXPECTED;
	}
	ms = (ms_ocall_syscall_3_NToN_t*)__tmp;
	__tmp = (void *)((size_t)__tmp + sizeof(ms_ocall_syscall_3_NToN_t));

	ms->ms_sysno = sysno;
	ms->ms_N1 = N1;
	if (T != NULL && sgx_is_within_enclave(T, _len_T)) {
		ms->ms_T = (void*)__tmp;
		__tmp = (void *)((size_t)__tmp + _len_T);
		memcpy(ms->ms_T, T, _len_T);
	} else if (T == NULL) {
		ms->ms_T = NULL;
	} else {
		sgx_ocfree();
		return SGX_ERROR_INVALID_PARAMETER;
	}
	
	ms->ms_dumb = dumb;
	ms->ms_N2 = N2;
	status = sgx_ocall(24, ms);

	if (retval) *retval = ms->ms_retval;
	if (T) memcpy((void*)T, ms->ms_T, _len_T);

	sgx_ocfree();
	return status;
}

sgx_status_t SGX_CDECL ocall_syscall_3_NToPo(long int* retval, long int sysno, long int N1, void* T, long int dumb, int* N2)
{
	sgx_status_t status = SGX_SUCCESS;
	size_t _len_T = dumb;
	size_t _len_N2 = sizeof(*N2);

	ms_ocall_syscall_3_NToPo_t* ms = NULL;
	size_t ocalloc_size = sizeof(ms_ocall_syscall_3_NToPo_t);
	void *__tmp = NULL;

	ocalloc_size += (T != NULL && sgx_is_within_enclave(T, _len_T)) ? _len_T : 0;
	ocalloc_size += (N2 != NULL && sgx_is_within_enclave(N2, _len_N2)) ? _len_N2 : 0;

	__tmp = sgx_ocalloc(ocalloc_size);
	if (__tmp == NULL) {
		sgx_ocfree();
		return SGX_ERROR_UNEXPECTED;
	}
	ms = (ms_ocall_syscall_3_NToPo_t*)__tmp;
	__tmp = (void *)((size_t)__tmp + sizeof(ms_ocall_syscall_3_NToPo_t));

	ms->ms_sysno = sysno;
	ms->ms_N1 = N1;
	if (T != NULL && sgx_is_within_enclave(T, _len_T)) {
		ms->ms_T = (void*)__tmp;
		__tmp = (void *)((size_t)__tmp + _len_T);
		memcpy(ms->ms_T, T, _len_T);
	} else if (T == NULL) {
		ms->ms_T = NULL;
	} else {
		sgx_ocfree();
		return SGX_ERROR_INVALID_PARAMETER;
	}
	
	ms->ms_dumb = dumb;
	if (N2 != NULL && sgx_is_within_enclave(N2, _len_N2)) {
		ms->ms_N2 = (int*)__tmp;
		__tmp = (void *)((size_t)__tmp + _len_N2);
		memcpy(ms->ms_N2, N2, _len_N2);
	} else if (N2 == NULL) {
		ms->ms_N2 = NULL;
	} else {
		sgx_ocfree();
		return SGX_ERROR_INVALID_PARAMETER;
	}
	
	status = sgx_ocall(25, ms);

	if (retval) *retval = ms->ms_retval;
	if (T) memcpy((void*)T, ms->ms_T, _len_T);
	if (N2) memcpy((void*)N2, ms->ms_N2, _len_N2);

	sgx_ocfree();
	return status;
}

sgx_status_t SGX_CDECL ocall_syscall_3_NTiN(long int* retval, long int sysno, long int N1, void* T, long int dumb, long int N2)
{
	sgx_status_t status = SGX_SUCCESS;
	size_t _len_T = dumb;

	ms_ocall_syscall_3_NTiN_t* ms = NULL;
	size_t ocalloc_size = sizeof(ms_ocall_syscall_3_NTiN_t);
	void *__tmp = NULL;

	ocalloc_size += (T != NULL && sgx_is_within_enclave(T, _len_T)) ? _len_T : 0;

	__tmp = sgx_ocalloc(ocalloc_size);
	if (__tmp == NULL) {
		sgx_ocfree();
		return SGX_ERROR_UNEXPECTED;
	}
	ms = (ms_ocall_syscall_3_NTiN_t*)__tmp;
	__tmp = (void *)((size_t)__tmp + sizeof(ms_ocall_syscall_3_NTiN_t));

	ms->ms_sysno = sysno;
	ms->ms_N1 = N1;
	if (T != NULL && sgx_is_within_enclave(T, _len_T)) {
		ms->ms_T = (void*)__tmp;
		__tmp = (void *)((size_t)__tmp + _len_T);
		memcpy(ms->ms_T, T, _len_T);
	} else if (T == NULL) {
		ms->ms_T = NULL;
	} else {
		sgx_ocfree();
		return SGX_ERROR_INVALID_PARAMETER;
	}
	
	ms->ms_dumb = dumb;
	ms->ms_N2 = N2;
	status = sgx_ocall(26, ms);

	if (retval) *retval = ms->ms_retval;

	sgx_ocfree();
	return status;
}

sgx_status_t SGX_CDECL ocall_syscall_3_ToNN(long int* retval, long int sysno, void* T, long int dumb, long int N1, long int N2)
{
	sgx_status_t status = SGX_SUCCESS;
	size_t _len_T = dumb;

	ms_ocall_syscall_3_ToNN_t* ms = NULL;
	size_t ocalloc_size = sizeof(ms_ocall_syscall_3_ToNN_t);
	void *__tmp = NULL;

	ocalloc_size += (T != NULL && sgx_is_within_enclave(T, _len_T)) ? _len_T : 0;

	__tmp = sgx_ocalloc(ocalloc_size);
	if (__tmp == NULL) {
		sgx_ocfree();
		return SGX_ERROR_UNEXPECTED;
	}
	ms = (ms_ocall_syscall_3_ToNN_t*)__tmp;
	__tmp = (void *)((size_t)__tmp + sizeof(ms_ocall_syscall_3_ToNN_t));

	ms->ms_sysno = sysno;
	if (T != NULL && sgx_is_within_enclave(T, _len_T)) {
		ms->ms_T = (void*)__tmp;
		__tmp = (void *)((size_t)__tmp + _len_T);
		memcpy(ms->ms_T, T, _len_T);
	} else if (T == NULL) {
		ms->ms_T = NULL;
	} else {
		sgx_ocfree();
		return SGX_ERROR_INVALID_PARAMETER;
	}
	
	ms->ms_dumb = dumb;
	ms->ms_N1 = N1;
	ms->ms_N2 = N2;
	status = sgx_ocall(27, ms);

	if (retval) *retval = ms->ms_retval;
	if (T) memcpy((void*)T, ms->ms_T, _len_T);

	sgx_ocfree();
	return status;
}

sgx_status_t SGX_CDECL ocall_syscall_3_NTiTo(long int* retval, long int sysno, long int N1, void* T1, long int dumb1, void* T2, long int dumb2)
{
	sgx_status_t status = SGX_SUCCESS;
	size_t _len_T1 = dumb1;
	size_t _len_T2 = dumb2;

	ms_ocall_syscall_3_NTiTo_t* ms = NULL;
	size_t ocalloc_size = sizeof(ms_ocall_syscall_3_NTiTo_t);
	void *__tmp = NULL;

	ocalloc_size += (T1 != NULL && sgx_is_within_enclave(T1, _len_T1)) ? _len_T1 : 0;
	ocalloc_size += (T2 != NULL && sgx_is_within_enclave(T2, _len_T2)) ? _len_T2 : 0;

	__tmp = sgx_ocalloc(ocalloc_size);
	if (__tmp == NULL) {
		sgx_ocfree();
		return SGX_ERROR_UNEXPECTED;
	}
	ms = (ms_ocall_syscall_3_NTiTo_t*)__tmp;
	__tmp = (void *)((size_t)__tmp + sizeof(ms_ocall_syscall_3_NTiTo_t));

	ms->ms_sysno = sysno;
	ms->ms_N1 = N1;
	if (T1 != NULL && sgx_is_within_enclave(T1, _len_T1)) {
		ms->ms_T1 = (void*)__tmp;
		__tmp = (void *)((size_t)__tmp + _len_T1);
		memcpy(ms->ms_T1, T1, _len_T1);
	} else if (T1 == NULL) {
		ms->ms_T1 = NULL;
	} else {
		sgx_ocfree();
		return SGX_ERROR_INVALID_PARAMETER;
	}
	
	ms->ms_dumb1 = dumb1;
	if (T2 != NULL && sgx_is_within_enclave(T2, _len_T2)) {
		ms->ms_T2 = (void*)__tmp;
		__tmp = (void *)((size_t)__tmp + _len_T2);
		memset(ms->ms_T2, 0, _len_T2);
	} else if (T2 == NULL) {
		ms->ms_T2 = NULL;
	} else {
		sgx_ocfree();
		return SGX_ERROR_INVALID_PARAMETER;
	}
	
	ms->ms_dumb2 = dumb2;
	status = sgx_ocall(28, ms);

	if (retval) *retval = ms->ms_retval;
	if (T2) memcpy((void*)T2, ms->ms_T2, _len_T2);

	sgx_ocfree();
	return status;
}

sgx_status_t SGX_CDECL ocall_syscall_3_NNTi(long int* retval, long int sysno, long int N1, long int N2, void* T1, long int dumb1)
{
	sgx_status_t status = SGX_SUCCESS;
	size_t _len_T1 = dumb1;

	ms_ocall_syscall_3_NNTi_t* ms = NULL;
	size_t ocalloc_size = sizeof(ms_ocall_syscall_3_NNTi_t);
	void *__tmp = NULL;

	ocalloc_size += (T1 != NULL && sgx_is_within_enclave(T1, _len_T1)) ? _len_T1 : 0;

	__tmp = sgx_ocalloc(ocalloc_size);
	if (__tmp == NULL) {
		sgx_ocfree();
		return SGX_ERROR_UNEXPECTED;
	}
	ms = (ms_ocall_syscall_3_NNTi_t*)__tmp;
	__tmp = (void *)((size_t)__tmp + sizeof(ms_ocall_syscall_3_NNTi_t));

	ms->ms_sysno = sysno;
	ms->ms_N1 = N1;
	ms->ms_N2 = N2;
	if (T1 != NULL && sgx_is_within_enclave(T1, _len_T1)) {
		ms->ms_T1 = (void*)__tmp;
		__tmp = (void *)((size_t)__tmp + _len_T1);
		memcpy(ms->ms_T1, T1, _len_T1);
	} else if (T1 == NULL) {
		ms->ms_T1 = NULL;
	} else {
		sgx_ocfree();
		return SGX_ERROR_INVALID_PARAMETER;
	}
	
	ms->ms_dumb1 = dumb1;
	status = sgx_ocall(29, ms);

	if (retval) *retval = ms->ms_retval;

	sgx_ocfree();
	return status;
}

sgx_status_t SGX_CDECL ocall_syscall_3_NNTo(long int* retval, long int sysno, long int N1, long int N2, void* T1, long int dumb1)
{
	sgx_status_t status = SGX_SUCCESS;
	size_t _len_T1 = dumb1;

	ms_ocall_syscall_3_NNTo_t* ms = NULL;
	size_t ocalloc_size = sizeof(ms_ocall_syscall_3_NNTo_t);
	void *__tmp = NULL;

	ocalloc_size += (T1 != NULL && sgx_is_within_enclave(T1, _len_T1)) ? _len_T1 : 0;

	__tmp = sgx_ocalloc(ocalloc_size);
	if (__tmp == NULL) {
		sgx_ocfree();
		return SGX_ERROR_UNEXPECTED;
	}
	ms = (ms_ocall_syscall_3_NNTo_t*)__tmp;
	__tmp = (void *)((size_t)__tmp + sizeof(ms_ocall_syscall_3_NNTo_t));

	ms->ms_sysno = sysno;
	ms->ms_N1 = N1;
	ms->ms_N2 = N2;
	if (T1 != NULL && sgx_is_within_enclave(T1, _len_T1)) {
		ms->ms_T1 = (void*)__tmp;
		__tmp = (void *)((size_t)__tmp + _len_T1);
		memset(ms->ms_T1, 0, _len_T1);
	} else if (T1 == NULL) {
		ms->ms_T1 = NULL;
	} else {
		sgx_ocfree();
		return SGX_ERROR_INVALID_PARAMETER;
	}
	
	ms->ms_dumb1 = dumb1;
	status = sgx_ocall(30, ms);

	if (retval) *retval = ms->ms_retval;
	if (T1) memcpy((void*)T1, ms->ms_T1, _len_T1);

	sgx_ocfree();
	return status;
}

sgx_status_t SGX_CDECL ocall_syscall_4_NNNN(long int* retval, long int sysno, long int N1, long int N2, long int N3, long int N4)
{
	sgx_status_t status = SGX_SUCCESS;

	ms_ocall_syscall_4_NNNN_t* ms = NULL;
	size_t ocalloc_size = sizeof(ms_ocall_syscall_4_NNNN_t);
	void *__tmp = NULL;


	__tmp = sgx_ocalloc(ocalloc_size);
	if (__tmp == NULL) {
		sgx_ocfree();
		return SGX_ERROR_UNEXPECTED;
	}
	ms = (ms_ocall_syscall_4_NNNN_t*)__tmp;
	__tmp = (void *)((size_t)__tmp + sizeof(ms_ocall_syscall_4_NNNN_t));

	ms->ms_sysno = sysno;
	ms->ms_N1 = N1;
	ms->ms_N2 = N2;
	ms->ms_N3 = N3;
	ms->ms_N4 = N4;
	status = sgx_ocall(31, ms);

	if (retval) *retval = ms->ms_retval;

	sgx_ocfree();
	return status;
}

sgx_status_t SGX_CDECL ocall_syscall_4_NToNN(long int* retval, long int sysno, long int N1, void* T, long int dumb, long int N2, long int N3)
{
	sgx_status_t status = SGX_SUCCESS;
	size_t _len_T = dumb;

	ms_ocall_syscall_4_NToNN_t* ms = NULL;
	size_t ocalloc_size = sizeof(ms_ocall_syscall_4_NToNN_t);
	void *__tmp = NULL;

	ocalloc_size += (T != NULL && sgx_is_within_enclave(T, _len_T)) ? _len_T : 0;

	__tmp = sgx_ocalloc(ocalloc_size);
	if (__tmp == NULL) {
		sgx_ocfree();
		return SGX_ERROR_UNEXPECTED;
	}
	ms = (ms_ocall_syscall_4_NToNN_t*)__tmp;
	__tmp = (void *)((size_t)__tmp + sizeof(ms_ocall_syscall_4_NToNN_t));

	ms->ms_sysno = sysno;
	ms->ms_N1 = N1;
	if (T != NULL && sgx_is_within_enclave(T, _len_T)) {
		ms->ms_T = (void*)__tmp;
		__tmp = (void *)((size_t)__tmp + _len_T);
		memset(ms->ms_T, 0, _len_T);
	} else if (T == NULL) {
		ms->ms_T = NULL;
	} else {
		sgx_ocfree();
		return SGX_ERROR_INVALID_PARAMETER;
	}
	
	ms->ms_dumb = dumb;
	ms->ms_N2 = N2;
	ms->ms_N3 = N3;
	status = sgx_ocall(32, ms);

	if (retval) *retval = ms->ms_retval;
	if (T) memcpy((void*)T, ms->ms_T, _len_T);

	sgx_ocfree();
	return status;
}

sgx_status_t SGX_CDECL ocall_syscall_4_NTiToN(long int* retval, long int sysno, long int N1, void* Ti, long int l1, void* To, long int l2, long int N2)
{
	sgx_status_t status = SGX_SUCCESS;
	size_t _len_Ti = l1;
	size_t _len_To = l2;

	ms_ocall_syscall_4_NTiToN_t* ms = NULL;
	size_t ocalloc_size = sizeof(ms_ocall_syscall_4_NTiToN_t);
	void *__tmp = NULL;

	ocalloc_size += (Ti != NULL && sgx_is_within_enclave(Ti, _len_Ti)) ? _len_Ti : 0;
	ocalloc_size += (To != NULL && sgx_is_within_enclave(To, _len_To)) ? _len_To : 0;

	__tmp = sgx_ocalloc(ocalloc_size);
	if (__tmp == NULL) {
		sgx_ocfree();
		return SGX_ERROR_UNEXPECTED;
	}
	ms = (ms_ocall_syscall_4_NTiToN_t*)__tmp;
	__tmp = (void *)((size_t)__tmp + sizeof(ms_ocall_syscall_4_NTiToN_t));

	ms->ms_sysno = sysno;
	ms->ms_N1 = N1;
	if (Ti != NULL && sgx_is_within_enclave(Ti, _len_Ti)) {
		ms->ms_Ti = (void*)__tmp;
		__tmp = (void *)((size_t)__tmp + _len_Ti);
		memcpy(ms->ms_Ti, Ti, _len_Ti);
	} else if (Ti == NULL) {
		ms->ms_Ti = NULL;
	} else {
		sgx_ocfree();
		return SGX_ERROR_INVALID_PARAMETER;
	}
	
	ms->ms_l1 = l1;
	if (To != NULL && sgx_is_within_enclave(To, _len_To)) {
		ms->ms_To = (void*)__tmp;
		__tmp = (void *)((size_t)__tmp + _len_To);
		memset(ms->ms_To, 0, _len_To);
	} else if (To == NULL) {
		ms->ms_To = NULL;
	} else {
		sgx_ocfree();
		return SGX_ERROR_INVALID_PARAMETER;
	}
	
	ms->ms_l2 = l2;
	ms->ms_N2 = N2;
	status = sgx_ocall(33, ms);

	if (retval) *retval = ms->ms_retval;
	if (To) memcpy((void*)To, ms->ms_To, _len_To);

	sgx_ocfree();
	return status;
}

sgx_status_t SGX_CDECL ocall_syscall_5_NNNNN(long int* retval, long int sysno, long int N1, long int N2, long int N3, long int N4, long int N5)
{
	sgx_status_t status = SGX_SUCCESS;

	ms_ocall_syscall_5_NNNNN_t* ms = NULL;
	size_t ocalloc_size = sizeof(ms_ocall_syscall_5_NNNNN_t);
	void *__tmp = NULL;


	__tmp = sgx_ocalloc(ocalloc_size);
	if (__tmp == NULL) {
		sgx_ocfree();
		return SGX_ERROR_UNEXPECTED;
	}
	ms = (ms_ocall_syscall_5_NNNNN_t*)__tmp;
	__tmp = (void *)((size_t)__tmp + sizeof(ms_ocall_syscall_5_NNNNN_t));

	ms->ms_sysno = sysno;
	ms->ms_N1 = N1;
	ms->ms_N2 = N2;
	ms->ms_N3 = N3;
	ms->ms_N4 = N4;
	ms->ms_N5 = N5;
	status = sgx_ocall(34, ms);

	if (retval) *retval = ms->ms_retval;

	sgx_ocfree();
	return status;
}

sgx_status_t SGX_CDECL ocall_syscall_5_NNNVioN(long int* retval, long int sysno, long int N1, long int N2, long int N3, void* V1, long int N5)
{
	sgx_status_t status = SGX_SUCCESS;
	size_t _len_V1 = N5;

	ms_ocall_syscall_5_NNNVioN_t* ms = NULL;
	size_t ocalloc_size = sizeof(ms_ocall_syscall_5_NNNVioN_t);
	void *__tmp = NULL;

	ocalloc_size += (V1 != NULL && sgx_is_within_enclave(V1, _len_V1)) ? _len_V1 : 0;

	__tmp = sgx_ocalloc(ocalloc_size);
	if (__tmp == NULL) {
		sgx_ocfree();
		return SGX_ERROR_UNEXPECTED;
	}
	ms = (ms_ocall_syscall_5_NNNVioN_t*)__tmp;
	__tmp = (void *)((size_t)__tmp + sizeof(ms_ocall_syscall_5_NNNVioN_t));

	ms->ms_sysno = sysno;
	ms->ms_N1 = N1;
	ms->ms_N2 = N2;
	ms->ms_N3 = N3;
	if (V1 != NULL && sgx_is_within_enclave(V1, _len_V1)) {
		ms->ms_V1 = (void*)__tmp;
		__tmp = (void *)((size_t)__tmp + _len_V1);
		memcpy(ms->ms_V1, V1, _len_V1);
	} else if (V1 == NULL) {
		ms->ms_V1 = NULL;
	} else {
		sgx_ocfree();
		return SGX_ERROR_INVALID_PARAMETER;
	}
	
	ms->ms_N5 = N5;
	status = sgx_ocall(35, ms);

	if (retval) *retval = ms->ms_retval;
	if (V1) memcpy((void*)V1, ms->ms_V1, _len_V1);

	sgx_ocfree();
	return status;
}

sgx_status_t SGX_CDECL ocall_syscall_5_NNNVioPio(long int* retval, long int sysno, long int N1, long int N2, long int N3, void* V1, int* N5)
{
	sgx_status_t status = SGX_SUCCESS;
	size_t _len_V1 = 128;
	size_t _len_N5 = sizeof(*N5);

	ms_ocall_syscall_5_NNNVioPio_t* ms = NULL;
	size_t ocalloc_size = sizeof(ms_ocall_syscall_5_NNNVioPio_t);
	void *__tmp = NULL;

	ocalloc_size += (V1 != NULL && sgx_is_within_enclave(V1, _len_V1)) ? _len_V1 : 0;
	ocalloc_size += (N5 != NULL && sgx_is_within_enclave(N5, _len_N5)) ? _len_N5 : 0;

	__tmp = sgx_ocalloc(ocalloc_size);
	if (__tmp == NULL) {
		sgx_ocfree();
		return SGX_ERROR_UNEXPECTED;
	}
	ms = (ms_ocall_syscall_5_NNNVioPio_t*)__tmp;
	__tmp = (void *)((size_t)__tmp + sizeof(ms_ocall_syscall_5_NNNVioPio_t));

	ms->ms_sysno = sysno;
	ms->ms_N1 = N1;
	ms->ms_N2 = N2;
	ms->ms_N3 = N3;
	if (V1 != NULL && sgx_is_within_enclave(V1, _len_V1)) {
		ms->ms_V1 = (void*)__tmp;
		__tmp = (void *)((size_t)__tmp + _len_V1);
		memcpy(ms->ms_V1, V1, _len_V1);
	} else if (V1 == NULL) {
		ms->ms_V1 = NULL;
	} else {
		sgx_ocfree();
		return SGX_ERROR_INVALID_PARAMETER;
	}
	
	if (N5 != NULL && sgx_is_within_enclave(N5, _len_N5)) {
		ms->ms_N5 = (int*)__tmp;
		__tmp = (void *)((size_t)__tmp + _len_N5);
		memcpy(ms->ms_N5, N5, _len_N5);
	} else if (N5 == NULL) {
		ms->ms_N5 = NULL;
	} else {
		sgx_ocfree();
		return SGX_ERROR_INVALID_PARAMETER;
	}
	
	status = sgx_ocall(36, ms);

	if (retval) *retval = ms->ms_retval;
	if (V1) memcpy((void*)V1, ms->ms_V1, _len_V1);
	if (N5) memcpy((void*)N5, ms->ms_N5, _len_N5);

	sgx_ocfree();
	return status;
}

sgx_status_t SGX_CDECL ocall_syscall_6_NNNNNN(long int* retval, long int sysno, long int N1, long int N2, long int N3, long int N4, long int N5, long int N6)
{
	sgx_status_t status = SGX_SUCCESS;

	ms_ocall_syscall_6_NNNNNN_t* ms = NULL;
	size_t ocalloc_size = sizeof(ms_ocall_syscall_6_NNNNNN_t);
	void *__tmp = NULL;


	__tmp = sgx_ocalloc(ocalloc_size);
	if (__tmp == NULL) {
		sgx_ocfree();
		return SGX_ERROR_UNEXPECTED;
	}
	ms = (ms_ocall_syscall_6_NNNNNN_t*)__tmp;
	__tmp = (void *)((size_t)__tmp + sizeof(ms_ocall_syscall_6_NNNNNN_t));

	ms->ms_sysno = sysno;
	ms->ms_N1 = N1;
	ms->ms_N2 = N2;
	ms->ms_N3 = N3;
	ms->ms_N4 = N4;
	ms->ms_N5 = N5;
	ms->ms_N6 = N6;
	status = sgx_ocall(37, ms);

	if (retval) *retval = ms->ms_retval;

	sgx_ocfree();
	return status;
}

sgx_status_t SGX_CDECL ocall_syscall_6_PoNNTiPoN(long int* retval, long int sysno, int* V1, long int N1, long int N2, void* T, long int l, int* V2, long int N3)
{
	sgx_status_t status = SGX_SUCCESS;
	size_t _len_V1 = sizeof(*V1);
	size_t _len_T = l;
	size_t _len_V2 = sizeof(*V2);

	ms_ocall_syscall_6_PoNNTiPoN_t* ms = NULL;
	size_t ocalloc_size = sizeof(ms_ocall_syscall_6_PoNNTiPoN_t);
	void *__tmp = NULL;

	ocalloc_size += (V1 != NULL && sgx_is_within_enclave(V1, _len_V1)) ? _len_V1 : 0;
	ocalloc_size += (T != NULL && sgx_is_within_enclave(T, _len_T)) ? _len_T : 0;
	ocalloc_size += (V2 != NULL && sgx_is_within_enclave(V2, _len_V2)) ? _len_V2 : 0;

	__tmp = sgx_ocalloc(ocalloc_size);
	if (__tmp == NULL) {
		sgx_ocfree();
		return SGX_ERROR_UNEXPECTED;
	}
	ms = (ms_ocall_syscall_6_PoNNTiPoN_t*)__tmp;
	__tmp = (void *)((size_t)__tmp + sizeof(ms_ocall_syscall_6_PoNNTiPoN_t));

	ms->ms_sysno = sysno;
	if (V1 != NULL && sgx_is_within_enclave(V1, _len_V1)) {
		ms->ms_V1 = (int*)__tmp;
		__tmp = (void *)((size_t)__tmp + _len_V1);
		memset(ms->ms_V1, 0, _len_V1);
	} else if (V1 == NULL) {
		ms->ms_V1 = NULL;
	} else {
		sgx_ocfree();
		return SGX_ERROR_INVALID_PARAMETER;
	}
	
	ms->ms_N1 = N1;
	ms->ms_N2 = N2;
	if (T != NULL && sgx_is_within_enclave(T, _len_T)) {
		ms->ms_T = (void*)__tmp;
		__tmp = (void *)((size_t)__tmp + _len_T);
		memcpy(ms->ms_T, T, _len_T);
	} else if (T == NULL) {
		ms->ms_T = NULL;
	} else {
		sgx_ocfree();
		return SGX_ERROR_INVALID_PARAMETER;
	}
	
	ms->ms_l = l;
	if (V2 != NULL && sgx_is_within_enclave(V2, _len_V2)) {
		ms->ms_V2 = (int*)__tmp;
		__tmp = (void *)((size_t)__tmp + _len_V2);
		memset(ms->ms_V2, 0, _len_V2);
	} else if (V2 == NULL) {
		ms->ms_V2 = NULL;
	} else {
		sgx_ocfree();
		return SGX_ERROR_INVALID_PARAMETER;
	}
	
	ms->ms_N3 = N3;
	status = sgx_ocall(38, ms);

	if (retval) *retval = ms->ms_retval;
	if (V1) memcpy((void*)V1, ms->ms_V1, _len_V1);
	if (V2) memcpy((void*)V2, ms->ms_V2, _len_V2);

	sgx_ocfree();
	return status;
}

sgx_status_t SGX_CDECL ocall_syscall_6_NVoNNToN(long int* retval, long int sysno, long int N1, void* V1, long int N2, long int N3, void* T1, int N4)
{
	sgx_status_t status = SGX_SUCCESS;
	size_t _len_V1 = N2;
	size_t _len_T1 = N4;

	ms_ocall_syscall_6_NVoNNToN_t* ms = NULL;
	size_t ocalloc_size = sizeof(ms_ocall_syscall_6_NVoNNToN_t);
	void *__tmp = NULL;

	ocalloc_size += (V1 != NULL && sgx_is_within_enclave(V1, _len_V1)) ? _len_V1 : 0;
	ocalloc_size += (T1 != NULL && sgx_is_within_enclave(T1, _len_T1)) ? _len_T1 : 0;

	__tmp = sgx_ocalloc(ocalloc_size);
	if (__tmp == NULL) {
		sgx_ocfree();
		return SGX_ERROR_UNEXPECTED;
	}
	ms = (ms_ocall_syscall_6_NVoNNToN_t*)__tmp;
	__tmp = (void *)((size_t)__tmp + sizeof(ms_ocall_syscall_6_NVoNNToN_t));

	ms->ms_sysno = sysno;
	ms->ms_N1 = N1;
	if (V1 != NULL && sgx_is_within_enclave(V1, _len_V1)) {
		ms->ms_V1 = (void*)__tmp;
		__tmp = (void *)((size_t)__tmp + _len_V1);
		memcpy(ms->ms_V1, V1, _len_V1);
	} else if (V1 == NULL) {
		ms->ms_V1 = NULL;
	} else {
		sgx_ocfree();
		return SGX_ERROR_INVALID_PARAMETER;
	}
	
	ms->ms_N2 = N2;
	ms->ms_N3 = N3;
	if (T1 != NULL && sgx_is_within_enclave(T1, _len_T1)) {
		ms->ms_T1 = (void*)__tmp;
		__tmp = (void *)((size_t)__tmp + _len_T1);
		memcpy(ms->ms_T1, T1, _len_T1);
	} else if (T1 == NULL) {
		ms->ms_T1 = NULL;
	} else {
		sgx_ocfree();
		return SGX_ERROR_INVALID_PARAMETER;
	}
	
	ms->ms_N4 = N4;
	status = sgx_ocall(39, ms);

	if (retval) *retval = ms->ms_retval;
	if (V1) memcpy((void*)V1, ms->ms_V1, _len_V1);
	if (T1) memcpy((void*)T1, ms->ms_T1, _len_T1);

	sgx_ocfree();
	return status;
}

sgx_status_t SGX_CDECL ocall_syscall_6_NVoNNToPo(long int* retval, long int sysno, long int N1, void* V1, long int N2, long int N3, void* T1, int* N4)
{
	sgx_status_t status = SGX_SUCCESS;
	size_t _len_V1 = N2;
	size_t _len_T1 = 128;
	size_t _len_N4 = sizeof(*N4);

	ms_ocall_syscall_6_NVoNNToPo_t* ms = NULL;
	size_t ocalloc_size = sizeof(ms_ocall_syscall_6_NVoNNToPo_t);
	void *__tmp = NULL;

	ocalloc_size += (V1 != NULL && sgx_is_within_enclave(V1, _len_V1)) ? _len_V1 : 0;
	ocalloc_size += (T1 != NULL && sgx_is_within_enclave(T1, _len_T1)) ? _len_T1 : 0;
	ocalloc_size += (N4 != NULL && sgx_is_within_enclave(N4, _len_N4)) ? _len_N4 : 0;

	__tmp = sgx_ocalloc(ocalloc_size);
	if (__tmp == NULL) {
		sgx_ocfree();
		return SGX_ERROR_UNEXPECTED;
	}
	ms = (ms_ocall_syscall_6_NVoNNToPo_t*)__tmp;
	__tmp = (void *)((size_t)__tmp + sizeof(ms_ocall_syscall_6_NVoNNToPo_t));

	ms->ms_sysno = sysno;
	ms->ms_N1 = N1;
	if (V1 != NULL && sgx_is_within_enclave(V1, _len_V1)) {
		ms->ms_V1 = (void*)__tmp;
		__tmp = (void *)((size_t)__tmp + _len_V1);
		memcpy(ms->ms_V1, V1, _len_V1);
	} else if (V1 == NULL) {
		ms->ms_V1 = NULL;
	} else {
		sgx_ocfree();
		return SGX_ERROR_INVALID_PARAMETER;
	}
	
	ms->ms_N2 = N2;
	ms->ms_N3 = N3;
	if (T1 != NULL && sgx_is_within_enclave(T1, _len_T1)) {
		ms->ms_T1 = (void*)__tmp;
		__tmp = (void *)((size_t)__tmp + _len_T1);
		memcpy(ms->ms_T1, T1, _len_T1);
	} else if (T1 == NULL) {
		ms->ms_T1 = NULL;
	} else {
		sgx_ocfree();
		return SGX_ERROR_INVALID_PARAMETER;
	}
	
	if (N4 != NULL && sgx_is_within_enclave(N4, _len_N4)) {
		ms->ms_N4 = (int*)__tmp;
		__tmp = (void *)((size_t)__tmp + _len_N4);
		memcpy(ms->ms_N4, N4, _len_N4);
	} else if (N4 == NULL) {
		ms->ms_N4 = NULL;
	} else {
		sgx_ocfree();
		return SGX_ERROR_INVALID_PARAMETER;
	}
	
	status = sgx_ocall(40, ms);

	if (retval) *retval = ms->ms_retval;
	if (V1) memcpy((void*)V1, ms->ms_V1, _len_V1);
	if (T1) memcpy((void*)T1, ms->ms_T1, _len_T1);
	if (N4) memcpy((void*)N4, ms->ms_N4, _len_N4);

	sgx_ocfree();
	return status;
}

sgx_status_t SGX_CDECL sgxapp_reg_sighandler(int signum)
{
	sgx_status_t status = SGX_SUCCESS;

	ms_sgxapp_reg_sighandler_t* ms = NULL;
	size_t ocalloc_size = sizeof(ms_sgxapp_reg_sighandler_t);
	void *__tmp = NULL;


	__tmp = sgx_ocalloc(ocalloc_size);
	if (__tmp == NULL) {
		sgx_ocfree();
		return SGX_ERROR_UNEXPECTED;
	}
	ms = (ms_sgxapp_reg_sighandler_t*)__tmp;
	__tmp = (void *)((size_t)__tmp + sizeof(ms_sgxapp_reg_sighandler_t));

	ms->ms_signum = signum;
	status = sgx_ocall(41, ms);


	sgx_ocfree();
	return status;
}

sgx_status_t SGX_CDECL sgx_oc_cpuidex(int cpuinfo[4], int leaf, int subleaf)
{
	sgx_status_t status = SGX_SUCCESS;
	size_t _len_cpuinfo = 4 * sizeof(*cpuinfo);

	ms_sgx_oc_cpuidex_t* ms = NULL;
	size_t ocalloc_size = sizeof(ms_sgx_oc_cpuidex_t);
	void *__tmp = NULL;

	ocalloc_size += (cpuinfo != NULL && sgx_is_within_enclave(cpuinfo, _len_cpuinfo)) ? _len_cpuinfo : 0;

	__tmp = sgx_ocalloc(ocalloc_size);
	if (__tmp == NULL) {
		sgx_ocfree();
		return SGX_ERROR_UNEXPECTED;
	}
	ms = (ms_sgx_oc_cpuidex_t*)__tmp;
	__tmp = (void *)((size_t)__tmp + sizeof(ms_sgx_oc_cpuidex_t));

	if (cpuinfo != NULL && sgx_is_within_enclave(cpuinfo, _len_cpuinfo)) {
		ms->ms_cpuinfo = (int*)__tmp;
		__tmp = (void *)((size_t)__tmp + _len_cpuinfo);
		memset(ms->ms_cpuinfo, 0, _len_cpuinfo);
	} else if (cpuinfo == NULL) {
		ms->ms_cpuinfo = NULL;
	} else {
		sgx_ocfree();
		return SGX_ERROR_INVALID_PARAMETER;
	}
	
	ms->ms_leaf = leaf;
	ms->ms_subleaf = subleaf;
	status = sgx_ocall(42, ms);

	if (cpuinfo) memcpy((void*)cpuinfo, ms->ms_cpuinfo, _len_cpuinfo);

	sgx_ocfree();
	return status;
}

