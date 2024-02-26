endbr64
push	rbp	#
mov	rbp, rsp	#,
sub	rsp, 16	#,
mov	DWORD PTR -12[rbp], 0	# i,
lea	rax, .LC0[rip]	# tmp89,
mov	QWORD PTR -8[rbp], rax	# s, tmp89
jmp	.L2	#
mov	eax, DWORD PTR -12[rbp]	# tmp90, i
movsx	rdx, eax	# _1, tmp90
mov	rax, QWORD PTR -8[rbp]	# tmp91, s
add	rax, rdx	# _2, _1
mov	edx, 1	#,
mov	rsi, rax	#, _2
mov	edi, 1	#,
call	write@PLT	#
add	DWORD PTR -12[rbp], 1	# i,
mov	eax, DWORD PTR -12[rbp]	# tmp92, i
movsx	rdx, eax	# _3, tmp92
mov	rax, QWORD PTR -8[rbp]
add	rax, rdx
movzx	eax, BYTE PTR [rax]
test	al, al
jne	.L3
mov	eax, 0
leave	
ret	
