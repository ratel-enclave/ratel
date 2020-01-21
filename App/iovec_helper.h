 /* added in 01/2020 */
 
#ifndef __IOVEC_EXTERN_C_H__
#define __IOVEC_EXTERN_C_H__

#include <sys/socket.h>
#include <stddef.h>

unsigned long shadowing_iovec(struct iovec *iov, char *iovb, int c_iov);
 
#ifdef  __cplusplus
extern "C" {
#endif
 
#ifdef  __cplusplus
}
#endif  /* end of __cplusplus */
 
#endif /* __IOVEC_EXTERN_C_H__ */