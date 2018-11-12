#ifndef _DEFINE_H__
#define _DEFINE_H__


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


/*----------------sgx_mm_init() initialized by referring external procmaps----------------*/
typedef unsigned long    sys_word_t;

typedef struct _global_data_t
{
    sys_word_t     enclave_size;
    sys_word_t     heap_offset;
    sys_word_t     heap_size;
    sys_word_t     thread_policy;
    sys_word_t     dyRIO_cache_offset;  // dynamoRIO's code-cache
    sys_word_t     dyRIO_cache_size;
    sys_word_t     prog_arena_offset;   // target program's modules
    sys_word_t     prog_arena_size;
    // thread_data_t  td_template;
    // uint8_t        tcs_template[TCS_TEMPLATE_SIZE];
    // uint32_t       layout_entry_num;
    // uint32_t       reserved;
    // layout_t       layout_table[LAYOUT_ENTRY_NUM];
} global_data_t;

#endif // _DEFINE_H__
