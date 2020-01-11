import os, sys

def include_headers():
    inc = [
    "#include <linux/module.h>   /* Needed by all modules */",
    "#include <linux/kernel.h>   /* Needed for KERN_ALERT */",
    "",
    "#include <linux/aio_abi.h>  //aio_context_t",
    "#include <trace/syscall.h>  //struct perf_event_attr, struct pollfd",
    "#include <linux/getcpu.h>   //struct getcpu_cache",
    "#include <linux/socket.h>   //struct mmsghdr",
    "#include <linux/msg.h>      //struct msgbuf, struct msqid_ds",
    "#include <linux/fs.h>       //struct iovec",
    "#include <linux/utsname.h>  //struct utsname",
    "#include <linux/futex.h>    //struct robust_list_head",
    "#include <linux/socket.h>   //struct sockaddr",
    "#include <linux/dirent.h>   //struct linux_dirent64",
    "#include <uapi/asm/statfs.h>//struct statfs",
    "",
    ""
    ]
    out = "\n".join(inc)
    print out

def extra_struct():
    st = [
    "struct kexec_segment {",
    "    void   *buf;        /* Buffer in user space */",
    "    size_t  bufsz;      /* Buffer length in user space */",
    "    void   *mem;        /* Physical address of kernel */",
    "    size_t  memsz;      /* Physical address length */",
    "};",
    "",
    "struct linux_dirent {",
    "    unsigned long  d_ino;     /* Inode number */",
    "    unsigned long  d_off;     /* Offset to next linux_dirent */",
    "    unsigned short d_reclen;  /* Length of this linux_dirent */",
    "    char           d_name[];  /* Filename (null-terminated) */",
    "    /* length is actually (d_reclen - 2 -",
    "       offsetof(struct linux_dirent, d_name)) */",
    "    /*",
    "       char           pad;       // Zero padding byte",
    "       char           d_type;    // File type (only since Linux",
    "    // 2.6.4); offset is (d_reclen - 1)",
    "    */",
    "};",
    "",
    "typedef union epoll_data {",
    "    void    *ptr;",
    "    int      fd;",
    "    uint32_t u32;",
    "    uint64_t u64;",
    "} epoll_data_t;",
    "",
    "struct epoll_event {",
    "    uint32_t     events;    /* Epoll events */",
    "    epoll_data_t data;      /* User data variable */",
    "};",
    "",
    "struct mq_attr {",
    "    long mq_flags;       /* Flags: 0 or O_NONBLOCK */",
    "    long mq_maxmsg;      /* Max. # of messages on queue */",
    "    long mq_msgsize;     /* Max. message size (bytes) */",
    "    long mq_curmsgs;     /* # of messages currently in queue */",
    "};",
    "",
    "struct utimbuf {",
    "    time_t actime;       /* access time */",
    "    time_t modtime;      /* modification time */",
    "};"
    "",
    ""
    ]
    out = "\n".join(st)
    print out

def cxx_main(body):
    head = [
    "int init_module(void)",
    "{",
    ""
    ]

    tail = [
    "",
    "\t// A non 0 return means init_module failed; module can't be loaded.",
    "\treturn 0;",
    "}"
    ]
    outh = "\n".join(head)
    outt = "\n".join(tail)
    print outh, body, outt

def cxx_body():
    sts = [
    "aio_context_t",
    "cap_user_data_t",
    "cap_user_header_t",
    "char",
    "char *",
    "clockid_t",
    "fd_set",
    "gid_t",
    "int",
    "key_serial_t",
    "key_t",
    "loff_t",
    "long",
    "mode_t",
    "mqd_t",
    "off_t",
    "pid_t",
    "siginfo_t",
    "sigset_t",
    "size_t",
    "stack_t",
    "struct epoll_event",
    "struct file_handle",
    "struct getcpu_cache",
    "struct iocb",
    "struct io_event",
    "struct iovec",
    "struct itimerspec",
    "struct itimerval",
    "struct kexec_segment",
    "struct linux_dirent",
    "struct linux_dirent64",
    "struct mmsghdr",
    "struct mq_attr",
    "struct msgbuf",
    "struct msghdr",
    "struct msqid_ds",
    "struct old_utsname",
    "struct perf_event_attr",
    "struct pollfd",
    "struct pollfd",
    "struct pt_regs",
    "struct rlimit",
    "struct rlimit64",
    "struct robust_list_head",
    "struct rusage",
    "struct sched_param",
    "struct sembuf",
    "struct shmid_ds",
    "struct sigaction",
    "struct sigevent",
    "struct siginfo",
    "struct sockaddr",
    "struct stat",
    "struct statfs",
    "struct __sysctl_args",
    "struct sysinfo",
    "struct task_struct",
    "struct timespec",
    "struct timeval",
    "struct timex",
    "struct timezone",
    "struct ustat",
    "struct utimbuf",
    "struct timespec",
    "timer_t",
    "time_t",
    "u32",
    "u64",
    "uid_t",
    "union semun",
    "unsigned",
    "unsigned char",
    "unsigned int",
    "unsigned long"
    ]
    stms = []
    for st in sts:
        fs = st.split()
        if fs[0] == "struct":
            stdef = "_".join(fs[1::])
        else:
            stdef = "_".join(fs)

        stm = '\tprintk("#define len_%s %s\\n", sizeof(%s));' %(stdef, "%ld", st)
        stms.append(stm)

    out = "\n".join(stms)
    return out

def cxx_others():
    cnt = [
    "",
    "void cleanup_module(void)",
    "{",
    "}",
    "",
    "MODULE_LICENSE(\"GPL\");"
    ]
    out = "\n".join(cnt)
    print out

def gen_cxx_file():
    include_headers()
    extra_struct()

    body = cxx_body()
    func = cxx_main(body)

    cxx_others()

if __name__ == "__main__":
    gen_cxx_file()
