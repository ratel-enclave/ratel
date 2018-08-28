#ifndef _SGX_VMA_H__
#define _SGX_VMA_H__

#include "../globals.h"

/* Used for managing sgx-mmap-buffers */
typedef struct _list_t {
    struct _list_t *prev;   //* set prev to NULL if not inuse */
    struct _list_t *next;
}list_t;


#ifndef offsetof
#define offsetof(type,member)   \
    (unsigned long)(&((type *)0)->member)
#endif

#define container_of(ptr, type, member) ({                  \
    const typeof( ((type *)0)->member ) *__mptr = (ptr);    \
    (type *)( (char *)__mptr - offsetof(type,member) );})

#define list_entry(ptr, type, member) \
    container_of(ptr, type, member)

#define SGX_VMA_CMT_LEN 80
typedef struct _sgx_vm_area_t {
    byte* vm_start;    /* address of corresponding outside memory region */
    byte* vm_end;      /* address of corresponding outside memory region */
    byte* vm_sgx;      /* start address of sgx-buffer */
    uint perm;
    ulong dev;         /* typedef unsigned long int __dev_t */
    ulong inode;       /* typedef unsigned long int __ino_t */
    ulong size;        /* total size of a mmaped file, in bytes */
    size_t offset;
    list_t ll;
    char comment[SGX_VMA_CMT_LEN];
}sgx_vm_area_t;

typedef enum _sgx_vma_type {
    SGX_VMA_TEXT = 0,
    SGX_VMA_DATA,
    SGX_VMA_BSS,
    SGX_VMA_ANON,
}sgx_vma_type;

typedef enum _vma_overlap_t {
    OVERLAP_NONE = 0,   // Not overlap
    OVERLAP_SUB,        // A sub-region of current VMA
    OVERLAP_SUP,        // A super-region covers current VMA
    OVERLAP_HEAD,       // The head portion of current VMA is overlapped
    OVERLAP_TAIL,       // The tail portion of current VMA is overlapped
}vma_overlap_t;


#define SGX_VMA_MAX_CNT 180

typedef struct _sgx_mm_t {
    byte* vm_base;
    size_t vm_size;  // Total size of sgx_buffer

    /* vm areas */
    sgx_vm_area_t slots[SGX_VMA_MAX_CNT];

    /* managing vm areas */
    list_t in;
    list_t *un;
    int nin, nun;
} sgx_mm_t;


extern byte* sgx_vm_base;
extern byte* ext_vm_base;
extern sgx_mm_t sgxmm;

void sgx_mm_buffer_init(void);

/* translate internal addr to external addr */
bool sgx_mm_within(byte* addr, size_t len);
byte* sgx_mm_itn2ext(byte* itn_addr);   // start means starting a region
byte* sgx_mm_ext2itn(byte* ext_addr);

void sgx_vma_set_cmt(ulong fd, const char *fname);
void sgx_vma_get_cmt(ulong fd, char *buffer);

byte* sgx_mm_mmap(byte* ext_addr, size_t len, ulong prot, ulong flags, int fd, ulong offs);
void sgx_mm_munmap(byte* itn_addr, size_t len);
int sgx_mm_mprotect(byte* ext_addr, size_t len, uint prot);

int sgx_procmaps_read_start(void);
void sgx_procmaps_read_stop(void);
int sgx_procmaps_read_next(char *buf, int count);


#endif //_SGX_VMA_H__
