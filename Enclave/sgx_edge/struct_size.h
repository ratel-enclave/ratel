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

#ifndef _ST_SIZE_H__
#define _ST_SIZE_H__

#define len_sigevent 64
#define len_siginfo 128
#define len_sockaddr 16
#define len_stat 144
#define len_statfs 120
#define len___sysctl_args 80
#define len_sysinfo 112
#define len_task_struct 6848
#define len_timespec 16
#define len_timeval 16
#define len_timex 208
#define len_timezone 8
#define len_ustat 32
#define len_utimbuf 16
#define len_timer_t 4
#define len_time_t 8
#define len_tms 32
#define len_u32 4
#define len_u64 8
#define len_uid_t 4
#define len_union_semun 8
#define len_unsigned 4
#define len_unsigned_char 1
#define len_unsigned_int 4
#define len_unsigned_long 8
#define len_aio_context_t 8
#define len_cap_user_data_t 8
#define len_cap_user_header_t 8
#define len_clockid_t 4
#define len_fd_set 128
#define len_gid_t 4
#define len_int 4
#define len_key_serial_t 4
#define len_key_t 4
#define len_loff_t 8
#define len_long 8
#define len_mode_t 4
#define len_mqd_t 4
#define len_off_t 8
#define len_pid_t 4
#define len_siginfo_t 128
#define len_kernel_sigset 8
#define len_size_t 8
#define len_stack_t 24
#define len_epoll_event 12
#define len_file_handle 8
#define len_getcpu_cache 128
#define len_iocb 64
#define len_io_event 32
#define len_iovec 16
#define len_itimerspec 32
#define len_itimerval 32
#define len_kexec_segment 32
#define len_linux_dirent 24
#define len_linux_dirent64 24
#define len_mmsghdr 64
#define len_mq_attr 32
#define len_msgbuf 16
#define len_msghdr 88
// #define len_msghdr 56
#define len_msqid_ds 104
#define len_utsname 390
#define len_perf_event_attr 112
#define len_pollfd 8
#define len_pt_regs 168
#define len_rlimit 16
#define len_rlimit64 16
#define len_robust_list_head 24
#define len_rusage 144
#define len_sched_param 4
#define len_sembuf 6
#define len_shmid_ds 88
#define len_kernel_sigaction 32
#define len_sigaction 152
#define len_sigevent 64
#define len_siginfo 128
#define len_sockaddr 16
#define len_stat 144
#define len_statfs 120
#define len___sysctl_args 80
#define len_sysinfo 112
#define len_task_struct 6848
#define len_timeval 16
#define len_timex 208
#define len_timezone 8
#define len_ustat 32
#define len_utimbuf 16
#define len_statfs 120
#define len_timer_t 4
#define len_u32 4
#define len_u64 8
#define len_uid_t 4
#define len_union_semun 8
#define len_unsigned 4
#define len_unsigned_char 1
#define len_unsigned_int 4
#define len_unsigned_long 8
#define len_sockaddr  16
#define len_socklen_t 4
#define len_child_stack 0x1000
#define MAX_EPOLL_EVENTS 10
#define len_ioctl 512
#define len_ioct_int 4
#define len_ioctl_wsize 8
#define len_ioct_long 8
#define len_termios 60
#define len_socketpair sizeof(int)*2
#define len_pipefd sizeof(int)*2
#define len_name 80
#define len_fd_set 128
#define len_cpu_set_t 128
#define len_rusage 144
#define len_sigset 128
#define len_gid 4

#define TCGETS		0x5401
#define TCSETS		0x5402
#define TCSETSW		0x5403
#define TCSETSF		0x5404
#define FIONREAD 	0x541B
#define TIOCGPGRP   0x540F
#define TIOCSPGRP	0x5410
#define TIOCGWINSZ	0x5413
#define TIOCSWINSZ	0x5414
#define FIONBIO		0x5421
#define FS_IOC_FIEMAP 0xC020660B

#define HCIGETDEVLIST 0x800448d2
#define HCIGETDEVINFO 0x800448d3

#define PAGE_SIZE 4096

#endif  //#define _ST_SIZE_H__