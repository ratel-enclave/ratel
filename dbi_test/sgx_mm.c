#define _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>

#include <unistd.h>
#include <sys/mman.h>


//extern void *mremap(void *old_address, size_t old_size, size_t new_size, int flags);

void test1(void)
{
    void *fmap = mmap(NULL, 0x1000, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0);
    if (fmap == (void*)-1) {
        printf("failed to do mmap\n");
    }
    else {
        printf("%p\n", fmap);
        munmap(fmap, 0x1000);
    }
}


void test2(void)
{
    void *fmap1;
    void *fmap2;

    fmap1 = mmap(NULL, 0x1000, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0);
    if (fmap1 == (void*)-1) {
        printf("failed to do mmap1\n");
        return;
    }


    printf("%p\n", fmap1);
    fmap2 = (void*)mremap(fmap1, 0x1000, 0x2000, MREMAP_MAYMOVE);
    if (fmap2 == (void*)-1) {
        printf("failed to do mremap2\n");
        return;
    }

    printf("%p\n", fmap2);
    munmap(fmap2, 0x2000);
}

int main(int argc, char *argv)
{
    test1();
    test2();

    return 0;
}

