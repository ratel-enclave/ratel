#include "unistd_64.h"
#include "syscall.h"
#include "call_out.h"
#include "st_size.h"
#include "sgx_trts.h"
#include "string.h"
#include "../dynamorio_t.h"


//Generate a copy within the enclave.
void* gen_enclave_copy(void *org, int len)
{
    void *t;

    if (sgx_is_within_enclave(org, len))
        return org;
    else {
        t = malloc(len);
        memcpy(t, org, len);
        return t;
    }
}


//__attribute__((stdcall)) long simulate_syscall_inst(int sysno)
//rdi, rsi, rdx, r10, r8, r9

void dumb(void)
{
}

#define MAX_SYSCALL_NO 330
void (*syscalls[MAX_SYSCALL_NO])(void) = {dumb};

//All syscalls with 0 parameters
long simulate_syscall_inst_0(long sysno)
{
    long ret;

    //ocall_print_syscallname(sysno);
    ocall_syscall_0(&ret, sysno);
    return ret;
}

//All syscalls with 1 parameters
long simulate_syscall_inst_1(long sysno, long _rdi)
{
    long ret = -1;

    switch(sysno) {
        case SYS_chdir:
        case SYS_chroot:
        case SYS_acct:
        case SYS_rmdir:
        case SYS_unlink:
        case SYS_shmdt:
        case SYS_swapoff:
        case SYS_mq_unlink:
            ocall_syscall_1_S(&ret, sysno, (char*)_rdi);
            break;

        case SYS_pipe:
        case SYS_set_tid_address:
        case SYS_time:
            //ocall_syscall_1_pint(&ret, sysno, (long*)_rdi);
            break;

        case SYS_setgid:
        case SYS_timer_getoverrun:
        case SYS_brk:
        case SYS_eventfd:
        case SYS_io_destroy:
        case SYS_exit:
        case SYS_exit_group:
        case SYS_close:
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
        case SYS_rt_sigreturn:
            ocall_syscall_1_N(&ret, sysno, _rdi);
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
        case SYS_get_thread_area:
        case SYS_set_thread_area:
        case SYS_create_module:
        case SYS_get_kernel_syms:
        case SYS_query_module:
            //ocall_syscall_1_not(&ret, sysno, _rdi);
            break;

        case SYS__sysctl:
            //ocall_syscall_1_sysctl(&ret, sysno, (struct __sysctl_args*)_rdi);
            break;

        case SYS_uname:
            //ocall_syscall_1_uname(&ret, sysno, (struct old_utsname*)_rdi);
            break;

        case SYS_sysinfo:
        case SYS_times:
            //ocall_syscall_1_sysinfo(&ret, sysno, (struct sysinfo*)_rdi);
            break;

        case SYS_adjtimex:
            //ocall_syscall_1_timex(&ret, sysno, (struct timex*)_rdi);
            break;

        default:
            break;
    }

    return ret;
}
#include <string.h>

//All syscalls with 2 parameters
long simulate_syscall_inst_2(long sysno, long _rdi, long _rsi)
{
    long ret = 0;

    if (sysno == SYS_munmap) {
        //ocall_syscall_2_V0N(&ret, sysno, (void*)_rdi, _rsi);
        ocall_syscall_2_NN(&ret, sysno, _rdi, _rsi);
    }
    else if (sysno == SYS_gettimeofday) {
        //ocall_syscall_2_V0N(&ret, sysno, (void*)_rdi, _rsi);
        ocall_syscall_2_V2N(&ret, sysno, (void*)_rdi, 16,  _rsi);
    }
    return ret;
}


//All syscalls with 3 parameters
long simulate_syscall_inst_3(long sysno, long _rdi, long _rsi, long _rdx)
{
    long ret = 0;
    char *s, *t;

    switch (sysno) {
        case SYS_open:
            s = (char*)_rdi;
            t = gen_enclave_copy(s, strlen(s));

            ocall_syscall_3_SNN(&ret, sysno, t, _rsi, _rdx);
            if (t != s) free(t);

            break;

        case SYS_read:
            ocall_syscall_3_NV2N(&ret, sysno, _rdi, (void*)_rsi, _rdx);
            break;

        case SYS_write:
            ocall_syscall_3_NV1N(&ret, sysno, _rdi, (void*)_rsi, _rdx);
            break;

        case SYS_mprotect:
            ocall_syscall_3_V0NN(&ret, sysno, _rdi, _rsi, _rdx);
            break;

        case SYS_getdents:
            ocall_syscall_3_NT2N(&ret, sysno, _rdi, (void*)_rsi, len_linux_dirent, _rdx);
            break;
    }

    return ret;
}

long simulate_syscall_inst_4(long sysno, long _rdi, long _rsi, long _rdx, long _r10)
{
    long ret = 0;
    return ret;
}

long simulate_syscall_inst_5(long sysno, long _rdi, long _rsi, long _rdx, long _r10, long _r8)
{
    long ret = 0;

    if (sysno == SYS_prctl) {
        ocall_syscall_5_NNNNN(&ret, sysno, _rdi, _rsi, _rdx, _r10, _r8);
    }

    return ret;
}

long simulate_syscall_inst_6(long sysno, long _rdi, long _rsi, long _rdx, long _r10, long _r8, long _r9)
{
    long ret = 0;

    if (sysno == SYS_mmap) {
        ocall_syscall_6_V0NNNNN(&ret, sysno, _rdi, _rsi, _rdx, _r10, _r8, _r9);
    }

    return ret;
}


//All syscalls with 1 parameters
    __attribute ((sysv_abi))
long simulate_syscall_inst(long _rdi, long _rsi, long _rdx, long _r10, long _r8, long _r9)
{
    long sysno;

    //Get syscall No.
    __asm("mov %%rax, %0": "=rm"(sysno):: );
    ocall_print_syscallname(sysno);


    /*fixing-up them with a sysno-to-function table*/
    switch (sysno) {

        //No parameters
        case SYS_getpid:
            return simulate_syscall_inst_0(sysno);
            break;


            //One paramters
        case SYS_close:
        case SYS_unlink:
        case SYS_exit:
        case SYS_exit_group:
            return simulate_syscall_inst_1(sysno, _rdi);
            break;


            //Two paramters
        case SYS_munmap:
        case SYS_gettimeofday:
            return simulate_syscall_inst_2(sysno, _rdi, _rsi);
            break;


            //Three paramters
        case SYS_open:
        case SYS_read:
        case SYS_write:
        case SYS_mprotect:
        case SYS_getdents:
            return simulate_syscall_inst_3(sysno, _rdi, _rsi, _rdx);
            break;


            //Five parameters
        case SYS_prctl:
            return simulate_syscall_inst_5(sysno, _rdi, _rsi, _rdx, _r10, _r8);
            break;

            //Six parameters
        case SYS_mmap:
            return simulate_syscall_inst_6(sysno, _rdi, _rsi, _rdx, _r10, _r8, _r9);
            break;
    }

    return simulate_syscall_inst_0(sysno);
}
