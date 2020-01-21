#include "iovec_helper.h"
#include <assert.h>

unsigned long shadowing_iovec(struct iovec *iov, char *iovb, int c_iov)
{
    int s_iov = sizeof(struct iovec);
    struct iovec *iov_shd = (struct iovec*)malloc(c_iov * s_iov + 1);
    assert(NULL != iov_shd);
    memset(iov_shd, 0, c_iov * s_iov + 1);
    unsigned long iov_shd_addr = (unsigned long)iov_shd;
    
    char *iov_base = (char *)iovb;
    for (int i = 0; ; )
    {
        int s_iovb = iov->iov_len;

        char *iovb_shd = (char *)malloc(s_iovb + 1);
        assert(NULL != iovb_shd);
        memset(iovb_shd, 0, s_iovb + 1);
        memcpy(iovb_shd, iov_base, s_iovb);

        iov_shd->iov_base = (void*)iovb_shd;
        iov_shd->iov_len = s_iovb;

        if (++i < c_iov)
        {
            iov_base += s_iovb;
            iov_shd++;
            iov++;
        }
        else
            break;
    }

    return iov_shd_addr;
}