/* **********************************************************
 * Copyright (c) 2015 Google, Inc.  All rights reserved.
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

/* Default implementation to avoid the user of drhelper having to supply one.
 * We declare this as weak for Linux and MacOS, and rely on MSVC prioritizing a
 * .obj def over this .lib def (note that the MSVC linker only does that
 * when the symbol in question is *by itself* in a single .obj: hence this file,
 * rather than putting this into say asm_shared.asm).
 */

#include "../globals.h"   /* just to disable warning C4206 about an empty file */

WEAK void
internal_error(const char *file, int line, const char *expr)
{
    /* do nothing by default */
}

#ifdef AARCH64
void
clear_icache(void *beg, void *end)
{
    static uint cache_info = 0;
    size_t dcache_line_size;
    size_t icache_line_size;
    ptr_uint_t beg_uint = (ptr_uint_t)beg;
    ptr_uint_t end_uint = (ptr_uint_t)end;
    ptr_uint_t addr;

    if (beg_uint >= end_uint)
        return;

    /* "Cache Type Register" contains:
     * CTR_EL0 [31]    : 1
     * CTR_EL0 [19:16] : Log2 of number of 4-byte words in smallest dcache line
     * CTR_EL0 [3:0]   : Log2 of number of 4-byte words in smallest icache line
     */
    if (cache_info == 0)
        __asm__ __volatile__("mrs %0, ctr_el0" : "=r"(cache_info));
    dcache_line_size = 4 << (cache_info >> 16 & 0xf);
    icache_line_size = 4 << (cache_info & 0xf);

    /* Flush data cache to point of unification, one line at a time. */
    addr = ALIGN_BACKWARD(beg_uint, dcache_line_size);
    do {
        __asm__ __volatile__("dc cvau, %0" : : "r"(addr) : "memory");
        addr += dcache_line_size;
    } while (addr != ALIGN_FORWARD(end_uint, dcache_line_size));

    /* Data Synchronization Barrier */
    __asm__ __volatile__("dsb ish" : : : "memory");

    /* Invalidate instruction cache to point of unification, one line at a time. */
    addr = ALIGN_BACKWARD(beg_uint, icache_line_size);
    do {
        __asm__ __volatile__("ic ivau, %0" : : "r"(addr) : "memory");
        addr += icache_line_size;
    } while (addr != ALIGN_FORWARD(end_uint, icache_line_size));

    /* Data Synchronization Barrier */
    __asm__ __volatile__("dsb ish" : : : "memory");

    /* Instruction Synchronization Barrier */
    __asm__ __volatile__("isb" : : : "memory");
}
#endif

#ifdef UNIX
/* Parse the first line of a "#!" script. If the input is recognised, the string
 * pointed to by str is overwritten with null terminators, as necessary, *interp
 * is set to point at the script interpreter, and *arg to point at the optional
 * argument, if there is one, or NULL. The accepted syntax is "#!", followed by
 * optional spaces (' ' or '\t'), followed by the file path (any characters except
 * spaces, '\n' and '\0'), optionally followed by the argument, followed by '\n'
 * or '\0'. The argument may contain any character except '\n' and '\0', including
 * spaces, but leading and trailing spaces are removed.
 */
static bool
is_shebang(INOUT char *str, OUT char **interp, OUT char **arg)
{
    char *p, *arg_end;

    if (str[0] != '#' || str[1] != '!')
        return false;
    p = str + 2;
    while (*p == ' ' || *p == '\t')
        ++p;
    if (*p == '\n' || *p == '\0')
        return false;
    /* We have an interpreter. */
    *interp = p++;
    while (*p != ' ' && *p != '\t' && *p != '\n' && *p != '\0')
        ++p;
    if (*p == '\n' || *p == '\0') {
        *p = '\0';
        *arg = NULL;
        return true;
    }
    *p++ = '\0';
    while (*p == ' ' || *p == '\t')
        ++p;
    if (*p == '\n' || *p == '\0') {
        *arg = NULL;
        return true;
    }
    /* We have an argument. */
    *arg = p++;
    arg_end = p;
    while (*p != '\n' && *p != '\0') {
        if (*p != ' ' && *p != '\t')
            arg_end = p + 1;
        ++p;
    }
    *arg_end = '\0';
    return true;
}

bool
find_script_interpreter(OUT script_interpreter_t *result,
                        IN const char *fname,
                        ssize_t (*reader)(const char *pathname, void *buf, size_t count))
{
    const int max_line_len = SCRIPT_LINE_MAX;
    const int max_recursion = SCRIPT_RECURSION_MAX;
    char **argv = result->argv;
    char *interp, *arg;
    const char *file;
    ssize_t len;
    int i, argc;

    file = fname;
    for (i = 0; i < max_recursion; i++) {
        len = reader(file, result->buffer[i], max_line_len);
        if (len < 0)
            break;
        result->buffer[0][len] = 0;
        if (!is_shebang(result->buffer[i], &interp, &arg))
            break;

        /* Add strings to argv: arg first as we will reverse later. */
        if (arg != NULL)
            *argv++ = arg;
        *argv++ = interp;

        file = interp;
    }

    if (i == 0)
        return false;

    if (i == max_recursion) {
        /* Check that the final script interpreter is not itself a script. */
        char tmp[sizeof(result->buffer)];
        len = reader(*(argv - 1), tmp, max_line_len);
        if (len >= 0) {
            tmp[len] = 0;
            if (is_shebang(tmp, &interp, &arg)) {
                result->argc = 0;
                result->argv[0] = NULL;
                return true;
            }
        }
    }

    argc = argv - result->argv;
    result->argc = argc;
    /* Reverse order of arguments and null-terminate. */
    for (i = 0; i < argc / 2; i++) {
        char *tmp = result->argv[i];
        result->argv[i] = result->argv[argc - 1 - i];
        result->argv[argc - 1 - i] = tmp;
    }
    result->argv[argc] = NULL;
    return true;
}

/* Begin: Added by Pinghai */
#include "instrument.h"
#include "instrument_api.h"
#include "sgx_instr.h"
void sgx_helper_cpuid(void* drctx)
{
    dr_mcontext_t mctx = {.size = sizeof(dr_mcontext_t), .flags = DR_MC_INTEGER};
    priv_mcontext_t *prictx = (priv_mcontext_t*)&mctx.rdi;
    uint cpuid_res_local[4]; /* eax, ebx, ecx, and edx registers (in that order) */
    uint eax, ecx;

    dcontext_t *dctx = get_thread_private_dcontext(); 
    drctx = (NULL != dctx ? dctx : drctx);
    ASSERT(NULL != drctx);

    dr_get_mcontext(drctx, &mctx);
    dr_get_mcontext_priv(drctx, NULL, prictx);
    eax = (uint)mctx.rax;
    ecx = (uint)mctx.rcx;

    sgx_instr_cpuid((int*)cpuid_res_local, eax, ecx);

    mctx.rax = (uint64)cpuid_res_local[0];
    mctx.rbx = (uint64)cpuid_res_local[1];
    mctx.rcx = (uint64)cpuid_res_local[2];
    mctx.rdx = (uint64)cpuid_res_local[3];
    dr_set_mcontext(drctx, &mctx);
}

void sgx_helper_rdtsc(void* drctx)
{
    dr_mcontext_t mctx = {.size = sizeof(dr_mcontext_t), .flags = DR_MC_INTEGER};
    priv_mcontext_t *prictx = (priv_mcontext_t*)&mctx.rdi;
    uint64 res;

    sgx_instr_rdtsc(&res);

    dcontext_t *dctx = get_thread_private_dcontext(); 
    drctx = (NULL != dctx ? dctx : drctx);
    ASSERT(NULL != drctx);

    dr_get_mcontext(drctx, &mctx);
    dr_get_mcontext_priv(drctx, NULL, prictx);
    mctx.rax = res & 0xFFFFFFFF;
    mctx.rdx = (res << 32) & 0xFFFFFFFF;
    dr_set_mcontext(drctx, &mctx);
}

#include <string.h>
#include "sgx_thread.h"
#define UNINIT_HCTX                     0x00
#define OFFSET_CHILD_THREAD_START       0x2A
#define RET_ADDR_OFFSET                 0x08
#define RET_VAL_TO_THREAD               0x00
#define THREAD_STRUCT_LEN               sizeof(struct _thread_helper_context) //0x330
#define THREAD_FIRST_INIT               0x0

#define CLONE_VM        0x00000100  /* set if VM shared between processes */
#define CLONE_FS        0x00000200  /* set if fs info shared between processes */
#define CLONE_FILES     0x00000400  /* set if open files shared between processes */
#define CLONE_SIGHAND   0x00000800
#define CLONE_VFORK     0x00004000

sgx_thread_mutex_t g_mutex_hctx = SGX_THREAD_MUTEX_INITIALIZER;

unsigned long g_td_hctx_base_addr = 0;
thread_helper_context *td_hctx = NULL;
volatile int g_hctx_num = 0;
volatile int g_total_hctx_len = 0;

int sgx_helper_pre_clone(dcontext_t *drctx, dr_mcontext_t *mctx, thread_helper_context *td_hctx)
{
    ASSERT(NULL != drctx && "Invalid Dr. context!");

    td_hctx->td_hctx_self = (unsigned long)td_hctx;
    td_hctx->first_init = true;
    
    ASSERT(UNINIT_HCTX != td_hctx->td_hctx_self);
    memset(&td_hctx->dmctx, 0, sizeof(dr_mcontext_t));
    memcpy(&td_hctx->dmctx, mctx, sizeof(dr_mcontext_t));

    /* store all args for child checking later */
    td_hctx->clone_flags = mctx->rdi;
    td_hctx->clone_child_stack = mctx->rsi;
    td_hctx->clone_ptid = mctx->rdx;
    td_hctx->clone_ctid = mctx->r10;
    td_hctx->clone_newtls = mctx->r8;
    td_hctx->clone_arg6 = mctx->r9;

    /* store caller thread data for use in main thread later */
    td_hctx->drctx_base_addr = (unsigned long)drctx;

    /* rcx placing retaddr usually */
    td_hctx->upctx_rcx = mctx->rcx;

    /* stack pointer for new child thread. Dr will use it later */
    td_hctx->upctx_rsp = ((dcontext_t *)(td_hctx->drctx_base_addr))->upcontext.upcontext.mcontext.rsp;

    /* store App library's tls base for child thread created */
    td_hctx->newtls_for_app_lib = td_hctx->clone_newtls;

    /* save real returning address */
    unsigned long ret_addr_from_helper = (unsigned long)(td_hctx->upctx_rbp + RET_ADDR_OFFSET);
    td_hctx->raddr_to_dr = *(unsigned long *)ret_addr_from_helper;

    td_hctx->dmctx.rcx = td_hctx->raddr_to_dr + OFFSET_CHILD_THREAD_START;
    td_hctx->dmctx.rax = RET_VAL_TO_THREAD;
    td_hctx->dmctx.rsp = td_hctx->clone_child_stack;

    return 0;
}

int sgx_helper_post_clone(dcontext_t *drctx, dr_mcontext_t *mctx, thread_helper_context *td_hctx)
{
    ASSERT(NULL != drctx && "Invalid Dr. context!");

    /* restore drcontext to the offset of gs:0x20 */
    asm volatile ("mov  %0, %%gs:0x20" :: "rm"((unsigned long)drctx)); 

    /* check for the rightness of address before returning to DR */
    unsigned long ret_addr_from_helper = (unsigned long)(td_hctx->upctx_rbp + RET_ADDR_OFFSET);
    unsigned long real_raddr_shdw = *(unsigned long *)ret_addr_from_helper;
    if(td_hctx->raddr_to_dr != real_raddr_shdw)
        ASSERT(false && "Wrong return address!");

    /* restore messed data to original one for main thread */
    mctx->rcx = td_hctx->upctx_rcx;
    dcontext_t *dr_ctx = (dcontext_t *)td_hctx->drctx_base_addr;
    dr_ctx->upcontext.upcontext.mcontext.rsp = td_hctx->upctx_rsp;

    return 0;
}


static inline void _mm_pause(void)
{
    __asm __volatile(
        "pause"
    );
}

void sgx_thread_queue_spin()
{
    extern volatile int g_hctx_num_helper;
    while ((volatile int)g_hctx_num > ((MAX_NUM_THREADS - 2) + g_hctx_num_helper))
    {
        _mm_pause();
    }
}

void sgx_helper_syscall(void* drctx)
{
    dr_mcontext_t mctx = {.size = sizeof(dr_mcontext_t), .flags = DR_MC_INTEGER};
    priv_mcontext_t *prictx = (priv_mcontext_t*)&mctx.rdi;
    unsigned long sysno, arg1, arg2, arg3, arg4, arg5, arg6;
    unsigned long res;
    int hcn;
    long upctx_rbp;

    dcontext_t *dctx = get_thread_private_dcontext();
    drctx = (NULL != dctx ? dctx : drctx);
    ASSERT(NULL != drctx);

    dr_get_mcontext(drctx, &mctx);
    dr_get_mcontext_priv(drctx, NULL, prictx);
    sysno = mctx.rax;
    arg1 = mctx.rdi;
    arg2 = mctx.rsi;
    arg3 = mctx.rdx;
    arg4 = mctx.r10;
    arg5 = mctx.r8;
    arg6 = mctx.r9;

    #define SYS_rt_sigreturn 15
    if (sysno == SYS_rt_sigreturn)
    {
        arg1 = mctx.rsp;
    }

    #define SYS_clone 56
    #define SYS_vfork 58
    if (SYS_clone == sysno || SYS_vfork == sysno)
    {
        if (!(arg1 & CLONE_VM) && (sysno != SYS_vfork))
        {
            mctx.rax = -1;
            dr_set_mcontext(drctx, &mctx);
            return;
        }

        sgx_thread_mutex_lock(&g_mutex_hctx); 
        /* first init */
        if (g_hctx_num == THREAD_FIRST_INIT)
        {
            td_hctx = (thread_helper_context *)malloc(THREAD_STRUCT_LEN);
            ASSERT(td_hctx != NULL && "Malloc failed: likely Out-of-memory!");
            g_total_hctx_len = THREAD_STRUCT_LEN;   
        }

        /* expand the thread data struct */
        int cur_hctx_len = g_hctx_num * THREAD_STRUCT_LEN;
        if (cur_hctx_len == g_total_hctx_len)
        {
            g_total_hctx_len = cur_hctx_len + THREAD_STRUCT_LEN;
            thread_helper_context *ptd_hctx = NULL;
            ptd_hctx = (thread_helper_context*)realloc(td_hctx, g_total_hctx_len);
            if(ptd_hctx == NULL)
                ASSERT(false && "Realloc failed: likely Out-of-memory!"); 
            else
                td_hctx = ptd_hctx;
        }

        hcn = g_hctx_num;
        g_hctx_num++; 

        /* export the global thread_helper_context address */
        g_td_hctx_base_addr = (unsigned long)td_hctx;

        /* save last stack frame before walking into next function */
        asm volatile ("mov  %%rbp, %%rax; mov  %%rax, %0" : "=m"(upctx_rbp) :);
        memset(&td_hctx[hcn], 0, sizeof(thread_helper_context));
        td_hctx[hcn].upctx_rbp = upctx_rbp;

        if(sgx_helper_pre_clone(drctx, &mctx, &td_hctx[hcn]))
            ASSERT(false && "calling sgx_helper_pre_clone failed!");
    }

    #define SYS_fork 57
    #define SYS_execve 59
    if (SYS_fork == sysno /*|| SYS_execve == sysno*/ /*|| SYS_vfork == sysno*/)
    {
        mctx.rax = -1;
        dr_set_mcontext(drctx, &mctx);
        return;
    }

    res = sgx_instr_syscall_codecache(sysno, arg1, arg2, arg3, arg4, arg5, arg6);

    mctx.rax = res;

    /* retrieve info for main thread or the one that was creating thread */
    if (SYS_clone == sysno || SYS_vfork == sysno)
    {
        if(sgx_helper_post_clone(drctx, &mctx, &td_hctx[hcn]))
            ASSERT(false && "calling sgx_helper_post_clone failed!");

        sgx_thread_mutex_unlock(&g_mutex_hctx);
    }

    dr_set_mcontext(drctx, &mctx);
}

/* End: Added by Pinghai */

bool check_valid_clone_args(sgx_dbi_tls_helper_t *tls_helper_table, thread_helper_context *td_hctx)
{
    long dumb = 0;

    #define SYS_gettid 186
    long thread_id = sgx_instr_syscall_codecache(SYS_gettid, dumb, dumb, dumb, dumb, dumb, dumb);

    ASSERT(NULL != tls_helper_table && NULL != td_hctx);
    ASSERT((tls_helper_table->trd_priv_params.flags == td_hctx->clone_flags) &&                 \
        (tls_helper_table->trd_priv_params.newtls == td_hctx->clone_newtls) &&                  \
        (tls_helper_table->trd_priv_params.thread_id == thread_id) && "Invalid arguments!"      \
        );

    td_hctx->thread_id = thread_id;

    return true;
}

void start_thread_stub(dr_mcontext_t *dmctx)
{
    ASSERT(NULL != dmctx && "Invalid Dr. context!");
    sgx_thread_mutex_unlock(&g_mutex_hctx); 

    asm volatile (
        "\tmov  %0, %%rax\n"
        "\tmov  0x10(%%rax), %%rdi\n"
        "\tmov  0x18(%%rax), %%rsi\n"

        "\tmov  0x28(%%rax), %%rsp\n"
        "\tmov  0x30(%%rax), %%rbx\n"
        "\tmov  0x38(%%rax), %%rdx\n"
        "\tmov  0x40(%%rax), %%rcx\n"

        "\tmov  0x50(%%rax), %%r8\n"
        "\tmov  0x58(%%rax), %%r9\n"
        "\tmov  0x60(%%rax), %%r10\n"
        "\tmov  0x68(%%rax), %%r11\n"
        "\tmov  0x70(%%rax), %%r12\n"
        "\tmov  0x78(%%rax), %%r13\n" 
        "\tmov  0x80(%%rax), %%r14\n"
        "\tmov  0x88(%%rax), %%r15\n"
        "\txor  %%rax, %%rax\n"
        "\tjmp  *%%rcx\n"
        : 
        : "rm"(dmctx)    
    );

    ASSERT_NOT_REACHED();
}

void sgx_thread_prepare(sgx_dbi_tls_helper_t *tls_helper_table)
{
    /* obtain DR's addr returning to */
    extern thread_helper_context *td_hctx;
    extern volatile int g_hctx_num;
    int hcn = 0;
    bool found = false;
    while (hcn < g_hctx_num) 
    {
        /* the argument clone_child_stack as an index to find out which td_hctx[x] belongs to ECALL thread */
        if ((td_hctx[hcn].clone_child_stack == tls_helper_table->trd_priv_params.child_stack) && 
            (td_hctx[hcn].clone_newtls == tls_helper_table->trd_priv_params.newtls))
        {
            found = true;
            break;
        }
            
        hcn++;
    }
    ASSERT(found && "Illegally reached!");
    ASSERT(UNINIT_HCTX != td_hctx[hcn].td_hctx_self && td_hctx[hcn].first_init);

    /* do check for thread private args */
    ASSERT(check_valid_clone_args(tls_helper_table, &td_hctx[hcn]));

    unsigned long upctx_rbp = td_hctx[hcn].upctx_rbp;
    td_hctx[hcn].child_sp_addr_to_dr = upctx_rbp + RET_ADDR_OFFSET;

    unsigned long *pctid = (unsigned long *)td_hctx[hcn].clone_ctid;
    *pctid = (*pctid & ((((unsigned long long)0xFFFFFFFF) << 32))) |    \
        (tls_helper_table->trd_priv_params.thread_id & ((unsigned long long)0xFFFFFFFF));

    start_thread_stub(&td_hctx[hcn].dmctx);
    ASSERT_NOT_REACHED();
}

void sgx_thread_stub(sgx_dbi_tls_helper_t *tls_helper_table)
{
    sgx_thread_mutex_lock(&g_mutex_hctx); 
    sgx_thread_prepare(tls_helper_table);
    ASSERT_NOT_REACHED();
}
#endif