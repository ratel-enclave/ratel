#ifndef _CALL_OUT_H__
#define _CALL_OUT_H__

long simulate_syscall_inst_0(long sysno);
long simulate_syscall_inst_1(long sysno, long _rdi);
long simulate_syscall_inst_2(long sysno, long _rdi, long _rsi);
long simulate_syscall_inst_3(long sysno, long _rdi, long _rsi, long _rdx);
long simulate_syscall_inst_4(long sysno, long _rdi, long _rsi, long _rdx, long _r10);
long simulate_syscall_inst_5(long sysno, long _rdi, long _rsi, long _rdx, long _r10, long _r8);
long simulate_syscall_inst_6(long sysno, long _rdi, long _rsi, long _rdx, long _r10, long _r8, long _r9);
long simulate_syscall_inst(long sysno, int nargs, long _rdi, long _rsi, long _rdx, long _r10, long _r8, long _r9);

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
