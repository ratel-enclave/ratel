#include "unistd_64.h"
#include "syscall.h"
#include "st_size.h"
#include "sgx_trts.h"
#include "string.h"
#include "../dynamorio_t.h"

#include "x86intrin.h"

#include "sgx_mm.h"
#include "call_out.h"

extern void load_fsbase(unsigned long base);
extern void load_gsbase(unsigned long base);


//Generate a copy within the enclave.
void* gen_enclave_copy(void *org, int len)
{
    void *obj = org;

    if (!sgx_is_within_enclave(obj, len)) {
        obj = malloc(len);
        memcpy(obj, org, len);
    }
    return obj;
}

/*----------------------------------sensitive machine instructions--------------------------------*/
/* CPUID */
void sgx_instr_cpuid(int res[4], int eax, int ecx)
{
    ocall_cpuid_ToNN(res, sizeof(int)*4, eax, ecx);
}

/* RDTSC */
void sgx_instr_rdtsc(uint64* res)
{
    ocall_rdtsc_To(res, sizeof(unsigned long long));
}

/* syscall instruction*/
long sgx_instr_syscall(long sysno, long _rdi, long _rsi, long _rdx, long _r10, long _r8, long _r9);


/*--------------------------------------special syscalls-------------------------------------------*/


void dumb(void)
{
}

void unimplemented_syscall(int sysno)
{
    ocall_print_syscallname(sysno);
    ocall_print_str("The above syscall is not implemented, crash me!");

    __asm__ __volatile__ ("int3");  // ASSERT(false);
}

#define MAX_SYSCALL_NO 330
void (*syscalls[MAX_SYSCALL_NO])(void) = {dumb};


/* sycall: arch_prctl */
void sgx_syscall_arch_prctl(long *ret, long sysno, long code, unsigned long addr)
{
#define ARCH_SET_GS 0x1001
#define ARCH_SET_FS 0x1002
#define ARCH_GET_FS 0x1003
#define ARCH_GET_GS 0x1004

    switch (code) {
        case ARCH_SET_GS:
            // Fix-me
            // load_gsbase(addr);
            break;

        case ARCH_SET_FS:
            // Fix-me
            // load_fsbase(addr);
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


#define SIGARRAY_SIZE   65

typedef struct loc_kernel_sigaction_t {
    unsigned char cnt[len_kernel_sigaction];
}loc_kernel_sigaction_t;

loc_kernel_sigaction_t app_sigaction[SIGARRAY_SIZE];    // Current signal-actions

long sgx_syscall_rt_sigaction(long signum, long act_ptr, long oldact_ptr, long _r10)
{
    loc_kernel_sigaction_t *act = (loc_kernel_sigaction_t*)act_ptr;
    loc_kernel_sigaction_t *oldact = (loc_kernel_sigaction_t*)oldact_ptr;

    if (oldact != NULL)
        memcpy(oldact, &app_sigaction[signum], sizeof(loc_kernel_sigaction_t));
    if (act != NULL)
        memcpy(&app_sigaction[signum], act, sizeof(loc_kernel_sigaction_t));
    sgxapp_reg_sighandler(signum);

    // returns 0 on success
    return 0;
}


long sgx_syscall_rt_sigprocmask(long how, long set_ptr, long oldset_ptr, long _r10)
{
    return 0;
}


/* fix-me: set a flag to indirect this syscall execute successfully,
   and allow master_signal_handler checks this flag. */
long sgx_syscall_sigaltstack(long ss_ptr, long oldss_ptr)
{
    return 0;
}


/* fcntl has variable parameters */
long sgx_syscall_fcntl(long fd, long cmd, long arg1, long arg2)
{
#define F_DUPFD 0

    long ret = -1;

    switch (cmd) {
        case F_DUPFD:
            ocall_syscall_2_NN(&ret, SYS_fcntl, cmd, arg1);
            break;
    }

    return ret;
}


/*--------------------------------------General syscalls-------------------------------------------*/

//All syscalls with 0 parameters
long sgx_instr_syscall_0(long sysno)
{
    long ret = -1;

    //ocall_print_syscallname(sysno);
    ocall_syscall_0(&ret, sysno);

    return ret;
}

//All syscalls with 1 parameters
long sgx_instr_syscall_1(long sysno, long _rdi)
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
            unimplemented_syscall(sysno);
            break;
    }

    return ret;
}


#include <string.h>
//All syscalls with 2 parameters
long sgx_instr_syscall_2(long sysno, long _rdi, long _rsi)
{
    long ret = -1;
    byte* addr;

    switch (sysno) {
        case SYS_fstat:
            ocall_syscall_2_NTo(&ret, sysno, _rdi, (void*)_rsi, len_stat);
            break;

        case SYS_munmap:
            /* free external block */
            addr = sgx_mm_itn2ext((byte*)_rdi);
            sgx_mm_munmap(addr, _rsi);
            ocall_syscall_2_NN(&ret, sysno, (ulong)addr, _rsi);
            break;

        case SYS_gettimeofday:
            ocall_syscall_2_ToN(&ret, sysno, (void*)_rdi, 16,  _rsi);
            break;

        case SYS_getrlimit:
            ocall_syscall_2_NTo(&ret, sysno, _rdi, (void*)_rsi, len_rlimit);
            break;

        case SYS_setrlimit:
            ocall_syscall_2_NTi(&ret, sysno, _rdi, (void*)_rsi, len_rlimit);
            break;

        case SYS_arch_prctl:
            sgx_syscall_arch_prctl(&ret, sysno, _rdi, _rsi);
            break;

        case SYS_getitimer:
            ocall_syscall_2_NTo(&ret, sysno, _rdi, (void*)_rsi, len_itimerval);
            break;

        case SYS_stat:
            ocall_syscall_2_STo(&ret, sysno, (char*)_rdi, (void*)_rsi, len_stat);
            break;

        case SYS_mkdir:
        case SYS_access:
            ocall_syscall_2_SN(&ret, sysno, (char*)_rdi, _rsi);
            break;

        case SYS_sigaltstack:
            ret = sgx_syscall_sigaltstack(_rdi, _rsi);
            break;

        default:
            unimplemented_syscall(sysno);
            break;
    }

    return ret;
}


//All syscalls with 3 parameters
long sgx_instr_syscall_3(long sysno, long _rdi, long _rsi, long _rdx)
{
    long ret = -1;
    char *s, *t;
    byte* addr;

    switch (sysno) {
        case SYS_open:
            s = (char*)_rdi;
            t = gen_enclave_copy(s, strlen(s)+1);

            ocall_syscall_3_SNN(&ret, sysno, t, _rsi, _rdx);

            /* bind the fid with filename */
            if (ret != -1)
                sgx_vma_set_cmt(ret, t);

            /* free the enclave copy */
            if (t != s)
                free(t);
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
            addr = sgx_mm_itn2ext((byte*)_rdi);

            ocall_syscall_3_NNN(&ret, sysno, (ulong)addr, _rsi, _rdx);

            if (ret == 0) {
                // int sgx_mm_mprotect(byte* ext_addr, size_t len, uint prot)
                sgx_mm_mprotect(addr, _rsi, _rdx);
            }
            break;

        case SYS_getdents:
            ocall_syscall_3_NToN(&ret, sysno, _rdi, (void*)_rsi, _rdx);
            break;

        case SYS_setitimer:
            ocall_syscall_3_NTiTo(&ret, sysno, _rdi, (void*)_rsi, len_itimerval, (void*)_rdx, len_itimerval);
            break;

        case SYS_fcntl:
            ret = sgx_syscall_fcntl(_rdi, _rsi, _rdx, 0);
            break;

        default:
            unimplemented_syscall(sysno);
            break;

    }

    return ret;
}


long sgx_instr_syscall_4(long sysno, long _rdi, long _rsi, long _rdx, long _r10)
{
    long ret = -1;
    byte* addr;

    switch(sysno) {

        case SYS_rt_sigaction:
            // ocall_syscall_4_NTiToN(&ret, sysno, _rdi, (void*)_rsi, len_kernel_sigaction, (void*)_rdx, len_kernel_sigaction, _r10);
            ret = sgx_syscall_rt_sigaction(_rdi, _rsi, _rdx, _r10);
            break;

        case SYS_rt_sigprocmask:
            // ocall_syscall_4_NTiToN(&ret, sysno, _rdi, (void*)_rsi, len_kernel_sigset, (void*)_rdx, len_kernel_sigset, _r10);
            ret = sgx_syscall_rt_sigprocmask(_rdi, _rsi, _rdx, _r10);
            break;

        case SYS_mremap:
            addr = sgx_mm_itn2ext((byte*)_rdi);

            ocall_syscall_4_NNNN(&ret, sysno, (ulong)addr, _rsi, _rdx, _r10);

            if (ret != -1) {
                // int sgx_mm_mprotect(byte* ext_addr, size_t len, uint prot)
                ret = (long)sgx_mm_mremap(addr, _rsi, (byte*)ret, _rdx, _r10);
            }
            break;

        default:
            unimplemented_syscall(sysno);
            break;
    }

    return ret;
}

long sgx_instr_syscall_5(long sysno, long _rdi, long _rsi, long _rdx, long _r10, long _r8)
{
    long ret = -1;

    if (sysno == SYS_prctl) {
        ocall_syscall_5_NNNNN(&ret, sysno, _rdi, _rsi, _rdx, _r10, _r8);
    }

    return ret;
}

long sgx_instr_syscall_6(long sysno, long _rdi, long _rsi, long _rdx, long _r10, long _r8, long _r9)
{
    long ret = -1;
    byte* addr;

    switch (sysno) {
        case SYS_mmap:
            addr = sgx_mm_itn2ext((byte*)_rdi);

            ocall_syscall_6_NNNNNN(&ret, sysno, (ulong)addr, _rsi, _rdx, _r10, _r8, _r9);
            /* return internal address */
            if (ret != -1) {
                // byte* sgx_mm_mmap(byte* ext_addr, size_t len, ulong prot, ulong flags, int fd, ulong offs)
                ret = (ulong)sgx_mm_mmap((byte*)ret, _rsi, _rdx, _r10, (int)_r8, _r9);
            }
            break;

        case SYS_futex:
            ocall_syscall_6_PoNNTiPoN(&ret, sysno, (int*)_rdi, _rsi, _rdx, (void*)_r10, len_timespec, (int*) _r8, _r9);
            break;

        default:
            unimplemented_syscall(sysno);
            break;
    }

    return ret;
}


long sgx_instr_syscall(long sysno, long _rdi, long _rsi, long _rdx, long _r10, long _r8, long _r9)
{
    /*fixing-up them with a sysno-to-function table*/
    switch (sysno) {

        //No parameters
        case SYS_getpid:
        case SYS_gettid:
        case SYS_sync:
            return sgx_instr_syscall_0(sysno);
            break;

            //One paramters
        case SYS_close:
        case SYS_unlink:
        case SYS_exit:
        case SYS_exit_group:
        case SYS_uname:
            /*case SYS_set_thread_area:*/
            /*case SYS_get_thread_area:*/
            return sgx_instr_syscall_1(sysno, _rdi);
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
        case SYS_access:
            return sgx_instr_syscall_2(sysno, _rdi, _rsi);
            break;

            //Three paramters
        case SYS_tgkill:
        case SYS_open:
        case SYS_read:
        case SYS_write:
        case SYS_mprotect:
        case SYS_getdents:
        case SYS_setitimer:
            return sgx_instr_syscall_3(sysno, _rdi, _rsi, _rdx);
            break;

            //Four parameters
        case SYS_rt_sigaction:
        case SYS_rt_sigprocmask:
        case SYS_mremap:
            return sgx_instr_syscall_4(sysno, _rdi, _rsi, _rdx, _r10);
            break;

            //Five parameters
        case SYS_prctl:
            return sgx_instr_syscall_5(sysno, _rdi, _rsi, _rdx, _r10, _r8);
            break;

            //Six parameters
        case SYS_mmap:
        case SYS_futex:
            return sgx_instr_syscall_6(sysno, _rdi, _rsi, _rdx, _r10, _r8, _r9);
            break;

            //variable parameters
        case SYS_fcntl:
            return sgx_syscall_fcntl(_rdi, _rsi, _rdx, _r10);
            break;

        default:
            unimplemented_syscall(sysno);
            return -1;
            break;
    }
}

// signature: dynamorio_syscall(sysnum, num_args, arg1, arg2, ...)
// <sgx_dynamorio_syscall>:      push   %rbp
// <sgx_dynamorio_syscall+1>:    mov    %rsp,%rbp
// long sgx_dynamorio_syscall(long sysnum, long num_args, ...)
long sgx_dynamorio_syscall(long sysnum, long num_args, long arg1,
        long arg2, long arg3, long arg4,
        long arg5, long arg6)
{
    // unsigned long arg1, arg2, arg3, arg4, arg5, arg6, _rbp;

    /* gcc uses rcx for passing the forth parameter */
    // __asm__ (
    //         "\tmov %%rdx, %0\n"
    //         "\tmov %%rcx, %1\n"
    //         "\tmov %%r8, %2\n"
    //         "\tmov %%r9, %3\n"
    //         "\tmov %%rbp, %4\n"
    //         "\txor %%rax, %%rax\n"
    //         :"=rm"(arg1), "=rm"(arg2), "=rm"(arg3),
    //         "=rm"(arg4), "=rm"(_rbp)::);

    switch(num_args) {
        case 0:
            return sgx_instr_syscall_0(sysnum);

        case 1:
            return sgx_instr_syscall_1(sysnum, arg1);

        case 2:
            return sgx_instr_syscall_2(sysnum, arg1, arg2);

        case 3:
            return sgx_instr_syscall_3(sysnum, arg1, arg2, arg3);

        case 4:
            return sgx_instr_syscall_4(sysnum, arg1, arg2, arg3, arg4);

        case 5:
            // arg5 = *((long*)_rbp + 2);
            return sgx_instr_syscall_5(sysnum, arg1, arg2, arg3, arg4, arg5);

        case 6:
            // arg5 = *((long*)_rbp + 2);
            // arg6 = *((long*)_rbp + 3);
            return sgx_instr_syscall_6(sysnum, arg1, arg2, arg3, arg4, arg5, arg6);

        default:
            ocall_print_str("too many arguments! crash me!");
            __asm__ __volatile__ ("int3");  // ASSERT(false);
            return -1;
            break;
    }
}
