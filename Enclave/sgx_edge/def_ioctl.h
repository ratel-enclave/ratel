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

#ifndef _DEF_IOCTL_H__
#define _DEF_IOCTL_H__

#define TCGETS				0x5401
#define TCSETS				0x5402
#define TCSETSW				0x5403
#define TCSETSF				0x5404
#define TCGETA              0x5405
#define TCSETA              0x5406
#define TCSETAW             0x5407
#define TCSETAF             0x5408
#define TCSBRK      		0x5409
#define TCXONC              0x540A
#define TCFLSH              0x540B
#define TIOCEXCL        	0x540C
#define TIOCNXCL        	0x540D
#define TIOCSCTTY        	0x540E
#define TIOCGPGRP   		0x540F
#define TIOCSPGRP			0x5410
#define TIOCOUTQ        	0x5411
#define TIOCSTI             0x5412
#define TIOCGWINSZ			0x5413
#define TIOCSWINSZ			0x5414
#define TIOCMGET        	0x5415
#define TIOCMBIS        	0x5416
#define TIOCMBIC        	0x5417
#define TIOCMSET        	0x5418
#define TIOCGSOFTCAR        0x5419
#define TIOCSSOFTCAR        0x541A
#define FIONREAD 			0x541B
#define TIOCCONS        	0x541D
#define FIONBIO				0x5421
#define TIOCNOTTY       	0x5422
#define TIOCSETD        	0x5423
#define TIOCGETD        	0x5424
#define TCSBRKP           	0x5425

#define TIOCSBRK        	0x5427  /* BSD compatibility */
#define TIOCCBRK        	0x5428  /* BSD compatibility */
#define TIOCGSID        	0x5429  /* Return the session ID of FD */

#define TIOCGLCKTRMIOS    	0x5456
#define TIOCSLCKTRMIOS    	0x5457

#define RFCOMMCREATEDEV		0x400452c8
#define RFCOMMRELEASEDEV	0x400452c9
#define RFCOMMSTEALDLC		0x400452dc

#define TIOCSPTLCK			0x40045431
#define TIOCSIG 			0x40045436

#define TIOCGPTN			0x80045430
#define TIOCGDEV			0x80045432
#define TIOCGPKT			0x80045438

#define HCIGETDEVLIST 		0x800448d2
#define HCIGETDEVINFO 		0x800448d3
#define HCIINQUIRY 			0x800448f0

#define RFCOMMGETDEVLIST 	0x800452d2

#define FS_IOC_FIEMAP 		0xC020660B

#endif  //#define _DEF_IOCTL_H__