#ifndef _SGX_EDGE_DEFINE_H__
#define _SGX_EDGE_DEFINE_H__

#define SGX_NULL    (void*)0


typedef long            ssize_t;

typedef unsigned char   byte;
typedef unsigned char   uchar;
typedef unsigned short  ushort;
typedef unsigned int    uint;
typedef unsigned long   ulong;
typedef unsigned long   usize_t;
typedef unsigned long   uint64;


typedef unsigned char   BOOL;
#define FALSE        (0)
#define TRUE         (1)

void crash_me();

/* defines from executables */
typedef unsigned int    socklen_t;


#endif // _SGX_EDGE_DEFINE_H__
