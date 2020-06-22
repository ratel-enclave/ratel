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
#define THREAD_STRUCT_LEN               sizeof(struct _sgx_thread_priv_params) //0x40
#define THREAD_FIRST_INIT               0x0

using namespace std;

// Global data
pthread_mutex_t lock_m = PTHREAD_MUTEX_INITIALIZER;
sgx_thread_priv_params *trd_priv_params = NULL;
volatile int g_trd_num = 0;
volatile int g_total_trd_num = 0;
static volatile long tid_child = 0;

extern "C" long set_tid_ntrd(long sysno);

static inline long get_tid_ntrd()
{
    return tid_child;
}

static inline void _mm_pause(void)
{
    __asm __volatile(
        "pause"
    );
}

static inline void do_agent()
{
    sgx_dbi_tls_helper_t *tls_helper_table;
    sgx_status_t ret = SGX_SUCCESS;
    int retval = 0;

    tls_helper_table = (sgx_dbi_tls_helper_t *)mmap(NULL, sizeof(sgx_dbi_tls_helper_t), PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0);
    assert(NULL != tls_helper_table);
    memset(tls_helper_table, 0, sizeof(sgx_dbi_tls_helper_t));

    int trd_num = g_trd_num;
    g_trd_num++;

    memset(&tls_helper_table->trd_priv_params, 0, sizeof(sgx_thread_priv_params));
    memcpy(&tls_helper_table->trd_priv_params, &trd_priv_params[trd_num], sizeof(sgx_thread_priv_params));
    
    tls_helper_table->thread_id = set_tid_ntrd(SYS_gettid);
    assert(tls_helper_table->thread_id && "wrong thread id!");
    tid_child = tls_helper_table->thread_id;

    tls_helper_table->trd_priv_params.thread_id = tls_helper_table->thread_id;
    trd_priv_params[trd_num].thread_id = tls_helper_table->thread_id;
    tls_helper_table->first_init = 1;
    tls_helper_table->next_tls_helper_t = NULL;
    pthread_mutex_unlock(&lock_m);

    ret = ecall_thread_entry(tls_helper_table->trd_priv_params.current_eid, &retval, tls_helper_table, sizeof(sgx_dbi_tls_helper_t));
    if (SGX_SUCCESS != ret)
    {
        printf("SGX_ERROR_ENCLAVE_LOST, ret = %d\n", ret);
    }
    
    //NOT REACHED
    exit(1);
    assert(false && "NOT REACHED!");
}

static inline long thread_setup(sgx_thread_priv_params *trd_params)
{
    int ret = -1;
    thread trd;
    int trd_num = 0;

    pthread_mutex_lock(&lock_m);
    /* first init */
    if (g_trd_num == THREAD_FIRST_INIT)
    {
        trd_priv_params = (sgx_thread_priv_params *)malloc(THREAD_STRUCT_LEN);
        assert(trd_priv_params != NULL && "Malloc failed: likely Out-of-memory!");
        g_total_trd_num = THREAD_STRUCT_LEN;   
    }

    /* expand the thread data struct */
    int cur_hctx_len = g_trd_num * THREAD_STRUCT_LEN;
    if (cur_hctx_len == g_total_trd_num)
    {
        g_total_trd_num = cur_hctx_len + THREAD_STRUCT_LEN;
        sgx_thread_priv_params *ptrd_priv_params = NULL;
        ptrd_priv_params = (sgx_thread_priv_params*)realloc(trd_priv_params, g_total_trd_num);
        if(ptrd_priv_params == NULL)
            assert(false && "Realloc failed: likely Out-of-memory!"); 
        else
            trd_priv_params = ptrd_priv_params;
    }
    
    trd_num = g_trd_num;
    memset(&trd_priv_params[trd_num], 0, sizeof(sgx_thread_priv_params));
    memcpy(&trd_priv_params[trd_num], trd_params, sizeof(sgx_thread_priv_params));

    // Create multiple threads
    trd = thread(do_agent);
    trd.detach(); 

    while(tid_child <= 0) ;     /* waiting new thread id assigned */

    pthread_mutex_lock(&lock_m);
    ret = tid_child;
    assert((ret > 0) && "wrong thread id!");
    tid_child = 0;
    pthread_mutex_unlock(&lock_m);

    return ret;
}

long thread_setup_agent(sgx_thread_priv_params *trd_params)
{
    extern volatile int g_trd_num_helper;
    /* busy waiting for a free tcs slot */
    while ((volatile int)g_trd_num > ((MAX_NUM_THREADS - 2) + g_trd_num_helper))
    {
        _mm_pause();
    }

    return thread_setup(trd_params);
}