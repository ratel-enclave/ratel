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
typedef struct _procmaps_t {
    char   *data_buf;   /* point ro the current buffer; */
    uint    buf_size;   /* the size of buffer */
    uint    cnt_len;    /* length of content */
    uint    read_oft;   /* offset from begining for reading */
} procmaps_t;

#define SGX_PROCMAPS_BUF_LEN   (4096*2)

// for performance, using a static buffer
static char PROCMAPS_BUF[SGX_PROCMAPS_BUF_LEN];
static procmaps_t SGX_PROCMAPS;

/*---------------------------------------------------------------------------*/
extern sgx_mm_t SGX_MM;


void sgx_procmaps_init(void)
{
    SGX_PROCMAPS.data_buf = PROCMAPS_BUF;
    SGX_PROCMAPS.buf_size = SGX_PROCMAPS_BUF_LEN;
}

void sgx_procmaps_exit(void)
{
    if (SGX_PROCMAPS.data_buf != NULL && SGX_PROCMAPS.data_buf != PROCMAPS_BUF) {
        heap_free(GLOBAL_DCONTEXT, SGX_PROCMAPS.data_buf, SGX_PROCMAPS.buf_size HEAPACCT(ACCT_OTHER));
    }
}


/* generate the procmaps according to the vma list */
static bool _generate_sgx_procmaps(bool debug)
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

    /* the memrory regions are not updated, so returns the existing procmaps */
    if (SGX_PROCMAPS.data_buf != NULL && !SGX_MM.updated && !debug) {
        return true;
    }
    SGX_PROCMAPS.cnt_len = 0;


#define MAPS_LINE_FORMAT  "%08lx-%08lx %s %08lx %-8d %-8d %8s\n"
#define SGX_BUFFER_SIZE   0x000010000000

     /* update the procmaps */
    list_t *ll;

    for (ll = SGX_MM.in.next; ll != &SGX_MM.in; ll = ll->next) {
        sgx_vm_area_t *vma;
        byte *start, *end;
        char *pbuf, *pcnt;
        uint nleft, nwr;

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
        nleft = SGX_PROCMAPS.buf_size - SGX_PROCMAPS.cnt_len;
        if (nleft < 256) {
            /* dynamically allocate a big buffer */
            SGX_PROCMAPS.buf_size *= 2;

            pbuf = (char*)heap_alloc(GLOBAL_DCONTEXT, SGX_PROCMAPS.buf_size HEAPACCT(ACCT_OTHER));
            YPHASSERT(pbuf != NULL);

            memcpy(pbuf, SGX_PROCMAPS.data_buf, SGX_PROCMAPS.cnt_len);

            /* free the old buffer */
            if (SGX_PROCMAPS.data_buf != PROCMAPS_BUF)
                heap_free(GLOBAL_DCONTEXT, SGX_PROCMAPS.data_buf, SGX_PROCMAPS.buf_size HEAPACCT(ACCT_OTHER));

            /* update the fields of sgx_procmaps */
            SGX_PROCMAPS.data_buf = pbuf;
            nleft = SGX_PROCMAPS.buf_size - SGX_PROCMAPS.cnt_len;
        }

        YPHASSERT (vma->vm_sgx != NULL);
        start = vma->vm_sgx;
        end = start + (vma->vm_end - vma->vm_start);

        pcnt = SGX_PROCMAPS.data_buf + SGX_PROCMAPS.cnt_len;
        if (debug)
            dr_printf(MAPS_LINE_FORMAT, start, end, perm_n2s[vma->perm], vma->offset, vma->dev, vma->inode, vma->comment);
        else
            nwr = snprintf(pcnt, nleft, MAPS_LINE_FORMAT, start, end, perm_n2s[vma->perm], vma->offset, vma->dev, vma->inode, vma->comment);

        SGX_PROCMAPS.cnt_len += nwr;
    }

    SGX_MM.updated = false;
    return true;
}

/*----------------- functions for reading the virtual procmaps --------------*/
int sgx_procmaps_read_start(void)
{
    bool res = _generate_sgx_procmaps(false);
    SGX_PROCMAPS.read_oft = 0;

    return res;
}


void sgx_procmaps_read_stop(void)
{   /* exit querying mode, reset the read_oft to 0 */
    SGX_PROCMAPS.read_oft = 0;
}


/* There is a synchronization problem: the vma list may be updated during querying */
/* To simulate querying the procmaps, We make sure the caller always see the old memory layout */
int sgx_procmaps_read_next(char *buf, uint count)
{
    char *pcnt;
    uint nleft;

    /* no more data */
    if (SGX_PROCMAPS.read_oft >= SGX_PROCMAPS.cnt_len) {
        return 0;
    }

    pcnt = SGX_PROCMAPS.data_buf + SGX_PROCMAPS.read_oft;
    nleft = SGX_PROCMAPS.cnt_len - SGX_PROCMAPS.read_oft;
    if (nleft >= count) {
        memcpy(buf, pcnt, count);
        SGX_PROCMAPS.read_oft += count;

        return count;
    }
    else {
        memcpy(buf, pcnt, nleft);
        buf[nleft] = '\0';
        SGX_PROCMAPS.read_oft = SGX_PROCMAPS.cnt_len;

        return nleft;
    }
}

/* for debugging, dynamically called by gdb */
int print_sgx_procmaps(void)
{
   return _generate_sgx_procmaps(true);
}
