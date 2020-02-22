#include <thread>
#include <iostream>

#include "sgx_error.h"   /* sgx_status_t */
#include "sgx_eid.h"     /* sgx_enclave_id_t */

#include "thread_helper.h"
#include "dynamorio_u.h"

#include <unistd.h>
#include <assert.h>
#include <sys/mman.h>
#include <pthread.h>

#define SYS_gettid     186
#define MAX_THREAD_NUM_EACH_ENCLAVE 10

using namespace std;

// Global data
pthread_mutex_t lock_m = PTHREAD_MUTEX_INITIALIZER;
sgx_thread_priv_params trd_priv_params[MAX_THREAD_NUM_EACH_ENCLAVE] = {0, 0, 0, 0, 0, 0, 0, 0};
volatile int g_trd_num = 0;
static volatile long tid_child = 0;

extern "C" long set_tid_ntrd(long sysno);

static inline long get_tid_ntrd()
{
    return tid_child;
}

static inline void do_agent()
{
    sgx_dbi_tls_helper_t *tls_helper_table;
    sgx_status_t ret = SGX_SUCCESS;
    int retval = 0;

    tls_helper_table = (sgx_dbi_tls_helper_t *)mmap(NULL, sizeof(sgx_dbi_tls_helper_t) + 1, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0);
    assert(NULL != tls_helper_table);
    memset(tls_helper_table, 0, sizeof(sgx_dbi_tls_helper_t) + 1);

    pthread_mutex_lock(&lock_m);
    int trd_num = g_trd_num;
    g_trd_num++;

    memcpy(&tls_helper_table->trd_priv_params, &trd_priv_params[trd_num], sizeof(sgx_thread_priv_params));
    
    while(!tls_helper_table->thread_id) {
        tls_helper_table->thread_id = set_tid_ntrd(SYS_gettid); 
        assert(tls_helper_table->thread_id && "wrong thread id!");
        tid_child = tls_helper_table->thread_id;
    }
    pthread_mutex_unlock(&lock_m);

    tls_helper_table->trd_priv_params.thread_id = tls_helper_table->thread_id;
    tls_helper_table->first_init = 1;
    tls_helper_table->next_tls_helper_t = NULL;

    ret = ecall_thread_entry(tls_helper_table->trd_priv_params.current_eid, &retval, tls_helper_table, sizeof(sgx_dbi_tls_helper_t));
    if (SGX_SUCCESS != ret)
    {
        printf("SGX_ERROR_ENCLAVE_LOST, ret = %d\n", ret);  //cdd --
    }
    
    //NOT REACHED
    assert(false && "NOT REACHED!");
}

static inline long thread_setup(sgx_thread_priv_params *trd_params)
{
    int ret = -1;
    thread trd;
    int trd_num = 0;

    pthread_mutex_lock(&lock_m);
    trd_num = g_trd_num;
    memcpy(&trd_priv_params[trd_num], trd_params, sizeof(sgx_thread_priv_params));
    pthread_mutex_unlock(&lock_m);

    // Create multiple threads
    trd = thread(do_agent);
    trd.detach(); 

    while(!tid_child) ;     /* waiting new thread id assigned */

    sleep(1);   //cdd --

    pthread_mutex_lock(&lock_m);
    ret = tid_child;
    assert((ret > 0) && "wrong thread id!");
    tid_child = 0;
    pthread_mutex_unlock(&lock_m);

    return ret;
}

long thread_setup_agent(sgx_thread_priv_params *trd_params)
{
    return thread_setup(trd_params);
}