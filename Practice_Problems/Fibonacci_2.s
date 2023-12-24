	.file	"Fibonacci_2.c"
	.text
	.globl	_Fib_iterative
	.def	_Fib_iterative;	.scl	2;	.type	32;	.endef
_Fib_iterative:
LFB10:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$16, %esp
	cmpl	$1, 8(%ebp)
	je	L2
	cmpl	$2, 8(%ebp)
	jne	L3
L2:
	movl	$1, %eax
	jmp	L4
L3:
	cmpl	$0, 8(%ebp)
	jns	L5
	movl	$-1, %eax
	jmp	L4
L5:
	movl	$0, -4(%ebp)
	movl	$1, -8(%ebp)
	movl	$2, -16(%ebp)
	jmp	L6
L7:
	movl	-4(%ebp), %edx
	movl	-8(%ebp), %eax
	addl	%edx, %eax
	movl	%eax, -12(%ebp)
	movl	-8(%ebp), %eax
	movl	%eax, -4(%ebp)
	movl	-12(%ebp), %eax
	movl	%eax, -8(%ebp)
	addl	$1, -16(%ebp)
L6:
	movl	-16(%ebp), %eax
	cmpl	8(%ebp), %eax
	jle	L7
	movl	-12(%ebp), %eax
L4:
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE10:
	.globl	_Fib_recursive
	.def	_Fib_recursive;	.scl	2;	.type	32;	.endef
_Fib_recursive:
LFB11:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%ebx
	subl	$36, %esp
	.cfi_offset 3, -12
	cmpl	$1, 8(%ebp)
	je	L9
	cmpl	$2, 8(%ebp)
	jne	L10
L9:
	movl	$1, %eax
	jmp	L11
L10:
	cmpl	$0, 8(%ebp)
	jns	L12
	movl	$-1, %eax
	jmp	L11
L12:
	movl	8(%ebp), %eax
	subl	$1, %eax
	movl	%eax, (%esp)
	call	_Fib_recursive
	movl	%eax, %ebx
	movl	8(%ebp), %eax
	subl	$2, %eax
	movl	%eax, (%esp)
	call	_Fib_recursive
	addl	%ebx, %eax
	movl	%eax, -12(%ebp)
	movl	-12(%ebp), %eax
L11:
	addl	$36, %esp
	popl	%ebx
	.cfi_restore 3
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE11:
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "Enter a number: \0"
LC1:
	.ascii "%d\0"
	.align 4
LC2:
	.ascii "Invalid input: Please enter a positive integer.\0"
	.align 4
LC3:
	.ascii "Fibonacci number at position (Iterative) %d: %d\12\0"
	.align 4
LC4:
	.ascii "Fibonacci number at position (Recursive) %d: %d\12\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB12:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$32, %esp
	call	___main
	movl	$LC0, (%esp)
	call	_printf
	leal	28(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_scanf
	movl	28(%esp), %eax
	testl	%eax, %eax
	jns	L14
	movl	$LC2, (%esp)
	call	_puts
	movl	$1, %eax
	jmp	L16
L14:
	movl	28(%esp), %eax
	movl	%eax, (%esp)
	call	_Fib_iterative
	movl	%eax, %edx
	movl	28(%esp), %eax
	movl	%edx, 8(%esp)
	movl	%eax, 4(%esp)
	movl	$LC3, (%esp)
	call	_printf
	movl	28(%esp), %eax
	movl	%eax, (%esp)
	call	_Fib_recursive
	movl	%eax, %edx
	movl	28(%esp), %eax
	movl	%edx, 8(%esp)
	movl	%eax, 4(%esp)
	movl	$LC4, (%esp)
	call	_printf
	movl	$0, %eax
L16:
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE12:
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_printf;	.scl	2;	.type	32;	.endef
	.def	_scanf;	.scl	2;	.type	32;	.endef
	.def	_puts;	.scl	2;	.type	32;	.endef
