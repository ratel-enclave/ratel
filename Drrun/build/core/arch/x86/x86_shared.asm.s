# 1 "core/arch/x86/x86_shared.asm"
# 1 "/source/SGX-DBI/Drrun//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "core/arch/x86/x86_shared.asm"
# 43 "core/arch/x86/x86_shared.asm"
# 1 "core/arch/x86/../asm_defines.asm" 1
# 42 "core/arch/x86/../asm_defines.asm"
# 1 "./extra/configure.h" 1
# 43 "core/arch/x86/../asm_defines.asm" 2
# 44 "core/arch/x86/x86_shared.asm" 2
# 1 "core/arch/x86/x86_asm_defines.asm" 1
# 45 "core/arch/x86/x86_shared.asm" 2
.text




# 60 "core/arch/x86/x86_shared.asm"
        .align 0 
.global dynamorio_syscall 
.hidden dynamorio_syscall 
.type dynamorio_syscall, %function
dynamorio_syscall:

        push rbx


        mov rbx, rsi
        mov rax, rdi




        cmp rbx, 0
        je syscall_ready
        mov rdi, rdx
        cmp rbx, 1
        je syscall_ready
        mov rsi, rcx
        cmp rbx, 2
        je syscall_ready
        mov rdx, r8
        cmp rbx, 3
        je syscall_ready
        mov rcx, r9
        cmp rbx, 4
        je syscall_ready
        mov r8, [2*8 + rsp]
        cmp rbx, 5
        je syscall_ready
        mov r9, [3*8 + rsp]
syscall_ready:
        mov r10, rcx

        push r15 
 push r14 
 push r13 
 push r12 
 push r11 
 push r10 
 push r9 
 push r8 
 push rax 
 push rcx 
 push rdx 
 push rbx 
 
 push rsp 
 push rbp 
 push rsi 
 push rdi

        pop rdi 
 pop rsi 
 pop rbp 
 pop rbx 
 pop rbx 
 pop rdx 
 pop rcx 
 pop rax 
 pop r8 
 pop r9 
 pop r10 
 pop r11 
 pop r12 
 pop r13 
 pop r14 
 pop r15 


        syscall
# 187 "core/arch/x86/x86_shared.asm"
        pop rbx
# 196 "core/arch/x86/x86_shared.asm"
        ret
       


        .align 0 
.global sgx_syscall 
.hidden sgx_syscall 
.type sgx_syscall, %function
sgx_syscall:
        push r15 
 push r14 
 push r13 
 push r12 
 push r11 
 push r10 
 push r9 
 push r8 
 push rax 
 push rcx 
 push rdx 
 push rbx 
 
 push rsp 
 push rbp 
 push rsi 
 push rdi

        pop rdi 
 pop rsi 
 pop rbp 
 pop rbx 
 pop rbx 
 pop rdx 
 pop rcx 
 pop rax 
 pop r8 
 pop r9 
 pop r10 
 pop r11 
 pop r12 
 pop r13 
 pop r14 
 pop r15 

        syscall
        ret
       
# 382 "core/arch/x86/x86_shared.asm"
        .align 0 
.global dr_fpu_exception_init 
.hidden dr_fpu_exception_init 
.type dr_fpu_exception_init, %function
dr_fpu_exception_init:
        fninit
        push 0x1f80
        ldmxcsr dword ptr [rsp]
        pop rax
        ret
       






        .align 0 
.global get_mmx_val 
.hidden get_mmx_val 
.type get_mmx_val, %function
get_mmx_val:
        mov rax, rdi
        mov rcx, rsi
       
        cmp ecx, 0
        je get_mmx_0
        cmp ecx, 1
        je get_mmx_1
        cmp ecx, 2
        je get_mmx_2
        cmp ecx, 3
        je get_mmx_3
        cmp ecx, 4
        je get_mmx_4
        cmp ecx, 5
        je get_mmx_5
        cmp ecx, 6
        je get_mmx_6
        movq qword ptr [rax], mm7
        jmp get_mmx_done
get_mmx_6:
        movq qword ptr [rax], mm6
        jmp get_mmx_done
get_mmx_5:
        movq qword ptr [rax], mm5
        jmp get_mmx_done
get_mmx_4:
        movq qword ptr [rax], mm4
        jmp get_mmx_done
get_mmx_3:
        movq qword ptr [rax], mm3
        jmp get_mmx_done
get_mmx_2:
        movq qword ptr [rax], mm2
        jmp get_mmx_done
get_mmx_1:
        movq qword ptr [rax], mm1
        jmp get_mmx_done
get_mmx_0:
        movq qword ptr [rax], mm0
get_mmx_done:
        add rsp, 0
        ret
       
# 481 "core/arch/x86/x86_shared.asm"
        .align 0 
.global memcpy 
.hidden memcpy 
.type memcpy, %function
memcpy:
       
        mov rax, rdi

        mov rcx, rsi 
 and rcx, (8 - 1) 
 jz memcpy_aligned 
 neg rcx 
 add rcx, 8 
 cmp rdx, rcx 
 cmovb rcx, rdx 
 sub rdx, rcx 
memcpy_pre: 
 rep movsb 
memcpy_aligned: 
 
 mov rcx, rdx 
 shr rcx, 3 
memcpy_mid: 
 rep movsq 
 
 mov rcx, rdx 
 and rcx, (8 - 1) 
memcpy_post: 
 rep movsb
       
        ret
       



        .align 0 
.global memset 
.hidden memset 
.type memset, %function
memset:
       
        push rdi
        test esi, esi
        jnz make_val_word_size
        xor eax, eax
do_memset:

        mov rcx, rdi 
 and rcx, (8 - 1) 
 jz memset_aligned 
 neg rcx 
 add rcx, 8 
 cmp rdx, rcx 
 cmovb rcx, rdx 
 sub rdx, rcx 
memset_pre: 
 rep stosb 
memset_aligned: 
 
 mov rcx, rdx 
 shr rcx, 3 
memset_mid: 
 rep stosq 
 
 mov rcx, rdx 
 and rcx, (8 - 1) 
memset_post: 
 rep stosb
        pop rax
       
        ret


make_val_word_size:
        and esi, 0xff

        mov rax, 0x0101010101010101




        imul rax, rsi
        jmp do_memset
       
# 527 "core/arch/x86/x86_shared.asm"
.global __memcpy_chk
.hidden __memcpy_chk
.set __memcpy_chk,memcpy

.global __memset_chk
.hidden __memset_chk
.set __memset_chk,memset
# 795 "core/arch/x86/x86_shared.asm"

