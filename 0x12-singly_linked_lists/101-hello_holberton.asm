section .data
    hello db "Hello, Holberton", 0   ; null-terminated string

section .text
    global main
    extern printf

main:
    push rbp
    mov rbp, rsp

    lea rdi, [rel hello]    ; load address of string into rdi
    xor eax, eax            ; set the floating-point unit to 0
    call printf             ; call the printf function

    mov rsp, rbp
    pop rbp
    xor eax, eax            ; return 0
    ret
