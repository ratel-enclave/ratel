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


#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");

int init_module(void)
{
    unsigned long cr4;


    /*unsigned long u = native_read_cr4();*/
    asm volatile("mov %%cr4,%0\n\t" : "=r" (cr4), "=m" (__force_order));
    printk(KERN_INFO "CR4: 0x%lx\n", cr4);

    cr4 |= 0x10000;
    asm volatile("mov %0,%%cr4\n\t" :: "rm" (cr4));

    //Read CR4 again
    asm volatile("mov %%cr4,%0\n\t" : "=r" (cr4), "=m" (__force_order));
    printk(KERN_INFO "CR4: 0x%lx\n", cr4);

    unsigned long fsbase;

    asm volatile ( "rdfsbase %0" : "=rm" (fsbase));
    printk(KERN_INFO "FSBASE: 0x%lx\n", fsbase);

    //Test the useability of wrfsbase
    asm volatile ( "wrfsbase %0" :: "rm" (fsbase));

    return 0;
}


void cleanup_module(void)
{
}


