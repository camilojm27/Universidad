	.file	"Laberinto.cpp"
	.text
	.section	.rodata
	.type	_ZStL19piecewise_construct, @object
	.size	_ZStL19piecewise_construct, 1
_ZStL19piecewise_construct:
	.zero	1
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.text
	.align 2
	.globl	_ZN9LaberintoC2Eiiiiid
	.type	_ZN9LaberintoC2Eiiiiid, @function
_ZN9LaberintoC2Eiiiiid:
.LFB1748:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$72, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -40(%rbp)
	movl	%esi, -44(%rbp)
	movl	%edx, -48(%rbp)
	movl	%ecx, -52(%rbp)
	movl	%r8d, -56(%rbp)
	movl	%r9d, -60(%rbp)
	movsd	%xmm0, -72(%rbp)
	movq	-40(%rbp), %rax
	movl	-44(%rbp), %edx
	movl	%edx, (%rax)
	movq	-40(%rbp), %rax
	movl	-48(%rbp), %edx
	movl	%edx, 4(%rax)
	movq	-40(%rbp), %rax
	movl	-52(%rbp), %edx
	movl	%edx, 8(%rax)
	movq	-40(%rbp), %rax
	movl	-56(%rbp), %edx
	movl	%edx, 12(%rax)
	movq	-40(%rbp), %rax
	movl	-60(%rbp), %edx
	movl	%edx, 16(%rax)
	movq	-40(%rbp), %rax
	movsd	-72(%rbp), %xmm0
	movsd	%xmm0, 24(%rax)
	movl	-44(%rbp), %eax
	cltq
	movabsq	$1152921504606846975, %rdx
	cmpq	%rdx, %rax
	ja	.L2
	salq	$3, %rax
	movq	%rax, %rdi
	call	_Znam@PLT
	movq	%rax, %rdx
	movq	-40(%rbp), %rax
	movq	%rdx, 32(%rax)
	movl	$0, -24(%rbp)
	jmp	.L9
.L2:
	call	__cxa_throw_bad_array_new_length@PLT
.L9:
	movl	-24(%rbp), %eax
	cmpl	-44(%rbp), %eax
	jge	.L4
	movl	-48(%rbp), %eax
	cltq
	movabsq	$2305843009213693950, %rdx
	cmpq	%rdx, %rax
	ja	.L5
	leaq	0(,%rax,4), %rdx
	movq	-40(%rbp), %rax
	movq	32(%rax), %rax
	movl	-24(%rbp), %ecx
	movslq	%ecx, %rcx
	salq	$3, %rcx
	leaq	(%rax,%rcx), %rbx
	movq	%rdx, %rdi
	call	_Znam@PLT
	movq	%rax, (%rbx)
	movl	$0, -20(%rbp)
	jmp	.L8
.L5:
	call	__cxa_throw_bad_array_new_length@PLT
.L8:
	movl	-20(%rbp), %eax
	cmpl	-48(%rbp), %eax
	jge	.L7
	movq	-40(%rbp), %rax
	movq	32(%rax), %rax
	movl	-24(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movl	-20(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	$1, (%rax)
	addl	$1, -20(%rbp)
	jmp	.L8
.L7:
	addl	$1, -24(%rbp)
	jmp	.L9
.L4:
	movq	-40(%rbp), %rax
	movl	$0, 40(%rax)
	call	rand@PLT
	cltd
	idivl	-44(%rbp)
	movq	-40(%rbp), %rax
	movl	%edx, 44(%rax)
	movq	-40(%rbp), %rax
	movq	32(%rax), %rdx
	movq	-40(%rbp), %rax
	movl	44(%rax), %eax
	cltq
	salq	$3, %rax
	addq	%rdx, %rax
	movq	(%rax), %rax
	movl	$5, (%rax)
	call	rand@PLT
	cltd
	idivl	-44(%rbp)
	movq	-40(%rbp), %rax
	movl	%edx, 48(%rax)
	movq	-40(%rbp), %rax
	movq	32(%rax), %rdx
	movq	-40(%rbp), %rax
	movl	48(%rax), %eax
	cltq
	salq	$3, %rax
	addq	%rdx, %rax
	movq	(%rax), %rax
	movl	-48(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	subq	$4, %rdx
	addq	%rdx, %rax
	movl	$6, (%rax)
	nop
	addq	$72, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1748:
	.size	_ZN9LaberintoC2Eiiiiid, .-_ZN9LaberintoC2Eiiiiid
	.globl	_ZN9LaberintoC1Eiiiiid
	.set	_ZN9LaberintoC1Eiiiiid,_ZN9LaberintoC2Eiiiiid
	.align 2
	.globl	_ZN9LaberintoD2Ev
	.type	_ZN9LaberintoD2Ev, @function
_ZN9LaberintoD2Ev:
.LFB1751:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movl	$0, -4(%rbp)
.L12:
	movq	-24(%rbp), %rax
	movl	(%rax), %eax
	cmpl	%eax, -4(%rbp)
	jge	.L11
	movq	-24(%rbp), %rax
	movq	32(%rax), %rax
	movl	-4(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movl	$4, %esi
	movq	%rax, %rdi
	call	_ZdlPvm@PLT
	addl	$1, -4(%rbp)
	jmp	.L12
.L11:
	movq	-24(%rbp), %rax
	movq	32(%rax), %rax
	testq	%rax, %rax
	je	.L14
	movq	-24(%rbp), %rax
	movq	32(%rax), %rax
	movq	%rax, %rdi
	call	_ZdaPv@PLT
.L14:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1751:
	.size	_ZN9LaberintoD2Ev, .-_ZN9LaberintoD2Ev
	.globl	_ZN9LaberintoD1Ev
	.set	_ZN9LaberintoD1Ev,_ZN9LaberintoD2Ev
	.align 2
	.globl	_ZN9Laberinto14fabricarCaminoEv
	.type	_ZN9Laberinto14fabricarCaminoEv, @function
_ZN9Laberinto14fabricarCaminoEv:
.LFB1753:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$64, %rsp
	movq	%rdi, -56(%rbp)
	movq	-56(%rbp), %rax
	movl	4(%rax), %eax
	leal	-1(%rax), %ecx
	movq	-56(%rbp), %rax
	movl	48(%rax), %edx
	movq	-56(%rbp), %rax
	movl	44(%rax), %esi
	movq	-56(%rbp), %rax
	movl	%ecx, %r8d
	movl	%edx, %ecx
	movl	$0, %edx
	movq	%rax, %rdi
	call	_ZN9Laberinto15trazaLineaRectaEiiii
	movl	%eax, %edx
	movq	-56(%rbp), %rax
	movl	40(%rax), %eax
	addl	%eax, %edx
	movq	-56(%rbp), %rax
	movl	%edx, 40(%rax)
	movl	$1, -36(%rbp)
.L20:
	movq	-56(%rbp), %rax
	movl	(%rax), %eax
	subl	$1, %eax
	cmpl	%eax, -36(%rbp)
	jge	.L16
	movl	$1, -32(%rbp)
.L19:
	movq	-56(%rbp), %rax
	movl	4(%rax), %eax
	subl	$1, %eax
	cmpl	%eax, -32(%rbp)
	jge	.L17
	movq	-56(%rbp), %rax
	movq	32(%rax), %rax
	movl	-36(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movl	-32(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	(%rax), %eax
	cmpl	$1, %eax
	jne	.L18
	call	rand@PLT
	movl	%eax, %edx
	movq	-56(%rbp), %rax
	movl	(%rax), %ecx
	movl	%edx, %eax
	cltd
	idivl	%ecx
	movl	%edx, -16(%rbp)
	movq	-56(%rbp), %rax
	movq	32(%rax), %rax
	movl	-16(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movl	-32(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	$0, (%rax)
	movq	-56(%rbp), %rax
	movq	32(%rax), %rax
	movl	-16(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movl	-32(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	subq	$4, %rdx
	addq	%rdx, %rax
	movl	$0, (%rax)
.L18:
	addl	$1, -32(%rbp)
	jmp	.L19
.L17:
	addl	$1, -36(%rbp)
	jmp	.L20
.L16:
	movl	$2, -12(%rbp)
	movl	$3, -8(%rbp)
	movl	$4, -4(%rbp)
	movl	$0, -28(%rbp)
.L22:
	movq	-56(%rbp), %rax
	movl	8(%rax), %eax
	cmpl	%eax, -28(%rbp)
	jg	.L21
	movl	-12(%rbp), %edx
	movq	-56(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	_ZN9Laberinto25ponerEnCasillaVaciaAlAzarEi
	addl	$1, -28(%rbp)
	jmp	.L22
.L21:
	movl	$0, -24(%rbp)
.L24:
	movq	-56(%rbp), %rax
	movl	12(%rax), %eax
	cmpl	%eax, -24(%rbp)
	jg	.L23
	movl	-8(%rbp), %edx
	movq	-56(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	_ZN9Laberinto25ponerEnCasillaVaciaAlAzarEi
	addl	$1, -24(%rbp)
	jmp	.L24
.L23:
	movl	$0, -20(%rbp)
.L26:
	movq	-56(%rbp), %rax
	movl	16(%rax), %eax
	cmpl	%eax, -20(%rbp)
	jg	.L25
	movl	-4(%rbp), %edx
	movq	-56(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	_ZN9Laberinto25ponerEnCasillaVaciaAlAzarEi
	addl	$1, -20(%rbp)
	jmp	.L26
.L25:
	movq	-56(%rbp), %rax
	movq	32(%rax), %rdx
	movq	-56(%rbp), %rax
	movl	44(%rax), %eax
	cltq
	salq	$3, %rax
	addq	%rdx, %rax
	movq	(%rax), %rax
	movl	$5, (%rax)
	movq	-56(%rbp), %rax
	movq	32(%rax), %rdx
	movq	-56(%rbp), %rax
	movl	48(%rax), %eax
	cltq
	salq	$3, %rax
	addq	%rdx, %rax
	movq	(%rax), %rdx
	movq	-56(%rbp), %rax
	movl	4(%rax), %eax
	cltq
	salq	$2, %rax
	subq	$4, %rax
	addq	%rdx, %rax
	movl	$6, (%rax)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1753:
	.size	_ZN9Laberinto14fabricarCaminoEv, .-_ZN9Laberinto14fabricarCaminoEv
	.align 2
	.globl	_ZN9Laberinto15trazaLineaRectaEiiii
	.type	_ZN9Laberinto15trazaLineaRectaEiiii, @function
_ZN9Laberinto15trazaLineaRectaEiiii:
.LFB1754:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -40(%rbp)
	movl	%esi, -44(%rbp)
	movl	%edx, -48(%rbp)
	movl	%ecx, -52(%rbp)
	movl	%r8d, -56(%rbp)
	movl	-52(%rbp), %eax
	subl	-44(%rbp), %eax
	cvtsi2ss	%eax, %xmm0
	movss	%xmm0, -16(%rbp)
	movl	-56(%rbp), %eax
	subl	-48(%rbp), %eax
	cvtsi2ss	%eax, %xmm0
	movss	%xmm0, -12(%rbp)
	movss	-16(%rbp), %xmm0
	divss	-12(%rbp), %xmm0
	movss	%xmm0, -8(%rbp)
	movl	$0, -24(%rbp)
	movl	$1, -20(%rbp)
.L29:
	movl	-20(%rbp), %eax
	cmpl	-56(%rbp), %eax
	jge	.L28
	cvtsi2ss	-20(%rbp), %xmm0
	mulss	-8(%rbp), %xmm0
	cvtsi2ss	-56(%rbp), %xmm1
	mulss	-8(%rbp), %xmm1
	subss	%xmm1, %xmm0
	movaps	%xmm0, %xmm1
	cvtsi2ss	-52(%rbp), %xmm0
	addss	%xmm1, %xmm0
	cvttss2si	%xmm0, %eax
	movl	%eax, -4(%rbp)
	movq	-40(%rbp), %rax
	movq	32(%rax), %rax
	movl	-4(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movl	-20(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	$0, (%rax)
	movq	-40(%rbp), %rax
	movq	32(%rax), %rax
	movl	-4(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movl	-20(%rbp), %edx
	movslq	%edx, %rdx
	addq	$1, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	$0, (%rax)
	movq	-40(%rbp), %rax
	movq	32(%rax), %rax
	movl	-4(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movl	-20(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	subq	$4, %rdx
	addq	%rdx, %rax
	movl	$0, (%rax)
	addl	$1, -24(%rbp)
	addl	$1, -20(%rbp)
	jmp	.L29
.L28:
	movl	-24(%rbp), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1754:
	.size	_ZN9Laberinto15trazaLineaRectaEiiii, .-_ZN9Laberinto15trazaLineaRectaEiiii
	.section	.rodata
.LC0:
	.string	"X"
.LC1:
	.string	" "
	.text
	.align 2
	.globl	_ZN9Laberinto8imprimirEv
	.type	_ZN9Laberinto8imprimirEv, @function
_ZN9Laberinto8imprimirEv:
.LFB1755:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movl	$0, -16(%rbp)
.L33:
	movq	-24(%rbp), %rax
	movl	4(%rax), %eax
	addl	$1, %eax
	cmpl	%eax, -16(%rbp)
	jg	.L32
	leaq	.LC0(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	addl	$1, -16(%rbp)
	jmp	.L33
.L32:
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rax
	movq	%rax, %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	movl	$0, -12(%rbp)
.L39:
	movq	-24(%rbp), %rax
	movl	(%rax), %eax
	cmpl	%eax, -12(%rbp)
	jge	.L34
	leaq	.LC0(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movl	$0, -8(%rbp)
.L38:
	movq	-24(%rbp), %rax
	movl	4(%rax), %eax
	cmpl	%eax, -8(%rbp)
	jge	.L35
	movq	-24(%rbp), %rax
	movq	32(%rax), %rax
	movl	-12(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movl	-8(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	(%rax), %eax
	testl	%eax, %eax
	jne	.L36
	leaq	.LC1(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	jmp	.L37
.L36:
	movq	-24(%rbp), %rax
	movq	32(%rax), %rax
	movl	-12(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movl	-8(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	%eax, %esi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZNSolsEi@PLT
.L37:
	addl	$1, -8(%rbp)
	jmp	.L38
.L35:
	leaq	.LC0(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rdx
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	addl	$1, -12(%rbp)
	jmp	.L39
.L34:
	movl	$0, -4(%rbp)
.L41:
	movq	-24(%rbp), %rax
	movl	4(%rax), %eax
	addl	$1, %eax
	cmpl	%eax, -4(%rbp)
	jg	.L40
	leaq	.LC0(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	addl	$1, -4(%rbp)
	jmp	.L41
.L40:
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rax
	movq	%rax, %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1755:
	.size	_ZN9Laberinto8imprimirEv, .-_ZN9Laberinto8imprimirEv
	.align 2
	.globl	_ZN9Laberinto19buscarCasillaAlAzarERiS0_i
	.type	_ZN9Laberinto19buscarCasillaAlAzarERiS0_i, @function
_ZN9Laberinto19buscarCasillaAlAzarERiS0_i:
.LFB1756:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movl	%ecx, -28(%rbp)
.L44:
	call	rand@PLT
	movl	%eax, %edx
	movq	-8(%rbp), %rax
	movl	(%rax), %ecx
	movl	%edx, %eax
	cltd
	idivl	%ecx
	movq	-16(%rbp), %rax
	movl	%edx, (%rax)
	call	rand@PLT
	movl	%eax, %edx
	movq	-8(%rbp), %rax
	movl	4(%rax), %ecx
	movl	%edx, %eax
	cltd
	idivl	%ecx
	movq	-24(%rbp), %rax
	movl	%edx, (%rax)
	movq	-8(%rbp), %rax
	movq	32(%rax), %rdx
	movq	-16(%rbp), %rax
	movl	(%rax), %eax
	cltq
	salq	$3, %rax
	addq	%rdx, %rax
	movq	(%rax), %rdx
	movq	-24(%rbp), %rax
	movl	(%rax), %eax
	cltq
	salq	$2, %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	cmpl	%eax, -28(%rbp)
	je	.L45
	jmp	.L44
.L45:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1756:
	.size	_ZN9Laberinto19buscarCasillaAlAzarERiS0_i, .-_ZN9Laberinto19buscarCasillaAlAzarERiS0_i
	.align 2
	.globl	_ZN9Laberinto25ponerEnCasillaVaciaAlAzarEi
	.type	_ZN9Laberinto25ponerEnCasillaVaciaAlAzarEi, @function
_ZN9Laberinto25ponerEnCasillaVaciaAlAzarEi:
.LFB1757:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movl	%esi, -28(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	-12(%rbp), %rdx
	leaq	-16(%rbp), %rsi
	movq	-24(%rbp), %rax
	movl	$1, %ecx
	movq	%rax, %rdi
	call	_ZN9Laberinto19buscarCasillaAlAzarERiS0_i
	movq	-24(%rbp), %rax
	movq	32(%rax), %rax
	movl	-16(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movl	-12(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rax, %rdx
	movl	-28(%rbp), %eax
	movl	%eax, (%rdx)
	nop
	movq	-8(%rbp), %rax
	xorq	%fs:40, %rax
	je	.L47
	call	__stack_chk_fail@PLT
.L47:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1757:
	.size	_ZN9Laberinto25ponerEnCasillaVaciaAlAzarEi, .-_ZN9Laberinto25ponerEnCasillaVaciaAlAzarEi
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB2246:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	cmpl	$1, -4(%rbp)
	jne	.L50
	cmpl	$65535, -8(%rbp)
	jne	.L50
	leaq	_ZStL8__ioinit(%rip), %rdi
	call	_ZNSt8ios_base4InitC1Ev@PLT
	leaq	__dso_handle(%rip), %rdx
	leaq	_ZStL8__ioinit(%rip), %rsi
	movq	_ZNSt8ios_base4InitD1Ev@GOTPCREL(%rip), %rax
	movq	%rax, %rdi
	call	__cxa_atexit@PLT
.L50:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2246:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I__ZN9LaberintoC2Eiiiiid, @function
_GLOBAL__sub_I__ZN9LaberintoC2Eiiiiid:
.LFB2247:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$65535, %esi
	movl	$1, %edi
	call	_Z41__static_initialization_and_destruction_0ii
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2247:
	.size	_GLOBAL__sub_I__ZN9LaberintoC2Eiiiiid, .-_GLOBAL__sub_I__ZN9LaberintoC2Eiiiiid
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I__ZN9LaberintoC2Eiiiiid
	.hidden	__dso_handle
	.ident	"GCC: (GNU) 8.2.1 20181127"
	.section	.note.GNU-stack,"",@progbits
