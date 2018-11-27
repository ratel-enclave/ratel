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

/*-------------------provide a procmaps for sgx-app------------*/
typedef struct _big_buffer_t {
    char    *data;  /* point to current buffer; */
    uint    size;  /* the capacity of this buffer */
    uint    used;  /* length of content */
} big_buffer_t;

typedef struct _procmaps_t {
    big_buffer_t    big_buf;
    uint            read_oft;   /* offset from begining for reading */
} procmaps_t;


// for performance, using a static buffer
#define SGX_PROCMAPS_BUF_LEN   (4096*2)
static char PROCMAPS_BUF[SGX_PROCMAPS_BUF_LEN];

static procmaps_t SGX_PROCMAPS; // just used by DynamoRIO

/*---------------------------------------------------------------------------*/
extern sgx_mm_t SGX_MM;


byte* sgx_mm_dyRIO_heap_offset(void)
{
    return SGX_MM.dyRIO_heap_base;
}

size_t sgx_mm_dyRIO_heap_size(void)
{
    return SGX_MM.dyRIO_heap_size;
}


void sgx_procmaps_init(void)
{
    big_buffer_t *buf = &SGX_PROCMAPS.big_buf;

    buf->data  = PROCMAPS_BUF;
    buf->size = SGX_PROCMAPS_BUF_LEN;
    buf->used = 0;

    SGX_PROCMAPS.read_oft = 0;
}

void sgx_procmaps_exit(void)
{
    char *buf = SGX_PROCMAPS.big_buf.data;

    if (buf != NULL && buf != PROCMAPS_BUF) {
        /* use sgxsdk's malloc & free */
        // heap_free(GLOBAL_DCONTEXT, SGX_PROCMAPS.data_buf, SGX_PROCMAPS.buf_size HEAPACCT(ACCT_OTHER));
        free(buf);
    }
}


/* check that this buffer has at least nRemain_lowbound bytes left; */
/* Rewrite the *buffer if need sot allocate a new buffer */
/* return false if allocates a new buffer, else true */
bool ensure_buffer_capacity(big_buffer_t *buf, int nLowestWatermark)
{
    YPHASSERT(buf != NULL);
    int nleft = buf->size - buf->used;

    if (nleft >= nLowestWatermark) {
        return true;
    }
    else {
        /* dynamically allocate a big buffer */
        char *new_buf;
        uint new_size;

        new_size = buf->size * 2;
        /* use sgxsdk's malloc & free */
        // pbuf = (char*)heap_alloc(GLOBAL_DCONTEXT, SGX_PROCMAPS.buf_size HEAPACCT(ACCT_OTHER));
        YPHPRINT("%x", new_size);
        new_buf = (char*)malloc(new_size);
        YPHASSERT(new_buf != NULL);

        memcpy(new_buf, buf->data, buf->used);

        /* free the old buffer */
        if (buf->data != PROCMAPS_BUF)
            free(buf->data);

        /* update the fields of sgx_procmaps */
        buf->data = new_buf;
        buf->size = new_size;

        return ensure_buffer_capacity(buf, nLowestWatermark);
    }

    return false;
}


/* generate the procmaps according to the vma list */
static bool _generate_sgx_procmaps(big_buffer_t *buf, bool debug)
{
    static char perm_n2s[][8] =
    {
        /*0x000*/ "---p",
        /*0x001*/ "r--p",
        /*0x010*/ "-w-p",
        /*0x011*/ "rw-p",
        /*0x100*/ "--xp",
        /*0x101*/ "r-xp",
        /*0x110*/ "-wxp",
        /*0x111*/ "rwxp",
    };

    buf->used = 0;

#define MAPS_LINE_FORMAT  "%08lx-%08lx %s %08lx %-8d %-8d %8s\n"
#define SGX_BUFFER_SIZE   0x000010000000

    /* update the procmaps */
    list_t *ll;

    for (ll = SGX_MM.in.next; ll != &SGX_MM.in; ll = ll->next) {
        sgx_vm_area_t *vma;
        byte *start, *end;
        uint nleft, nwr;
        char *pcnt;

        vma = list_entry(ll, sgx_vm_area_t, ll);

        /* Please don't expose the sgx-mm-buffer itself */
        // if (vma->vm_start >= sgx_vm_base && vma->vm_end <= sgx_vm_base + SGX_BUFFER_SIZE)
        // if (vma->vm_start >= SGX_VM_HEAPBASE && vma->vm_end <= (SGX_VM_HEAPBASE + SGX_BUFFER_SIZE))
        // if (vma->vm_start == SGX_MM.heap_init_start || vma->vm_end == SGX_MM.heap_init_end)
        // continue;

        /* TCS is not accessile to Application, making it non-visible such that would not be emulated */
        if (strncmp(vma->comment, "[TCS]", 80) == 0)
            continue;

        /* check the buffer available for wrtting */
        ensure_buffer_capacity(buf, 128);
        pcnt = buf->data + buf->used;
        nleft = buf->size - buf->used;

        YPHASSERT (vma->vm_sgx != NULL);
        start = vma->vm_sgx;
        end = start + (vma->vm_end - vma->vm_start);

        if (debug)
            dr_printf(MAPS_LINE_FORMAT, start, end, perm_n2s[vma->perm], vma->offset, vma->dev, vma->inode, vma->comment);
        else
            nwr = snprintf(pcnt, nleft, MAPS_LINE_FORMAT, start, end, perm_n2s[vma->perm], vma->offset, vma->dev, vma->inode, vma->comment);

        buf->used += nwr;
    }

    return true;
}


/*----------------- functions for reading the virtual procmaps --------------*/
int sgx_procmaps_read_start(void)
{
    bool res;

    /* generate a new snapshot of procmaps if debug */
    YPHASSERT(SGX_PROCMAPS.big_buf.data != NULL);

    /* the memrory regions are not updated, so returns the existing procmaps */
    if (SGX_MM.updated) {
        res = _generate_sgx_procmaps(&SGX_PROCMAPS.big_buf, false);
    }
    SGX_PROCMAPS.read_oft = 0;

    SGX_MM.updated = false;

    return res;
}


/* There is a synchronization problem: the vma list may be updated during querying */
/* To simulate querying the procmaps, We make sure the caller always see the old memory layout */
static int _sgx_procmaps_read_next(procmaps_t *procmaps, char *buf, uint count)
{
    big_buffer_t *bigbuf = &(procmaps->big_buf);
    char *pcnt;
    uint nleft;

    /* no more data */
    if (procmaps->read_oft >= bigbuf->used) {
        return 0;
    }

    pcnt = bigbuf->data + procmaps->read_oft;
    nleft = bigbuf->used - procmaps->read_oft;
    if (nleft >= count) {
        memcpy(buf, pcnt, count);
        procmaps->read_oft += count;

        return count;
    }
    else {
        memcpy(buf, pcnt, nleft);
        buf[nleft] = '\0';
        procmaps->read_oft = bigbuf->used;

        return nleft;
    }
}


int sgx_procmaps_read_next(char buf[], uint len)
{
    return _sgx_procmaps_read_next(&SGX_PROCMAPS, buf, len);
}


void sgx_procmaps_read_stop(void)
{   /* exit querying mode, reset the read_oft to 0 */
    SGX_PROCMAPS.read_oft = 0;
}


/* for debugging, dynamically called by gdb */
int print_sgx_procmaps(void)
{
    return _generate_sgx_procmaps(&SGX_PROCMAPS.big_buf, true);
}


/* ------------------------procmaps file for external usage -----------------*/
#define SGX_PROCMAPS_FD 40
static procmaps_t procmaps_file;

int open_procmaps_file(void)
{
    big_buffer_t *bigbuf = &(procmaps_file.big_buf);

    if (bigbuf->data == NULL) {
        bigbuf->size = 4096 * 2;
        bigbuf->data = malloc(bigbuf->size);
    }

    /* generate file content */
    return _generate_sgx_procmaps(bigbuf, false);
}


int read_procmaps_file(char buf[], size_t len)
{
    return _sgx_procmaps_read_next(&procmaps_file, buf, len);
}


void close_procmaps_file(void)
{
    procmaps_file.read_oft = 0;

    free(procmaps_file.big_buf.data);

    procmaps_file.big_buf.data = NULL;
}
