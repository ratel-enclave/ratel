/* **********************************************************
 * Copyright (c) 2011-2015 Google, Inc.  All rights reserved.
 * Copyright (c) 2000-2010 VMware, Inc.  All rights reserved.
 * **********************************************************/

/*
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * * Redistributions of source code must retain the above copyright notice,
 *   this list of conditions and the following disclaimer.
 *
 * * Redistributions in binary form must reproduce the above copyright notice,
 *   this list of conditions and the following disclaimer in the documentation
 *   and/or other materials provided with the distribution.
 *
 * * Neither the name of VMware, Inc. nor the names of its contributors may be
 *   used to endorse or promote products derived from this software without
 *   specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL VMWARE, INC. OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH
 * DAMAGE.
 */

/* Copyright (c) 2003-2007 Determina Corp. */
/* Copyright (c) 2001-2003 Massachusetts Institute of Technology */
/* Copyright (c) 2000-2001 Hewlett-Packard Company */

/* header for library of core utilites shared with non-core: "drhelper" */

#ifndef _DR_HELPER_H_
#define _DR_HELPER_H_ 1

/* If the caller is using the DR API they'll have our types that way; else we
 * include globals_shared.h.
 */
#ifndef _DR_API_H_
# include "globals_shared.h"
#endif

#ifdef UNIX
# ifdef MACOS
/* Some 32-bit syscalls return 64-bit values (e.g., SYS_lseek) in eax:edx */
int64 dynamorio_syscall(uint sysnum, uint num_args, ...);
int64 dynamorio_mach_dep_syscall(uint sysnum, uint num_args, ...);
ptr_int_t dynamorio_mach_syscall(uint sysnum, uint num_args, ...);
# else
ptr_int_t dynamorio_syscall(uint sysnum, uint num_args, ...);
long sgx_instr_syscall_dr_generic(long, long, long, long, long, long, long, long);
long sgx_instr_syscall_dr_individual(long, long, long, long, long, long);

// long sgx_instr_syscall(long arg1, long arg2, long arg3, long arg4, long arg5, long arg6);

// void sgx_helper_cpuid(void);
// void sgx_helper_rdtsc(void);
// void sgx_helper_syscall(void);

void sgx_helper_cpuid(void* drctx);
void sgx_helper_rdtsc(void* drctx);
void sgx_helper_syscall(void* drctx);

# endif
#endif

#ifdef AARCH64
void clear_icache(void *beg, void *end);
#endif

void dr_fpu_exception_init(void);

#ifdef X86
/* returns the value of mmx register #index in val */
void get_mmx_val(OUT uint64 *val, uint index);
#endif

#ifdef WINDOWS
/* no intrinsic available, and no inline asm support, so we have asm routines */
byte * get_frame_ptr(void);
byte * get_stack_ptr(void);
#endif

#ifdef UNIX
# if defined(LINUX)
/* Linux allows five levels of script interpreter and truncates the first line
 * of the file after 127 bytes.
 */
#  define SCRIPT_RECURSION_MAX 5
#  define SCRIPT_LINE_MAX 127
# elif defined(MACOS)
#  define SCRIPT_RECURSION_MAX 1
#  define SCRIPT_LINE_MAX 512
# else
#  error NYI
# endif
typedef struct _script_interpreter_t {
    /* number of additional arguments */
    int argc;
    /* null terminated list of arguments */
    char *argv[SCRIPT_RECURSION_MAX * 2 + 1];
    /* buffers for allocating strings */
    char buffer[SCRIPT_RECURSION_MAX][SCRIPT_LINE_MAX + 1];
} script_interpreter_t;

/* If "fname" is a "#!" script, fill in "result" and return true; otherwise return
 * false. The script may use recursive script interpreters, up to five levels.
 * This function does not check that the final interpreter is a valid executable,
 * but it does check that the final interpreter is not itself a "#!" script:
 * in this case it returns true but sets argc to zero.
 * The "result" will contain the additional arguments supplied by the script file;
 * the caller is responsible for appending the original filepath "fname" and any
 * additional arguments. The function "read" is a callback used for reading the start
 * of "fname" and any recursive interpreters; it should also check that the files are
 * executable.
 */
bool
find_script_interpreter(OUT script_interpreter_t *result,
                        IN const char *fname,
                        ssize_t (*reader)(const char *pathname, void *buf, size_t count));

#include "thread_stub.h"

typedef unsigned long sys_word_t;
typedef int intptr;
typedef struct _thread_data_h
{
    sys_word_t  self_addr;
    sys_word_t  last_sp;            /* set by urts, relative to TCS */
    sys_word_t  stack_base_addr;    /* set by urts, relative to TCS */
    sys_word_t  stack_limit_addr;   /* set by urts, relative to TCS */
    sys_word_t  first_ssa_gpr;      /* set by urts, relative to TCS */
    sys_word_t  stack_guard;        /* GCC expects start_guard at 0x14 on x86 and 0x28 on x64 */

    sys_word_t  flags;
    sys_word_t  xsave_size;         /* in bytes (se_ptrace.c needs to know its offset).*/
    sys_word_t  last_error;         /* init to be 0. Used by trts. */

#ifdef TD_SUPPORT_MULTI_PLATFORM
    sys_word_t  m_next;             /* next TD used by trusted thread library (of type "struct _thread_data *") */
#else
    struct _thread_data_t *m_next;
#endif
    sys_word_t  tls_addr;           /* points to TLS pages */
    sys_word_t  tls_array;          /* points to TD.tls_addr relative to TCS */
#ifdef TD_SUPPORT_MULTI_PLATFORM
    sys_word_t  exception_flag;     /* mark how many exceptions are being handled */
#else
    intptr    exception_flag;
#endif
    sys_word_t  cxx_thread_info[6];
    sys_word_t  stack_commit_addr;
    sys_word_t  master_tls_segment; /* is master fs/gs segment or not? */
    /*Load them when EENTERing */
    struct _thread_data_t *fsbase;  /* 1. for master fs/gs-segment, always points to current fs/gs-segment */
    struct _thread_data_t *gsbase;  /* 2. for slave fs/gs-segment, always points to master fs/gs-segment */
} thread_data_h;
#endif /* UNIX */

#endif /* _DR_HELPER_H_ */
