/* **********************************************************
 * Copyright (c) 2011-2017 Google, Inc.  All rights reserved.
 * Copyright (c) 2001-2010 VMware, Inc.  All rights reserved.
 * ********************************************************** */

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
/* Copyright (c) 2001 Hewlett-Packard Company */

/*
 * x86.asm - x86 specific assembly and trampoline code
 *
 * This file is used for both linux and windows.
 * We used to use the gnu assembler on both platforms, but
 * gas does not support 64-bit windows.
 * Thus we now use masm on windows and gas with the new intel-syntax-specifying
 * options so that our code here only needs a minimum of macros to
 * work on both.
 *
 * Note that for gas on cygwin we used to need to prepend _ to global
 * symbols: we don't need that for linux gas or masm so we don't do it anymore.
 */

/* We handle different registers and calling conventions with a CPP pass.
 * It can be difficult to choose registers that work across all ABI's we're
 * trying to support: we need to move each ARG into a register in case
 * it is passed in memory, but we have to pick registers that don't already
 * hold other arguments.  Typically, use this order:
 *   REG_XAX, REG_XBX, REG_XDI, REG_XSI, REG_XDX, REG_XCX
 * Note that REG_XBX is by convention used on linux for PIC base: if we want
 * to try and avoid relocations (case 7852) we should avoid using it
 * to avoid confusion (though we can always pick a different register,
 * even varying by function).
 * FIXME: should we use virtual registers instead?
 * FIXME: should we have ARG1_IN_REG macro that is either nop or load from stack?
 * For now not bothering, but if we add more routines we'll want more support.
 * Naturally the ARG* macros are only valid at function entry.
 */

#include "asm_defines.asm"
START_FILE

/****************************************************************************/
/****************************************************************************/

//DECL_EXTERN(unexpected_return)
DECL_EXTERN(init_app)

#ifdef LINUX /* XXX i#1285: implement MacOS private loader + injector */
#if !defined(STANDALONE_UNIT_TEST) && !defined(STATIC_LIBRARY)
/* i#47: Early injection _start routine.  The kernel sets all registers to zero
 * except the SP and PC.  The stack has argc, argv[], envp[], and the auxiliary
 * vector laid out on it.
 * If we reload ourselves (i#1227) we'll set xdi and xsi to the base and size
 * of the old library that needs to be unmapped.
 */
        DECLARE_EXPORTED_FUNC(app_start)
GLOBAL_LABEL(app_start:)
        /* i#1676, i#1708: relocate dynamorio if it is not loaded to preferred address.
         * We call this here to ensure it's safe to access globals once in C code
         * (xref i#1865).
         */
        CALLC3(GLOBAL_REF(init_app), 0, 0, REG_XSP)
        //jmp     GLOBAL_REF(unexpected_return)
        END_FUNC(app_start)
#endif /* !STANDALONE_UNIT_TEST && !STATIC_LIBRARY */


/* i#1227: on a conflict with the app we reload ourselves.
 * xfer_to_new_libdr(entry, init_sp, cur_dr_map, cur_dr_size)
 * =>
 * Invokes entry after setting sp to init_sp and placing the current (old)
 * libdr bounds in registers for the new libdr to unmap.
 */
        DECLARE_EXPORTED_FUNC(xfer_to_new_libdr)
GLOBAL_LABEL(xfer_to_new_libdr:)
        /* Get the args */
        mov     REG_XAX, ARG1
        mov     REG_XBX, ARG2
        /* _start looks in xdi and xsi for these */
        mov     REG_XDI, ARG3
        mov     REG_XSI, ARG4
        /* Restore sp */
        mov     REG_XSP, REG_XBX
        jmp     REG_XAX
        END_FUNC(xfer_to_new_libdr)
#endif /* LINUX */
