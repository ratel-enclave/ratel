#ifndef _SGX_VMA_H__
#define _SGX_VMA_H__

#ifndef ulong
typedef unsigned char   byte;
typedef unsigned char   uchar;
typedef unsigned short  ushort;
typedef unsigned int    uint;
typedef unsigned long   ulong;
typedef long    ssize_t;
typedef unsigned long   size_t;
#endif

#ifndef bool
typedef _Bool   bool;
#define false        (0)
#define true         (1)
#endif

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


/* represent a vma in sgx-buffer */
#define VMA_CMT_MAXLEN 80
typedef struct _sgx_vm_area_t {
    byte*   vm_start;    /* start address of corresponding outside memory region,  */
    byte*   vm_end;      /* used for tracking & sorting */
    byte*   vm_sgx;      /* start address in sgx-buffer */
    uint    perm;        /* permission of current vma */
    ulong   dev;         /* typedef unsigned long int __dev_t */
    ulong   inode;       /* typedef unsigned long int __ino_t */
    ulong   size;        /* total size of a mmaped file, in bytes */
    ulong   offset;
    list_t  ll;
    char comment[VMA_CMT_MAXLEN];
}sgx_vm_area_t;


/* the virtual memroy space in sgx-enclave */
#define SGX_VMA_MAX_CNT 96
typedef struct _sgx_mm_t {
    /* The start address of sgx_buffer */
    /* SGX-buffer is used for loading libraries into SGX-enclave */
    /* and also used for allocting code cache */
    byte*   sgx_buf_base;
    byte*   ext_vmm_base;

    /* the size of sgx-buffer */
    ulong   sgx_buf_size;

    /* heap_init is a special segment, we allocate sgx-buffer there */
    byte*   heap_init_start;
    byte*   heap_init_end;

    /* vm areas */
    sgx_vm_area_t slots[SGX_VMA_MAX_CNT];

    /* Used for managing vm areas */
    list_t  in;
    list_t  *un;
    uint nin, nun;
    bool    updated;
} sgx_mm_t;


/* start means starting a region */
byte* sgx_mm_itn2ext(byte *itn_addr);
byte* sgx_mm_ext2itn(byte *ext_addr);

/* translate internal addr to external addr */
bool sgx_mm_within(byte *addr, ulong len);

/* set the comment field of sgx_vma */
void sgx_vma_set_cmt(ulong fd, const char *fname);
void sgx_vma_get_cmt(ulong fd, char *o_buffer);

/* kernel functions */
byte*   sgx_mm_mmap(byte *ext_addr, size_t len, ulong prot, ulong flags, int fd, ulong offs);
void    sgx_mm_munmap(byte *ext_addr, size_t len);
int     sgx_mm_mprotect(byte *ext_addr, size_t len, uint prot);
byte*   sgx_mm_mremap(byte *ext_old_addr, size_t old_sz, byte* ext_new_addr, size_t new_sz, uint new_flags);
#endif //_SGX_VMA_H__
