 /* file: test_extern_c.h */
 
#ifndef __THREAD_EXTERN_C_H__
#define __THREAD_EXTERN_C_H__

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
 
#ifdef  __cplusplus
extern "C" {
#endif
 
extern long thread_setup_agent(sgx_thread_priv_params *trd_params);
 
#ifdef  __cplusplus
}
#endif  /* end of __cplusplus */
 
#endif /* __THREAD_EXTERN_C_H__ */