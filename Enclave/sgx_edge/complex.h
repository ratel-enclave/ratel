 /* added in 01/2020 */
 
#ifndef __COMPLEX_EXTERN_C_H__
#define __COMPLEX_EXTERN_C_H__

#include <stdlib.h>
#include <string.h>

typedef unsigned int    socklen_t;
typedef unsigned long   size_t;
#define MAP_FAILED  ((void*)-1)

typedef struct _msghdr {
   void         *msg_name;       /* optional address */
   socklen_t     msg_namelen;    /* size of address */
   struct _iovec *msg_iov;       /* scatter/gather array */
   size_t        msg_iovlen;     /* # elements in msg_iov */
   void         *msg_control;    /* ancillary data, see below */
   size_t        msg_controllen; /* ancillary data buffer len */
   int           msg_flags;      /* flags (unused) */
}msghdr;

typedef struct _iovec {
    void  *iov_base;    /* Starting address */
    size_t iov_len;     /* Number of bytes to transfer */
}iovec;

#ifndef NULL
#  define NULL (0)
#endif

// void ASSERT(int b);
// size_t count_iovlen(iovec *iov, size_t c_msg);
// unsigned long scattering_shadow_iov(iovec *iov, size_t size, size_t c_msg);

static inline void ASSERT(int b)
{
    if (!b)
        __asm__ __volatile__ ("int3");
}

static inline size_t count_iovlen(iovec *iov, size_t c_msg)
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

static inline unsigned long scattering_shadow_iov(iovec *iov, size_t size, size_t c_msg)
{
    char *iov_addr = (char *)malloc(size);
    ASSERT(MAP_FAILED != iov_addr && NULL != iov_addr && "malloc with NULL!");
    memset(iov_addr, 0, size);	//cdd --
    unsigned long iovb = (unsigned long)iov_addr;

    for (int i = 0; i < c_msg; i++)
    {
        memcpy((void*)iov_addr, iov->iov_base, iov->iov_len);
        iov_addr += iov->iov_len;
        iov++;
    }

    return iovb;
}
 
#ifdef  __cplusplus
extern "C" {
#endif
 
#ifdef  __cplusplus
}
#endif  /* end of __cplusplus */
 
#endif /* __COMPLEX_EXTERN_C_H__ */