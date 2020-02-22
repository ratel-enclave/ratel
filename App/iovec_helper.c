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
#include "iovec_helper.h"
#include <assert.h>

unsigned long shadowing_iovec(struct iovec *iov, char *iovb, int c_iov)
{
    int s_iov = sizeof(struct iovec);
    struct iovec *iov_shd = (struct iovec*)malloc(c_iov * s_iov + 1);
    assert(NULL != iov_shd);
    memset(iov_shd, 0, c_iov * s_iov + 1);
    unsigned long iov_shd_addr = (unsigned long)iov_shd;
    
    char *iov_base = (char *)iovb;
    for (int i = 0; ; )
    {
        int s_iovb = iov->iov_len;

        char *iovb_shd = (char *)malloc(s_iovb + 1);
        assert(NULL != iovb_shd);
        memset(iovb_shd, 0, s_iovb + 1);
        memcpy(iovb_shd, iov_base, s_iovb);

        iov_shd->iov_base = (void*)iovb_shd;
        iov_shd->iov_len = s_iovb;

        if (++i < c_iov)
        {
            iov_base += s_iovb;
            iov_shd++;
            iov++;
        }
        else
            break;
    }

    return iov_shd_addr;
}