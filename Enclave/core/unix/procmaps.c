#include <sys/types.h>
#include <sys/mman.h>

/* for open */
#include <sys/stat.h>
#include <fcntl.h>
#include "../globals.h"
#include "../hashtable.h"
#include "../native_exec.h"
#include <string.h>
#include <unistd.h> /* for write and usleep and _exit */
#include <limits.h>


#include <dlfcn.h>
#include <stdlib.h>
#include <stdio.h>
#include <signal.h>
#include <syslog.h>             /* vsyslog */
#include "../vmareas.h"
#ifdef RCT_IND_BRANCH
# include "../rct.h"
#endif
#ifdef LINUX
# include "include/syscall.h"            /* our own local copy */
#else
# include <sys/syscall.h>
#endif
#include "../module_shared.h"
#include "os_private.h"
#include "../synch.h"
#include "memquery.h"
#include "ksynch.h"

#include "sgx_mm.h"

#include "instrument_api.h"

#define SGX_PROCMAPS_BUF_LEN   (4096*2)

char sgx_procmaps_buf[SGX_PROCMAPS_BUF_LEN];

struct procmaps_t {
    char*   buf;        /* point ro the current buffer; */
    size_t  buf_size;   /* the size of buffer */
    size_t  cnt_len;    /* length of content */
    size_t  read_oft;   /* offset from begining for reading */
} sgx_procmaps;


extern sgx_mm_t sgxmm;
// extern byte* sgx_vm_base;
extern byte* heap_init_end;
extern byte* sgx_vm_base;
extern byte* ext_vm_base;


/* print the vma list to a buffer */
int _sgx_procmaps_read_start(bool debug)
{
    sgx_procmaps.buf = sgx_procmaps_buf;
    sgx_procmaps.buf_size = SGX_PROCMAPS_BUF_LEN;
    sgx_procmaps.cnt_len = 0;
    sgx_procmaps.read_oft = 0;

    sgx_vm_area_t *vma;
    list_t* ll;
    char perm[8];
    byte* start;
    byte* end;

    char *pbuf;
    char* pcnt;
    size_t nleft;
    size_t nwrite;

#define MAPS_LINE_FORMAT  "%08lx-%08lx %s %08lx %-8d %-8d %8s\n"
#define AFTER_HEAP_FLAG   (byte*)0x800000000000
#define SGX_BUFFER_SIZE   0x000010000000

    for (ll = sgxmm.in.next; ll != &sgxmm.in; ll = ll->next) {
        vma = list_entry(ll, sgx_vm_area_t, ll);

        /* Please don't expose the sgx-mm-buffer itself */
        // if (vma->vm_start >= sgx_vm_base && vma->vm_end <= sgx_vm_base + SGX_BUFFER_SIZE)
        // if (vma->vm_start >= SGX_VM_HEAPBASE && vma->vm_end <= (SGX_VM_HEAPBASE + SGX_BUFFER_SIZE))
        if (vma->vm_end == heap_init_end)
            continue;

        /* TCS is not accessile to Application, making it non-visible such that would not be emulated */
        if (strncmp(vma->comment, "[TCS]", 80) == 0)
            continue;

        /* perm to string */
        strncpy(perm, "---s", 8);
        if (vma->perm & PROT_READ)
            perm[0] = 'r';
        if (vma->perm & PROT_WRITE)
            perm[1] = 'w';
        if (vma->perm & PROT_EXEC)
            perm[2] = 'x';

        /* check the buffer available for wrtting */
        nleft = sgx_procmaps.buf_size - sgx_procmaps.cnt_len;
        if (nleft < 256) {
            /* dynamically allocate a big buffer */
            sgx_procmaps.buf_size *= 2;

            pbuf = (char*)heap_alloc(GLOBAL_DCONTEXT, sgx_procmaps.buf_size HEAPACCT(ACCT_OTHER));
            YPHASSERT(pbuf != NULL);

            memcpy(pbuf, sgx_procmaps.buf, sgx_procmaps.cnt_len);

            /* free the old buffer */
            if (sgx_procmaps.buf != sgx_procmaps_buf)
                heap_free(GLOBAL_DCONTEXT, sgx_procmaps.buf, sgx_procmaps.buf_size HEAPACCT(ACCT_OTHER));

            /* update the fields of sgx_procmaps */
            sgx_procmaps.buf = pbuf;
            nleft = sgx_procmaps.buf_size - sgx_procmaps.cnt_len;
        }

        pcnt = sgx_procmaps.buf + sgx_procmaps.cnt_len;
        start = sgx_mm_ext2itn(vma->vm_start);
        if (sgx_mm_within(start, vma->vm_end - vma->vm_start)) {
            YPHASSERT (vma->vm_sgx != NULL);
            end = start + (vma->vm_end - vma->vm_start);
        }
        else if (start > AFTER_HEAP_FLAG) {
            start = (byte*)(vma->vm_start - AFTER_HEAP_FLAG);
            end = (byte*)(vma->vm_end - AFTER_HEAP_FLAG);
        }
        else {
            start = vma->vm_start;
            end = vma->vm_end;
        }
        if (debug)
            dr_printf(MAPS_LINE_FORMAT, start, end, perm, vma->offset, vma->dev, vma->inode, vma->comment);
        else
            nwrite = snprintf(pcnt, nleft, MAPS_LINE_FORMAT, start, end, perm, vma->offset, vma->dev, vma->inode, vma->comment);

        sgx_procmaps.cnt_len += nwrite;
    }

    return !INVALID_FILE;
}

int sgx_procmaps_read_start(void)
{
   return _sgx_procmaps_read_start(false);
}

int print_sgx_procmaps(void)
{
   return _sgx_procmaps_read_start(true);
}

void sgx_procmaps_read_stop(void)
{   /* exit querying mode */
    if (sgx_procmaps.buf != sgx_procmaps_buf) {
        heap_free(GLOBAL_DCONTEXT, sgx_procmaps.buf, sgx_procmaps.buf_size HEAPACCT(ACCT_OTHER));
    }
    sgx_procmaps.cnt_len = sgx_procmaps.read_oft = 0;
}


/* There is a synchronization problem: the vma list may be updated during querying */
/* To simulate querying the procmaps, We make sure the caller always see the old memory layout */
int sgx_procmaps_read_next(char *buf, int count)
{
    char* pcnt;
    size_t ncnt;

    if (sgx_procmaps.read_oft >= sgx_procmaps.cnt_len) {
        return 0;
    }

    pcnt = sgx_procmaps.buf + sgx_procmaps.read_oft;
    ncnt = sgx_procmaps.cnt_len - sgx_procmaps.read_oft;
    if (ncnt > count) {
        memcpy(buf, pcnt, count);
        sgx_procmaps.read_oft += count;

        return count;
    }
    else {
        memcpy(buf, pcnt, ncnt);
        buf[ncnt] = '\0';
        sgx_procmaps.read_oft = sgx_procmaps.cnt_len;

        return ncnt;
    }
}
