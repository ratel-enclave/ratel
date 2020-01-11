#include <linux/module.h>   /* Needed by all modules */
#include <linux/kernel.h>   /* Needed for KERN_ALERT */

#include <linux/aio_abi.h>  //aio_context_t
#include <trace/syscall.h>  //struct perf_event_attr, struct pollfd
#include <linux/getcpu.h>   //struct getcpu_cache
#include <linux/socket.h>   //struct mmsghdr
#include <linux/msg.h>      //struct msgbuf, struct msqid_ds
#include <linux/fs.h>       //struct iovec
#include <linux/utsname.h>  //struct utsname
#include <linux/futex.h>    //struct robust_list_head
#include <linux/socket.h>   //struct sockaddr
#include <linux/dirent.h>   //struct linux_dirent64
#include <uapi/asm/statfs.h>//struct statfs


struct kexec_segment {
    void   *buf;        /* Buffer in user space */
    size_t  bufsz;      /* Buffer length in user space */
    void   *mem;        /* Physical address of kernel */
    size_t  memsz;      /* Physical address length */
};

struct linux_dirent {
    unsigned long  d_ino;     /* Inode number */
    unsigned long  d_off;     /* Offset to next linux_dirent */
    unsigned short d_reclen;  /* Length of this linux_dirent */
    char           d_name[];  /* Filename (null-terminated) */
    /* length is actually (d_reclen - 2 -
       offsetof(struct linux_dirent, d_name)) */
    /*
       char           pad;       // Zero padding byte
       char           d_type;    // File type (only since Linux
    // 2.6.4); offset is (d_reclen - 1)
    */
};

typedef union epoll_data {
    void    *ptr;
    int      fd;
    uint32_t u32;
    uint64_t u64;
} epoll_data_t;

struct epoll_event {
    uint32_t     events;    /* Epoll events */
    epoll_data_t data;      /* User data variable */
};

struct mq_attr {
    long mq_flags;       /* Flags: 0 or O_NONBLOCK */
    long mq_maxmsg;      /* Max. # of messages on queue */
    long mq_msgsize;     /* Max. message size (bytes) */
    long mq_curmsgs;     /* # of messages currently in queue */
};

struct utimbuf {
    time_t actime;       /* access time */
    time_t modtime;      /* modification time */
};

int init_module(void)
{
	printk("#define len_aio_context_t %ld\n", sizeof(aio_context_t));
	printk("#define len_cap_user_data_t %ld\n", sizeof(cap_user_data_t));
	printk("#define len_cap_user_header_t %ld\n", sizeof(cap_user_header_t));
	printk("#define len_char %ld\n", sizeof(char));
	printk("#define len_char_* %ld\n", sizeof(char *));
	printk("#define len_clockid_t %ld\n", sizeof(clockid_t));
	printk("#define len_fd_set %ld\n", sizeof(fd_set));
	printk("#define len_gid_t %ld\n", sizeof(gid_t));
	printk("#define len_int %ld\n", sizeof(int));
	printk("#define len_key_serial_t %ld\n", sizeof(key_serial_t));
	printk("#define len_key_t %ld\n", sizeof(key_t));
	printk("#define len_loff_t %ld\n", sizeof(loff_t));
	printk("#define len_long %ld\n", sizeof(long));
	printk("#define len_mode_t %ld\n", sizeof(mode_t));
	printk("#define len_mqd_t %ld\n", sizeof(mqd_t));
	printk("#define len_off_t %ld\n", sizeof(off_t));
	printk("#define len_pid_t %ld\n", sizeof(pid_t));
	printk("#define len_siginfo_t %ld\n", sizeof(siginfo_t));
	printk("#define len_sigset_t %ld\n", sizeof(sigset_t));
	printk("#define len_size_t %ld\n", sizeof(size_t));
	printk("#define len_stack_t %ld\n", sizeof(stack_t));
	printk("#define len_epoll_event %ld\n", sizeof(struct epoll_event));
	printk("#define len_file_handle %ld\n", sizeof(struct file_handle));
	printk("#define len_getcpu_cache %ld\n", sizeof(struct getcpu_cache));
	printk("#define len_iocb %ld\n", sizeof(struct iocb));
	printk("#define len_io_event %ld\n", sizeof(struct io_event));
	printk("#define len_iovec %ld\n", sizeof(struct iovec));
	printk("#define len_itimerspec %ld\n", sizeof(struct itimerspec));
	printk("#define len_itimerval %ld\n", sizeof(struct itimerval));
	printk("#define len_kexec_segment %ld\n", sizeof(struct kexec_segment));
	printk("#define len_linux_dirent %ld\n", sizeof(struct linux_dirent));
	printk("#define len_linux_dirent64 %ld\n", sizeof(struct linux_dirent64));
	printk("#define len_mmsghdr %ld\n", sizeof(struct mmsghdr));
	printk("#define len_mq_attr %ld\n", sizeof(struct mq_attr));
	printk("#define len_msgbuf %ld\n", sizeof(struct msgbuf));
	printk("#define len_msghdr %ld\n", sizeof(struct msghdr));
	printk("#define len_msqid_ds %ld\n", sizeof(struct msqid_ds));
	printk("#define len_old_utsname %ld\n", sizeof(struct old_utsname));
	printk("#define len_perf_event_attr %ld\n", sizeof(struct perf_event_attr));
	printk("#define len_pollfd %ld\n", sizeof(struct pollfd));
	printk("#define len_pollfd %ld\n", sizeof(struct pollfd));
	printk("#define len_pt_regs %ld\n", sizeof(struct pt_regs));
	printk("#define len_rlimit %ld\n", sizeof(struct rlimit));
	printk("#define len_rlimit64 %ld\n", sizeof(struct rlimit64));
	printk("#define len_robust_list_head %ld\n", sizeof(struct robust_list_head));
	printk("#define len_rusage %ld\n", sizeof(struct rusage));
	printk("#define len_sched_param %ld\n", sizeof(struct sched_param));
	printk("#define len_sembuf %ld\n", sizeof(struct sembuf));
	printk("#define len_shmid_ds %ld\n", sizeof(struct shmid_ds));
	printk("#define len_sigaction %ld\n", sizeof(struct sigaction));
	printk("#define len_sigevent %ld\n", sizeof(struct sigevent));
	printk("#define len_siginfo %ld\n", sizeof(struct siginfo));
	printk("#define len_sockaddr %ld\n", sizeof(struct sockaddr));
	printk("#define len_stat %ld\n", sizeof(struct stat));
	printk("#define len_statfs %ld\n", sizeof(struct statfs));
	printk("#define len___sysctl_args %ld\n", sizeof(struct __sysctl_args));
	printk("#define len_sysinfo %ld\n", sizeof(struct sysinfo));
	printk("#define len_task_struct %ld\n", sizeof(struct task_struct));
	printk("#define len_timespec %ld\n", sizeof(struct timespec));
	printk("#define len_timeval %ld\n", sizeof(struct timeval));
	printk("#define len_timex %ld\n", sizeof(struct timex));
	printk("#define len_timezone %ld\n", sizeof(struct timezone));
	printk("#define len_ustat %ld\n", sizeof(struct ustat));
	printk("#define len_utimbuf %ld\n", sizeof(struct utimbuf));
	printk("#define len_timespec %ld\n", sizeof(struct timespec));
	printk("#define len_timer_t %ld\n", sizeof(timer_t));
	printk("#define len_time_t %ld\n", sizeof(time_t));
	printk("#define len_u32 %ld\n", sizeof(u32));
	printk("#define len_u64 %ld\n", sizeof(u64));
	printk("#define len_uid_t %ld\n", sizeof(uid_t));
	printk("#define len_union_semun %ld\n", sizeof(union semun));
	printk("#define len_unsigned %ld\n", sizeof(unsigned));
	printk("#define len_unsigned_char %ld\n", sizeof(unsigned char));
	printk("#define len_unsigned_int %ld\n", sizeof(unsigned int));
	printk("#define len_unsigned_long %ld\n", sizeof(unsigned long)); 
	// A non 0 return means init_module failed; module can't be loaded.
	return 0;
}

void cleanup_module(void)
{
}

MODULE_LICENSE("GPL");
