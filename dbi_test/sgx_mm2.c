#define _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/mman.h>
#include <errno.h>
#include <stdbool.h>
#include <assert.h>

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


#define SELF_DEBUG
// #define FILE_NAME_IS_MAIN

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
    bool    updated;
}sgx_mm_t;

int count_vmas(void)
{
    char *fname = "/proc/self/maps";
    FILE *f = fopen(fname, "r");
    if (f == NULL){
        printf("fopen failed @%d, errno = %d\n", __LINE__, errno);
        exit(-1);
    }

    size_t n = 1024;
    char *l = malloc(n);
    int ncnt = 0;
    
    while (getline(&l, &n, f) != -1) ncnt++;

    fclose(f);

    return ncnt;
}

#ifdef FILE_NAME_IS_MAIN
#define COUNT_VMAS count_vmas()
#else
#define COUNT_VMAS sgx_mm->nin;
#endif

#define SGX_MM_ADDR 0x6000006c7d80

void split_test1(void)
{
    printf("TEST %s\n", __FUNCTION__);
    sgx_mm_t *sgx_mm = (sgx_mm_t*)SGX_MM_ADDR;
    int res, nvmas1, nvmas2;
    void *fmap;

    fmap = mmap(NULL, 0x4000, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0);
    if (fmap == (void*)-1) {
        printf("mmap syscall failed @%d, errno = %d\n", __LINE__, errno);
        exit(-1);
    }
    nvmas1 = COUNT_VMAS;

    #ifdef SELF_DEBUG
    printf("vm_start: %p, @%d\n", fmap, __LINE__);
    #endif

    res = munmap((char*)fmap+0x1000, 0x2000);
    if (res == -1) {
        printf("munmap syscall failed @%d, errno = %d\n", __LINE__, errno);
        exit(-1);
    }
    nvmas2 = COUNT_VMAS;

    assert(nvmas1+1 == nvmas2);

    printf("TEST %s: Success!\n", __FUNCTION__);
}

void split_test2(void)
{
    printf("TEST %s\n", __FUNCTION__);
    sgx_mm_t *sgx_mm = (sgx_mm_t*)SGX_MM_ADDR;
    int res, nvmas1, nvmas2;
    void *fmap;

    fmap = mmap(NULL, 0x6000, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0);
    if (fmap == (void*)-1) {
        printf("mmap syscall failed @%d, errno = %d\n", __LINE__, errno);
        exit(-1);
    }
    
    // create an isolated region
    res = munmap((char*)fmap, 0x1000);
    if (res == -1) {
        printf("munmap syscall failed @%d, errno = %d\n", __LINE__, errno);
        exit(-1);
    }

    res = munmap((char*)fmap+0x7000, 0x1000);
    if (res == -1) {
        printf("munmap syscall failed @%d, errno = %d\n", __LINE__, errno);
        exit(-1);
    }
    nvmas1 = COUNT_VMAS;

    #ifdef SELF_DEBUG
    printf("vm_start: %p, @%d\n", fmap, __LINE__);
    #endif
    
    res = mprotect((char*)fmap+0x3000, 0x1000, PROT_READ);
    if (res == -1) {
        printf("mprotect syscall failed @%d, errno = %d\n", __LINE__, errno);
        exit(-1);
    }
    nvmas2 = COUNT_VMAS;
    assert(nvmas1+2 == nvmas2);

    printf("TEST %s: Success!\n", __FUNCTION__);
}


void merge_test(void)
{
    printf("TEST %s\n", __FUNCTION__);
    sgx_mm_t *sgx_mm = (sgx_mm_t*)SGX_MM_ADDR;
    int res, nvmas1, nvmas2;
    void *fmap;

    fmap = mmap(NULL, 0x6000, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0);
    if (fmap == (void*)-1) {
        printf("mmap syscall failed @%d, errno = %d\n", __LINE__, errno);
        exit(-1);
    }
    
    // create an isolated region
    res = munmap((char*)fmap, 0x1000);
    if (res == -1) {
        printf("munmap syscall failed @%d, errno = %d\n", __LINE__, errno);
        exit(-1);
    }

    res = munmap((char*)fmap+0x7000, 0x1000);
    if (res == -1) {
        printf("munmap syscall failed @%d, errno = %d\n", __LINE__, errno);
        exit(-1);
    }
    nvmas1 = COUNT_VMAS;

    #ifdef SELF_DEBUG
    printf("vm_start: %p, @%d\n", fmap, __LINE__);
    #endif
    
    res = mprotect((char*)fmap+0x3000, 0x2000, PROT_READ);
    if (res == -1) {
        printf("mprotect syscall failed @%d, errno = %d\n", __LINE__, errno);
        exit(-1);
    }
    nvmas2 = COUNT_VMAS;
    assert(nvmas1+2 == nvmas2);

    // merge
    res = mprotect((char*)fmap+0x3000, 0x2000, PROT_READ|PROT_WRITE);
    if (res == -1) {
        printf("mprotect syscall failed @%d, errno = %d\n", __LINE__, errno);
        exit(-1);
    }

    nvmas2 = COUNT_VMAS;;
    assert(nvmas1 == nvmas2);

    printf("TEST %s: Success!\n", __FUNCTION__);
}


int main(int argc, char *argv, char *env)
{
    split_test1();

    split_test2();

    merge_test();

    return 0;
}