section .text
global asm_strlen

asm_strlen:
    xor rax, rax
    test rdi, rdi
    jz .done
.next_char:
    cmp byte [rdi + rax], 0
    je .done
    inc rax
    jmp .next_char
.done:
    ret