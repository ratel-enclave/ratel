#include "complex.h"
#include <stdlib.h>
#include <string.h>

void ASSERT(int b)
{
    if (!b)
        __asm__ __volatile__ ("int3");
}

size_t count_iovlen(iovec *iov, size_t c_msg)
{
    int size = 0;
    for (int i = 0; ; ) 
    {
        size += iov->iov_len;
        if (++i < c_msg)
            iov++;
        else
            break;
    }
            
    return size;
}

unsigned long scattering_shadow_iov(iovec *iov, size_t size, size_t c_msg)
{
    char *iov_addr = (char *)malloc(size + 1);
    ASSERT((NULL != iov_addr ? 1 : 0));
    memset(iov_addr, 0, size + 1);
    unsigned long iovb = (unsigned long)iov_addr;

    for (int i = 0; i < c_msg; i++)
    {
        memcpy((void*)iov_addr, iov->iov_base, iov->iov_len);
        iov_addr += iov->iov_len;
        iov++;
    }

    return iovb;
}