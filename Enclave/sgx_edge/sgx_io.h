#ifndef _SGX_EDGE_IO_H__
#define _SGX_EDGE_IO_H__

#include "sgx_defines.h"

/* from fs.h */
#define O_RDONLY     0x0000
#define O_WRONLY     0x0001
#define O_RDWR       0x0002
#define O_APPEND     0x0008
#define O_CREAT      0x0200
#define O_TRUNC      0x0400
#define O_EXCL       0x0800
#define O_NOFOLLOW   0x1000
#define O_PATH       0x2000


/* from asm-generic/stat.h */
struct stat {
    unsigned long	st_dev;		/* Device.  */
    unsigned long	st_ino;		/* File serial number.  */
    unsigned int	st_mode;	/* File mode.  */
    unsigned int	st_nlink;	/* Link count.  */
    unsigned int	st_uid;		/* User ID of the file's owner.  */
    unsigned int	st_gid;		/* Group ID of the file's group. */
    unsigned long	st_rdev;	/* Device number, if device.  */
    unsigned long	__pad1;
    long		    st_size;	/* Size of file, in bytes.  */
    int		        st_blksize;	/* Optimal block size for I/O.  */
    int		        __pad2;
    long		    st_blocks;	/* Number 512-byte blocks allocated. */
    long		    st_atime;	/* Time of last access.  */
    unsigned long	st_atime_nsec;
    long		    st_mtime;	/* Time of last modification.  */
    unsigned long	st_mtime_nsec;
    long		    st_ctime;	/* Time of last status change.  */
    unsigned long	st_ctime_nsec;
    unsigned int	__unused4;
    unsigned int	__unused5;
};


#endif  // _SGX_EDGE_IO_H__