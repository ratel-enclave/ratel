/* **********************************************************
 * Designed by pinghai@gmail.com
 * **********************************************************/

/*
Summary: ocalls issued by DynamoRIO and SGX-app come to this file only through two entry functions,
i.e. sgx_dynamorio_syscall and sgx_syscall. These two functions then dispatch the ocall to the bridge
functions according to the syscall_no and parameters_count.
*/

/*
 * call_out.c - provide ocall interfaces for the entire SGX-DBI system
 */
#include "sgx_trts.h"
#include "string.h"

#include "syscall_no.h"
#include "struct_size.h"

#include "../dynamorio_t.h"

#include "sgx_instr.h"
#include "sgx_mm.h"
#include "sgx_signal.h"

#include "call_out.h"

extern void load_segment_fs(void *tls_segment);
extern void load_segment_gs(void *tls_segment);

/* export for external use */
int open_procmaps_file(void);
int read_procmaps_file(char buf[], size_t len);
void close_procmaps_file(void);

/* the file descpritor of sgx-procmaps: GX_PROCMAPS_MAX_FILE */
#define SGX_PROCMAPS_FD 40

//Generate a copy within the enclave.
void *gen_enclave_copy(void *org, int len)
{
    void *obj = org;

    if (!sgx_is_within_enclave(obj, len))
    {
        obj = malloc(len);
        memcpy(obj, org, len);
    }
    return obj;
}

/*--------------------------------------special syscalls-------------------------------------------*/
void dumb(void)
{
}

void ASSERT(int b)
{
    if (!b)
        __asm__ __volatile__ ("int3");
}

void unimplemented_syscall(int sysno)
{
    ocall_print_syscallname(sysno);
    ocall_print_str("The above syscall is not implemented, crash me!");

    __asm__ __volatile__("int3"); // ASSERT(false);
}

#define MAX_SYSCALL_NO 330
void (*syscalls[MAX_SYSCALL_NO])(void) = {dumb};

/* sycall: arch_prctl */
void sgx_ocall_syscall_arch_prctl(long *ret, long sysno, long code, unsigned long addr)
{
#define ARCH_SET_GS 0x1001
#define ARCH_SET_FS 0x1002
#define ARCH_GET_FS 0x1003
#define ARCH_GET_GS 0x1004

    switch (code)
    {
    case ARCH_SET_GS:
        // Fix-me
        // load_segment_gs(addr);
        break;

    case ARCH_SET_FS:
        // Fix-me
        // load_segment_fs(addr);
        break;

    case ARCH_GET_FS:
        // Fix-me
        // *(unsigned long*)addr = read_fsbase();
        break;

    case ARCH_GET_GS:
        // Fix-me
        // *(unsigned long*)addr = read_gsbase();
        break;

    default:
        *ret = -1;
        return;
        break;
    }
    *ret = 0;
}

/* fcntl has variable parameters */
long sgx_ocall_syscall_fcntl(long fd, long cmd, long arg1)
{
#define F_DUPFD 0 /* duplicate file descriptor, F_DUPFD (int) */
#define F_GETFD 1 /* get file descriptor flags, F_GETFD (void) */
#define F_SETFD 2 /* set file descriptor flags, F_SETFD (int) */
#define F_GETFL 3 /* get file status flags, F_GETFL (void) */
#define F_SETFL 4 /* set file status flags, F_SETFL (int) */
#define F_GETLK 5
#define F_SETLK 6
#define len_flock 64
    long ret = -1;

    switch (cmd)
    {
    case F_DUPFD:
    case F_SETFD:
    case F_SETFL:
        ocall_syscall_3_NNN(&ret, SYS_fcntl, fd, cmd, arg1);
        break;

    case F_GETFD:
    case F_GETFL:
        ocall_syscall_3_NNN(&ret, SYS_fcntl, fd, cmd, 0); /* tricky */
        break;

    case F_SETLK:
        ocall_syscall_3_NNTi(&ret, SYS_fcntl, fd, cmd, (void *)arg1, len_flock);
        break;

    case F_GETLK:
        ocall_syscall_3_NNTo(&ret, SYS_fcntl, fd, cmd, (void *)arg1, len_flock);
        break;

    default:
        unimplemented_syscall(SYS_fcntl);
        break;
    }

    return ret;
}

/* ioctl has variable parameters */
long sgx_ocall_syscall_ioctl(long fd, long cmd, long arg1)
{
    long ret = -1;
    
    switch (cmd)
    {
    case FIONREAD:
        ocall_syscall_3_NNPo(&ret, SYS_ioctl, fd, cmd, (void*)arg1, len_fionread);
        break;

    default:
        unimplemented_syscall(SYS_fcntl);
        break;
    }

    return ret;
}

static inline void cleanup_exited_thread_inside_trace()
{
    extern unsigned long g_td_hctx_base_addr;

    thread_helper_context_shadow *td_hctx_shdw = (thread_helper_context_shadow *)g_td_hctx_base_addr;
    ASSERT((NULL != td_hctx_shdw ? 1 : 0));

    int hcn = 0;
    int tid = sgx_ocall_syscall_0(SYS_gettid);
    int found = 0;
    while (hcn < MAX_THREAD_NUM_EACH_ENCLAVE) 
    {
        /* the argument clone_child_stack as an index to find out which td_hctx_shdw[x] belongs to ECALL thread */
        if (td_hctx_shdw[hcn].thread_id == tid && 0 != td_hctx_shdw[hcn].td_hctx_self)
        {
            unsigned long *pctid = (unsigned long *)td_hctx_shdw[hcn].clone_ctid;
            *pctid = ( *pctid & (((unsigned long long)0xFFFFFFFF) << 32) ); 

            found = 1;
            break;
        }
        hcn++;
    }

    int pid = sgx_ocall_syscall_0(SYS_getpid);
    if(tid != pid)
        ASSERT(found && "Cleanup failed!");
}

/*--------------------------------------General syscalls-------------------------------------------*/

//All syscalls with 0 parameters
long sgx_ocall_syscall_0(long sysno)
{
    long ret = -1;

    //ocall_print_syscallname(sysno);
    ocall_syscall_0(&ret, sysno);

    return ret;
}

//All syscalls with 1 parameters
long sgx_ocall_syscall_1(long sysno, long _rdi)
{
    long ret = -1;

    switch (sysno)
    {
    case SYS_chdir:
    case SYS_chroot:
    case SYS_acct:
    case SYS_rmdir:
    case SYS_unlink:
    case SYS_shmdt:
    case SYS_swapoff:
    case SYS_mq_unlink:
        ocall_syscall_1_S(&ret, sysno, (char *)_rdi);
        break;

    case SYS_pipe:
        // unimplemented_syscall(sysno);
        ocall_syscall_1_To(&ret, sysno, (long *)_rdi, len_pipefd);
        break;

    case SYS_set_tid_address:
        ocall_syscall_1_Tio(&ret, sysno, (long*)_rdi, sizeof(int*));
        break;

    case SYS_time:
        ocall_syscall_1_To(&ret, sysno, (long *)_rdi, len_time_t);
        break;

    case SYS_setgid:
    case SYS_timer_getoverrun:
    case SYS_brk:
    case SYS_eventfd:
    case SYS_io_destroy:
    case SYS_exit:
        /* clean up occupying global inside and outside resources once one thread exited */
        if (SYS_exit == sysno)
        {
            /* start cleaning up thread inside trace */
            int tid = sgx_ocall_syscall_0(SYS_gettid);
            int pid = sgx_ocall_syscall_0(SYS_getpid);
            if(tid != pid)
                cleanup_exited_thread_inside_trace();
            /* start cleaning up thread outside trace */
            ocall_syscall_1_N(&ret, sysno, _rdi);

            break;
        }
    case SYS_exit_group:
    case SYS_fchdir:
    case SYS_fdatasync:
    case SYS_fsync:
    case SYS_syncfs:
    case SYS_dup:
    case SYS_epoll_create1:
    case SYS_inotify_init1:
    case SYS_mlockall:
    case SYS_setfsgid:
    case SYS_umask:
    case SYS_personality:
    case SYS_getpgid:
    case SYS_getsid:
    case SYS_sched_getscheduler:
    case SYS_sched_get_priority_max:
    case SYS_sched_get_priority_min:
    case SYS_alarm:
    case SYS_epoll_create:
    case SYS_timer_delete:
    case SYS_setfsuid:
    case SYS_setuid:
    case SYS_unshare:
        ocall_syscall_1_N(&ret, sysno, _rdi);
        break;

    case SYS_rt_sigreturn:
        ret = ocall_sigreturn_simulation(_rdi);
        break;

    case SYS_close:
        if (sgx_mm_initialized && _rdi == SGX_PROCMAPS_FD)
        {
            close_procmaps_file();
            ret = 0;
        }
        else
        {
            ocall_syscall_1_N(&ret, sysno, _rdi);
        }
        break;

    case SYS_get_thread_area:
        /*int get_thread_area(struct user_desc *u_info);*/
        ocall_syscall_1_To(&ret, sysno, (void *)_rdi, 16);
        break;

    case SYS_set_thread_area:
        /*int set_thread_area(struct user_desc *u_info);*/
        ocall_syscall_1_Ti(&ret, sysno, (void *)_rdi, 16);
        break;

    case SYS_afs_syscall:
    case SYS_epoll_ctl_old:
    case SYS_epoll_wait_old:
    case SYS_getpmsg:
    case SYS_nfsservctl:
    case SYS_putpmsg:
    case SYS_security:
    case SYS_tuxcall:
    case SYS_uselib:
    case SYS_vserver:
    case SYS_create_module:
    case SYS_get_kernel_syms:
    case SYS_query_module:
        //ocall_syscall_1_not(&ret, sysno, _rdi);
        unimplemented_syscall(sysno);
        break;

    case SYS__sysctl:
        //ocall_syscall_1_sysctl(&ret, sysno, (struct __sysctl_args*)_rdi);
        unimplemented_syscall(sysno);
        break;

    case SYS_uname:
        ocall_syscall_1_To(&ret, sysno, (void *)_rdi, len_utsname);
        break;

    case SYS_times:
        ocall_syscall_1_To(&ret, sysno, (void *)_rdi, len_tms);
        break;

    case SYS_sysinfo:
        ocall_syscall_1_To(&ret, sysno, (void *)_rdi, len_sysinfo);
        break;

    case SYS_adjtimex:
        //ocall_syscall_1_timex(&ret, sysno, (struct timex*)_rdi);
        unimplemented_syscall(sysno);
        break;

    default:
        unimplemented_syscall(sysno);
        break;
    }

    return ret;
}

#include <string.h>
//All syscalls with 2 parameters
long sgx_ocall_syscall_2(long sysno, long _rdi, long _rsi)
{
    long ret = -1;
    byte *addr;

    switch (sysno)
    {
    case SYS_munmap:
        /* free external block */
        addr = sgx_mm_itn2ext((byte *)_rdi);
        sgx_mm_munmap(addr, _rsi);
        ocall_syscall_2_NN(&ret, sysno, (ulong)addr, _rsi);
        break;

    case SYS_ftruncate:
    case SYS_dup2:
    case SYS_listen:
    case SYS_kill:
        ocall_syscall_2_NN(&ret, sysno, _rdi, _rsi);
        break;

    case SYS_setrlimit:
        ocall_syscall_2_NTi(&ret, sysno, _rdi, (void *)_rsi, len_rlimit);
        break;

    case SYS_fstat:
        ocall_syscall_2_NTo(&ret, sysno, _rdi, (void *)_rsi, len_stat);
        break;

    case SYS_getrlimit:
        ocall_syscall_2_NTo(&ret, sysno, _rdi, (void *)_rsi, len_rlimit);
        break;

    case SYS_getitimer:
        ocall_syscall_2_NTo(&ret, sysno, _rdi, (void *)_rsi, len_itimerval);
        break;

    case SYS_getrusage:
        ocall_syscall_2_NTo(&ret, sysno, _rdi, (void *)_rsi, len_rusage);
        break;

    case SYS_clock_gettime:
        ocall_syscall_2_NTo(&ret, sysno, _rdi, (void *)_rsi, len_timespec);
        break;

    case SYS_mkdir:
    case SYS_access:
    case SYS_creat:
    case SYS_chmod:
        ocall_syscall_2_SN(&ret, sysno, (const char *)_rdi, _rsi);
        break;

    case SYS_utime:
        ocall_syscall_2_STi(&ret, sysno, (const char *)_rdi, (void *)_rsi, len_utimbuf);
        break;

    case SYS_stat:
    case SYS_lstat:
        ocall_syscall_2_STo(&ret, sysno, (const char *)_rdi, (void *)_rsi, len_stat);
        break;

    case SYS_getcwd:
        ocall_syscall_2_PoN(&ret, sysno, (void *)_rdi, _rsi);
        break;

    case SYS_gettimeofday:
        ocall_syscall_2_ToN(&ret, sysno, (void *)_rdi, 16, _rsi);
        break;

    case SYS_arch_prctl:
        sgx_ocall_syscall_arch_prctl(&ret, sysno, _rdi, _rsi);
        break;

    case SYS_sigaltstack:
        ret = ocall_sigaltstack(_rdi, _rsi);
        break;

    case SYS_set_robust_list:
        ocall_syscall_2_PoN(&ret, sysno, (void *)_rdi, _rsi);
        break;

    case SYS_nanosleep:
        ocall_syscall_2_TiTo(&ret, sysno, (void*)_rdi, (void*)_rsi, len_timespec);
        break;

    default:
        unimplemented_syscall(sysno);
        break;
    }

    return ret;
}

//All syscalls with 3 parameters
long sgx_ocall_syscall_3(long sysno, long _rdi, long _rsi, long _rdx)
{
    long ret = -1;
    char *s, *t;
    byte *addr;
    int sz;

    switch (sysno)
    {
    case SYS_open:
        s = (char *)_rdi;
        t = gen_enclave_copy(s, strlen(s) + 1);

        if (sgx_mm_initialized && strcmp(t, "/proc/self/maps") == 0 /*|| strcmp(t, "/proc//tid//maps") == 0*/)
        {
            open_procmaps_file();
            ret = SGX_PROCMAPS_FD;
        }
        else
        {
            ocall_syscall_3_SNN(&ret, sysno, t, _rsi, _rdx);

            /* bind the fid with filename */
            if (ret != -1)
                sgx_vma_set_cmt(ret, t);
        }

        /* free the enclave copy */
        if (t != s)
            free(t);
        break;

    case SYS_tgkill:
    case SYS_lseek:
    case SYS_socket:
    case SYS_fchown:
    case SYS_shmget:
        ocall_syscall_3_NNN(&ret, sysno, _rdi, _rsi, _rdx);
        break;

    case SYS_read:
        if (sgx_mm_initialized && _rdi == SGX_PROCMAPS_FD)
        {
            ret = read_procmaps_file((char *)_rsi, _rdx);
        }
        else
        {
            ocall_syscall_3_NPoN(&ret, sysno, _rdi, (void *)_rsi, _rdx);
        }
        break;

    case SYS_write:
        ocall_syscall_3_NPiN(&ret, sysno, _rdi, (void *)_rsi, _rdx);
        break;

    case SYS_readv:
        ocall_syscall_3_NToN(&ret, sysno, _rdi, (void *)_rsi, len_iovec, _rdx);
        break;

    case SYS_bind:
    case SYS_connect:
        ocall_syscall_3_NPoN(&ret, sysno, _rdi, (void *)_rsi, _rdx);
        break;

    case SYS_getpeername:
    case SYS_getsockname:
        sz = *(int *)_rdx;
        ocall_syscall_3_NToTio(&ret, sysno, _rdi, (void *)_rsi, sz, (int *)_rdx, len_socklen_t);
        break;

    case SYS_writev:
        {
            int size = 0;
            unsigned long *p = (unsigned long *)_rsi;
            for (int i = 0; i < _rdx; i++)
                size += p[i * len_factor + len_step];
            char *iov_addr = (char *)malloc(size + 1);
            memset(iov_addr, 0, size + 1);
            unsigned long iovp = (unsigned long)iov_addr;

            for (int i = 0; i < _rdx; i++)
            {
                int idx_iov = i * len_factor;
                int idx_size = idx_iov + len_step;
                memcpy((void*)iov_addr, (void*)p[idx_iov], p[idx_size]);

                iov_addr += p[idx_size];
            }

            ocall_syscall_3_NTiNP(&ret, sysno, _rdi, (void*)_rsi, _rdx * len_iovec, _rdx, (void*)iovp, size + 1);

            // free(iov_addr);
            // iov_addr = NULL;
            break;
        }

    case SYS_poll:
        ocall_syscall_3_ToNN(&ret, sysno, (void *)_rdi, len_pollfd, _rsi, _rdx);
        break;

    case SYS_mprotect:
        {
            addr = sgx_mm_itn2ext((byte *)_rdi);

            ocall_syscall_3_NNN(&ret, sysno, (ulong)addr, _rsi, _rdx);

            if (ret == 0)
            {
                // int sgx_mm_mprotect(byte* ext_addr, size_t len, uint prot)
                ret = sgx_mm_mprotect(addr, _rsi, _rdx);
            }
            break;
        }

    case SYS_getdents:
    case SYS_getdents64:
        ocall_syscall_3_NPoN(&ret, sysno, _rdi, (void *)_rsi, _rdx);
        break;

    case SYS_setitimer:
        ocall_syscall_3_NTiTo(&ret, sysno, _rdi, (void *)_rsi, len_itimerval, (void *)_rdx, len_itimerval);
        break;

    case SYS_chown:
        ocall_syscall_3_SNN(&ret, sysno, (const char *)_rdi, _rsi, _rdx);
        break;

    case SYS_readlink:
        ocall_syscall_3_SPoN(&ret, sysno, (const char *)_rdi, (void *)_rsi, _rdx);
        break;

    case SYS_fcntl:
        ret = sgx_ocall_syscall_fcntl(_rdi, _rsi, _rdx);
        break;

    case SYS_ioctl:
        ret = sgx_ocall_syscall_ioctl(_rdi, _rsi, _rdx);
        break;

    default:
        unimplemented_syscall(sysno);
        break;
    }

    return ret;
}

long sgx_ocall_syscall_4(long sysno, long _rdi, long _rsi, long _rdx, long _r10)
{
    long ret = -1;
    byte *addr;

    switch (sysno)
    {
    case SYS_rt_sigaction:
        // ocall_syscall_4_NTiToN(&ret, sysno, _rdi, (void*)_rsi, len_kernel_sigaction, (void*)_rdx, len_kernel_sigaction, _r10);
        ret = ocall_rt_sigaction(_rdi, _rsi, _rdx, _r10);
        break;

    case SYS_rt_sigprocmask:
        // ocall_syscall_4_NTiToN(&ret, sysno, _rdi, (void*)_rsi, len_kernel_sigset, (void*)_rdx, len_kernel_sigset, _r10);
        ret = ocall_rt_sigprocmask(_rdi, _rsi, _rdx, _r10);
        break;

    case SYS_epoll_ctl:
        ocall_syscall_4_NNNTio(&ret, sysno, _rdi, _rsi, _rdx, (void*)_r10, len_epoll_event);
        break;

    case SYS_epoll_wait:
        ocall_syscall_4_NTioNN(&ret, sysno, _rdi, (void*)_rsi, _rdx, _r10, len_epoll_event * MAX_EPOLL_EVENTS);
        break;

    case SYS_accept4:
        ocall_syscall_4_NTiToN(&ret, sysno, _rdi, (void*)_rsi, len_sockaddr, (void*)_rdx, len_socklen_t, _r10);
        break;

    case SYS_mremap:
        {
            #define EAGAIN      11
            #define ENOMEM      12
            #define EFAULT      14
            #define EINVAL      22
            
            addr = sgx_mm_itn2ext((byte*)_rdi);

            ocall_syscall_4_NNNN(&ret, sysno, (ulong)addr, _rsi, _rdx, _r10);

            if (ret != -1 && ret != -ENOMEM) {
                // int sgx_mm_mprotect(byte* ext_addr, size_t len, uint prot)
                ret = (long)sgx_mm_mremap(addr, _rsi, (byte*)ret, _rdx, _r10);
            }
            break;
        }

    case SYS_sendmmsg:
        ocall_syscall_4_NToNN(&ret, sysno, _rdi, (void *)_rsi, len_mmsghdr, _rdx, _r10);
        break;

    case SYS_socketpair:
        ocall_syscall_4_NNNTo(&ret, sysno, _rdi, _rsi, _rdx, (void *)_r10, len_socketpair);
        break;

    default:
        unimplemented_syscall(sysno);
        break;
    }

    return ret;
}

long sgx_ocall_syscall_5(long sysno, long _rdi, long _rsi, long _rdx, long _r10, long _r8)
{
    long ret = -1;
    int sz;
    switch (sysno)
    {
    case SYS_prctl:
        ocall_syscall_5_NNNNN(&ret, sysno, _rdi, _rsi, _rdx, _r10, _r8);
        break;

    case SYS_setsockopt:
        ocall_syscall_5_NNNPiN(&ret, sysno, _rdi, _rsi, _rdx, (void *)_r10, _r8);
        break;

    case SYS_getsockopt:
        sz = *(int *)_r8;
        ocall_syscall_5_NNNToTio(&ret, sysno, _rdi, _rsi, _rdx, (void *)_r10, sz, (socklen_t *)_r8, len_socklen_t);
        break;

    case SYS_clone:
        ocall_syscall_5_NPiNPoPoN(&ret, sysno, (ulong)_rdi, (void *)_rsi, _rsi, len_child_stack, (int *)_rdx, (int *)_r10, _r10, (ulong)_r8); 
        break;

    default:
        unimplemented_syscall(sysno);
        break;
    }

    return ret;
}

long sgx_ocall_syscall_6(long sysno, long _rdi, long _rsi, long _rdx, long _r10, long _r8, long _r9)
{
    long ret = -1;
    byte *addr;
    int sz;

    switch (sysno)
    {
    case SYS_mmap:
        addr = sgx_mm_itn2ext((byte *)_rdi);

        ocall_syscall_6_NNNNNN(&ret, sysno, (ulong)addr, _rsi, _rdx, _r10, _r8, _r9);
        /* return internal address */
        if (ret != -1)
        {
            // byte* sgx_mm_mmap(byte* ext_addr, size_t len, ulong prot, ulong flags, int fd, ulong offs)
            ret = (ulong)sgx_mm_mmap((byte *)ret, _rsi, _rdx, _r10, (int)_r8, _r9);
        }
        break;

    case SYS_futex:
        ocall_syscall_6_TioNNTiNN(&ret, sysno, (int *)_rdi, 4, _rsi, _rdx, (void *)_r10, len_timespec, (int *)_r8, 4, _r9);
        break;

    case SYS_sendto:
        ocall_syscall_6_NPiNNPiN(&ret, sysno, _rdi, (void *)_rsi, _rdx, _r10, (void *)_r8, _r9);
        break;

    case SYS_recvfrom:
        sz = *(int *)_r9;
        ocall_syscall_6_NPoNNToTo(&ret, sysno, _rdi, (void *)_rsi, _rdx, _r10, (void *)_r8, sz, (int *)_r9, len_socklen_t);
        break;

    default:
        unimplemented_syscall(sysno);
        break;
    }

    return ret;
}

extern void dynamorio_to_sgxdbi_stub(long ret);
long sgx_ocall_syscall(long sysno, long _rdi, long _rsi, long _rdx, long _r10, long _r8, long _r9)
{
    /*fixing-up them with a sysno-to-function table*/
    switch (sysno)
    {
        //No parameter
    case SYS_getpid:
    case SYS_gettid:
    case SYS_geteuid:
    case SYS_getuid:
    case SYS_getgid:
    case SYS_getegid:
    case SYS_sched_yield:
    case SYS_sync:
        return sgx_ocall_syscall_0(sysno);
        break;

        //One paramter
    case SYS_close:
    case SYS_unlink:
    case SYS_uname:
    case SYS_time:
    case SYS_times:
    case SYS_dup:
    case SYS_set_tid_address:
    case SYS_sysinfo:
    case SYS_alarm:
    case SYS_fdatasync:
    case SYS_fsync:
    case SYS_umask:
    case SYS_rt_sigreturn:
    case SYS_pipe:
        /*case SYS_set_thread_area:*/
        /*case SYS_get_thread_area:*/
        return sgx_ocall_syscall_1(sysno, _rdi);
        break;

    case SYS_epoll_create:
        return sgx_ocall_syscall_1(sysno, _rdi);
        break;
    case SYS_exit:
        return sgx_ocall_syscall_1(sysno, _rdi);
        break;
    case SYS_exit_group:
        dynamorio_to_sgxdbi_stub(0);
        /* unexpected_return(); */
        return -1;
        break;

        //Two paramters
    case SYS_fstat:
    case SYS_munmap:
    case SYS_gettimeofday:
    case SYS_getrlimit:
    case SYS_setrlimit:
    case SYS_arch_prctl:
    case SYS_getitimer:
    case SYS_stat:
    case SYS_lstat:
    case SYS_mkdir:
    case SYS_access:
    case SYS_creat:
    case SYS_chmod:
    case SYS_utime:
    case SYS_getcwd:
    case SYS_getrusage:
    case SYS_set_robust_list:
    case SYS_clock_gettime:
    case SYS_ftruncate:
    case SYS_kill:
    case SYS_dup2:
    case SYS_listen:
    case SYS_nanosleep:
        return sgx_ocall_syscall_2(sysno, _rdi, _rsi);
        break;

        //Three paramters
    /* FIXME: //cdd here we simply ignore giving advice to kernel as they are different world */
    // off: signals, on: pthread
    // case SYS_madvise:
    case SYS_tgkill:
    case SYS_open:
    case SYS_read:
    case SYS_write:
    case SYS_readv:
    case SYS_writev:
    case SYS_mprotect:
    case SYS_getdents:
    case SYS_getdents64:
    case SYS_setitimer:
    case SYS_chown:
    case SYS_lseek:
    case SYS_socket:
    case SYS_fchown:
    case SYS_shmget:
    case SYS_connect:
    case SYS_readlink:
    case SYS_ioctl:
    case SYS_bind:
    case SYS_poll:
    case SYS_getpeername:
    case SYS_getsockname:
        return sgx_ocall_syscall_3(sysno, _rdi, _rsi, _rdx);
        break;

        //Four parameters
    case SYS_rt_sigaction:
    case SYS_rt_sigprocmask:
    case SYS_epoll_ctl:
    case SYS_epoll_wait:
    case SYS_accept4:
    case SYS_mremap:
    case SYS_sendmmsg:
    case SYS_socketpair:
        return sgx_ocall_syscall_4(sysno, _rdi, _rsi, _rdx, _r10);
        break;

        //Five parameters
    case SYS_prctl:
    case SYS_setsockopt:
    case SYS_getsockopt:
    case SYS_clone:
        return sgx_ocall_syscall_5(sysno, _rdi, _rsi, _rdx, _r10, _r8);
        break;

        //Six parameters
    case SYS_mmap:
    case SYS_futex:
    case SYS_sendto:
    case SYS_recvfrom:
        return sgx_ocall_syscall_6(sysno, _rdi, _rsi, _rdx, _r10, _r8, _r9);
        break;

        //variable parameters
    case SYS_fcntl:
        return sgx_ocall_syscall_fcntl(_rdi, _rsi, _rdx);
        break;

    default:
        unimplemented_syscall(sysno);
        return -1;
        break;
    }
}

