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

#include "rwlock.h"

#include "sgx_error.h"   /* sgx_status_t */
#include "sgx_eid.h"     /* sgx_enclave_id_t */

#include "thread_helper.h"
#include "dynamorio_u.h"

#include <unistd.h>
#include <assert.h>
#include <sys/mman.h>

#define THREAD_NUM 3

using namespace std;

#define SYS_gettid     186
// Global data
rwlock_t lock_t;

#define MAX_THREAD_NUM_EACH_ENCLAVE 10
sgx_thread_priv_params trd_priv_params[MAX_THREAD_NUM_EACH_ENCLAVE] = {0};
volatile int g_trd_num = 0;
static volatile long tid_child = 0;

extern "C" long set_tid_ntrd(long sysno);

long get_tid_ntrd()
{
    return tid_child;
}

static inline void do_agent()
{
    sgx_dbi_tls_helper_t *tls_helper_table;
    sgx_status_t ret = SGX_SUCCESS;
    int retval = 0;

    tls_helper_table = (sgx_dbi_tls_helper_t *)mmap(NULL, sizeof(sgx_dbi_tls_helper_t), PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0);
    assert(NULL != tls_helper_table);

    wtlock(&lock_t);
    int trd_num = g_trd_num;
    g_trd_num++;

    memcpy(&tls_helper_table->trd_priv_params, &trd_priv_params[trd_num], sizeof(sgx_thread_priv_params));
    wtunlock(&lock_t);

    while(!tls_helper_table->thread_id) {
        tls_helper_table->thread_id = set_tid_ntrd(SYS_gettid); 
        assert(tls_helper_table->thread_id);
        tid_child = tls_helper_table->thread_id;
    }

    tls_helper_table->trd_priv_params.thread_id = tls_helper_table->thread_id;
    tls_helper_table->first_init = 1;
    tls_helper_table->next_tls_helper_t = NULL;

    ret = ecall_thread_entry(tls_helper_table->trd_priv_params.current_eid, &retval, tls_helper_table, sizeof(sgx_dbi_tls_helper_t));

    //NOT REACHED
    assert(false && "NOT REACHED!");
}

static inline long thread_setup(sgx_thread_priv_params *trd_params)
{
    int ret = -1;
    thread trd;
    int trd_num = 0;

    init_rwlock(&lock_t);

    wtlock(&lock_t);
    trd_num = g_trd_num;
    memcpy(&trd_priv_params[trd_num], trd_params, sizeof(sgx_thread_priv_params));
    wtunlock(&lock_t);
    // Create multiple threads
    trd = thread(do_agent);
    trd.detach(); 

    while(!tid_child) ;     /* waiting new thread id assigned */

    ret = tid_child;
    assert(ret != 0);
    tid_child = 0;

    return ret;
}

long thread_setup_agent(sgx_thread_priv_params *trd_params)
{
    return thread_setup(trd_params);
}