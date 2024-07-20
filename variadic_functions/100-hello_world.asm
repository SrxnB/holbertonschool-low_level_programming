global main

section .text
main:
	push rbp
	mov rbp, rsp
	mov rdi, 0x1
	mov rsi, msg
	mov rdx, len
	mov rax, 0x1
	syscall
	xor rdi, rdi
	mov rax, 0x0
	pop rbp
	ret


section .data
	msg db 'Hello, World', 10
	len EQU $ - msg
