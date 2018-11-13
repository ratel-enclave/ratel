#define _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/mman.h>
#include <errno.h>

#define SELF_DEBUG
void mmap_munmap(void)
{
    printf("TEST %s\n", __FUNCTION__);

    void *fmap;
    int res;

    fmap = mmap(NULL, 0x1000, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0);
    if (fmap == (void*)-1) {
        printf("mmap syscall failed @%d, errno = %d\n", __LINE__, errno);
        exit(-1);
    }
    #ifdef SELF_DEBUG
    printf("vm_start: %p, @%d\n", fmap, __LINE__);
    #endif

    res = munmap(fmap, 0x1000);
    if (res == -1) {
        printf("munmap syscall failed @%d, errno = %d\n", __LINE__, errno);
        exit(-1);
    }

    /* simultaneously mmap several regions */
    void *fmap1, *fmap2, *fmap3;
    fmap1 = mmap(NULL, 0x2000, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0);
    if (fmap1 == (void*)-1) {
        printf("mmap syscall failed @%d, errno = %d\n", __LINE__, errno);
        exit(-1);
    }
    #ifdef SELF_DEBUG
    printf("vm_start: %p, @%d\n", fmap1, __LINE__);
    #endif

    fmap2 = mmap((char*)fmap1+0x2000, 0x2000, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS|MAP_FIXED, -1, 0);
    if (fmap2 == (void*)-1) {
        printf("mmap syscall failed @%d, errno = %d\n", __LINE__, errno);
        exit(-1);
    }
    #ifdef SELF_DEBUG
    printf("vm_start: %p, @%d\n", fmap2, __LINE__);
    #endif

    fmap3 = mmap((char*)fmap2+0x2000, 0x2000, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS|MAP_FIXED, -1, 0);
    if (fmap3 == (void*)-1) {
        printf("mmap syscall failed @%d, errno = %d\n", __LINE__, errno);
        exit(-1);
    }
    #ifdef SELF_DEBUG
    printf("vm_start: %p, @%d\n", fmap3, __LINE__);
    #endif

    res = munmap((char*)fmap1+0x1000, 0x4000);
    if (res == -1) {
        printf("munmap syscall failed @%d, errno = %d\n", __LINE__, errno);
        exit(-1);
    }

    res = munmap((char*)fmap1, 0x1000);
    if (res == -1) {
        printf("munmap syscall failed @%d, errno = %d\n", __LINE__, errno);
        exit(-1);
    }

    res = munmap((char*)fmap3+0x1000, 0x1000);
    if (res == -1) {
        printf("munmap syscall failed @%d, errno = %d\n", __LINE__, errno);
        exit(-1);
    }

    printf("TEST %s: Success!\n", __FUNCTION__);
}


void mremap_test(void)
{
    printf("TEST %s\n", __FUNCTION__);

    void *fmap;
    int res;

    fmap = mmap(NULL, 0x1000, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0);
    if (fmap == (void*)-1) {
        printf("mmap syscall failed @%d, errno = %d\n", __LINE__, errno);
        exit(-1);
    }
    #ifdef SELF_DEBUG
    printf("vm_start: %p, @%d\n", fmap, __LINE__);
    #endif

    fmap = mremap(fmap, 0x1000, 0x2000, MREMAP_MAYMOVE);
    if (fmap == (void*)-1) {
        printf("mremap syscall failed @%d, errno = %d\n", __LINE__, errno);
        exit(-1);
    }
    #ifdef SELF_DEBUG
    printf("vm_start: %p, @%d\n", fmap, __LINE__);
    #endif

    res = munmap(fmap, 0x2000);
    if (res == -1) {
        printf("munmap syscall failed @%d, errno = %d\n", __LINE__, errno);
        exit(-1);
    }


    printf("TEST %s: Success!\n", __FUNCTION__);
}



void brk_test(void)
{
    printf("TEST %s\n", __FUNCTION__);

    void *fmap;
    int res;

    fmap = sbrk(0);
    if (fmap == (void*)-1) {
        printf("sbrk failed @%d, errno = %d\n", __LINE__, errno);
        exit(-1);
    }
    #ifdef SELF_DEBUG
    printf("vm_start: %p, @%d\n", fmap, __LINE__);
    #endif

    res = brk((char*)fmap+0x1000);
    if (res == -1) {
        printf("brk syscall failed @%d, errno = %d\n", __LINE__, errno);
        exit(-1);
    }

    res = brk(fmap);
    if (res == -1) {
        printf("brk syscall failed @%d, errno = %d\n", __LINE__, errno);
        exit(-1);
    }

    printf("TEST %s: Success!\n", __FUNCTION__);
}



int main(int argc, char *argv)
{
    mmap_munmap();

    mremap_test();

    brk_test();

    return 0;
}

