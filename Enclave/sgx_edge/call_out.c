#include "call_out.h"
#include "../dynamorio_t.h"

//__attribute__((stdcall)) long simulate_syscall_inst(int sysno)
//rdi, rsi, rdx, r10, r8, r9

long simulate_syscall_inst_0(long sysno)
{
    long ret = 0;

    ocall_print_int(sysno);
	ocall_syscall_0(&ret, sysno);

    return ret;
}

long simulate_syscall_inst_1(long sysno, long _rdi)
{
    long ret = 0;
    return ret;
}

long simulate_syscall_inst_2(long sysno, long _rdi, long _rsi)
{
    long ret = 0;
    return ret;
}

long simulate_syscall_inst_3(long sysno, long _rdi, long _rsi, long _rdx)
{
    long ret = 0;
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
    return ret;
}

long simulate_syscall_inst_6(long sysno, long _rdi, long _rsi, long _rdx, long _r10, long _r8, long _r9)
{
    long ret = 0;
    return ret;
}


long simulate_syscall_inst(long sysno, int nargs, long _rdi, long _rsi, long _rdx, long _r10, long _r8, long _r9)
{
    switch(nargs) {
        case 0:
            return simulate_syscall_inst_0(sysno);

        case 1:
            return simulate_syscall_inst_1(sysno, _rdi);

        case 2:
            return simulate_syscall_inst_2(sysno, _rdi, _rsi);

        case 3:
            return simulate_syscall_inst_3(sysno, _rdi, _rsi, _rdx);

        case 4:
            return simulate_syscall_inst_4(sysno, _rdi, _rsi, _rdx, _r10);

        case 5:
            return simulate_syscall_inst_5(sysno, _rdi, _rsi, _rdx, _r10, _r8);

        case 6:
            return simulate_syscall_inst_6(sysno, _rdi, _rsi, _rdx, _r10, _r8, _r9);

        default:
            return 0;
    }
}
