#include "unistd_64.h"
#include "syscall.h"
#include "call_out.h"
#include "st_size.h"
#include "sgx_trts.h"
#include "string.h"
#include "../dynamorio_t.h"

#include "x86intrin.h"


void sgx_arch_prctl(long *ret, long sysno, long code, unsigned long addr)
{
    /*[>int arch_prctl(int code, unsigned long addr);<]*/
    /*[>int arch_prctl(int code, unsigned long *addr);<]*/
    /*[>if (code == ARCH_SET_FS || code == ARCH_SET_GS)<]*/
    /*if ((int)code == 0x1002 || (int) code == 0x1001) {*/
        /*if ((int)code == 0x1002)*/
            /*wrfsbase(addr);*/
        /*else*/
            /*wrgsbase(addr);*/
    /*}*/
    /*[>else if (code == ARCH_GET_FS || code == ARCH_GET_GS) <]*/
    /*else if ((int)code == 0x1003 || (int)code == 0x1004) {*/
        /*if ((int)code == 0x1003)*/
            /**(unsigned long*)addr = rdfsbase();*/
        /*else*/
            /**(unsigned long*)addr = rdgsbase();*/
        /*[>long v;<]*/
        /*[>long *l = &v;<]*/

        /*[>ocall_syscall_2_NTo(ret, sysno, code, l, 8);<]*/
        /*[>*(unsigned long*)addr = v;<]*/
    /*}*/
    /**ret = 0;*/
}


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

/*CPUID*/
void our_cpuid(int res[4], int eax, int ecx)
{
    ocall_cpuid_3_ToNN(res, sizeof(int)*4, eax, ecx);
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

        case SYS_get_thread_area:
            /*int get_thread_area(struct user_desc *u_info);*/
            ocall_syscall_1_To(&ret, sysno, (void*)_rdi, 16);
            break;

        case SYS_set_thread_area:
            /*int set_thread_area(struct user_desc *u_info);*/
            ocall_syscall_1_Ti(&ret, sysno, (void*)_rdi, 16);
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
            break;

        case SYS__sysctl:
            //ocall_syscall_1_sysctl(&ret, sysno, (struct __sysctl_args*)_rdi);
            break;

        case SYS_uname:
            ocall_syscall_1_To(&ret, sysno, (void*)_rdi, len_utsname);
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

    switch (sysno) {
        case SYS_fstat:
            ocall_syscall_2_NTo(&ret, sysno, _rdi, (void*)_rsi, len_stat);
            break;

        case SYS_munmap:
            //ocall_syscall_2_V0N(&ret, sysno, (void*)_rdi, _rsi);
            ocall_syscall_2_NN(&ret, sysno, _rdi, _rsi);
            break;

        case SYS_gettimeofday:
            //ocall_syscall_2_V0N(&ret, sysno, (void*)_rdi, _rsi);
            ocall_syscall_2_ToN(&ret, sysno, (void*)_rdi, 16,  _rsi);
            break;

        case SYS_getrlimit:
            ocall_syscall_2_NTo(&ret, sysno, _rdi, (void*)_rsi, len_rlimit);
            break;

        case SYS_setrlimit:
            ocall_syscall_2_NTi(&ret, sysno, _rdi, (void*)_rsi, len_rlimit);
            break;

        case SYS_arch_prctl:
            sgx_arch_prctl(&ret, sysno, _rdi, _rsi);
            break;

        case SYS_getitimer:
            ocall_syscall_2_NTo(&ret, sysno, _rdi, (void*)_rsi, len_itimerval);
            break;

        case SYS_stat:
            ocall_syscall_2_STo(&ret, sysno, (char*)_rdi, (void*)_rsi, len_stat);
            break;

        case SYS_mkdir:
            ocall_syscall_2_SN(&ret, sysno, (char*)_rdi, _rsi);
            break;
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

        case SYS_tgkill:
            ocall_syscall_3_NNN(&ret, sysno, _rdi, _rsi, _rdx);
            break;

        case SYS_read:
            ocall_syscall_3_NToN(&ret, sysno, _rdi, (void*)_rsi, _rdx);
            break;

        case SYS_write:
            ocall_syscall_3_NTiN(&ret, sysno, _rdi, (void*)_rsi, _rdx);
            break;

        case SYS_mprotect:
            ocall_syscall_3_NNN(&ret, sysno, _rdi, _rsi, _rdx);
            break;

        case SYS_getdents:
            ocall_syscall_3_NToN(&ret, sysno, _rdi, (void*)_rsi, _rdx);
            break;

    }

    return ret;
}

long simulate_syscall_inst_4(long sysno, long _rdi, long _rsi, long _rdx, long _r10)
{
    long ret = 0;

    switch(sysno) {

        case SYS_rt_sigaction:
            ocall_syscall_4_NTiToN(&ret, sysno, _rdi, (void*)_rsi, len_kernel_sigaction, (void*)_rdx, len_kernel_sigaction, _r10);
            break;

        case SYS_rt_sigprocmask:
            ocall_syscall_4_NTiToN(&ret, sysno, _rdi, (void*)_rsi, len_kernel_sigset, (void*)_rdx, len_kernel_sigset, _r10);
            break;

    }

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

    switch (sysno) {
        case SYS_mmap:
            ocall_syscall_6_NNNNNN(&ret, sysno, _rdi, _rsi, _rdx, _r10, _r8, _r9);
            break;

        case SYS_futex:
            ocall_syscall_6_PoNNTiPoN(&ret, sysno, (int*)_rdi, _rsi, _rdx, (void*)_r10, len_timespec, (int*) _r8, _r9);
            break;
    }

    return ret;
}


long sgx_fcntl(long cmd, long _rsi, long _rdx, long _r10)
{
#define F_DUPFD 0

    long ret = 0;

    switch (cmd) {
        case F_DUPFD:
            ocall_syscall_2_NN(&ret, SYS_fcntl, cmd, _rsi);
            break;
    }

    return ret;
}


    __attribute ((sysv_abi))
long simulate_syscall_inst(long _rdi, long _rsi, long _rdx, long _r10, long _r8, long _r9)
{
    long sysno;

    //Get syscall No.
    __asm volatile ("mov %%rax, %0": "=rm"(sysno)::"rdi","rsi","rdx","r10","r8","r9" );

    ocall_print_syscallname(sysno);

    /*fixing-up them with a sysno-to-function table*/
    switch (sysno) {

        //No parameters
        case SYS_getpid:
        case SYS_gettid:
        case SYS_sync:
            return simulate_syscall_inst_0(sysno);
            break;


            //One paramters
        case SYS_close:
        case SYS_unlink:
        case SYS_exit:
        case SYS_exit_group:
        case SYS_uname:
        /*case SYS_set_thread_area:*/
        /*case SYS_get_thread_area:*/
            return simulate_syscall_inst_1(sysno, _rdi);
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
        case SYS_mkdir:
            return simulate_syscall_inst_2(sysno, _rdi, _rsi);
            break;


            //Three paramters
        case SYS_tgkill:
        case SYS_open:
        case SYS_read:
        case SYS_write:
        case SYS_mprotect:
        case SYS_getdents:
            return simulate_syscall_inst_3(sysno, _rdi, _rsi, _rdx);
            break;


            //Four parameters
        case SYS_rt_sigaction:
        case SYS_rt_sigprocmask:
            return simulate_syscall_inst_4(sysno, _rdi, _rsi, _rdx, _r10);
            break;


            //Five parameters
        case SYS_prctl:
            return simulate_syscall_inst_5(sysno, _rdi, _rsi, _rdx, _r10, _r8);
            break;

            //Six parameters
        case SYS_mmap:
        case SYS_futex:
            return simulate_syscall_inst_6(sysno, _rdi, _rsi, _rdx, _r10, _r8, _r9);
            break;

            //variable parameters
        case SYS_fcntl:
            return sgx_fcntl(_rdi, _rsi, _rdx, _r10);
            break;
    }

    ocall_print_syscallname(sysno);
    return simulate_syscall_inst_0(sysno);
}
