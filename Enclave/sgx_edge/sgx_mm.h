#ifndef _SGX_EDGE_MM_H__
#define _SGX_EDGE_MM_H__

#include "sgx_defines.h"

/*-------------------- Used for managing vmas in program-arena --------------*/
typedef struct _list_t {
    struct _list_t *prev;   //* set prev to NULL if not inuse */
    struct _list_t *next;
}list_t;


#ifndef offsetof
#define offsetof(type,member)   \
    (ulong)(&((type *)0)->member)
#endif

#define container_of(ptr, type, member) ({                  \
    const typeof( ((type *)0)->member ) *__mptr = (ptr);    \
    (type *)( (char *)__mptr - offsetof(type,member) );})

#define list_entry(ptr, type, member) \
    container_of(ptr, type, member)


/*----------------------- represent a vmas in program-arena -----------------*/
#define VMA_CMT_MAXLEN 80
typedef struct _sgx_vm_area_t {
    byte*   vm_start;    /* start address of corresponding outside memory region,  */
    byte*   vm_end;      /* used for tracking & sorting */
    byte*   vm_sgx;      /* start address in sgx-buffer */
    uint    perm;        /* permission of current vma */
    ulong   dev;         /* typedef ulong int __dev_t */
    ulong   inode;       /* typedef ulong int __ino_t */
    ulong   size;        /* total size of a mmaped file, in bytes */
    ulong   offset;
    list_t  ll;
    char    comment[VMA_CMT_MAXLEN];
}sgx_vm_area_t;


/*------------------------- program-arena in sgx-enclave --------------------*/
#define SGX_VMA_MAX_CNT 200
typedef struct _sgx_mm_t {
    /* The start address of heap reserved by sgxsdk */
    byte*   heap_offset;

    /* The start address of dynamoRIO's heap, used for creating code-cache...*/
    byte*   dyRIO_heap_base;
    ulong   dyRIO_heap_size;

    /* Prog-arena is used for loading libraries into SGX-enclave */
    byte*   prog_arena_base;
    ulong   prog_arena_size;

    /* start address of external vmas mapped into SGX-enclave */
    byte*   ext_vmm_base;

    /* Used for managing vm areas */
    uint    nin;
    uint    nun;
    BOOL    updated;

    list_t  *un;
    list_t  in;
    /* vm areas */
    sgx_vm_area_t slots[SGX_VMA_MAX_CNT];
} sgx_mm_t;


extern BOOL sgx_mm_initialized;

/*------------- export function for dynamoRIO && dyRIO-sgx-adapter ----------*/

/* set the comment field of sgx_vma */
void sgx_vma_set_cmt(ulong fd, const char *fname);
void sgx_vma_get_cmt(ulong fd, char *o_buffer);


/*----- export function for bridge-trts, providing MM in program arena ------*/
void sgx_mm_init(void);
void sgx_mm_exit(void);

/* start means starting a region */
BOOL    sgx_mm_within_sgxbuf(byte* addr, size_t len);
byte*   sgx_mm_itn2ext(byte* itn_addr);
byte*   sgx_mm_ext2itn(byte* ext_addr);


byte*   sgx_mm_mmap(byte* ext_addr, size_t len, ulong prot, ulong flags, int fd, ulong offs);
void    sgx_mm_munmap(byte* ext_addr, size_t len);
int     sgx_mm_mprotect(byte* ext_addr, size_t len, uint prot);
byte*   sgx_mm_mremap(byte* ext_old_addr, size_t old_sz, byte* ext_new_addr, size_t new_sz, uint new_flags);

#endif //_SGX_EDGE_MM_H__