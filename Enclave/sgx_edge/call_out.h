#ifndef _CALL_OUT_H__
#define _CALL_OUT_H__

#ifndef x64
typedef unsigned long uint64;
#else
typedef unsigned long long uint64;
#endif

long sgx_instr_syscall_0(long sysno);
long sgx_instr_syscall_1(long sysno, long _rdi);
long sgx_instr_syscall_2(long sysno, long _rdi, long _rsi);
long sgx_instr_syscall_3(long sysno, long _rdi, long _rsi, long _rdx);
long sgx_instr_syscall_4(long sysno, long _rdi, long _rsi, long _rdx, long _r10);
long sgx_instr_syscall_5(long sysno, long _rdi, long _rsi, long _rdx, long _r10, long _r8);
long sgx_instr_syscall_6(long sysno, long _rdi, long _rsi, long _rdx, long _r10, long _r8, long _r9);
long sgx_instr_syscall(long sysno, long _rdi, long _rsi, long _rdx, long _r10, long _r8, long _r9);

/* --------------Begin: SGX invalid instructions ------------*/
void sgx_instr_cpuid(int res[4], int eax, int ecx);
void sgx_instr_rdtsc(uint64* res);
/* --------------End: SGX invalid instructions ------------*/

#ifndef HAVE_TYPELIMITS_CONTROL
#define  HAVE_TYPELIMITS_CONTROL
#endif
#ifndef ANNOTATIONS
#define  ANNOTATIONS
#endif
#ifndef DR_DO_NOT_DEFINE_uint
#define  DR_DO_NOT_DEFINE_uint
#endif
#ifndef DR_DO_NOT_DEFINE_ushort
#define  DR_DO_NOT_DEFINE_ushort
#endif
#ifndef DR__Bool_EXISTS
#define  DR__Bool_EXISTS
#endif
#ifndef ASSEMBLE_WITH_GAS
#define  ASSEMBLE_WITH_GAS
#endif
#ifndef HAVE_MEMINFO
#define  HAVE_MEMINFO
#endif
#ifndef HAVE_MEMINFO_MAPS
#define  HAVE_MEMINFO_MAPS
#endif
#ifndef HAVE_TLS
#define  HAVE_TLS
#endif
#ifndef HAVE_SIGALTSTACK
#define  HAVE_SIGALTSTACK
#endif
#ifndef USE_VISIBILITY_ATTRIBUTES
#define  USE_VISIBILITY_ATTRIBUTES
#endif
#ifndef DYNAMORIO_IR_EXPORTS
#define  DYNAMORIO_IR_EXPORTS
#endif
#ifndef CUSTOM_TRACES
#define  CUSTOM_TRACES
#endif
#ifndef CLIENT_SIDELINE
#define  CLIENT_SIDELINE
#endif
#ifndef DR_APP_EXPORTS
#define  DR_APP_EXPORTS
#endif
#ifndef DEBUG_MEMORY
#define  DEBUG_MEMORY
#endif
#ifndef HEAP_ACCOUNTING
#define  HEAP_ACCOUNTING
#endif
#ifndef DEADLOCK_AVOIDANCE
#define  DEADLOCK_AVOIDANCE
#endif
#ifndef SHARING_STUDY
#define  SHARING_STUDY
#endif
#ifndef HASHTABLE_STATISTICS
#define  HASHTABLE_STATISTICS
#endif
#endif //#define _CALL_OUT_H__
