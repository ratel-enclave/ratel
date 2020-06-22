/* **********************************************************
 * Copyright (c) 2018-2020 Ratel Authors.  All rights reserved.
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
 * * Neither the name of the copyright holder nor the names of its contributors may be
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

#include "string.h"

#include "syscall_no.h"
#include "sgx_io.h"
#include "sgx_intelsdk.h"

#include "sgx_mm.h"

#define YPHASSERT(...)          \
    do {                        \
        if (!(__VA_ARGS__)) {   \
            asm volatile ("movl $0, 0"); \
        }                       \
    } while (0);

/*-------------------- Used for managing vmas in program-arena --------------*/

/* add new item between llp and lln */
static void list_add(list_t *llp, list_t *lln, list_t *ll)
{
    //YPHASSERT(llp != lln);
    /* update the link */
    ll->prev = llp;
    ll->next = lln;

    llp->next = ll;
    lln->prev = ll;
}


/* delete item from its list */
static void list_del(list_t *ll)
{
    list_t *llp;
    list_t *lln;

    llp = ll->prev;
    lln = ll->next;
    YPHASSERT(llp != lln);

    /* update the link */
    lln->prev = llp;
    llp->next = lln;
}

/*------------- export function for dynamoRIO && dyRIO-sgx-adapter ----------*/

/* simulate the task_struct::fs[], so remember the files mapped into SGX-enclave */
#define SGX_PROCMAPS_MAX_FILE 40
static char SGXMM_MAPED_FILES[SGX_PROCMAPS_MAX_FILE][64];


void sgx_vma_set_cmt(ulong fd, const char *fname)
{
    if (fd >= SGX_PROCMAPS_MAX_FILE)
        return;

    if (strlen(fname) > VMA_CMT_MAXLEN)
        return;

    strncpy(SGXMM_MAPED_FILES[fd], fname, VMA_CMT_MAXLEN);
}


void sgx_vma_get_cmt(ulong fd, char *buffer)
{
    if (fd >= SGX_PROCMAPS_MAX_FILE)
        return;

    strncpy(buffer, SGXMM_MAPED_FILES[fd], VMA_CMT_MAXLEN);
}


/*------------------------- program-arena in sgx-enclave --------------------*/

/* simulate the memory region manager as Linux Kernel task_struct::mm_struct*/
sgx_mm_t    SGX_MM;
BOOL sgx_mm_initialized = FALSE;

extern intelsdk_global_data_t g_global_data;
extern void* g_enclave_image_base;


/* simulate the task_struct::mm */
/* -dr-codecache-sgxbuffer-threadcontext- */
// Start address of external memory region needing to be mapped into enclave
#define SGX_PAGE_SIZE 4096

// Ensure the external prog-arena is only with 0x7fffe0000000 ~ 0x7ffff8000000
// Ensure the external prog-arena is only with 0x7fff80000000 ~ 0x7fffffffffff  //2G
#define EXTN_MEM_REGION     (byte*)0x7FFF00000000


/* exported out for debugging, we have unit-tests */
sgx_mm_t* sgx_mm_getmm(void)
{
    return &SGX_MM;
}


/*------------ initialize program-arena with memlayout_init_encalve------------*/

/* The memroy layout when Dynamorio is executed */
#define DR_CODE1_SZ     0x3bc000
#define DR_HOLE1_SZ     0x1000
#define DR_HOLE2_SZ     0x7000
#define DR_CODE2_SZ     0x20000
#define DR_SEGGAP_SZ    0x200000
#define DR_RDDATA_SZ    0x24000
#define DR_RWDATA_SZ    0x60000

#define DR_START        (byte*)0x600000000000
#define DR_CODE1_START  (DR_START)
#define DR_CODE1_END    (DR_CODE1_START + DR_CODE1_SZ)
#define DR_HOLE1_START  (DR_CODE1_END)
#define DR_HOLE1_END    (DR_HOLE1_START + DR_HOLE1_SZ)
#define DR_HOLE2_START  (DR_HOLE1_END)
#define DR_HOLE2_END    (DR_HOLE2_START + DR_HOLE2_SZ)
#define DR_CODE2_START  (DR_HOLE2_END)
#define DR_CODE2_END    (DR_CODE2_START + DR_CODE2_SZ)
#define DR_SEGGAP_START (DR_CODE2_END)
#define DR_SEGGAP_END   (DR_SEGGAP_START + DR_SEGGAP_SZ)
#define DR_RDDATA_START (DR_SEGGAP_END)
#define DR_RDDATA_END   (DR_RDDATA_START + DR_RDDATA_SZ)
#define DR_RWDATA_START (DR_RDDATA_END)
#define DR_RWDATA_END   (DR_RWDATA_START + DR_RWDATA_SZ)

// thread context
#define GUARD_PG_SZ     (16 * SGX_PAGE_SIZE)
#define HEAP_MIN_SZ     (1 * SGX_PAGE_SIZE)
#define HEAP_INIT_SZ    (262143 * SGX_PAGE_SIZE)
#define STACK_MAX_SZ    (3 * SGX_PAGE_SIZE)
#define STACK_MIN_SZ    (1 * SGX_PAGE_SIZE)
#define TCS_SZ          (1 * SGX_PAGE_SIZE)
#define SSA_SZ          (2 * SGX_PAGE_SIZE)
#define TD_SZ           (1 * SGX_PAGE_SIZE)
#define XTA_TDCXT_SZ    0x3f95b000

#define AFTER_ARENA_FLAG 0x800000000000
#define HEAP_MIN_START  (DR_RWDATA_END)
#define HEAP_MIN_END    (HEAP_MIN_START + HEAP_MIN_SZ)
#define HEAP_INIT_START (HEAP_MIN_END)
#define HEAP_INIT_END   (HEAP_INIT_START + HEAP_INIT_SZ)
#define GUARD_PG1_START (HEAP_INIT_END + AFTER_ARENA_FLAG)
#define GUARD_PG1_END   (GUARD_PG1_START + GUARD_PG_SZ)
#define STACK_MAX_START (GUARD_PG1_END)
#define STACK_MAX_END   (STACK_MAX_START + STACK_MAX_SZ)
#define STACK_MIN_START (STACK_MAX_END)
#define STACK_MIN_END   (STACK_MIN_START + STACK_MIN_SZ)
#define GUARD_PG2_START (STACK_MIN_END)
#define GUARD_PG2_END   (GUARD_PG2_START + GUARD_PG_SZ)
#define TCS_START       (GUARD_PG2_END)
#define TCS_END         (TCS_START + TCS_SZ)
#define SSA_START       (TCS_END)
#define SSA_END         (SSA_START + SSA_SZ)
#define GUARD_PG3_START (SSA_END)
#define GUARD_PG3_END   (GUARD_PG3_START + GUARD_PG_SZ)
#define FIRST_TD_START  (GUARD_PG3_END)
#define FIRST_TD_END    (FIRST_TD_START + TD_SZ)
#define XTA_TDCXT_START (FIRST_TD_END)
#define XTA_TDCXT_END   (XTA_TDCXT_START + XTA_TDCXT_SZ)


#define DR_PATH "./libdynamorio.so"


/* from sys/mman.h */
#define MAP_FAILED  ((void*)-1)
#define PROT_NONE   0x0
#define MAP_SHARED  0x01
#define MAP_PRIVATE 0x02
#define PROT_READ   0x1
#define MAP_FIXED   0x10
#define PROT_WRITE  0x2
#define MAP_ANONYMOUS   0x20
#define PROT_EXEC   0x4
#define MS_ASYNC    1
#define MS_INVALIDATE   2
#define MS_SYNC     4
#define MAP_ANON    MAP_ANONYMOUS

sgx_vm_area_t memlayout_init_encalve[] = {
    // {DR_CODE1_START,    DR_CODE1_END,    DR_CODE1_START,   FALSE, PROT_READ|PROT_EXEC,   0,  0,  0,  0x0000000,    {NULL,  NULL},  DR_PATH},
    // {DR_HOLE1_START,    DR_HOLE1_END,    DR_HOLE1_START,   FALSE, PROT_READ, 0,  0,  0,  DR_HOLE1_START-DR_START,    {NULL,  NULL},  DR_PATH},
    // {DR_HOLE2_START,    DR_HOLE2_END,    DR_HOLE2_START,   FALSE, PROT_READ, 0,  0,  0,  DR_HOLE2_START-DR_START,    {NULL,  NULL},  DR_PATH},
    // {DR_CODE2_START,    DR_CODE2_END,    DR_CODE2_START,   FALSE, PROT_READ|PROT_EXEC,   0,  0,  0,  DR_CODE2_START-DR_START,    {NULL,  NULL},  DR_PATH},
    // {DR_SEGGAP_START,   DR_SEGGAP_END,   DR_SEGGAP_START,  FALSE, PROT_NONE, 0,  0,  0,  DR_SEGGAP_START-DR_START,    {NULL,  NULL},  ""},
    // {DR_RDDATA_START,   DR_RDDATA_END,   DR_RDDATA_START,  FALSE, PROT_READ, 0,  0,  0,  DR_RDDATA_START-DR_START,    {NULL,  NULL},  DR_PATH},
    // {DR_RWDATA_START,   DR_RWDATA_END,   DR_RWDATA_START,  FALSE, PROT_READ|PROT_WRITE, 0,  0,  0,  DR_RWDATA_START-DR_START,    {NULL,  NULL},  DR_PATH},
    // {HEAP_MIN_START,    HEAP_MIN_END,    HEAP_MIN_START,    FALSE, PROT_READ|PROT_WRITE,  0,  0,  0,  0x066d000,    {NULL,  NULL},  "[heap min]"},
    // {HEAP_INIT_START,   HEAP_INIT_END,   HEAP_INIT_START,   FALSE, PROT_READ|PROT_WRITE,  0,  0,  0,  0x066e000,    {NULL,  NULL},  "[heap init]"},
    // {GUARD_PG1_START,   GUARD_PG1_END,   GUARD_PG1_START,   TRUE, PROT_NONE, 0,  0,  0,  0x4066d000,    {NULL,  NULL},  "[guard]"},
    // {STACK_MAX_START,   STACK_MAX_END,   STACK_MAX_START,   TRUE, PROT_READ|PROT_WRITE,  0,  0,  0,  0x4067d000,    {NULL,  NULL},  "[stack max]"},
    // {STACK_MIN_START,   STACK_MIN_END,   STACK_MIN_START,   TRUE, PROT_READ|PROT_WRITE,  0,  0,  0,  0x40680000,    {NULL,  NULL},  "[stack min]"},
    // {GUARD_PG2_START,   GUARD_PG2_END,   GUARD_PG2_START,   TRUE, PROT_NONE, 0,  0,  0,  0x40681000,    {NULL,  NULL},  "[guard]"},
    // {TCS_START, TCS_END,     TCS_START,  PROT_READ|PROT_WRITE,   TRUE, 0,  0,  0,  0x40691000,    {NULL,  NULL},  "[TCS]"},
    // {SSA_START, SSA_END,     SSA_START,  PROT_READ|PROT_WRITE,  TRUE, 0,  0,  0,  0x40692000,    {NULL,  NULL},  "[SSA]"},
    // {GUARD_PG3_START,   GUARD_PG3_END,   GUARD_PG3_START,  TRUE, PROT_NONE, 0,  0,  0,  0x40694000,    {NULL,  NULL},  "[guard]"},
    // {FIRST_TD_START,    FIRST_TD_END,    FIRST_TD_START,   TRUE, PROT_READ|PROT_WRITE,  0,  0,  0,  0x406a4000,    {NULL,  NULL},  "[FIRST_TD]"},
    // {XTA_TDCXT_START,   XTA_TDCXT_END,   XTA_TDCXT_START,  TRUE, PROT_NONE, 0,  0,  0,  0x406a5000,    {NULL,  NULL},  "[XTA_TDCXT]"},
    // {(byte*)NULL,   (byte*)NULL,    NULL,   TRUE, PROT_NONE, 0,  0,  0,  0,   {NULL,  NULL},  ""}
};


//forward declaration
static sgx_vm_area_t* _sgx_vma_alloc(list_t* llp, list_t* lln);
static void _sgx_vma_free(sgx_vm_area_t* vma);
static void _sgx_vma_initialize(sgx_vm_area_t* vma, byte* ext_addr,
        size_t len, ulong prot, int fd, ulong offs);


extern long sgx_ocall_syscall_1(long sysno, long _rdi);
extern long sgx_ocall_syscall_2(long sysno, long _rdi, long _rsi);
extern long sgx_ocall_syscall_3(long sysno, long _rdi, long _rsi, long _rdx);

void sgx_mm_init_static(void)
{
    sgx_vm_area_t *vma = NULL;
    sgx_vm_area_t *add = NULL;
    list_t  *ll = NULL;
    uint    idx;

    /* hard-allocate a big buffer for loading target program into SGX-enclave*/
    SGX_MM.heap_offset = (byte*)g_enclave_image_base + g_global_data.heap_offset;
    SGX_MM.dyRIO_heap_base = (byte*)g_enclave_image_base + g_global_data.dyRIO_cache_offset;
    SGX_MM.dyRIO_heap_size = g_global_data.dyRIO_cache_size;
    SGX_MM.prog_arena_base = (byte*)g_enclave_image_base + g_global_data.prog_arena_offset;
    SGX_MM.prog_arena_size = g_global_data.prog_arena_size;
    SGX_MM.ext_vmm_base = EXTN_MEM_REGION;

    YPHASSERT(SGX_VMA_MAX_CNT > 2);
    /* Initialize sgxmm */
    for (idx = 0, vma = SGX_MM.slots; idx < SGX_VMA_MAX_CNT; idx++, vma++) {
        ll = &vma->ll;
        ll->prev = NULL;    /* set prev to NULL if not used */
        if(idx == SGX_VMA_MAX_CNT - 1) {
            ll->next = NULL;
        }
        else {
            ll->next = &(SGX_MM.slots[idx+1].ll);
        }
    }

    SGX_MM.un = &(SGX_MM.slots[0].ll);
    SGX_MM.in.prev = &SGX_MM.in;
    SGX_MM.in.next = &SGX_MM.in;

    SGX_MM.nin = 0;
    SGX_MM.nun = SGX_VMA_MAX_CNT;

    /* initialized with memlayout_init_encalve */
    vma = memlayout_init_encalve;

    struct stat s;
    for (; vma->vm_start != NULL; vma++) {
        add = _sgx_vma_alloc(SGX_MM.in.prev, &SGX_MM.in);
        _sgx_vma_initialize(add, vma->vm_start, vma->vm_end-vma->vm_start, vma->perm, -1, vma->offset);
        if (vma->comment[0] != '\0') {
            if (vma->comment[0] != '[') {
                int fd;

                fd = sgx_ocall_syscall_2(SYS_stat, (ulong)vma->comment, (ulong)&s);
                YPHASSERT(fd == 0);

                add->dev = s.st_dev;
                add->inode = s.st_ino;
                add->size = s.st_size;
            }
            strncpy(add->comment, vma->comment, 80);
        }
    }

    SGX_MM.updated = TRUE;
}


/*--------- initialize program-arena in sgx-enclave && vma management--------*/

/* The overlap-relationship of current vma region with a reference region */
typedef enum _vma_overlap_t {
    OVERLAP_NONE = 0,       // Not overlapped

    OVERLAP_HEAD_ALN,       // The front-part is overlapped, have same start-vma
    OVERLAP_HEAD_OVF,       // The front-part is overlapped, don't have same start-vma

    OVERLAP_TAIL_ALG,       // The tail-part is overlapped, have same end-vma
    OVERLAP_TAIL_OVF,       // The tail-part is overlapped, don't have same end-vma

    OVERLAP_ALL_OVFH,       // A super-region covers current VMA, same end-vma
    OVERLAP_ALL_OVFT,       // A super-region covers current VMA, same start-vma
    OVERLAP_ALL_OVFHT,      // A super-region covers current VMA, no same start-vma or end-vma

    OVERLAP_MID,            // A sub-region of current VMA, no same start-vma or end-vma

    OVERLAP_SAME,           // Exactly the same region.

}vma_overlap_t;


extern int our_sscanf(const char *str, const char *fmt, ...);

static int _sgx_mm_init_byreffing_external_procmaps(void)
{
#define MAPS_LINE_FORMAT4 "%08x-%08x %s %08x %*s %llu %4096s"
#define MAPS_LINE_FORMAT8 "%016llx-%016llx %s %016llx %*s %llu %4096s"
#define HEPA_INIT_SEG_SZ 0x3ffff000
#define READ_BUF_SZ 4096
#define CNT_HEAP_SEG 15

    static const char* PROCMAPS_FILE = "/proc/self/maps";
    static const char* AFTER_HEAP_SEG[CNT_HEAP_SEG] =
    {
        "[heap min]",
        "[heap init]",
        "[guard]",
        "[dyRIO heap]", // dr-heap && code-cache
        "[guard]",
        "",             // prog-arena
        "[guard]",
        "[stack max]",
        "[stack min]",
        "[guard]",
        "[TCS]",
        "[SSA]",
        "[guard]",
        "[FIRST_TD]",
        "[XTA_TDCXT]", 
    };

    /* open && read external procmaps */
    // int fd = dynamorio_syscall(SYS_open, 2, PROCMAPS, O_RDONLY);
    int fd = sgx_ocall_syscall_3(SYS_open, (ulong)PROCMAPS_FILE, O_RDONLY, O_RDONLY);
    if (fd == -1)
        return -1;


    char szBuf[READ_BUF_SZ];
    ssize_t nRead;
    // nread = dynamorio_syscall(SYS_read, 3, fd, szBuf, READ_BUF_SZ);
    nRead = sgx_ocall_syscall_3(SYS_read, fd, (ulong)szBuf, READ_BUF_SZ);
    if (nRead == -1)
        return -1;

    /* parsing each line of procmaps */
    char *pLine = szBuf;
    char *pRC = NULL;   //return carriage?

    BOOL bAfter_heap_segmt = FALSE; //after the heap_init segment of sgx-app
    BOOL bAfter_prog_arena = FALSE;
    int  nSGXVMARgn = 0;   //Number of memory regions already added into SGX
    int  nAfterHeap = 0;

    szBuf[READ_BUF_SZ-1] = '\0';
    do {
        unsigned long nStart, nEnd, nProt, nOfft, nNode;
        char szProt[8];
        char szCmt[80];
        byte *vmStart;
        sgx_vm_area_t *vmaAdd;

        pRC = strchr(pLine, '\n');
        if (pRC == NULL)
            break;

        *pRC = '\0';
        szCmt[0] = '\0';
        our_sscanf(pLine, sizeof(void*) == 4 ? MAPS_LINE_FORMAT4 : MAPS_LINE_FORMAT8,
                (ulong*)&nStart, (ulong*)&nEnd, szProt, (ulong*)&nOfft, &nNode, szCmt);
        pLine = pRC+1;

        /* All memory region of enclave are commented with /dev/isgx */
        if (strncmp("/dev/isgx", szCmt, 80) != 0) {
            if (nSGXVMARgn == 0)   // Encalve memory regions have not yet appeared!
                continue;
            else                // All encalve memory regions alredy scanned!
                break;
        }

        /* check if we have already scanned heap_init segment */
        if (!bAfter_heap_segmt && nStart == (unsigned long)SGX_MM.heap_offset) {
            bAfter_heap_segmt = TRUE;
        }

        if (bAfter_heap_segmt && !bAfter_prog_arena &&
            nStart == (unsigned long)SGX_MM.prog_arena_base) {

            bAfter_prog_arena = TRUE;

            nSGXVMARgn ++;
            nAfterHeap++;

            // Skip this segment as we don't want to expose this region
            continue;
        }

        /* create and add current new vma */
        vmaAdd = _sgx_vma_alloc(SGX_MM.in.prev, &SGX_MM.in);

        if (!bAfter_prog_arena)
            vmStart = (byte*)nStart;
        else
            vmStart = (byte*)(nStart | AFTER_ARENA_FLAG);

        // set permmision flag
        {
            nProt = 0;
            if (szProt[0] == 'r') nProt += 1;
            if (szProt[1] == 'w') nProt += 2;
            if (szProt[2] == 'x') nProt += 4;
        }
        _sgx_vma_initialize(vmaAdd, vmStart, nEnd - nStart, nProt, -1, nOfft);

        /* initialize the other fields */
        vmaAdd->vm_sgx = (byte*)nStart;
        if (!bAfter_heap_segmt) {
            vmaAdd->dev = 8;
            vmaAdd->inode = nNode;
            vmaAdd->size = nEnd - nStart;
            strncpy(vmaAdd->comment, DR_PATH, 80);
        }
        else {
            vmaAdd->dev = 0;       //Not associated with dev
            vmaAdd->inode = 0;     //Not associated with inode
            vmaAdd->size = 0;
            vmaAdd->offset = 0;
            char *dst = vmaAdd->comment;
            const char *src = AFTER_HEAP_SEG[nAfterHeap++];

            if (nAfterHeap <= CNT_HEAP_SEG)
            {
                size_t n = 80;
                size_t i;
                for (i = 0; i < n && src[i] != '\0'; i++)
                    dst[i] = src[i];
                /* Pad the rest with nulls. */
                for (; i < n; i++)
                    dst[i] = '\0';
            }
            else
                break;
        }

        nSGXVMARgn ++;

    } while(pRC != NULL);

    /* close external procmaps */
    // dynamorio_syscall(SYS_close, 1, fd);
    sgx_ocall_syscall_1(SYS_close, fd);


    YPHASSERT(nSGXVMARgn >= 22);

    return 0;
}


extern void sgx_procmaps_init(void);
extern void sgx_procmaps_exit(void);

void sgx_mm_init(void)
{
    sgx_vm_area_t *vma = NULL;
    list_t  *ll = NULL;
    uint     idx;

    sgx_mm_initialized = FALSE;
    /* hard-allocate a big buffer for loading target program into SGX-enclave*/
    SGX_MM.heap_offset = (byte*)g_enclave_image_base + g_global_data.heap_offset;
    SGX_MM.dyRIO_heap_base = (byte*)g_enclave_image_base + g_global_data.dyRIO_cache_offset;
    SGX_MM.dyRIO_heap_size = g_global_data.dyRIO_cache_size;
    SGX_MM.prog_arena_base = (byte*)g_enclave_image_base + g_global_data.prog_arena_offset;
    SGX_MM.prog_arena_size = g_global_data.prog_arena_size;
    SGX_MM.ext_vmm_base = EXTN_MEM_REGION;

    YPHASSERT(SGX_VMA_MAX_CNT > 2);
    /* Initialize sgxmm */
    for (idx = 0, vma = SGX_MM.slots; idx < SGX_VMA_MAX_CNT; idx++, vma++) {
        ll = &vma->ll;
        ll->prev = NULL;    /* set prev to NULL if not used */
        if(idx == SGX_VMA_MAX_CNT - 1) {
            ll->next = NULL;
        }
        else {
            ll->next = &(SGX_MM.slots[idx+1].ll);
        }
    }

    SGX_MM.un = &(SGX_MM.slots[0].ll);
    SGX_MM.in.prev = &SGX_MM.in;
    SGX_MM.in.next = &SGX_MM.in;

    SGX_MM.nin = 0;
    SGX_MM.nun = SGX_VMA_MAX_CNT;

    /* Get the intial status of vmas in sgx-enclave */
    _sgx_mm_init_byreffing_external_procmaps();

    SGX_MM.updated = TRUE;

    sgx_procmaps_init();

    sgx_mm_initialized = TRUE;
}


void sgx_mm_exit(void)
{
    sgx_procmaps_exit();
}


/* Allocate a sgx-mm-buffer for mapping external memory region */
static byte* _sgx_mm_buffer_alloc(byte *ext_addr, size_t len)
{
    byte* itn_addr;

    itn_addr = sgx_mm_ext2itn(ext_addr);
    if (!sgx_mm_within_sgxbuf(itn_addr, len))
        itn_addr = NULL;

    return itn_addr;
}

// static void _sgx_mm_buffer_free(byte *itn_addr, size_t len)
// {
//     /* empty */
// }


static sgx_vm_area_t* _sgx_vma_alloc(list_t* llp, list_t* lln)
{
    YPHASSERT(llp != NULL && lln != NULL);
    YPHASSERT(SGX_MM.nun > 0 && "NO allocable vma!");

    sgx_vm_area_t* vma = NULL;
    list_t* ll = NULL;

    ll = SGX_MM.un;
    SGX_MM.un = SGX_MM.un->next;
    SGX_MM.nin ++, SGX_MM.nun --;

    vma = list_entry(ll, sgx_vm_area_t, ll);
    YPHASSERT(vma != NULL && "NULL vma!");

    list_add(llp, lln, ll);

    return vma;
}

static void _sgx_vma_free(sgx_vm_area_t* vma)
{
    YPHASSERT(vma != NULL);

    list_t* ll = &vma->ll;
    list_del(ll);

    ll->prev = NULL; /* set prev to NULL if not used */
    ll->next = SGX_MM.un;
    SGX_MM.un = ll;
    SGX_MM.nin --, SGX_MM.nun ++;

    // _sgx_mm_buffer_free(vma->vm_sgx, vma->vm_end - vma->vm_start);
}


/* fill a SGX-vma to track the mmap event */
static void _sgx_vma_initialize(sgx_vm_area_t* vma, byte* vm_start, size_t len, ulong prot, int fd, ulong offs)
{
    YPHASSERT(vma != NULL);

    vma->vm_start = vm_start;
    vma->vm_end = vm_start + len;
    vma->vm_sgx = NULL;
    vma->offset = offs;
    vma->perm = prot;


    struct stat s;
    int res;

    if (fd == -1) {
        vma->dev = 0;
        vma->inode = 0;
        vma->size = 0;
        *(long*)vma->comment = 0;
    }
    else {
        res = sgx_ocall_syscall_2(SYS_fstat, fd, (ulong)&s);
        YPHASSERT(res == 0);

        vma->dev = s.st_dev;
        vma->inode = s.st_ino;
        vma->size = s.st_size;
        sgx_vma_get_cmt(fd, vma->comment);
    }
}

/* deep copy except the ll field */
static void _sgx_vma_deep_copy(sgx_vm_area_t* dst, sgx_vm_area_t* src)
{
    // don't use :*dst = *src;
    dst->vm_start =  src->vm_start;
    dst->vm_end =  src->vm_end;
    dst->vm_sgx =  src->vm_sgx;
    dst->perm =  src->perm;
    dst->dev =  src->dev;
    dst->inode =  src->inode;
    dst->offset =  src->offset;

    strncpy(dst->comment, src->comment, VMA_CMT_MAXLEN);
}


/* Test the overlap-relatinship of current VMA (vma_start, vma_end) with region (ref_start, ref_end) */
static vma_overlap_t _sgx_vma_overlap(byte *vma_start, byte* vma_end,
        byte* ref_start, byte* ref_end)
{
    if (ref_start < vma_start) {
        if (ref_end <= vma_start)
            return OVERLAP_NONE;        // don't overlap
        else if (ref_end < vma_end)
            return OVERLAP_HEAD_OVF;    // the front-part of vma is overlapped, and don't have the same start-vma
        else if (ref_end == vma_end)
            return OVERLAP_ALL_OVFH;    // the whole VMA is overlapped, no same start-vma but have same end-vma
        else
            return OVERLAP_ALL_OVFHT;    // the whole VMA is overlapped, no same start-vma or end-vma
    }
    else if (ref_start == vma_start) {
        if (ref_end < vma_end)
            return OVERLAP_HEAD_ALN;    // the front-part of vma is overlapped, and have the same start-vma
        else if(ref_end == vma_end)
            return OVERLAP_SAME;        // exactly the same region
        else
            return OVERLAP_ALL_OVFT;    // the whole VMA is overlapped, same start-vma but no same end-vma
    }
    else if (ref_start < vma_end) {
        if (ref_end < vma_end)
            return OVERLAP_MID;         // the middle-part of vma is overlapped
        else if (ref_end == vma_end)
            return OVERLAP_TAIL_ALG;    // the tail-part of vma is overlapped, the same end-vma
        else
            return OVERLAP_TAIL_OVF;    // the tail-part of vma is overlapped, no same end-vma
    }
    else {
        return OVERLAP_NONE;        // no overlap
    }
}


/* find the vma with start address of vma_start */
static sgx_vm_area_t* _sgx_find_vma(byte *ext_start)
{
    vma_overlap_t ot = OVERLAP_NONE;
    sgx_vm_area_t *vma = NULL;
    list_t *ll = SGX_MM.in.next;
    byte *ref_start = ext_start;
    byte *ref_end = ext_start + SGX_PAGE_SIZE;  // at least one page
    BOOL ctuw = TRUE;

    YPHASSERT(ll != &SGX_MM.in);

    while (ctuw && ll != &SGX_MM.in) {
        vma = list_entry(ll, sgx_vm_area_t, ll);
        ot = _sgx_vma_overlap(vma->vm_start, vma->vm_end, ref_start, ref_end);

        switch (ot) {
            case OVERLAP_NONE:
                if (vma->vm_end <= ref_start)    /* no need to check anymore ? */
                    ll = ll->next;
                else
                    ctuw = FALSE;
                break;

            case OVERLAP_HEAD_ALN:
            case OVERLAP_ALL_OVFT:
            case OVERLAP_SAME:
            case OVERLAP_MID:
                return vma;
                break;

            default:
                break;
        } /* end switch */
    }/* end while */

    return NULL;
}


/* Merge adjacent vmas */
static sgx_vm_area_t* _sgx_vma_merge(sgx_vm_area_t* vma)
{
    ulong prevsz, cursz;
    sgx_vm_area_t* prev;
    sgx_vm_area_t* next;
    list_t* llp;
    list_t* lln;
    list_t* ll;


    YPHASSERT(vma != NULL && &vma->ll != &SGX_MM.in);
    ll = &vma->ll;
    llp = ll->prev;
    lln = ll->next;
    cursz = vma->vm_end - vma->vm_start;

    if (llp != &SGX_MM.in && NULL != llp /* cdd */) {
        /* adjacent? */
        prev = list_entry(llp, sgx_vm_area_t, ll);
        YPHASSERT(prev->vm_sgx != NULL);
        prevsz = prev->vm_end - prev->vm_start;

        /* free prev-vma ? */
        if (prev->vm_sgx + prevsz == vma->vm_sgx &&
                prev->perm == vma->perm &&
                prev->dev == vma->dev &&
                prev->inode == vma->inode &&
                *(long*)prev->comment == *(long*)(vma->comment) &&  /* tricky */
                ((prev->offset == 0 && vma->offset == 0) || prev->offset + prevsz == vma->offset )) {

            vma->vm_start = prev->vm_start;
            vma->vm_sgx = prev->vm_sgx;
            cursz += prevsz;
            if (vma->inode != 0) {
                vma->offset = prev->offset;
            }

            _sgx_vma_free(prev);
        }
    }

    if (lln != &SGX_MM.in && NULL != lln /* cdd */) {
        /* adjacent? */
        next = list_entry(lln, sgx_vm_area_t, ll);
        YPHASSERT(next->vm_sgx != NULL);
        /* free next-vma? */
        if (vma->vm_sgx + cursz == next->vm_sgx &&
                vma->perm == next->perm &&
                vma->dev == next->dev &&
                vma->inode == next->inode &&
                *(long*)vma->comment == *(long*)(next->comment) &&  /* tricky */
                ((vma->offset == 0 && next->offset == 0) || vma->offset + cursz == next->offset )) {

            vma->vm_end = next->vm_end;
            _sgx_vma_free(next);
        }
    }

    return vma;
}


/* return the number of bytes overlapped */
static size_t _sgx_vma_split(vma_overlap_t ot, sgx_vm_area_t** head,
        sgx_vm_area_t *vma, sgx_vm_area_t** tail,
        byte* ref_start, byte *ref_end)
{
    sgx_vm_area_t *add = NULL;
    list_t *ll = &vma->ll;
    list_t *llp = ll->prev;
    list_t *lln = ll->next;
    size_t len = 0;

    YPHASSERT(vma != NULL);
    *head = NULL;
    *tail = NULL;
    switch (ot) {
        case OVERLAP_NONE:
            break;

        case OVERLAP_HEAD_ALN:  /* head vma  NULL */
        case OVERLAP_HEAD_OVF:
            add = _sgx_vma_alloc(llp, ll);

            _sgx_vma_deep_copy(add, vma);
            add->vm_end = ref_end;
            vma->vm_start = ref_end;
            if (vma->vm_sgx != NULL)
                vma->vm_sgx = sgx_mm_ext2itn(vma->vm_start);
            len = add->vm_end - add->vm_start;
            if (vma->inode != 0)
                vma->offset += len;

            *head = add;
            break;

        case OVERLAP_TAIL_ALG:  /* NULL vma tail */
        case OVERLAP_TAIL_OVF:
            add = _sgx_vma_alloc(ll, lln);

            _sgx_vma_deep_copy(add, vma);
            vma->vm_end = ref_start;
            add->vm_start = ref_start;
            if (add->vm_sgx != NULL)
                add->vm_sgx = sgx_mm_ext2itn(add->vm_start);
            len = add->vm_end - add->vm_start;
            if (add->inode != 0)
                add->offset += len;

            *tail = add;
            break;

        case OVERLAP_ALL_OVFH:   /* NULL vma NULL */
        case OVERLAP_ALL_OVFT:
        case OVERLAP_ALL_OVFHT:
        case OVERLAP_SAME:
            len = vma->vm_end - vma->vm_start;
            break;

        case OVERLAP_MID:   /* head vma tail */
            YPHASSERT (vma->vm_start != ref_start);
            {
                add = _sgx_vma_alloc(llp, ll);

                _sgx_vma_deep_copy(add, vma);
                add->vm_end = ref_start;
                vma->vm_start = ref_start;
                if (vma->vm_sgx != NULL)
                    vma->vm_sgx = sgx_mm_ext2itn(vma->vm_start);
                if (vma->inode != 0)
                    vma->offset += add->vm_end - add->vm_start;

                *head = add;
            }

            YPHASSERT (vma->vm_end != ref_end);
            {
                add = _sgx_vma_alloc(ll, lln);

                _sgx_vma_deep_copy(add, vma);
                vma->vm_end = ref_end;
                add->vm_start = ref_end;
                if (add->vm_sgx != NULL)
                    add->vm_sgx = sgx_mm_ext2itn(add->vm_start);
                if (add->inode != 0)
                    add->offset += vma->vm_end - vma->vm_start;

                *tail = add;
            }
            len = ref_end - ref_start;
            break;

        default:
            YPHASSERT(FALSE);
            break;
    } /* end switch */

    return len;
}



/* Allocate a SGX-vma to track the mmap event */
/* Currently, we always assign the richest privilege: PROTE_READ|PROTE_WRITE|PROTE_EXEC */
static int _sgx_mm_mprotect(byte *ext_addr, size_t len, uint prot)
{
    sgx_vm_area_t *vma = NULL;
    sgx_vm_area_t *head = NULL;
    sgx_vm_area_t *tail = NULL;
    list_t *ll = SGX_MM.in.next;
    vma_overlap_t ot = OVERLAP_NONE;
    byte *ref_start = ext_addr;
    byte *ref_end = ext_addr + len;
    BOOL ctuw = TRUE;

    YPHASSERT(ll != &SGX_MM.in);

    while (ctuw && ll != &SGX_MM.in) {
        vma = list_entry(ll, sgx_vm_area_t, ll);
        ot = _sgx_vma_overlap(vma->vm_start, vma->vm_end, ref_start, ref_end);

        switch (ot) {
            case OVERLAP_NONE:
                if (vma->vm_end <= ref_start) {   /* no need to check anymore */
                    ll = ll->next;
                }
                else {
                    ctuw = FALSE;
                }

                break;

            case OVERLAP_HEAD_ALN:
                if (vma->perm == prot)  {/* already have the same property */
                    len -= vma->vm_end - vma->vm_start;
                }
                else {
                    len -= _sgx_vma_split(ot, &head, vma, &tail, ref_start, ref_end);
                    YPHASSERT(head != NULL);

                    head->perm = prot;
                    if (head->vm_sgx != NULL) {
                        // call mprotect on sgx-mm-buffer
                    }
                    _sgx_vma_merge(head);
                }

                ctuw = FALSE;
                break;

            case OVERLAP_HEAD_OVF:
                if (vma->perm == prot)  {/* already have the same property */
                    len -= vma->vm_end - vma->vm_start;
                }
                else {
                    len -= _sgx_vma_split(ot, &head, vma, &tail, ref_start, ref_end);
                    YPHASSERT(head != NULL);

                    head->perm = prot;
                    if (head->vm_sgx != NULL) {
                        // call mprotect on sgx-mm-buffer
                    }
                }

                ctuw = FALSE;
                break;

            case OVERLAP_TAIL_ALG:
                if (vma->perm == prot) { /* already have the same property */
                    len -= vma->vm_start - vma->vm_end;
                }
                else {
                    len -= _sgx_vma_split(ot, &head, vma, &tail, ref_start, ref_end);
                    YPHASSERT(tail != NULL);

                    tail->perm = prot;
                    if (head->vm_sgx != NULL) {
                        // call mprotect on sgx-mm-buffer
                    }
                    _sgx_vma_merge(tail);
                }

                ctuw = FALSE;
                break;

            case OVERLAP_TAIL_OVF:
                if (vma->perm == prot) { /* already have the same property */
                    len -= vma->vm_start - vma->vm_end;
                    ll = ll->next;
                }
                else {
                    len -= _sgx_vma_split(ot, &head, vma, &tail, ref_start, ref_end);
                    YPHASSERT(tail != NULL);

                    tail->perm = prot;
                    if (head->vm_sgx != NULL) {
                        // call mprotect on sgx-mm-buffer
                    }
                    /* please don't call _sgx_vma_merge */;
                    ll = tail->ll.next;
                }

                break;

            case OVERLAP_ALL_OVFH:
            case OVERLAP_ALL_OVFT:
                if (vma->perm != prot) { /* don't have the same property */
                    vma->perm = prot;
                    if (vma->vm_sgx != NULL) {
                        // call mprotect on sgx-mm-buffer
                    }
                }
                len -= vma->vm_end - vma->vm_start;
                _sgx_vma_merge(vma);

                ll = ll->next;
                break;

            case OVERLAP_ALL_OVFHT:
                if (vma->perm != prot) { /* don't have the same property */
                    vma->perm = prot;
                    if (vma->vm_sgx != NULL) {
                        // call mprotect on sgx-mm-buffer
                    }
                }
                len -= vma->vm_end - vma->vm_start;
                ll = ll->next;
                break;

            case OVERLAP_MID:
                if (vma->perm != prot) { /* don't have the same property */
                    len -= _sgx_vma_split(ot, &head, vma, &tail, ref_start, ref_end);
                    vma->perm = prot;
                    if (vma->vm_sgx != NULL) {
                        // call mprotect on sgx-mm-buffer
                    }
                }
                /* Please don't invoke _sgx_vma_merge */
                len = 0;
                ctuw = FALSE;
                break;

            case OVERLAP_SAME:
                if (vma->perm != prot) {
                    vma->perm = prot;
                    if (vma->vm_sgx != NULL) {
                        // call mprotect on sgx-mm-buffer
                    }
                }
                _sgx_vma_merge(vma);
                len = 0;
                ctuw = FALSE;
                break;

            default:
                YPHASSERT(FALSE);
                break;
        } /* end switch */
    }/* end while */


    if (len != 0)
        return -1;
    else
        return 0;
}


/* track munmap event */
static void _sgx_mm_munmap(byte *ext_addr, size_t len)
{
    sgx_vm_area_t *vma = NULL;
    sgx_vm_area_t *head = NULL;
    sgx_vm_area_t *tail = NULL;
    byte *ref_start = ext_addr;
    byte *ref_end = ext_addr + len;

    list_t *ll = SGX_MM.in.next;
    vma_overlap_t ot;
    BOOL ctuw = TRUE;

    while (ctuw && ll != &SGX_MM.in) {
        vma = list_entry(ll, sgx_vm_area_t, ll);
        ot = _sgx_vma_overlap(vma->vm_start, vma->vm_end, ext_addr, ext_addr + len);
        switch (ot) {
            case OVERLAP_NONE:
                if (vma->vm_start < ref_start) {
                    ll = ll->next;
                }
                else {
                    ctuw = FALSE;
                }
                break;

            case OVERLAP_HEAD_ALN:
            case OVERLAP_HEAD_OVF:
                _sgx_vma_split(ot, &head, vma, &tail, ref_start, ref_end);

                YPHASSERT(head != NULL);
                _sgx_vma_free(head);
                ctuw = FALSE;
                break;

            case OVERLAP_TAIL_ALG:
                _sgx_vma_split(ot, &head, vma, &tail, ref_start, ref_end);

                YPHASSERT(tail != NULL);
                _sgx_vma_free(tail);
                ctuw = FALSE;
                break;

            case OVERLAP_TAIL_OVF:
                _sgx_vma_split(ot, &head, vma, &tail, ref_start, ref_end);

                YPHASSERT(tail != NULL);
                _sgx_vma_free(tail);

                ll = vma->ll.next;
                break;

            case OVERLAP_ALL_OVFH:
            case OVERLAP_SAME:
                _sgx_vma_free(vma);
                ctuw = FALSE;
                break;


            case OVERLAP_ALL_OVFT:
            case OVERLAP_ALL_OVFHT:
                ll = vma->ll.next;
                _sgx_vma_free(vma);
                break;

            case OVERLAP_MID:
                _sgx_vma_split(ot, &head, vma, &tail, ref_start, ref_end);

                YPHASSERT(vma != NULL);
                _sgx_vma_free(vma);
                ctuw = FALSE;
                break;

            default:
                YPHASSERT(FALSE);
                break;
        } /* end switch */
    }/* end while */
}


/* Allocating sgx_vm_area_t to track mmap event */
/* And also allocate sgx-mm-buffer */
static sgx_vm_area_t*
_sgx_mm_mmap(byte *ext_addr, size_t len, ulong prot, ulong flags, int fd, ulong offs)
{
    sgx_vm_area_t* vma = NULL;

    /* the region [ext_addr, +len) must in [sgx_mm.ext_vm_base, +sgx_mm.prog_arena_size] */
    if (ext_addr < SGX_MM.ext_vmm_base || ext_addr + len > SGX_MM.ext_vmm_base + SGX_MM.prog_arena_size) {
        // YPHPRINT("[%p, %p) cannot be mapped into SGX-encalve\n", ext_addr, ext_addr + len);
        YPHASSERT(FALSE);
    }

    /* unmap the overllapped area first */
    _sgx_mm_munmap(ext_addr, len);

    /* find the location to insert vma */
    list_t *ll = SGX_MM.in.next;
    while (ll != &SGX_MM.in) {
        vma = list_entry(ll, sgx_vm_area_t, ll);
        if (vma->vm_start < ext_addr)
            ll = ll->next;
        else
            break;
    }


    /* create a new vma */
    vma = _sgx_vma_alloc(ll->prev, ll);
    _sgx_vma_initialize(vma, ext_addr, len, prot, fd, offs);

    /* Allocate sgx-mm-buffer if needs */
    vma->vm_sgx = _sgx_mm_buffer_alloc(ext_addr, len);

    return vma;
}


/*----- export function for bridge-trts, providing MM in program arena ------*/

BOOL sgx_mm_within_sgxbuf(byte *addr, size_t len)
{
    YPHASSERT(len > 0);

    byte *itn_upper;

    /* the uppper bound for translating */
    itn_upper = SGX_MM.prog_arena_base + SGX_MM.prog_arena_size;

    return (addr >= SGX_MM.prog_arena_base && addr + len <= itn_upper);
}

static byte* _sgx_mm_itn2ext(byte *itn_addr, BOOL start_vma)
{
    byte *addr = itn_addr;

    start_vma ? (addr++) : (addr--);
    if (sgx_mm_within_sgxbuf(addr, 1))
        return (itn_addr - SGX_MM.prog_arena_base) + SGX_MM.ext_vmm_base;
    else
        return itn_addr;    // passed in an external address
}


static byte* _sgx_mm_ext2itn(byte *ext_addr, BOOL start_vma)
{
    /* passed in an internal address */
    if (ext_addr < SGX_MM.ext_vmm_base ||
        ext_addr > SGX_MM.ext_vmm_base+SGX_MM.prog_arena_size)
        return ext_addr;

    byte* itn_addr = (ext_addr - SGX_MM.ext_vmm_base) + SGX_MM.prog_arena_base;
    byte* addr = itn_addr;

    start_vma ? (addr ++) : (addr --);
    if (sgx_mm_within_sgxbuf(addr, 1))
        return itn_addr;
    else
        return ext_addr;    // cannot mapped into SGX-mm-buffer
}


byte* sgx_mm_itn2ext(byte *itn_addr)
{
    return _sgx_mm_itn2ext(itn_addr, TRUE);
}


byte* sgx_mm_ext2itn(byte *ext_addr)
{
    return _sgx_mm_ext2itn(ext_addr, TRUE);
}


// Allocate a sgx-vma whether the given external memory region can be casted into a sgx-mm-buffer.
// If yes, allocates a sgx-mm-buffer. Test the vma->vm_sgx field for checking.
// ext_addr: external address, maybe NULL; should not be internal address
byte* sgx_mm_mmap(byte *ext_addr, size_t len,
        ulong prot, ulong flags, int fd, ulong offs)
{
    YPHASSERT(!sgx_mm_within_sgxbuf(ext_addr, len));
    sgx_vm_area_t* vma = NULL;
    byte *res = NULL;

    SGX_MM.updated = TRUE;
    len = (len + SGX_PAGE_SIZE - 1) & ~(SGX_PAGE_SIZE - 1);

    // Allocate vma for tracking mmap event
    vma = _sgx_mm_mmap(ext_addr, len, prot, flags, fd, offs);
    if (vma == NULL) {
        // fix-me: munmap_syscall();
        return NULL;
    }

    /* copy the content from external to internal if needs */
    YPHASSERT(vma->vm_sgx != NULL);
    res = vma->vm_sgx;

    if (vma->inode != 0) {
        int ncpy = (vma->size-offs < len) ?
            ((vma->size-offs + SGX_PAGE_SIZE - 1) & ~(SGX_PAGE_SIZE - 1)) : len;
        memcpy(vma->vm_sgx, ext_addr, ncpy);
        memset(vma->vm_sgx + ncpy, 0, len - ncpy);
    }
    else {
        memset(vma->vm_sgx, 0, len);
    }

    /* do merge if needs for anonymous-mappings */
    if (fd == -1) {
        _sgx_vma_merge(vma);
    }

    // mprotect_syscall()
    return res;
}

// Free the sgx-vma tracking the given external memory region.
// Free the sgx-mm-buffer if allocated.
// ext_addr: external address; should not be internal address
void sgx_mm_munmap(byte *ext_addr, size_t len)
{
    YPHASSERT(!sgx_mm_within_sgxbuf(ext_addr, len));

    SGX_MM.updated = TRUE;

    sgx_vm_area_t *vma = NULL;
    byte *ref_start = ext_addr;

    list_t *ll = SGX_MM.in.next;
    vma_overlap_t ot;
    BOOL ctuw = TRUE;

    len = (len + SGX_PAGE_SIZE - 1) & ~(SGX_PAGE_SIZE - 1);

    /* flush content to external file if needs */
    while (ctuw && ll != &SGX_MM.in) {
        vma = list_entry(ll, sgx_vm_area_t, ll);
        ot = _sgx_vma_overlap(vma->vm_start, vma->vm_end,
            ext_addr, ext_addr + len);

        switch (ot) {
            case OVERLAP_NONE:
                if (vma->vm_start < ref_start) {
                    ll = ll->next;
                }
                else {
                    ctuw = FALSE;
                }
                break;

            case OVERLAP_HEAD_ALN:
            case OVERLAP_HEAD_OVF:
            case OVERLAP_TAIL_ALG:
                if (vma->inode != 0 && vma->vm_sgx != NULL) {
                    /* flush content to external file */
                }

                ctuw = FALSE;
                break;

            case OVERLAP_TAIL_OVF:
                if (vma->inode != 0 && vma->vm_sgx != NULL) {
                    /* flush content to external file */
                }

                ll = vma->ll.next;
                break;

            case OVERLAP_ALL_OVFH:
            case OVERLAP_SAME:
                if (vma->inode != 0 && vma->vm_sgx != NULL) {
                    /* flush content to external file */
                }
                ctuw = FALSE;
                break;

            case OVERLAP_ALL_OVFT:
            case OVERLAP_ALL_OVFHT:
                if (vma->inode != 0 && vma->vm_sgx != NULL) {
                    /* flush content to external file */
                }
                ll = vma->ll.next;
                break;

            case OVERLAP_MID:
                if (vma->inode != 0 && vma->vm_sgx != NULL) {
                    /* flush content to external file */
                }

                ctuw = FALSE;
                break;

            default:
                YPHASSERT(FALSE);
                break;
        } /* end case */
    } /* end while */


    /* free vmas */
    _sgx_mm_munmap(ext_addr, len);

    /* invoke mprotect() instead of freeing */
}

// Adjust the sgx-vmas tracking the given external memory region.
// mprotect the sgx-mm-buffer if allocated.
// ext_addr: external address; should not be internal address
int sgx_mm_mprotect(byte *ext_addr, size_t len, uint prot)
{
    YPHASSERT(!sgx_mm_within_sgxbuf(ext_addr, len));

    size_t align = (len + SGX_PAGE_SIZE - 1) & ~(SGX_PAGE_SIZE - 1);
    SGX_MM.updated = TRUE;

    _sgx_mm_mprotect(ext_addr, align, prot);

    return 0;
}


byte* sgx_mm_mremap(byte *ext_old_addr, size_t old_sz,
    byte* ext_new_addr, size_t new_sz, uint new_flags)
{
    SGX_MM.updated = TRUE;

    sgx_vm_area_t *vma = NULL;
    byte* itn_addr = NULL;


    if (ext_old_addr == ext_new_addr) { /* just resize current vma */
        vma = _sgx_find_vma(ext_old_addr);
        YPHASSERT(vma != NULL);
        vma->size = new_sz;
        itn_addr = sgx_mm_ext2itn(ext_old_addr);
    }
    else {
        ulong perm;
        ulong offs;

        /* get the attributes of current vma */
        vma = _sgx_find_vma(ext_old_addr);
        YPHASSERT(vma != NULL);
        perm = vma->perm;
        offs = vma->offset;

        /* munmap the old vma */
        sgx_mm_munmap(ext_old_addr, old_sz);

        /* mmap a new vma with the above attributes */
        itn_addr = sgx_mm_mmap(ext_new_addr, new_sz, perm, 0, -1, offs);
    }

    return itn_addr;
}
