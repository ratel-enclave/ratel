 /* added in 01/2020 */
 
#ifndef __IOVEC_EXTERN_C_H__
#define __IOVEC_EXTERN_C_H__

#include <sys/socket.h>
#include <stddef.h>

#define MAP_FAILED  ((void*)-1)

static inline unsigned long shadowing_iovec(struct iovec *iov, char *iovb, int c_iov)
{
    int s_iov = sizeof(struct iovec);
    struct iovec *iov_shd = (struct iovec*)malloc(c_iov * s_iov);
    assert(MAP_FAILED != iov_shd && NULL != iov_shd);
    memset(iov_shd, 0, c_iov * s_iov);	//cdd --
    unsigned long iov_shd_addr = (unsigned long)iov_shd;
    
    char *iov_base = (char *)iovb;
    for (int i = 0; ; )
    {
        int s_iovb = iov->iov_len;

        char *iovb_shd = (char *)malloc(s_iovb);
        assert(MAP_FAILED != iovb_shd && NULL != iovb_shd);
        memset(iovb_shd, 0, s_iovb);		//cdd --
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
 
#ifdef  __cplusplus
extern "C" {
#endif
 
#ifdef  __cplusplus
}
#endif  /* end of __cplusplus */
 
#endif /* __IOVEC_EXTERN_C_H__ */