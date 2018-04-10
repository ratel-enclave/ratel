#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdbool.h>

# include <unistd.h>
# include <pwd.h>

#include "sgx_urts.h"
#include "App.h"
#include "dynamorio_u.h"

#include <sys/types.h>
#include <unistd.h>
#include <sys/syscall.h>

char *syscall_name[] = {
    "read",
    "write",
    "open",
    "close",
    "stat",
    "fstat",
    "lstat",
    "poll",
    "lseek",
    "mmap",
    "mprotect",
    "munmap",
    "brk",
    "rt_sigaction",
    "rt_sigprocmask",
    "rt_sigreturn",
    "ioctl",
    "pread64",
    "pwrite64",
    "readv",
    "writev",
    "access",
    "pipe",
    "select",
    "sched_yield",
    "mremap",
    "msync",
    "mincore",
    "madvise",
    "shmget",
    "shmat",
    "shmctl",
    "dup",
    "dup2",
    "pause",
    "nanosleep",
    "getitimer",
    "alarm",
    "setitimer",
    "getpid",
    "sendfile",
    "socket",
    "connect",
    "accept",
    "sendto",
    "recvfrom",
    "sendmsg",
    "recvmsg",
    "shutdown",
    "bind",
    "listen",
    "getsockname",
    "getpeername",
    "socketpair",
    "setsockopt",
    "getsockopt",
    "clone",
    "fork",
    "vfork",
    "execve",
    "exit",
    "wait4",
    "kill",
    "uname",
    "semget",
    "semop",
    "semctl",
    "shmdt",
    "msgget",
    "msgsnd",
    "msgrcv",
    "msgctl",
    "fcntl",
    "flock",
    "fsync",
    "fdatasync",
    "truncate",
    "ftruncate",
    "getdents",
    "getcwd",
    "chdir",
    "fchdir",
    "rename",
    "mkdir",
    "rmdir",
    "creat",
    "link",
    "unlink",
    "symlink",
    "readlink",
    "chmod",
    "fchmod",
    "chown",
    "fchown",
    "lchown",
    "umask",
    "gettimeofday",
    "getrlimit",
    "getrusage",
    "sysinfo",
    "times",
    "ptrace",
    "getuid",
    "syslog",
    "getgid",
    "setuid",
    "setgid",
    "geteuid",
    "getegid",
    "setpgid",
    "getppid",
    "getpgrp",
    "setsid",
    "setreuid",
    "setregid",
    "getgroups",
    "setgroups",
    "setresuid",
    "getresuid",
    "setresgid",
    "getresgid",
    "getpgid",
    "setfsuid",
    "setfsgid",
    "getsid",
    "capget",
    "capset",
    "rt_sigpending",
    "rt_sigtimedwait",
    "rt_sigqueueinfo",
    "rt_sigsuspend",
    "sigaltstack",
    "utime",
    "mknod",
    "uselib",
    "personality",
    "ustat",
    "statfs",
    "fstatfs",
    "sysfs",
    "getpriority",
    "setpriority",
    "sched_setparam",
    "sched_getparam",
    "sched_setscheduler",
    "sched_getscheduler",
    "sched_get_priority_max",
    "sched_get_priority_min",
    "sched_rr_get_interval",
    "mlock",
    "munlock",
    "mlockall",
    "munlockall",
    "vhangup",
    "modify_ldt",
    "pivot_root",
    "_sysctl",
    "prctl",
    "arch_prctl",
    "adjtimex",
    "setrlimit",
    "chroot",
    "sync",
    "acct",
    "settimeofday",
    "mount",
    "umount2",
    "swapon",
    "swapoff",
    "reboot",
    "sethostname",
    "setdomainname",
    "iopl",
    "ioperm",
    "create_module",
    "init_module",
    "delete_module",
    "get_kernel_syms",
    "query_module",
    "quotactl",
    "nfsservctl",
    "getpmsg",
    "putpmsg",
    "afs_syscall",
    "tuxcall",
    "security",
    "gettid",
    "readahead",
    "setxattr",
    "lsetxattr",
    "fsetxattr",
    "getxattr",
    "lgetxattr",
    "fgetxattr",
    "listxattr",
    "llistxattr",
    "flistxattr",
    "removexattr",
    "lremovexattr",
    "fremovexattr",
    "tkill",
    "time",
    "futex",
    "sched_setaffinity",
    "sched_getaffinity",
    "set_thread_area",
    "io_setup",
    "io_destroy",
    "io_getevents",
    "io_submit",
    "io_cancel",
    "get_thread_area",
    "lookup_dcookie",
    "epoll_create",
    "epoll_ctl_old",
    "epoll_wait_old",
    "remap_file_pages",
    "getdents64",
    "set_tid_address",
    "restart_syscall",
    "semtimedop",
    "fadvise64",
    "timer_create",
    "timer_settime",
    "timer_gettime",
    "timer_getoverrun",
    "timer_delete",
    "clock_settime",
    "clock_gettime",
    "clock_getres",
    "clock_nanosleep",
    "exit_group",
    "epoll_wait",
    "epoll_ctl",
    "tgkill",
    "utimes",
    "vserver",
    "mbind",
    "set_mempolicy",
    "get_mempolicy",
    "mq_open",
    "mq_unlink",
    "mq_timedsend",
    "mq_timedreceive",
    "mq_notify",
    "mq_getsetattr",
    "kexec_load",
    "waitid",
    "add_key",
    "request_key",
    "keyctl",
    "ioprio_set",
    "ioprio_get",
    "inotify_init",
    "inotify_add_watch",
    "inotify_rm_watch",
    "migrate_pages",
    "openat",
    "mkdirat",
    "mknodat",
    "fchownat",
    "futimesat",
    "newfstatat",
    "unlinkat",
    "renameat",
    "linkat",
    "symlinkat",
    "readlinkat",
    "fchmodat",
    "faccessat",
    "pselect6",
    "ppoll",
    "unshare",
    "set_robust_list",
    "get_robust_list",
    "splice",
    "tee",
    "sync_file_range",
    "vmsplice",
    "move_pages",
    "utimensat",
    "epoll_pwait",
    "signalfd",
    "timerfd_create",
    "eventfd",
    "fallocate",
    "timerfd_settime",
    "timerfd_gettime",
    "accept4",
    "signalfd4",
    "eventfd2",
    "epoll_create1",
    "dup3",
    "pipe2",
    "inotify_init1",
    "preadv",
    "pwritev",
    "rt_tgsigqueueinfo",
    "perf_event_open",
    "recvmmsg",
    "fanotify_init",
    "fanotify_mark",
    "prlimit64",
    "name_to_handle_at",
    "open_by_handle_at",
    "clock_adjtime",
    "syncfs",
    "sendmmsg",
    "setns",
    "getcpu",
    "process_vm_readv",
    "process_vm_writev"
};

/* These two functions are used for debugging. */
void ocall_print_str(const char *str)
{
    printf("%s\n", str);
}

void ocall_print_syscallname(long sysno)
{
    if (sysno < 0 || sysno >= sizeof(syscall_name)/sizeof(char*))
        printf("Invalid syscall No.: %d\n", (int)sysno);
    else
        printf("%s, %d\n", syscall_name[sysno], (int)sysno);
}

/* system calls */
void echo_fun_return(long sysno, bool implemented, const char *fname, long ret)
{
    if (implemented)
        printf("%s: return 0x%lx\n", fname, ret);
    else
        printf("sysno: %-4d not implemented!\n", (int)sysno);
}


//void _syscall_exit(void)
//{
/* Destroy the enclave */
//sgx_destroy_enclave(dynamo_eid);
//}

//all syscalls without parameters
long ocall_syscall_0(long sysno)
{
    long ret;

    if (sysno == SYS_getpid) {
        ret = syscall(sysno);
        printf("%s: return 0x%lx\n", __FUNCTION__, ret);
    }
    else
        printf("Not implemented for sysno: %ld !\n", sysno);


    return ret;
}


long ocall_syscall_1_S(long sysno, char *S)
{
    long ret;

    if (sysno == SYS_unlink) {
        ret = syscall(sysno, S);
        printf("%s: return 0x%lx\n", __FUNCTION__, ret);
    }
    else
        printf("Not implemented for sysno: %ld !\n", sysno);

    return ret;
}


/*long ocall_syscall_1_pint(long sysno, long* pval)*/
/*{*/
/*return syscall(sysno, pval);*/
/*}*/


long ocall_syscall_1_N(long sysno, long N1)
{
    long ret;
    bool b = false;

    switch (sysno) {
        case SYS_close:
        case SYS_exit_group:
        case SYS_exit:
            ret = syscall(sysno, N1);
            b = true;
            break;
    }

    echo_fun_return(sysno, b, __FUNCTION__, ret);

    return ret;
}

/*long ocall_syscall_1_not(long sysno, long unimplemented)*/
/*{*/
/*return syscall(sysno, unimplemented);*/
/*}*/

/*long ocall_syscall_1_sysctl(long sysno, struct __sysctl_args* args)*/
/*{*/
/*return syscall(sysno, args);*/
/*}*/

/*long ocall_syscall_1_uname(long sysno, struct old_utsname* uname)*/
/*{*/
/*return syscall(sysno, uname);*/
/*}*/

/*long ocall_syscall_1_sysinfo(long sysno, struct sysinfo* info)*/
/*{*/
/*return syscall(sysno, info);*/
/*}*/

/*long ocall_syscall_1_timex(long sysno, struct timex* time)*/
/*{*/
/*return syscall(sysno, time);*/
/*}*/


/*[> OCall functions <]*/
/*void ocall_all_syscalls(const char *str)*/
/*{*/
/* Proxy/Bridge will check the length and null-terminate
 * the input string to prevent buffer overflow.
 */
/*printf("%s", str);*/
/*}*/


long ocall_syscall_2_NN(long sysno, long N1, long N2)
{
    long ret = 0;
    bool b = false;

    if (sysno == SYS_munmap) {
        ret = syscall(sysno, N1, N2);
        b = true;
    }

    echo_fun_return(sysno, b, __FUNCTION__, ret);

    return ret;
}

long ocall_syscall_2_V1N(long sysno, void *V, int len, long N)
{
    long ret = 0;
    bool b = false;

    if (sysno == SYS_open) {
        ret = syscall(sysno, (char*)V, N);
        b = true;
    }

    echo_fun_return(sysno, b, __FUNCTION__, ret);

    return ret;
}

long ocall_syscall_2_V2N(long sysno, void *V, int len, long N)
{
    long ret = 0;
    bool b = false;

    if (sysno == SYS_gettimeofday) {
        ret = syscall(sysno, V, N);
        b = true;
    }

    echo_fun_return(sysno, b, __FUNCTION__, ret);

    return ret;
}

long ocall_syscall_3_V0NN(long sysno, long V, long N1, long N2)
{
    long ret = 0;
    bool b = false;

    if (sysno == SYS_mprotect) {
        ret = syscall(sysno, V, N1, N2);
        b = true;
    }

    echo_fun_return(sysno, b, __FUNCTION__, ret);

    return ret;

}

long ocall_syscall_3_NV2N(long sysno, long N1, void *V, long N2)
{
    long ret = 0;
    bool b = false;

    if (sysno == SYS_read) {
        ret = syscall(sysno, N1, V, N2);
        b = true;
    }

    echo_fun_return(sysno, b, __FUNCTION__, ret);

    return ret;
}

long ocall_syscall_3_NT2N(long sysno, long N1, void *T, long l, long N2)
{
    long ret = 0;
    bool b = false;

    if (sysno == SYS_getdents) {
            ret = syscall(sysno, N1, T, N2);
            b = true;
    }

    echo_fun_return(sysno, b, __FUNCTION__, ret);

    return ret;

}

long ocall_syscall_3_SNN(long sysno, const char *S, long N1, long N2)
{
    long ret = 0;
    bool b = false;

    if (sysno == SYS_open) {
        ret = syscall(sysno, S, N1, N2);
        b = true;
    }

    echo_fun_return(sysno, b, __FUNCTION__, ret);

    return ret;
}

long ocall_syscall_3_NV1N(long sysno, long N1, void *V, long N2)
{
    long ret = 0;
    bool b = false;

    if (sysno == SYS_write) {
        ret = syscall(sysno, N1, V, N2);
        b = true;
    }

    echo_fun_return(sysno, b, __FUNCTION__, ret);

    return ret;
}


/*syscalls with 5 paramters*/
long ocall_syscall_5_NNNNN(long sysno, long N1, long N2, long N3, long N4, long N5)
{
    long ret = 0;
    bool b = false;

    if (sysno == SYS_prctl) {
        ret = syscall(sysno, N1, N2, N3, N4, N5);
        b = true;
    }

    echo_fun_return(sysno, b, __FUNCTION__, ret);

    return ret;
}


long ocall_syscall_6_V0NNNNN(long sysno, long V0, long N1, long N2, long N3, long N4, long N5)
{
    long ret = 0;
    bool b = false;

    if (sysno == SYS_mmap) {
        ret = syscall(sysno, V0, N1, N2, N3, N4, N5);
        b = true;
    }

    echo_fun_return(sysno, b, __FUNCTION__, ret);

    return ret;
}
