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

#ifndef _SGX_EDGE_INTELSDK_H__
#define _SGX_EDGE_INTELSDK_H__

#include "sgx_defines.h"

/*----------------sgx_mm_init() initialized by referring external procmaps----------------*/
typedef struct _intelsdk_global_data_t
{
    ulong     enclave_size;
    ulong     heap_offset;
    ulong     heap_size;
    ulong     thread_policy;
    ulong     dyRIO_cache_offset;  // dynamoRIO's code-cache
    ulong     dyRIO_cache_size;
    ulong     prog_arena_offset;   // target program's modules
    ulong     prog_arena_size;
    // thread_data_t  td_template;
    // uint8_t        tcs_template[TCS_TEMPLATE_SIZE];
    // uint32_t       layout_entry_num;
    // uint32_t       reserved;
    // layout_t       layout_table[LAYOUT_ENTRY_NUM];
} intelsdk_global_data_t;



#endif  // _SGX_EDGE_INTELSDK_H__
