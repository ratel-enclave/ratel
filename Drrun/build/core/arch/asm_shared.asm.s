# 1 "core/arch/asm_shared.asm"
# 1 "/source/SGX-DBI/Drrun//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "core/arch/asm_shared.asm"
# 37 "core/arch/asm_shared.asm"
# 1 "core/arch/asm_defines.asm" 1
# 42 "core/arch/asm_defines.asm"
# 1 "./extra/configure.h" 1
# 43 "core/arch/asm_defines.asm" 2
# 38 "core/arch/asm_shared.asm" 2
.text






        .align 0 
.global unexpected_return 
.hidden unexpected_return 
.type unexpected_return, %function
unexpected_return:
        
 mov rdx, 0x0 
 mov rsi, 0x0 
 mov rdi, 0x0 
 call internal_error 





        jmp unexpected_return
       


