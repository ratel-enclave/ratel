#ifndef _SGX_THREAD_STUB_H__
#define _SGX_THREAD_STUB_H__

typedef struct _sgx_thread_priv_params {
    int flags;
    size_t child_stack; 
    size_t ptid;
    size_t ctid;
    size_t pcid_inaddr;
    size_t newtls;

    size_t thread_id;
    size_t current_eid;
} sgx_thread_priv_params;

typedef struct _sgx_dbi_tls_helper_t {
    size_t thread_id;
    volatile int first_init;
    
    struct _sgx_thread_priv_params trd_priv_params;
    struct _sgx_dbi_tls_helper_t *next_tls_helper_t;

} sgx_dbi_tls_helper_t;

void sgx_thread_stub(sgx_dbi_tls_helper_t *tls_helper_table);

#endif /* _SGX_THREAD_STUB_H__ */