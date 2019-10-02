#ifndef _SGX_EDGE_INTELSDK_H__
#define _SGX_EDGE_INTELSDK_H__

#include "sgx_defines.h"

/*----------------sgx_mm_init() initialized by referring external procmaps----------------*/
typedef struct _sgxsdk_global_data_t
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
} sgxsdk_global_data_t;



#endif  // _SGX_EDGE_INTELSDK_H__