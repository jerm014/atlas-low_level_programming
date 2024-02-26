global main
section .text
main:
mov rax, 1  ; write
mov rdi, 1
mov rsi, msg ; Hello, World
mov rdx, msglen
syscall
mov rax, 60 ; exit
mov rdi, 0
syscall
section .rodata
msg: db "Hello, World", 10
msglen: equ $ - msg
