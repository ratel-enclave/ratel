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
#include <fcntl.h>
#include <unistd.h>


//Please make me beautiful
void ocall_cpuid_ToNN(void *T, int l, int eax, int ecx)
{
    int a, b, c,d;

    asm volatile (
            "\tmov %4, %%eax\n" \
            "\tmov %5, %%ecx\n" \
            "\tcpuid\n" \
            "\tmov %%eax, %0\n" \
            "\tmov %%ebx, %1\n" \
            "\tmov %%ecx, %2\n" \
            "\tmov %%edx, %3\n" \
            :"=m"(a), "=m"(b),"=m"(c),"=m"(d): "rm"(eax), "rm"(ecx));
    ((int*)T)[0] = a;
    ((int*)T)[1] = b;
    ((int*)T)[2] = c;
    ((int*)T)[3] = d;
    printf("%s\n", __FUNCTION__);
}

void ocall_rdtsc_To(void *T, int l)
{
    unsigned long long *t = T;
    unsigned hi, lo;

    // *t = __rdtsc();
    __asm__ __volatile__ ("rdtsc" : "=a"(lo), "=d"(hi));
    *t = ( (unsigned long long)lo)|( ((unsigned long long)hi)<<32 );
}


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

void ocall_print_syscallno_numargs(long int sysno,long int numarg)
{
	printf("sysno: %d numargs: %d\n",(int)sysno,(int)numarg);

}


/* system calls */
void echo_fun_return(long sysno, bool implemented, const char *fname, long ret)
{
    /*if (implemented) {
        //ocall_print_syscallname(sysno);
        //printf("%s: return 0x%lx\n", fname, ret);
    }
    else {
        printf("sysno: %-4d not implemented!\n", (int)sysno);
    }*/
    //fflush(stdout);
	return;
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
    bool b = false;

    switch (sysno) {
        case SYS_getpid:
        case SYS_gettid:
	case SYS_geteuid:
	case SYS_getuid:
	case SYS_getegid:
	case SYS_getgid:
        case SYS_sync:
            ret = syscall(sysno);
            b = true;
            break;
    }

    echo_fun_return(sysno, b, __FUNCTION__, ret);

    return ret;
}


long ocall_syscall_1_S(long sysno, char *S)
{
    long ret;
    bool b = false;

    switch (sysno) {
        case SYS_unlink:
            ret = syscall(sysno, S);
            b = true;
            break;
    }

    echo_fun_return(sysno, b, __FUNCTION__, ret);

    return ret;
}


long ocall_syscall_1_N(long sysno, long N1)
{
    long ret;
    bool b = false;

    switch (sysno) {
        case SYS_close:
        case SYS_exit_group: /* fix-me: allow out-encalve code to do cleanup */
        case SYS_exit:
	case SYS_alarm:
	case SYS_fdatasync:
	case SYS_dup:
            ret = syscall(sysno, N1);
            b = true;
            break;
    }

    echo_fun_return(sysno, b, __FUNCTION__, ret);

    return ret;
}

long ocall_syscall_1_Ti(long sysno, void *T, int l)
{
    long ret;
    bool b = false;

    switch (sysno) {
        case SYS_uname:
        case SYS_set_thread_area:
            ret = syscall(sysno, T);
            b = true;
            break;
    }

    echo_fun_return(sysno, b, __FUNCTION__, ret);

    return ret;
}

long ocall_syscall_1_To(long sysno, void *T, int l)
{
    long ret;
    bool b = false;

    switch (sysno) {
        case SYS_uname:
        case SYS_get_thread_area:
        case SYS_time:
        case SYS_times:
        case SYS_sysinfo:
	case SYS_set_tid_address:
            ret = syscall(sysno, T);
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

    switch (sysno) {
        case SYS_munmap:
        case SYS_ftruncate:
        case SYS_arch_prctl:
	case SYS_dup2:
        case SYS_kill:
	case SYS_listen:
            ret = syscall(sysno, N1, N2);
            b = true;
            break;
    }

    echo_fun_return(sysno, b, __FUNCTION__, ret);

    return ret;
}

long ocall_syscall_2_NTi(long sysno, long N, void *V, int len)
{
    long ret = 0;
    bool b = false;

    if (sysno == SYS_setrlimit) {
        ret = syscall(sysno, N, V);
        b = true;
    }

    echo_fun_return(sysno, b, __FUNCTION__, ret);

    return ret;
}

long ocall_syscall_2_NTo(long sysno, long N, void *V, int len)
{
    long ret = 0;
    bool b = false;

    switch (sysno) {
        case SYS_getrlimit:
        case SYS_fstat:
        case SYS_getitimer:
        case SYS_getrusage:
        case SYS_clock_gettime:
            ret = syscall(sysno, N, V);
            b = true;
            break;
    }

    echo_fun_return(sysno, b, __FUNCTION__, ret);

    return ret;
}



long ocall_syscall_2_SN(long sysno, const char *S, long N)
{
    long ret = 0;
    bool b = false;

    switch (sysno) {
        case SYS_mkdir:
        case SYS_access:
        case SYS_creat:
        case SYS_chmod:
            ret = syscall(sysno, S, N);
            b = true;
            break;
    }

    echo_fun_return(sysno, b, __FUNCTION__, ret);

    return ret;
}


long ocall_syscall_2_STi(long sysno, const char *S, void *T, int l)
{
    long ret = 0;
    bool b = false;

    switch (sysno) {
        case SYS_utime:
            ret = syscall(sysno, S, T);
            b = true;
            break;

        default:
            break;
    }

    echo_fun_return(sysno, b, __FUNCTION__, ret);

    return ret;
}


long ocall_syscall_2_STo(long sysno, const char *S, void *T, int l)
{
    long ret = 0;
    bool b = false;

    switch (sysno) {
        case SYS_stat:
        case SYS_lstat:
            ret = syscall(sysno, S, T);
            b = true;
            break;

        default:
            break;
    }

    echo_fun_return(sysno, b, __FUNCTION__, ret);

    return ret;
}


long ocall_syscall_2_VoN(long sysno, void *T, int l)
{
    long ret = 0;
    bool b = false;

    switch (sysno) {
        case SYS_set_robust_list:
            ret = syscall(sysno, T, l);
            b = true;
            break;

        default:
            break;
    }

    echo_fun_return(sysno, b, __FUNCTION__, ret);

    return ret;
}

long ocall_syscall_2_PoN(long sysno, void *T, int l)
{
    long ret = 0;
    bool b = false;

    switch (sysno) {
        case SYS_getcwd:
            ret = syscall(sysno, T, l);
            b = true;
            break;

        default:
            break;
    }

    echo_fun_return(sysno, b, __FUNCTION__, ret);

    return ret;
}
long ocall_syscall_2_ViN(long sysno, void *T, int l)
{
    long ret = 0;
    bool b = false;

    switch (sysno) {
        case SYS_set_robust_list:
            ret = syscall(sysno, T, l);
            b = true;
            break;

        default:
            break;
    }

    echo_fun_return(sysno, b, __FUNCTION__, ret);

    return ret;
}


long ocall_syscall_2_TiN(long sysno, void *V, int len, long N)
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


long ocall_syscall_2_ToN(long sysno, void *V, int len, long N)
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


long ocall_syscall_3_NNN(long sysno, long N1, long N2, long N3)
{
    long ret = 0;
    bool b = false;

    switch (sysno) {
        case SYS_tgkill:
        case SYS_lseek:
	case SYS_socket:
        case SYS_mprotect:
        case SYS_fcntl:
            ret = syscall(sysno, N1, N2, N3);
            b = true;
            break;
    }

    echo_fun_return(sysno, b, __FUNCTION__, ret);

    return ret;
}

long ocall_syscall_3_NNVio(long sysno,long N1,long N2,void *T,int len)
{
    long ret = 0;
    bool b = false;

    switch (sysno) {
        case SYS_ioctl:
            ret = syscall(sysno, N1, N2, T);
            b = true;
            break;
    }

    echo_fun_return(sysno, b, __FUNCTION__, ret);

    return ret;
}
long ocall_syscall_3_SNN(long sysno, const char *S, long N1, long N2)
{
    long ret = 0;
    bool b = false;

    switch (sysno) {

        case SYS_open:
            //printf("open file %s, %lx, %lx\n", S, N1, N2);
            ret = syscall(sysno, S, N1, N2);
            b = true;
            break;

        case SYS_chown:
            ret = syscall(sysno, S, N1, N2);
            b = true;
            break;
    }

    echo_fun_return(sysno, b, __FUNCTION__, ret);

    return ret;
}


long ocall_syscall_3_SPoN(long sysno, const char *S, void *P, long N)
{
    long ret = 0;
    bool b = false;

    switch (sysno) {
        case SYS_readlink:
            ret = syscall(sysno, S, P, N);
            b = true;
            break;
    }

    echo_fun_return(sysno, b, __FUNCTION__, ret);

    return ret;
}


long ocall_syscall_3_NPoN(long sysno, long N1, void *V, long N2)
{
    long ret = 0;
    bool b = false;

    switch (sysno) {
        case SYS_read:
	//	case SYS_connect:
		case SYS_getdents:
		case SYS_getdents64:
            ret = syscall(sysno, N1, V, N2);
            b = true;
            break;
    }

    echo_fun_return(sysno, b, __FUNCTION__, ret);

    return ret;
}


long ocall_syscall_3_NPiN(long sysno, long N1, void *V, long N2)
{
    long ret = 0;
    bool b = false;

    switch (sysno) {
        case  SYS_write:
        ret = syscall(sysno, N1, V, N2);
        b = true;
        /*sync();*/
    }

    echo_fun_return(sysno, b, __FUNCTION__, ret);

    return ret;
}



long ocall_syscall_3_NToN(long sysno, long N1, void *V, long dumb, long N2)
{
    long ret = 0;
    bool b = false;

    switch (sysno) {
        case SYS_readv:
	    case SYS_bind:
       // case SYS_getdents:
       // case SYS_getdents64:
	    case SYS_connect:
            ret = syscall(sysno, N1, V, N2);
            b = true;
            break;
    }

    echo_fun_return(sysno, b, __FUNCTION__, ret);

    return ret;
}


long ocall_syscall_3_NTiN(long sysno, long N1, void *V, long dumb, long N2)
{
    long ret = 0;
    bool b = false;

    switch (sysno) {
        case SYS_writev:
            ret = syscall(sysno, N1, V, N2);
            b = true;
            break;
    }

    echo_fun_return(sysno, b, __FUNCTION__, ret);

    return ret;
}

long ocall_syscall_3_ToNN(long sysno, void *V, long dumb, long N1, long N2)
{
    long ret = 0;
    bool b = false;

    switch (sysno) {
        case SYS_poll:
            ret = syscall(sysno,V,N1,N2);
            b = true;
            break;
    }

    echo_fun_return(sysno, b, __FUNCTION__, ret);

    return ret;
}






long ocall_syscall_3_NNTo(long sysno, long N1, long N2, void *V, long dumb)
{
    long ret = 0;
    bool b = false;

    switch (sysno) {
        case SYS_fcntl:
            ret = syscall(sysno, N1,N2,V);
            b = true;
            break;
    }

    echo_fun_return(sysno, b, __FUNCTION__, ret);

    return ret;
}


long ocall_syscall_3_NNTi(long sysno, long N1, long N2, void *V, long dumb)
{
    long ret = 0;
    bool b = false;

    switch (sysno) {
        case SYS_fcntl:
            ret = syscall(sysno, N1, N2, V);
            b = true;
            break;
    }

    echo_fun_return(sysno, b, __FUNCTION__, ret);

    return ret;
}

long ocall_syscall_3_NTiTo(long sysno, long N0, void *V1, long dumb1, void *V2, long dumb2)
{
    long ret = 0;
    bool b = false;

    if (sysno == SYS_setitimer) {
        ret = syscall(sysno, N0, V1, V2);
        b = true;
    }

    echo_fun_return(sysno, b, __FUNCTION__, ret);

    return ret;
}


/*syscalls with 4 paramters*/
long ocall_syscall_4_NNNN(long sysno, long N1, long N2, long N3, long N4)
{
    long ret = 0;
    bool b = false;

    if (sysno == SYS_mremap) {
        ret = syscall(sysno, N1, N2, N3, N4);
        b = true;
    }

    echo_fun_return(sysno, b, __FUNCTION__, ret);

    return ret;
}
long ocall_syscall_4_NToNN(long sysno, long N1, void *V, long dumb, long N2, long N3)
{
    long ret = 0;
    bool b = false;

    switch (sysno) {
        case SYS_sendmmsg:
            ret = syscall(sysno,N1,V,N2,N3);
            b = true;
            break;
    }

    echo_fun_return(sysno, b, __FUNCTION__, ret);

    return ret;
}


long ocall_syscall_4_NTiToN(long sysno, long N1, void *T1, long l1, void *T2, long l2, long N2)
{
    long ret = 0;
    bool b = false;

    switch (sysno) {
        case SYS_rt_sigaction:
        case SYS_rt_sigprocmask:
            ret = syscall(sysno, N1, T1, T2, N2);
            b = true;
            break;
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

long ocall_syscall_5_NNNVioN(long sysno, long N1, long N2, long N3, void* V1, long N5)
{
    long ret = 0;
    bool b = false;

    switch(sysno) {
		case SYS_setsockopt:
		case SYS_getsockopt:
        ret = syscall(sysno, N1, N2, N3, V1, N5);
        b = true;
		break;
    }

    echo_fun_return(sysno, b, __FUNCTION__, ret);

    return ret;
}

long ocall_syscall_6_NNNNNN(long sysno, long N1, long N2, long N3, long N4, long N5, long N6)
{
    long ret = 0;
    bool b = false;

    if (sysno == SYS_mmap) {
        ret = syscall(sysno, N1, N2, N3, N4, N5, N6);
        b = true;
    }

    echo_fun_return(sysno, b, __FUNCTION__, ret);

    return ret;
}

long ocall_syscall_6_PoNNTiPoN(long sysno, int* V1, long N1, long N2, void *T, long l, int *V2, long N3)
{
    long ret = 0;
    bool b = false;

    if (sysno == SYS_futex) {
        ret = syscall(sysno, V1, N1, N2, T, V2, N3);
        b = true;
    }

    echo_fun_return(sysno, b, __FUNCTION__, ret);
	return ret;
}

long ocall_syscall_6_NVoNNToN(long sysno,long N1,void* V1,long N2,long N3,void* T, int N4)
{


long ret = 0;
    bool b = false;

    if (sysno == SYS_sendto) {
        ret = syscall(sysno, N1,V1,N2,N3,T,N4);
        b = true;
    }

    echo_fun_return(sysno, b, __FUNCTION__, ret);
	return ret;
}
