# 1 "startup/x86.asm"
# 1 "/home/sgx/project/sgx/sgx-dbi/App//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "startup/x86.asm"
# 68 "startup/x86.asm"
# 1 "startup/asm_defines.asm" 1
# 42 "startup/asm_defines.asm"
# 1 "startup/configure_defines.h" 1
# 43 "startup/asm_defines.asm" 2
# 69 "startup/x86.asm" 2
.text






# 85 "startup/x86.asm"
        .align 0 
.global app_start 
.type app_start, %function
app_start:




        
 mov rdx, rsp 
 mov rsi, 0 
 mov rdi, 0 
 call init_app 


       
# 103 "startup/x86.asm"
        .align 0 
.global xfer_to_new_libdr 
.type xfer_to_new_libdr, %function
xfer_to_new_libdr:

        mov rax, rdi
        mov rbx, rsi

        mov rdi, rdx
        mov rsi, rcx

        mov rsp, rbx
        jmp rax
       
