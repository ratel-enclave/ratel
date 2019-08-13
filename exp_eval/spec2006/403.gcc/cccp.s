	.file	"cccp.in"
	.data
	.align 4
	.type	lint,@object
	.size	lint,4
lint:
	.long	0
	.align 4
	.type	put_out_comments,@object
	.size	put_out_comments,4
put_out_comments:
	.long	0
	.align 4
	.type	no_trigraphs,@object
	.size	no_trigraphs,4
no_trigraphs:
	.long	0
	.align 4
	.type	print_deps,@object
	.size	print_deps,4
print_deps:
	.long	0
	.align 4
	.type	print_include_names,@object
	.size	print_include_names,4
print_include_names:
	.long	0
	.align 4
	.type	dump_macros,@object
	.size	dump_macros,4
dump_macros:
	.long	0
	.align 4
	.type	debug_output,@object
	.size	debug_output,4
debug_output:
	.long	0
	.align 4
	.type	inhibit_warnings,@object
	.size	inhibit_warnings,4
inhibit_warnings:
	.long	0
	.align 4
	.type	warn_import,@object
	.size	warn_import,4
warn_import:
	.long	1
	.align 4
	.type	done_initializing,@object
	.size	done_initializing,4
done_initializing:
	.long	0
	.align 4
	.type	indepth,@object
	.size	indepth,4
indepth:
	.long	-1
	.align 4
	.type	system_include_depth,@object
	.size	system_include_depth,4
system_include_depth:
	.long	0
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC0:
	.string	"/usr"
.LC1:
	.string	"/usr/local/bin"
.LC2:
	.string	"/usr/local/include"
.LC3:
	.string	"/usr/include"
	.data
	.align 32
	.type	include_defaults_array,@object
	.size	include_defaults_array,80
include_defaults_array:
	.quad	.LC0
	.long	1
	.zero	4
	.quad	.LC1
	.long	0
	.zero	4
	.quad	.LC2
	.long	0
	.zero	4
	.quad	.LC3
	.long	0
	.zero	4
	.quad	0
	.long	0
	.zero	4
	.align 8
	.type	include_defaults,@object
	.size	include_defaults,8
include_defaults:
	.quad	include_defaults_array
	.align 8
	.type	include,@object
	.size	include,8
include:
	.quad	0
	.align 8
	.type	first_bracket_include,@object
	.size	first_bracket_include,8
first_bracket_include:
	.quad	0
	.align 8
	.type	first_system_include,@object
	.size	first_system_include,8
first_system_include:
	.quad	0
	.align 8
	.type	last_include,@object
	.size	last_include,8
last_include:
	.quad	0
	.align 8
	.type	after_include,@object
	.size	after_include,8
after_include:
	.quad	0
	.align 8
	.type	last_after_include,@object
	.size	last_after_include,8
last_after_include:
	.quad	0
	.align 8
	.type	dont_repeat_files,@object
	.size	dont_repeat_files,8
dont_repeat_files:
	.quad	0
	.align 8
	.type	all_include_files,@object
	.size	all_include_files,8
all_include_files:
	.quad	0
	.align 8
	.type	stringlist_tailp,@object
	.size	stringlist_tailp,8
stringlist_tailp:
	.quad	stringlist
	.type	rest_extension,@object
	.size	rest_extension,4
rest_extension:
	.string	"..."
	.section	.rodata.str1.32,"aMS",@progbits,1
	.align 32
.LC4:
	.string	"-Dunix -D__osf__ -D__alpha -D__alpha__ -D_LONGLONG -DSYSTYPE_BSD  -D_SYSTYPE_BSD"
	.data
	.align 8
	.type	predefs,@object
	.size	predefs,8
predefs:
	.quad	.LC4
	.section	.rodata.str1.1
.LC5:
	.string	"define"
.LC6:
	.string	"if"
.LC7:
	.string	"ifdef"
.LC8:
	.string	"ifndef"
.LC9:
	.string	"endif"
.LC10:
	.string	"else"
.LC11:
	.string	"elif"
.LC12:
	.string	"line"
.LC13:
	.string	"include"
.LC14:
	.string	"include_next"
.LC15:
	.string	"import"
.LC16:
	.string	"undef"
.LC17:
	.string	"error"
.LC18:
	.string	"warning"
.LC19:
	.string	"pragma"
.LC20:
	.string	"ident"
.LC21:
	.string	"assert"
.LC22:
	.string	"unassert"
.LC23:
	.string	""
	.data
	.align 32
	.type	directive_table,@object
	.size	directive_table,608
directive_table:
	.long	6
	.zero	4
	.quad	do_define
	.quad	.LC5
	.long	1
	.byte	0
	.byte	1
	.zero	2
	.long	2
	.zero	4
	.quad	do_if
	.quad	.LC6
	.long	7
	.zero	4
	.long	5
	.zero	4
	.quad	do_xifdef
	.quad	.LC7
	.long	5
	.zero	4
	.long	6
	.zero	4
	.quad	do_xifdef
	.quad	.LC8
	.long	6
	.zero	4
	.long	5
	.zero	4
	.quad	do_endif
	.quad	.LC9
	.long	15
	.zero	4
	.long	4
	.zero	4
	.quad	do_else
	.quad	.LC10
	.long	8
	.zero	4
	.long	4
	.zero	4
	.quad	do_elif
	.quad	.LC11
	.long	10
	.zero	4
	.long	4
	.zero	4
	.quad	do_line
	.quad	.LC12
	.long	12
	.zero	4
	.long	7
	.zero	4
	.quad	do_include
	.quad	.LC13
	.long	2
	.byte	1
	.zero	3
	.long	12
	.zero	4
	.quad	do_include
	.quad	.LC14
	.long	3
	.byte	1
	.zero	3
	.long	6
	.zero	4
	.quad	do_include
	.quad	.LC15
	.long	4
	.byte	1
	.zero	3
	.long	5
	.zero	4
	.quad	do_undef
	.quad	.LC16
	.long	11
	.zero	4
	.long	5
	.zero	4
	.quad	do_error
	.quad	.LC17
	.long	13
	.zero	4
	.long	7
	.zero	4
	.quad	do_warning
	.quad	.LC18
	.long	14
	.zero	4
	.long	6
	.zero	4
	.quad	do_pragma
	.quad	.LC19
	.long	9
	.byte	0
	.byte	0
	.byte	1
	.zero	1
	.long	5
	.zero	4
	.quad	do_ident
	.quad	.LC20
	.long	17
	.byte	0
	.byte	0
	.byte	1
	.zero	1
	.long	6
	.zero	4
	.quad	do_assert
	.quad	.LC21
	.long	18
	.zero	4
	.long	8
	.zero	4
	.quad	do_unassert
	.quad	.LC22
	.long	19
	.zero	4
	.long	-1
	.zero	4
	.quad	0
	.quad	.LC23
	.long	35
	.zero	4
	.align 4
	.type	errors,@object
	.size	errors,4
errors:
	.long	0
	.align 8
	.type	if_stack,@object
	.size	if_stack,8
if_stack:
	.quad	0
	.section	.rodata.str1.1
.LC76:
	.string	"CPATH"
.LC82:
	.string	"SUNPRO_DEPENDENCIES"
.LC83:
	.string	"DEPENDENCIES_OUTPUT"
.LC85:
	.string	"-: "
.LC86:
	.string	".o : "
.LC87:
	.string	" "
.LC89:
	.string	"file does not end in newline"
.LC90:
	.string	"a"
.LC91:
	.string	"I/O error on output"
.LC39:
	.string	"w"
.LC84:
	.string	":"
.LC81:
	.string	"/include"
.LC80:
	.string	"OBJCPLUS_INCLUDE_PATH"
.LC79:
	.string	"OBJC_INCLUDE_PATH"
.LC77:
	.string	"C_INCLUDE_PATH"
.LC78:
	.string	"CPLUS_INCLUDE_PATH"
.LC69:
	.string	"-A"
	.section	.rodata.str1.32
	.align 32
.LC24:
	.string	"Usage: %s [switches] input output"
	.section	.rodata.str1.1
.LC25:
	.string	"-include"
.LC27:
	.string	"-imacros"
.LC29:
	.string	"-iprefix"
.LC31:
	.string	"-idirafter"
	.section	.rodata.str1.32
	.align 32
.LC32:
	.string	"Directory name missing after -idirafter option"
	.align 32
.LC30:
	.string	"Filename missing after -iprefix option"
	.align 32
.LC28:
	.string	"Filename missing after -imacros option"
	.align 32
.LC26:
	.string	"Filename missing after -include option"
	.section	.rodata.str1.1
.LC75:
	.string	"Invalid option `%s'"
.LC35:
	.string	"-"
	.section	.rodata.str1.32
	.align 32
.LC68:
	.string	"Assertion missing after -A option"
	.align 32
.LC67:
	.string	"Macro name missing after -D option"
	.align 32
.LC71:
	.string	"Directory name missing after -I option"
	.section	.rodata.str1.1
.LC61:
	.string	"-M"
.LC62:
	.string	"-MM"
.LC63:
	.string	"-MD"
.LC64:
	.string	"-MMD"
	.section	.rodata.str1.32
	.align 32
.LC70:
	.string	"Macro name missing after -U option"
	.section	.rodata.str1.1
.LC48:
	.string	"-Wtrigraphs"
.LC49:
	.string	"-Wno-trigraphs"
.LC50:
	.string	"-Wcomment"
.LC51:
	.string	"-Wno-comment"
.LC52:
	.string	"-Wcomments"
.LC53:
	.string	"-Wno-comments"
.LC54:
	.string	"-Wtraditional"
.LC55:
	.string	"-Wno-traditional"
.LC56:
	.string	"-Wimport"
.LC57:
	.string	"-Wno-import"
.LC58:
	.string	"-Werror"
.LC59:
	.string	"-Wno-error"
.LC60:
	.string	"-Wall"
.LC42:
	.string	"-lang-c"
.LC43:
	.string	"-lang-c++"
.LC44:
	.string	"-lang-objc"
.LC45:
	.string	"-lang-objc++"
.LC46:
	.string	"-lang-asm"
.LC47:
	.string	"-lint"
.LC72:
	.string	"-nostdinc"
.LC73:
	.string	"-nostdinc++"
.LC74:
	.string	"-noprecomp"
	.section	.rodata.str1.32
	.align 32
.LC34:
	.string	"Filename missing after -o option"
	.align 32
.LC33:
	.string	"Output filename specified twice"
	.section	.rodata.str1.1
.LC36:
	.string	"-pedantic"
.LC37:
	.string	"-pedantic-errors"
.LC38:
	.string	"-pcp"
.LC40:
	.string	"-traditional"
.LC41:
	.string	"-trigraphs"
.LC65:
	.string	"GNU CPP version %s"
.LC66:
	.string	"\n"
	.text
	.align 2
	.p2align 4,,15
.globl main
	.type	main,@function
main:
.LFB1:
	pushq	%rbp
.LCFI0:
	xorl	%eax, %eax
	movq	%rsp, %rbp
.LCFI1:
	pushq	%r15
.LCFI2:
	pushq	%r14
.LCFI3:
	movq	%rsi, %r14
	pushq	%r13
.LCFI4:
	movslq	%edi,%r13
	pushq	%r12
.LCFI5:
	leaq	-64(%rbp), %r12
	pushq	%rbx
.LCFI6:
	leaq	0(,%r13,8), %rbx
	subq	$200, %rsp
.LCFI7:
	movl	%edi, -84(%rbp)
	movq	%rbx, %rdi
	call	xmalloc
	movq	%rbx, %rdi
	movq	%rax, -104(%rbp)
	xorl	%eax, %eax
	call	xmalloc
	movq	%rbx, %rdi
	movq	%rax, %r15
	xorl	%eax, %eax
	call	xmalloc
	movq	%rbx, %rdi
	movq	%rax, -112(%rbp)
	xorl	%eax, %eax
	call	xmalloc
	movq	%rbx, %rdi
	movq	%rax, -120(%rbp)
	xorl	%eax, %eax
	call	xmalloc
	movq	%rbx, %rdi
	movq	%rax, -128(%rbp)
	xorl	%eax, %eax
	call	xmalloc
	movq	%r12, %rsi
	movl	$3, %edi
	movq	%rax, -136(%rbp)
	movl	$0, -176(%rbp)
	movl	$0, -172(%rbp)
	xorl	%eax, %eax
	movl	$0, -168(%rbp)
	movl	$0, -212(%rbp)
	movl	$0, -164(%rbp)
	movq	$0, -208(%rbp)
	movq	$0, -224(%rbp)
	movq	$0, -200(%rbp)
	call	getrlimit
	xorl	%eax, %eax
	movq	-56(%rbp), %rdx
	movl	$3, %edi
	movq	%r12, %rsi
	movq	%rdx, -64(%rbp)
	call	setrlimit
	xorl	%eax, %eax
	movq	(%r14), %rdx
	movq	$0, -232(%rbp)
	movq	$0, -184(%rbp)
	movl	$1, dollars_in_ident(%rip)
	movq	%rdx, progname(%rip)
	call	initialize_char_syntax
	movq	-104(%rbp), %rdi
	movq	-232(%rbp), %rax
	movq	%rbx, %r10
	shrq	$3, %r10
	movl	$1, dollars_in_ident(%rip)
	movl	$0, no_line_commands(%rip)
	cld
	movq	%r10, %rcx
	movl	$1, no_trigraphs(%rip)
	movl	$0, dump_macros(%rip)
	movl	$0, no_output(%rip)
	movl	$0, cplusplus(%rip)
	movl	$0, cplusplus_comments(%rip)
	rep
	stosq
	movq	%r15, %rdi
	movq	%r10, %rcx
	rep
	stosq
	xorl	%edx, %edx
	xorl	%esi, %esi
	xorl	%r8d, %r8d
	testq	%rdx, %rdx
	movq	%rcx, %r9
	je	.L5
	movl	$0, (%rdi)
	addq	$4, %rdi
.L5:
	testq	%rsi, %rsi
	je	.L6
	movw	$0, (%rdi)
	addq	$2, %rdi
.L6:
	testq	%r8, %r8
	je	.L7
	movb	$0, (%rdi)
.L7:
	movq	-112(%rbp), %rdi
	movq	-232(%rbp), %rax
	movq	%r10, %rcx
	cld
	testq	%rdx, %rdx
	rep
	stosq
	je	.L8
	movl	$0, (%rdi)
	addq	$4, %rdi
.L8:
	testq	%rsi, %rsi
	je	.L9
	movw	$0, (%rdi)
	addq	$2, %rdi
.L9:
	testq	%r8, %r8
	je	.L10
	movb	$0, (%rdi)
.L10:
	movq	-120(%rbp), %rdi
	movq	-232(%rbp), %rax
	movq	%r10, %rcx
	cld
	testq	%rdx, %rdx
	rep
	stosq
	je	.L11
	movl	$0, (%rdi)
	addq	$4, %rdi
.L11:
	testq	%rsi, %rsi
	je	.L12
	movw	$0, (%rdi)
	addq	$2, %rdi
.L12:
	testq	%r8, %r8
	je	.L13
	movb	$0, (%rdi)
.L13:
	movq	-128(%rbp), %rdi
	leaq	0(,%r13,8), %rcx
	movq	%r9, %rax
	shrq	$3, %rcx
	movl	$1, %r13d
	cld
	rep
	stosq
	cmpl	-84(%rbp), %r13d
	jge	.L375
.L170:
	movslq	%r13d,%rbx
	movq	(%r14,%rbx,8), %rdi
	movq	%rbx, %r12
	cmpb	$45, (%rdi)
	je	.L21
	cmpq	$0, -184(%rbp)
	jne	.L434
	cmpq	$0, -232(%rbp)
	je	.L24
	movq	%rdi, -184(%rbp)
.L19:
	incl	%r13d
	cmpl	-84(%rbp), %r13d
	jl	.L170
.L375:
	xorl	%eax, %eax
	movl	$.LC76, %edi
	call	getenv
	testq	%rax, %rax
	je	.L171
	movl	-172(%rbp), %r14d
	testl	%r14d, %r14d
	je	.L435
.L171:
	xorl	%eax, %eax
	call	initialize_char_syntax
	movl	$10, %edi
	xorl	%eax, %eax
	call	xmalloc
	movl	$.LC23, %esi
	movl	$10, outbuf+28(%rip)
	movq	%rax, outbuf+32(%rip)
	movq	%rax, outbuf+40(%rip)
	movl	indepth(%rip), %eax
	incl	%eax
	movl	%eax, indepth(%rip)
	cltq
	leaq	(%rax,%rax,4), %rcx
	salq	$4, %rcx
	cmpq	$0, -232(%rbp)
	cmovne	-232(%rbp), %rsi
	leaq	instack(%rcx), %r8
	movl	$0, instack+24(%rcx)
	movq	%r8, %rdi
	xorl	%eax, %eax
	movq	%r8, -96(%rbp)
	movq	%rsi, -232(%rbp)
	movq	%rsi, instack(%rcx)
	movq	%rsi, instack+8(%rcx)
	movl	$outbuf, %esi
	call	initialize_builtins
	movl	-176(%rbp), %edi
	testl	%edi, %edi
	je	.L436
.L173:
	movl	$1, %r13d
	cmpl	-84(%rbp), %r13d
	jge	.L390
.L238:
	movq	-112(%rbp), %r11
	movslq	%r13d,%rbx
	leaq	(%r11,%rbx,8), %r12
	cmpq	$0, (%r12)
	je	.L233
	movl	debug_output(%rip), %eax
	testl	%eax, %eax
	jne	.L437
.L234:
	movq	(%r12), %rdi
	movl	$outbuf, %esi
	xorl	%eax, %eax
	call	make_undef
.L233:
	leaq	(%r15,%rbx,8), %r12
	cmpq	$0, (%r12)
	je	.L235
	movl	debug_output(%rip), %eax
	testl	%eax, %eax
	jne	.L438
.L236:
	movq	(%r12), %rdi
	movl	$outbuf, %esi
	xorl	%eax, %eax
	call	make_definition
.L235:
	movq	-120(%rbp), %r10
	leaq	0(,%rbx,8), %rax
	movq	(%r10,%rax), %rsi
	testq	%rsi, %rsi
	jne	.L439
.L231:
	incl	%r13d
	cmpl	-84(%rbp), %r13d
	jl	.L238
.L390:
	movl	objc(%rip), %r15d
	movl	cplusplus(%rip), %eax
	xorl	%r12d, %r12d
	movl	$1, done_initializing(%rip)
	leal	(%rax,%r15,2), %eax
	cmpl	$1, %eax
	je	.L241
	cmpl	$1, %eax
	jle	.L440
	cmpl	$2, %eax
	je	.L242
	cmpl	$3, %eax
	je	.L243
.L239:
	testq	%r12, %r12
	jne	.L441
.L247:
	movl	-172(%rbp), %eax
	movq	$0, first_system_include(%rip)
	testl	%eax, %eax
	je	.L442
.L264:
	movq	after_include(%rip), %rdi
	movq	last_after_include(%rip), %rsi
	xorl	%eax, %eax
	call	append_include_chain
	cmpq	$0, first_system_include(%rip)
	jne	.L284
	movq	after_include(%rip), %rdx
	movq	%rdx, first_system_include(%rip)
.L284:
	incl	no_output(%rip)
	movl	$1, %r12d
	cmpl	-84(%rbp), %r12d
	jge	.L396
.L291:
	movq	-104(%rbp), %r15
	movslq	%r12d,%r9
	leaq	(%r15,%r9,8), %rbx
	movq	(%rbx), %rdi
	testq	%rdi, %rdi
	jne	.L443
.L287:
	incl	%r12d
	cmpl	-84(%rbp), %r12d
	jl	.L291
.L396:
	decl	no_output(%rip)
	cmpq	$0, -232(%rbp)
	je	.L293
	movq	-232(%rbp), %rbx
	cmpb	$0, (%rbx)
	jne	.L292
.L293:
	xorl	%r14d, %r14d
	movq	$.LC23, -232(%rbp)
.L294:
	movl	print_deps(%rip), %r12d
	testl	%r12d, %r12d
	jne	.L416
	xorl	%eax, %eax
	movl	$.LC82, %edi
	call	getenv
	testq	%rax, %rax
	jne	.L298
	xorl	%eax, %eax
	movl	$.LC83, %edi
	call	getenv
	testq	%rax, %rax
	je	.L411
.L298:
	xorl	%eax, %eax
	movl	$.LC83, %edi
	call	getenv
	testq	%rax, %rax
	movq	%rax, %r13
	je	.L444
	movl	$1, print_deps(%rip)
.L300:
	movzbl	(%r13), %eax
	movq	%r13, %rdx
	testb	%al, %al
	je	.L412
	cmpb	$32, %al
	je	.L413
.L305:
	incq	%rdx
	movzbl	(%rdx), %eax
	testb	%al, %al
	je	.L306
	cmpb	$32, %al
	jne	.L305
.L302:
	testb	%al, %al
	jne	.L445
.L306:
	movq	$0, -200(%rbp)
	movq	%r13, %r12
.L307:
	movq	%r12, -208(%rbp)
.L411:
	movl	print_deps(%rip), %eax
	testl	%eax, %eax
	je	.L308
.L416:
	xorl	%eax, %eax
	movl	$200, %edi
	movl	$200, deps_allocated_size(%rip)
	call	xmalloc
	movq	%rax, deps_buffer(%rip)
	movb	$0, (%rax)
	cmpq	$0, -200(%rbp)
	movl	$0, deps_size(%rip)
	movl	$0, deps_column(%rip)
	jne	.L446
	movq	-232(%rbp), %rdi
	movzbl	(%rdi), %eax
	movl	$.LC85, %edi
	testb	%al, %al
	je	.L431
	movq	-232(%rbp), %rbx
	movq	%rbx, %rdx
	incq	%rdx
.L317:
	cmpb	$47, %al
	cmove	%rdx, %rbx
	incq	%rdx
	movzbl	-1(%rdx), %eax
	testb	%al, %al
	jne	.L317
	movq	%rbx, %rdi
	call	strlen
	movslq	%eax,%rcx
	leaq	(%rcx,%rbx), %rdx
	cmpb	$46, -2(%rdx)
	je	.L447
.L318:
	leaq	(%rcx,%rbx), %rdx
	cmpb	$46, -2(%rdx)
	je	.L448
.L320:
	leaq	(%rcx,%rbx), %rdx
	cmpb	$46, -3(%rdx)
	je	.L449
.L322:
	leaq	(%rcx,%rbx), %rdx
	cmpb	$46, -2(%rdx)
	je	.L450
.L324:
	leaq	(%rcx,%rbx), %rdx
	cmpb	$46, -2(%rdx)
	je	.L451
.L326:
	leaq	(%rcx,%rbx), %rdx
	cmpb	$46, -2(%rdx)
	je	.L452
.L328:
	movq	%rbx, %rdi
	xorl	%esi, %esi
.L425:
	xorl	%eax, %eax
	call	deps_output
	movl	$.LC86, %edi
	xorl	%esi, %esi
	xorl	%eax, %eax
	call	deps_output
	movq	-232(%rbp), %rdi
	xorl	%esi, %esi
	xorl	%eax, %eax
	call	deps_output
	movl	$.LC87, %edi
.L431:
	xorl	%esi, %esi
	xorl	%eax, %eax
	call	deps_output
.L308:
	xorl	%eax, %eax
	movl	%r14d, %edi
	leaq	-68(%rbp), %rsi
	leaq	-80(%rbp), %rdx
	call	file_size_and_mode
	movq	-96(%rbp), %r8
	movq	-232(%rbp), %rcx
	movb	$0, 72(%r8)
	movl	$1, 24(%r8)
	movq	%rcx, (%r8)
	movl	-68(%rbp), %eax
	movq	%rcx, 8(%r8)
	andl	$61440, %eax
	cmpl	$32768, %eax
	je	.L330
	movl	$2002, %edi
	xorl	%eax, %eax
	movl	$2000, %r13d
	call	xmalloc
	xorl	%r12d, %r12d
	movq	-96(%rbp), %rsi
	movq	%rax, %rbx
	movq	%rax, 32(%rsi)
	.p2align 4,,7
.L331:
	movl	%r13d, %edx
	xorl	%eax, %eax
	movl	%r14d, %edi
	subl	%r12d, %edx
	movq	%rbx, %rsi
	call	read
	testl	%eax, %eax
	js	.L296
	testl	%eax, %eax
	je	.L332
	addl	%eax, %r12d
	cltq
	addq	%rax, %rbx
	cmpl	%r12d, %r13d
	jne	.L331
	movq	-96(%rbp), %rdx
	leal	(%r12,%r12), %r13d
	xorl	%eax, %eax
	leal	2(%r13), %esi
	movq	32(%rdx), %rdi
	call	xrealloc
	movslq	%r12d,%r10
	movq	-96(%rbp), %r11
	leaq	(%r10,%rax), %rbx
	movq	%rax, 32(%r11)
	jmp	.L331
.L332:
	movq	-96(%rbp), %r14
	movl	%r12d, 28(%r14)
.L337:
	movq	-96(%rbp), %r8
	movq	-96(%rbp), %rax
	movq	if_stack(%rip), %rsi
	movq	-96(%rbp), %r10
	movl	28(%r8), %edx
	movq	32(%rax), %rcx
	movq	%rsi, 56(%r8)
	testl	%edx, %edx
	movq	%rcx, %rdi
	movq	%rcx, 40(%r10)
	movl	%edx, %esi
	jle	.L346
	movslq	%edx,%r11
	cmpb	$10, -1(%r11,%rcx)
	je	.L346
.L345:
	movslq	%esi,%rcx
	movb	$10, (%rcx,%rdi)
	movl	$1, -212(%rbp)
	movq	-96(%rbp), %r13
	movl	28(%r13), %eax
	movq	32(%r13), %rcx
	incl	%eax
	movl	%eax, 28(%r13)
	movl	%eax, %edx
.L344:
	movslq	%edx,%r9
	movb	$0, (%r9,%rcx)
	movl	no_trigraphs(%rip), %edi
	testl	%edi, %edi
	je	.L453
.L347:
	cmpq	$0, -184(%rbp)
	je	.L350
	movq	-184(%rbp), %rax
	cmpb	$0, (%rax)
	jne	.L454
.L350:
	movq	-96(%rbp), %rdi
	xorl	%edx, %edx
	xorl	%ecx, %ecx
	xorl	%eax, %eax
	movl	$outbuf, %esi
	movl	$1, %r12d
	call	output_line_command
	cmpl	-84(%rbp), %r12d
	jge	.L402
	.p2align 4,,7
.L358:
	movq	-128(%rbp), %r15
	movslq	%r12d,%rdx
	leaq	(%r15,%rdx,8), %rbx
	movq	(%rbx), %rdi
	testq	%rdi, %rdi
	je	.L354
	xorl	%esi, %esi
	xorl	%eax, %eax
	movl	$438, %edx
	call	open
	testl	%eax, %eax
	js	.L415
	movq	(%rbx), %rsi
	movl	%eax, %edi
	movl	$outbuf, %edx
	xorl	%ecx, %ecx
	xorl	%r8d, %r8d
	xorl	%eax, %eax
	call	finclude
.L354:
	incl	%r12d
	cmpl	-84(%rbp), %r12d
	jl	.L358
.L402:
	xorl	%esi, %esi
	xorl	%eax, %eax
	movl	$outbuf, %edi
	call	rescan
	movl	pedantic(%rip), %ebx
	testl	%ebx, %ebx
	je	.L359
	movl	-212(%rbp), %r12d
	testl	%r12d, %r12d
	je	.L359
	movl	$.LC89, %edi
	xorl	%eax, %eax
	call	pedwarn
.L359:
	cmpl	$1, dump_macros(%rip)
	je	.L455
	movl	-164(%rbp), %r8d
	testl	%r8d, %r8d
	jne	.L361
	xorl	%eax, %eax
	call	write_output
.L361:
	movl	print_deps(%rip), %esi
	testl	%esi, %esi
	je	.L363
	movl	errors(%rip), %r10d
	testl	%r10d, %r10d
	jne	.L363
	cmpq	$0, -208(%rbp)
	je	.L365
	movq	-208(%rbp), %rdi
	xorl	%eax, %eax
	movl	$.LC90, %esi
	call	fopen
	testq	%rax, %rax
	movq	%rax, -224(%rbp)
	jne	.L365
	movq	-208(%rbp), %rdi
	xorl	%eax, %eax
	call	pfatal_with_name
.L365:
	movq	deps_buffer(%rip), %rdi
	movq	-224(%rbp), %rsi
	xorl	%eax, %eax
	call	fputs
	movq	-224(%rbp), %rcx
	movl	(%rcx), %eax
	decl	%eax
	testl	%eax, %eax
	movl	%eax, (%rcx)
	js	.L456
	movq	-224(%rbp), %r11
	movq	8(%r11), %r14
	movb	$10, (%r14)
	incq	8(%r11)
.L367:
	cmpq	$0, -208(%rbp)
	je	.L363
	movq	-224(%rbp), %rdi
	movzwl	28(%rdi), %eax
	andl	$32, %eax
	testw	%ax, %ax
	jne	.L370
	xorl	%eax, %eax
	call	fclose
	testl	%eax, %eax
	je	.L363
.L370:
	movl	$.LC91, %edi
	xorl	%eax, %eax
	call	fatal
.L363:
	movzwl	_iob+84(%rip), %eax
	andl	$32, %eax
	testw	%ax, %ax
	jne	.L372
	xorl	%eax, %eax
	movq	$_iob+56, %rdi
	call	fclose
	testl	%eax, %eax
	je	.L371
.L372:
	movl	$.LC91, %edi
	xorl	%eax, %eax
	call	fatal
.L371:
	movl	errors(%rip), %eax
	testl	%eax, %eax
	je	.L373
	movl	$33, %edi
	jmp	.L432
.L373:
	xorl	%edi, %edi
.L432:
	xorl	%eax, %eax
	call	exit
.L456:
	movl	$10, %edi
	movq	%rcx, %rsi
	xorl	%eax, %eax
	call	_flsbuf
	jmp	.L367
.L455:
	xorl	%eax, %eax
	call	dump_all_macros
	jmp	.L361
.L415:
	movq	(%rbx), %rdi
	xorl	%eax, %eax
	call	perror_with_name
	movl	$33, %eax
.L1:
	leaq	-40(%rbp), %rsp
	popq	%rbx
	popq	%r12
	popq	%r13
	popq	%r14
	popq	%r15
	leave
	ret
.L454:
	movq	%rax, %rdi
	movl	$.LC39, %esi
	movq	$_iob+56, %rdx
	xorl	%eax, %eax
	call	freopen
	testq	%rax, %rax
	jne	.L350
	movq	-184(%rbp), %rdi
	xorl	%eax, %eax
	call	pfatal_with_name
	jmp	.L350
.L453:
	movq	-96(%rbp), %rdi
	xorl	%eax, %eax
	call	trigraph_pcp
	jmp	.L347
.L346:
	cmpl	$1, %edx
	jle	.L344
	movslq	%edx,%r14
	cmpb	$92, -2(%r14,%rcx)
	jne	.L344
	jmp	.L345
.L296:
	movq	-232(%rbp), %rdi
	xorl	%eax, %eax
	call	pfatal_with_name
	xorl	%eax, %eax
	jmp	.L1
.L330:
	movq	-96(%rbp), %r9
	movq	-80(%rbp), %rdi
	xorl	%eax, %eax
	addq	$2, %rdi
	movl	$0, 28(%r9)
	call	xmalloc
	movq	-80(%rbp), %rdx
	movq	-96(%rbp), %r13
	testq	%rdx, %rdx
	movq	%rax, 32(%r13)
	jle	.L337
.L343:
	movq	-96(%rbp), %rbx
	xorl	%eax, %eax
	movl	%r14d, %edi
	movslq	28(%rbx),%rsi
	addq	32(%rbx), %rsi
	call	read
	cltq
	testq	%rax, %rax
	jle	.L457
	movq	-80(%rbp), %rdx
	movq	-96(%rbp), %r12
	subq	%rax, %rdx
	addl	%eax, 28(%r12)
	testq	%rdx, %rdx
	movq	%rdx, -80(%rbp)
	jg	.L343
	jmp	.L337
.L457:
	testq	%rax, %rax
	jne	.L296
	jmp	.L337
.L452:
	cmpb	$109, -1(%rdx)
	jne	.L328
.L433:
	leal	-2(%rax), %esi
.L430:
	movq	%rbx, %rdi
	jmp	.L425
.L451:
	cmpb	$83, -1(%rdx)
	jne	.L326
	jmp	.L433
.L450:
	cmpb	$115, -1(%rdx)
	jne	.L324
	jmp	.L433
.L449:
	cmpb	$99, -2(%rdx)
	jne	.L322
	cmpb	$99, -1(%rdx)
	jne	.L322
	leal	-3(%rax), %esi
	jmp	.L430
	.p2align 6,,7
.L448:
	cmpb	$67, -1(%rdx)
	jne	.L320
	jmp	.L433
.L447:
	cmpb	$99, -1(%rdx)
	jne	.L318
	jmp	.L433
	.p2align 6,,7
.L446:
	movq	-200(%rbp), %rdi
	xorl	%esi, %esi
	xorl	%eax, %eax
	call	deps_output
	movl	$.LC84, %edi
	jmp	.L431
.L445:
	movq	%rdx, %r15
	leaq	1(%rdx), %rax
	subq	%r13, %r15
	movq	%rax, -200(%rbp)
	xorl	%eax, %eax
	leaq	1(%r15), %rdi
	call	xmalloc
	movq	%r15, %rdx
	movq	%r13, %rdi
	movq	%rax, %r12
	movq	%rax, %rsi
	xorl	%eax, %eax
	call	bcopy
	movb	$0, (%r15,%r12)
	jmp	.L307
.L413:
	movl	$32, %eax
	jmp	.L302
.L412:
	movzbl	(%r13), %eax
	jmp	.L302
.L444:
	movl	$.LC82, %edi
	xorl	%eax, %eax
	call	getenv
	movl	$2, print_deps(%rip)
	movq	%rax, %r13
	jmp	.L300
.L292:
	movq	-232(%rbp), %rdi
	xorl	%esi, %esi
	xorl	%eax, %eax
	movl	$438, %edx
	call	open
	testl	%eax, %eax
	movl	%eax, %r14d
	jns	.L294
	jmp	.L296
	.p2align 6,,7
.L443:
	xorl	%esi, %esi
	xorl	%eax, %eax
	movl	$438, %edx
	call	open
	testl	%eax, %eax
	js	.L415
	movq	(%rbx), %rsi
	movl	%eax, %edi
	movl	$outbuf, %edx
	xorl	%ecx, %ecx
	xorl	%r8d, %r8d
	xorl	%eax, %eax
	call	finclude
	jmp	.L287
.L442:
	movq	include_prefix(%rip), %rdi
	xorl	%eax, %eax
	movq	%rdi, -160(%rbp)
	movl	$.LC1, %edi
	call	savestring
	movl	$0, -188(%rbp)
	movq	%rax, %rdi
	movq	%rax, %r15
	call	strlen
	movl	$9, %ecx
	movl	$.LC81, %edi
	leaq	-8(%rax,%r15), %rsi
	cld
	repz
	cmpsb
	je	.L458
.L265:
	cmpq	$0, -160(%rbp)
	je	.L410
	movl	-188(%rbp), %eax
	testl	%eax, %eax
	je	.L410
	movq	include_defaults(%rip), %rax
	cmpq	$0, (%rax)
	movq	%rax, %r12
	je	.L266
.L275:
	movl	8(%r12), %eax
	testl	%eax, %eax
	je	.L272
	movl	cplusplus(%rip), %eax
	testl	%eax, %eax
	je	.L269
	movl	-168(%rbp), %ecx
	testl	%ecx, %ecx
	jne	.L269
.L272:
	movslq	-188(%rbp),%r13
	movq	(%r12), %rdi
	movq	%r15, %rsi
	movq	%r13, %rdx
	call	strncmp
	testl	%eax, %eax
	je	.L459
.L269:
	addq	$16, %r12
	cmpq	$0, (%r12)
	jne	.L275
.L410:
	movq	include_defaults(%rip), %rax
.L266:
	cmpq	$0, (%rax)
	movq	%rax, %r12
	je	.L264
.L283:
	movl	8(%r12), %r14d
	testl	%r14d, %r14d
	je	.L281
	movl	cplusplus(%rip), %r13d
	testl	%r13d, %r13d
	je	.L278
	movl	-168(%rbp), %r10d
	testl	%r10d, %r10d
	jne	.L278
.L281:
	movl	$24, %edi
	xorl	%eax, %eax
	call	xmalloc
	movq	(%r12), %r11
	movq	$0, 16(%rax)
	movq	%rax, %rdi
	movq	%rax, %rsi
	movq	%rax, %rbx
	movq	%r11, 8(%rax)
	xorl	%eax, %eax
	call	append_include_chain
	cmpq	$0, first_system_include(%rip)
	jne	.L278
	movq	%rbx, first_system_include(%rip)
.L278:
	addq	$16, %r12
	cmpq	$0, (%r12)
	jne	.L283
	jmp	.L264
.L459:
	movl	$24, %edi
	xorl	%eax, %eax
	call	xmalloc
	movq	-160(%rbp), %rdi
	movq	%rax, %r14
	call	strlen
	movq	(%r12), %rdi
	movq	%rax, %rbx
	call	strlen
	leal	(%rax,%rbx), %esi
	xorl	%eax, %eax
	subl	-188(%rbp), %esi
	leal	1(%rsi), %edi
	call	xmalloc
	movq	-160(%rbp), %rsi
	movq	%rax, %rdi
	movq	%rax, %rbx
	call	strcpy
	movq	%rbx, %rdi
	addq	(%r12), %r13
	movq	%r13, %rsi
	call	strcat
	xorl	%eax, %eax
	movq	%r14, %rsi
	movq	%rbx, 8(%r14)
	movq	$0, 16(%r14)
	movq	%r14, %rdi
	call	append_include_chain
	cmpq	$0, first_system_include(%rip)
	jne	.L269
	movq	%r14, first_system_include(%rip)
	jmp	.L269
.L458:
	movq	%r15, %rdi
	call	strlen
	subl	$7, %eax
	movl	%eax, -188(%rbp)
	movslq	-188(%rbp),%r8
	movb	$0, (%r8,%r15)
	jmp	.L265
.L441:
	movq	%r12, %rdi
	call	strlen
	movq	%r12, %rcx
	movl	$1, %esi
	addq	$17, %rax
	andq	$-16, %rax
	subq	%rax, %rsp
	movzbl	(%r12), %eax
	movq	%rsp, %r14
	testb	%al, %al
	je	.L392
	movl	%eax, %edx
.L253:
	cmpb	$58, %dl
	leal	1(%rsi), %r9d
	cmove	%r9d, %esi
	incq	%rcx
	movzbl	(%rcx), %ebx
	testb	%bl, %bl
	movl	%ebx, %edx
	jne	.L253
.L392:
	movslq	%esi,%rdi
	xorl	%eax, %eax
	movq	%r12, %r13
	salq	$4, %rdi
	xorl	%r15d, %r15d
	addq	$80, %rdi
	call	xmalloc
	movq	%rax, include_defaults(%rip)
	.p2align 4,,7
.L263:
	movzbl	(%r13), %eax
	cmpb	$58, %al
	je	.L258
	testb	%al, %al
	je	.L258
	incq	%r13
	jmp	.L263
.L258:
	movq	%r13, %rbx
	movq	%r14, %rdi
	movq	%r12, %rsi
	subq	%r12, %rbx
	movq	%rbx, %rdx
	call	strncpy
	cmpq	%r12, %r13
	je	.L460
	movb	$0, (%rbx,%r14)
.L260:
	movslq	%r15d,%rbx
	xorl	%eax, %eax
	movq	%r14, %rdi
	salq	$4, %rbx
	incl	%r15d
	movq	%rbx, %r12
	addq	include_defaults(%rip), %r12
	call	savestring
	movq	%rax, (%r12)
	movl	cplusplus(%rip), %eax
	movq	include_defaults(%rip), %r12
	movl	%eax, 8(%r12,%rbx)
	cmpb	$0, (%r13)
	je	.L255
	leaq	1(%r13), %r12
	movq	%r12, %r13
	jmp	.L263
.L255:
	movslq	%r15d,%rax
	movl	$include_defaults_array, %edi
	movl	$80, %edx
	salq	$4, %rax
	leaq	(%rax,%r12), %rsi
	xorl	%eax, %eax
	call	bcopy
	jmp	.L247
.L460:
	movw	$46, (%r14)
	jmp	.L260
.L243:
	movl	$.LC80, %edi
.L424:
	xorl	%eax, %eax
	call	getenv
	movq	%rax, %r12
	jmp	.L239
.L242:
	movl	$.LC79, %edi
	jmp	.L424
.L440:
	testl	%eax, %eax
	jne	.L239
	movl	$.LC77, %edi
	jmp	.L424
.L241:
	movl	$.LC78, %edi
	jmp	.L424
	.p2align 6,,7
.L439:
	movq	-136(%rbp), %rdx
	movq	(%rdx,%rax), %rdi
	xorl	%eax, %eax
	call	make_assertion
	jmp	.L231
.L438:
	movq	-96(%rbp), %rdi
	movl	$outbuf, %esi
	xorl	%edx, %edx
	xorl	%ecx, %ecx
	xorl	%eax, %eax
	call	output_line_command
	jmp	.L236
.L437:
	movq	-96(%rbp), %rdi
	movl	$outbuf, %esi
	xorl	%edx, %edx
	xorl	%ecx, %ecx
	xorl	%eax, %eax
	call	output_line_command
	jmp	.L234
.L436:
	movq	predefs(%rip), %rdi
	call	strlen
	movq	predefs(%rip), %rsi
	addq	$16, %rax
	andq	$-16, %rax
	subq	%rax, %rsp
	movq	%rsp, %rdi
	movq	%rsp, %r12
	call	strcpy
	movzbl	(%rsp), %eax
	testb	%al, %al
	je	.L173
.L228:
	cmpb	$32, %al
	je	.L180
	cmpb	$9, %al
	je	.L180
.L380:
	cmpb	$45, %al
	jne	.L194
	cmpb	$68, 1(%r12)
	je	.L461
	cmpb	$45, %al
	jne	.L194
	cmpb	$65, 1(%r12)
	jne	.L194
	movzbl	2(%r12), %eax
	leaq	2(%r12), %rsi
	movq	%rsi, %rdx
	testb	%al, %al
	je	.L403
	cmpb	$32, %al
	je	.L404
	cmpb	$9, %al
	je	.L405
	cmpb	$40, %al
	je	.L406
.L199:
	incq	%rdx
	movzbl	(%rdx), %eax
	testb	%al, %al
	je	.L201
	cmpb	$32, %al
	je	.L196
	cmpb	$9, %al
	je	.L196
	cmpb	$40, %al
	jne	.L199
.L196:
	testb	%al, %al
	je	.L201
	cmpb	$32, %al
	je	.L204
	cmpb	$9, %al
	je	.L204
.L201:
	cmpb	$40, %al
	leaq	1(%rdx), %rcx
	jne	.L194
	movzbl	1(%rdx), %eax
	testb	%al, %al
	je	.L407
	cmpb	$32, %al
	je	.L210
	cmpb	$9, %al
	je	.L210
.L207:
	testb	%al, %al
	je	.L217
	cmpb	$32, %al
	je	.L212
	cmpb	$9, %al
	je	.L212
	cmpb	$41, %al
	je	.L212
.L215:
	incq	%rcx
	movzbl	(%rcx), %eax
	testb	%al, %al
	je	.L217
	cmpb	$32, %al
	je	.L212
	cmpb	$9, %al
	je	.L212
	cmpb	$41, %al
	jne	.L215
.L212:
	testb	%al, %al
	je	.L217
	cmpb	$32, %al
	je	.L220
	cmpb	$9, %al
	je	.L220
.L217:
	cmpb	$41, %al
	leaq	1(%rcx), %r12
	jne	.L194
	movzbl	1(%rcx), %eax
	testb	%al, %al
	je	.L222
	cmpb	$32, %al
	je	.L222
	cmpb	$9, %al
	jne	.L194
.L222:
	movsbl	(%r12),%r14d
	xorl	%eax, %eax
	movl	$.LC69, %edi
	movb	$0, (%r12)
	call	make_assertion
	cmpb	$32, %r14b
	movb	%r14b, (%r12)
	movl	%r14d, %eax
	je	.L226
	cmpb	$9, %r14b
	je	.L226
.L174:
	testb	%al, %al
	jne	.L228
	jmp	.L173
	.p2align 6,,7
.L226:
	incq	%r12
	movzbl	(%r12), %eax
	cmpb	$32, %al
	je	.L226
	cmpb	$9, %al
	je	.L226
	jmp	.L174
.L220:
	incq	%rcx
	movzbl	(%rcx), %eax
	testb	%al, %al
	je	.L217
	cmpb	$32, %al
	je	.L220
	cmpb	$9, %al
	je	.L220
	jmp	.L217
	.p2align 6,,7
.L210:
	incq	%rcx
	movzbl	(%rcx), %eax
	testb	%al, %al
	je	.L217
	cmpb	$32, %al
	je	.L210
	cmpb	$9, %al
	je	.L210
	jmp	.L207
.L407:
	movzbl	(%rcx), %eax
	jmp	.L207
	.p2align 6,,7
.L204:
	incq	%rdx
	movzbl	(%rdx), %eax
	testb	%al, %al
	je	.L201
	cmpb	$32, %al
	je	.L204
	cmpb	$9, %al
	je	.L204
	jmp	.L201
.L406:
	movl	$40, %eax
	jmp	.L196
.L405:
	movl	$9, %eax
	jmp	.L196
.L404:
	movl	$32, %eax
	jmp	.L196
.L403:
	movzbl	(%rsi), %eax
	jmp	.L196
.L461:
	leaq	2(%r12), %rbx
.L186:
	incq	%r12
	movzbl	(%r12), %eax
	testb	%al, %al
	movl	%eax, %edx
	je	.L187
	cmpb	$32, %al
	je	.L183
	cmpb	$9, %al
	jne	.L186
.L183:
	testb	%dl, %dl
	je	.L187
	movb	$0, (%r12)
	incq	%r12
.L187:
	movl	debug_output(%rip), %r13d
	testl	%r13d, %r13d
	jne	.L462
.L188:
	xorl	%eax, %eax
	movq	%rbx, %rdi
	movl	$outbuf, %esi
	call	make_definition
	movzbl	(%r12), %eax
	cmpb	$32, %al
	je	.L192
	cmpb	$9, %al
	jne	.L174
	.p2align 4,,7
.L192:
	incq	%r12
	movzbl	(%r12), %eax
	cmpb	$32, %al
	je	.L192
	cmpb	$9, %al
	je	.L192
	jmp	.L174
.L462:
	movq	-96(%rbp), %rdi
	movl	$outbuf, %esi
	xorl	%edx, %edx
	xorl	%ecx, %ecx
	xorl	%eax, %eax
	call	output_line_command
	jmp	.L188
	.p2align 6,,7
.L180:
	incq	%r12
	movzbl	(%r12), %eax
	cmpb	$32, %al
	je	.L180
	cmpb	$9, %al
	je	.L180
	jmp	.L380
.L435:
	movq	%rax, %rdi
	xorl	%eax, %eax
	call	path_include
	jmp	.L171
.L24:
	movq	%rdi, -232(%rbp)
	jmp	.L19
.L434:
	movq	(%r14), %rsi
	movl	$.LC24, %edi
.L423:
	xorl	%eax, %eax
	call	fatal
	jmp	.L19
.L21:
	movsbl	1(%rdi),%eax
	cmpl	$119, %eax
	ja	.L168
	mov	%eax, %ecx
	jmp	*.L169(,%rcx,8)
	.section	.rodata
	.align 8
	.align 4
.L169:
	.quad	.L164
	.quad	.L168
	.quad	.L168
	.quad	.L168
	.quad	.L168
	.quad	.L168
	.quad	.L168
	.quad	.L168
	.quad	.L168
	.quad	.L168
	.quad	.L168
	.quad	.L168
	.quad	.L168
	.quad	.L168
	.quad	.L168
	.quad	.L168
	.quad	.L168
	.quad	.L168
	.quad	.L168
	.quad	.L168
	.quad	.L168
	.quad	.L168
	.quad	.L168
	.quad	.L168
	.quad	.L168
	.quad	.L168
	.quad	.L168
	.quad	.L168
	.quad	.L168
	.quad	.L168
	.quad	.L168
	.quad	.L168
	.quad	.L168
	.quad	.L168
	.quad	.L168
	.quad	.L168
	.quad	.L149
	.quad	.L168
	.quad	.L168
	.quad	.L168
	.quad	.L168
	.quad	.L168
	.quad	.L168
	.quad	.L69
	.quad	.L168
	.quad	.L168
	.quad	.L168
	.quad	.L168
	.quad	.L168
	.quad	.L168
	.quad	.L168
	.quad	.L168
	.quad	.L168
	.quad	.L168
	.quad	.L168
	.quad	.L168
	.quad	.L168
	.quad	.L168
	.quad	.L168
	.quad	.L168
	.quad	.L168
	.quad	.L168
	.quad	.L168
	.quad	.L168
	.quad	.L168
	.quad	.L129
	.quad	.L168
	.quad	.L146
	.quad	.L124
	.quad	.L19
	.quad	.L168
	.quad	.L168
	.quad	.L123
	.quad	.L150
	.quad	.L168
	.quad	.L168
	.quad	.L168
	.quad	.L97
	.quad	.L168
	.quad	.L168
	.quad	.L148
	.quad	.L168
	.quad	.L168
	.quad	.L168
	.quad	.L168
	.quad	.L141
	.quad	.L168
	.quad	.L71
	.quad	.L168
	.quad	.L168
	.quad	.L168
	.quad	.L168
	.quad	.L168
	.quad	.L168
	.quad	.L168
	.quad	.L168
	.quad	.L168
	.quad	.L168
	.quad	.L168
	.quad	.L168
	.quad	.L108
	.quad	.L168
	.quad	.L168
	.quad	.L120
	.quad	.L168
	.quad	.L28
	.quad	.L168
	.quad	.L168
	.quad	.L62
	.quad	.L168
	.quad	.L157
	.quad	.L43
	.quad	.L47
	.quad	.L168
	.quad	.L168
	.quad	.L168
	.quad	.L57
	.quad	.L163
	.quad	.L122
	.quad	.L70
	.text
.L28:
	leaq	0(,%rbx,8), %r9
	movl	$.LC25, %edi
	movl	$9, %ecx
	leaq	(%r14,%r9), %r8
	movq	(%r8), %rsi
	cld
	repz
	cmpsb
	jne	.L29
	leal	1(%r13), %edx
	cmpl	-84(%rbp), %edx
	je	.L463
	movq	8(%r8), %rsi
	movq	-128(%rbp), %rbx
	movl	%edx, %r13d
	movslq	%edx,%r12
	movq	%rsi, (%rbx,%r9)
.L29:
	leaq	0(,%r12,8), %r9
	movl	$.LC27, %edi
	movl	$9, %ecx
	leaq	(%r14,%r9), %r8
	movq	(%r8), %rsi
	cld
	repz
	cmpsb
	jne	.L32
	leal	1(%r13), %edx
	cmpl	-84(%rbp), %edx
	je	.L464
	movq	8(%r8), %r10
	movq	-104(%rbp), %rdi
	movl	%edx, %r13d
	movslq	%edx,%r12
	movq	%r10, (%rdi,%r9)
.L32:
	movq	(%r14,%r12,8), %rsi
	movl	$.LC29, %edi
	movl	$9, %ecx
	cld
	repz
	cmpsb
	jne	.L35
	leal	1(%r13), %eax
	cmpl	-84(%rbp), %eax
	je	.L465
	movslq	%eax,%r12
	movl	%eax, %r13d
	movq	(%r14,%r12,8), %r8
	movq	%r8, include_prefix(%rip)
.L35:
	movq	(%r14,%r12,8), %rsi
	movl	$.LC31, %edi
	movl	$11, %ecx
	cld
	repz
	cmpsb
	jne	.L19
	xorl	%eax, %eax
	movl	$24, %edi
	call	xmalloc
	movq	%rax, %rbx
	movq	$0, (%rax)
	movq	$0, 16(%rax)
	leal	1(%r13), %eax
	cmpl	-84(%rbp), %eax
	je	.L466
	movslq	%eax,%r11
	movl	%eax, %r13d
	movq	(%r14,%r11,8), %r9
	movq	%r9, 8(%rbx)
.L40:
	cmpq	$0, after_include(%rip)
	jne	.L41
	movq	%rbx, after_include(%rip)
.L42:
	movq	%rbx, last_after_include(%rip)
	jmp	.L19
.L41:
	movq	last_after_include(%rip), %r12
	movq	%rbx, (%r12)
	jmp	.L42
.L466:
	movl	$.LC32, %edi
	xorl	%eax, %eax
	call	fatal
	jmp	.L40
.L465:
	movl	$.LC30, %edi
	xorl	%eax, %eax
	call	fatal
	jmp	.L35
.L464:
	movl	$.LC28, %edi
	xorl	%eax, %eax
	call	fatal
	jmp	.L32
.L463:
	movl	$.LC26, %edi
	xorl	%eax, %eax
	call	fatal
	jmp	.L29
	.p2align 6,,7
.L164:
	cmpq	$0, -232(%rbp)
	jne	.L165
	movq	$.LC23, -232(%rbp)
	jmp	.L19
.L165:
	cmpq	$0, -184(%rbp)
	jne	.L168
.L422:
	movq	$.LC23, -184(%rbp)
	jmp	.L19
	.p2align 6,,7
.L168:
	movl	$.LC75, %edi
	movq	(%r14,%rbx,8), %rsi
	jmp	.L423
.L149:
	movl	$0, dollars_in_ident(%rip)
	jmp	.L19
.L69:
	movl	$1, cplusplus(%rip)
	movl	$1, cplusplus_comments(%rip)
	jmp	.L19
.L129:
	movq	(%r14,%rbx,8), %r11
	cmpb	$0, 2(%r11)
	leaq	2(%r11), %rdx
	je	.L130
	movq	%rdx, -152(%rbp)
.L131:
	movq	-152(%rbp), %rsi
	movl	$.LC35, %edi
	movl	$2, %ecx
	cld
	repz
	cmpsb
	jne	.L134
	xorl	%edx, %edx
	movl	$1, -176(%rbp)
	cmpl	%r13d, %edx
	jge	.L19
.L139:
	movq	-120(%rbp), %r10
	movslq	%edx,%rbx
	incl	%edx
	salq	$3, %rbx
	cmpl	%r13d, %edx
	movq	$0, (%r10,%rbx)
	movq	$0, (%r15,%rbx)
	jl	.L139
	jmp	.L19
.L134:
	leaq	0(,%r12,8), %r8
	movq	-120(%rbp), %rcx
	movq	-136(%rbp), %rdi
	movq	-152(%rbp), %r12
	movq	%r12, (%rcx,%r8)
	movq	$.LC69, (%rdi,%r8)
	jmp	.L19
.L130:
	leal	1(%r13), %eax
	cmpl	-84(%rbp), %eax
	je	.L467
	movslq	%eax,%r12
	movl	%eax, %r13d
	movq	(%r14,%r12,8), %rdx
	movq	%rdx, -152(%rbp)
	jmp	.L131
.L467:
	movl	$.LC68, %edi
	xorl	%eax, %eax
	call	fatal
	jmp	.L131
	.p2align 6,,7
.L146:
	movl	$1, put_out_comments(%rip)
	jmp	.L19
.L124:
	movq	(%r14,%rbx,8), %rsi
	cmpb	$0, 2(%rsi)
	leaq	2(%rsi), %rdx
	je	.L125
	movq	%rdx, -144(%rbp)
.L126:
	movq	-144(%rbp), %r9
	movq	%r9, (%r15,%r12,8)
	jmp	.L19
.L125:
	leal	1(%r13), %eax
	cmpl	-84(%rbp), %eax
	je	.L468
	movslq	%eax,%r12
	movl	%eax, %r13d
	movq	(%r14,%r12,8), %rax
	movq	%rax, -144(%rbp)
	jmp	.L126
.L468:
	movl	$.LC67, %edi
	xorl	%eax, %eax
	call	fatal
	jmp	.L126
	.p2align 6,,7
.L123:
	movl	$1, print_include_names(%rip)
	jmp	.L19
.L150:
	movl	ignore_srcdir(%rip), %eax
	testl	%eax, %eax
	jne	.L151
	movq	(%r14,%rbx,8), %rsi
	movl	$.LC35, %edi
	movl	$2, %ecx
	cld
	addq	$2, %rsi
	repz
	cmpsb
	jne	.L151
	movl	$1, ignore_srcdir(%rip)
	movq	$0, first_bracket_include(%rip)
	jmp	.L19
.L151:
	xorl	%eax, %eax
	movl	$24, %edi
	call	xmalloc
	movq	(%r14,%rbx,8), %r10
	movq	$0, (%rax)
	movq	$0, 16(%rax)
	movq	%rax, %r12
	cmpb	$0, 2(%r10)
	leaq	2(%r10), %rdx
	je	.L153
	movq	%rdx, 8(%rax)
.L154:
	movq	%r12, %rdi
	movq	%r12, %rsi
	xorl	%eax, %eax
	call	append_include_chain
	jmp	.L19
.L153:
	leal	1(%r13), %eax
	cmpl	-84(%rbp), %eax
	je	.L469
	movslq	%eax,%rbx
	movl	%eax, %r13d
	movq	(%r14,%rbx,8), %rdx
	movq	%rdx, 8(%r12)
	jmp	.L154
.L469:
	movl	$.LC71, %edi
	xorl	%eax, %eax
	call	fatal
	jmp	.L154
	.p2align 6,,7
.L97:
	movq	(%r14,%rbx,8), %r8
	movl	$.LC61, %edi
	movl	$3, %ecx
	cld
	movq	%r8, %rsi
	repz
	cmpsb
	je	.L418
	movq	%r8, %rsi
	movl	$.LC62, %edi
	movl	$4, %ecx
	cld
	repz
	cmpsb
	je	.L417
	movq	%r8, %rsi
	movl	$.LC63, %edi
	movl	$4, %ecx
	cld
	repz
	cmpsb
	jne	.L102
.L418:
	movl	$2, print_deps(%rip)
.L99:
	movq	(%r14,%rbx,8), %rsi
	movl	$.LC63, %edi
	movl	$4, %ecx
	cld
	movq	%rsi, %r8
	repz
	cmpsb
	je	.L106
	movq	%r8, %rsi
	movl	$.LC64, %edi
	movl	$5, %ecx
	repz
	cmpsb
	jne	.L105
.L106:
	incl	%r13d
	movslq	%r13d,%r8
	movq	(%r14,%r8,8), %rdi
	movq	%rdi, -208(%rbp)
	jmp	.L19
.L105:
	movq	$_iob+56, -224(%rbp)
	movl	$1, -164(%rbp)
	jmp	.L19
.L102:
	movq	%r8, %rsi
	movl	$.LC64, %edi
	movl	$5, %ecx
	cld
	repz
	cmpsb
	jne	.L99
.L417:
	movl	$1, print_deps(%rip)
	jmp	.L99
.L148:
	movl	$1, no_line_commands(%rip)
	jmp	.L19
.L141:
	leaq	0(,%rbx,8), %rdx
	leaq	(%r14,%rdx), %rsi
	movq	(%rsi), %r9
	cmpb	$0, 2(%r9)
	leaq	2(%r9), %rcx
	je	.L142
	movq	-112(%rbp), %rsi
	movq	%rcx, (%rsi,%rdx)
	jmp	.L19
.L142:
	leal	1(%r13), %ecx
	cmpl	-84(%rbp), %ecx
	je	.L470
	movq	-112(%rbp), %r13
	movq	8(%rsi), %r11
	movq	%r11, (%r13,%rdx)
	movl	%ecx, %r13d
	jmp	.L19
.L470:
	movl	$.LC70, %edi
	xorl	%eax, %eax
	call	fatal
	jmp	.L19
	.p2align 6,,7
.L71:
	movq	(%r14,%rbx,8), %r8
	movl	$.LC48, %r9d
	movl	$12, %ecx
	cld
	movq	%r9, %rdi
	movq	%r8, %rsi
	repz
	cmpsb
	jne	.L72
	movl	$1, warn_trigraphs(%rip)
	jmp	.L19
.L72:
	movl	$.LC49, %r11d
	movq	%r8, %rsi
	movl	$15, %ecx
	cld
	movq	%r11, %rdi
	repz
	cmpsb
	jne	.L74
	movl	$0, warn_trigraphs(%rip)
	jmp	.L19
.L74:
	movl	$.LC50, %r12d
	movq	%r8, %rsi
	movl	$10, %ecx
	cld
	movq	%r12, %rdi
	repz
	cmpsb
	je	.L419
	movl	$.LC51, %edx
	movq	%r8, %rsi
	movl	$13, %ecx
	cld
	movq	%rdx, %rdi
	repz
	cmpsb
	je	.L420
	movl	$.LC52, %r10d
	movq	%r8, %rsi
	movl	$11, %ecx
	cld
	movq	%r10, %rdi
	repz
	cmpsb
	je	.L419
	movl	$.LC53, %r9d
	movq	%r8, %rsi
	movl	$14, %ecx
	cld
	movq	%r9, %rdi
	repz
	cmpsb
	jne	.L82
.L420:
	movl	$0, warn_comments(%rip)
	jmp	.L19
.L82:
	movl	$.LC54, %r11d
	movq	%r8, %rsi
	movl	$14, %ecx
	cld
	movq	%r11, %rdi
	repz
	cmpsb
	jne	.L84
	movl	$1, warn_stringify(%rip)
	jmp	.L19
.L84:
	movl	$.LC55, %r12d
	movq	%r8, %rsi
	movl	$17, %ecx
	cld
	movq	%r12, %rdi
	repz
	cmpsb
	jne	.L86
	movl	$0, warn_stringify(%rip)
	jmp	.L19
.L86:
	movl	$.LC56, %edx
	movq	%r8, %rsi
	movl	$9, %ecx
	cld
	movq	%rdx, %rdi
	repz
	cmpsb
	jne	.L88
	movl	$1, warn_import(%rip)
	jmp	.L19
.L88:
	movq	%r8, %rsi
	movl	$.LC57, %edi
	movl	$12, %ecx
	cld
	repz
	cmpsb
	jne	.L90
	movl	$0, warn_import(%rip)
	jmp	.L19
.L90:
	movq	(%r14,%rbx,8), %r8
	movl	$.LC58, %edi
	movl	$8, %ebx
	cld
	movq	%rbx, %rcx
	movq	%r8, %rsi
	repz
	cmpsb
	jne	.L92
	movl	$1, warnings_are_errors(%rip)
	jmp	.L19
.L92:
	movl	$11, %r10d
	movq	%r8, %rsi
	movl	$.LC59, %edi
	cld
	movq	%r10, %rcx
	repz
	cmpsb
	jne	.L94
	movl	$0, warnings_are_errors(%rip)
	jmp	.L19
.L94:
	movq	%r8, %rsi
	movl	$.LC60, %edi
	movl	$6, %ecx
	cld
	repz
	cmpsb
	jne	.L19
	movl	$1, warn_trigraphs(%rip)
.L419:
	movl	$1, warn_comments(%rip)
	jmp	.L19
.L108:
	movq	(%r14,%rbx,8), %rax
	movzbl	2(%rax), %edx
	addq	$3, %rax
	testb	%dl, %dl
	je	.L19
.L119:
	movsbl	%dl,%edx
	cmpl	$77, %edx
	je	.L113
	cmpl	$77, %edx
	jg	.L118
	cmpl	$68, %edx
	je	.L115
.L109:
	movzbl	(%rax), %edx
	incq	%rax
	testb	%dl, %dl
	jne	.L119
	jmp	.L19
.L115:
	movl	$3, dump_macros(%rip)
	jmp	.L109
.L118:
	cmpl	$78, %edx
	jne	.L109
	movl	$2, dump_macros(%rip)
	jmp	.L109
.L113:
	movl	$1, dump_macros(%rip)
	movl	$1, no_output(%rip)
	jmp	.L109
.L120:
	movq	(%r14,%rbx,8), %rcx
	cmpb	$51, 2(%rcx)
	jne	.L19
	movl	$1, debug_output(%rip)
	jmp	.L19
.L62:
	movq	(%r14,%rbx,8), %r8
	movl	$.LC42, %edi
	movl	$8, %ecx
	cld
	movq	%r8, %rsi
	repz
	cmpsb
	jne	.L63
	movl	$0, cplusplus(%rip)
	movl	$0, cplusplus_comments(%rip)
	movl	$0, objc(%rip)
.L63:
	movq	%r8, %rsi
	movl	$.LC43, %edi
	movl	$10, %ecx
	cld
	repz
	cmpsb
	jne	.L64
	movl	$1, cplusplus(%rip)
	movl	$1, cplusplus_comments(%rip)
	movl	$0, objc(%rip)
.L64:
	movq	%r8, %rsi
	movl	$.LC44, %edi
	movl	$11, %ecx
	cld
	repz
	cmpsb
	jne	.L65
	movl	$1, objc(%rip)
	movl	$0, cplusplus(%rip)
	movl	$1, cplusplus_comments(%rip)
.L65:
	movq	%r8, %rsi
	movl	$.LC45, %edi
	movl	$13, %ecx
	cld
	repz
	cmpsb
	jne	.L66
	movl	$1, objc(%rip)
	movl	$1, cplusplus(%rip)
	movl	$1, cplusplus_comments(%rip)
.L66:
	movq	%r8, %rsi
	movl	$.LC46, %edi
	movl	$10, %ecx
	cld
	repz
	cmpsb
	jne	.L67
	movl	$1, lang_asm(%rip)
.L67:
	movq	%r8, %rsi
	movl	$.LC47, %edi
	movl	$6, %ecx
	cld
	repz
	cmpsb
	jne	.L19
	movl	$1, lint(%rip)
	jmp	.L19
.L157:
	movq	(%r14,%rbx,8), %r8
	movl	$10, %r12d
	movl	$.LC72, %edi
	cld
	movq	%r12, %rcx
	movq	%r8, %rsi
	repz
	cmpsb
	jne	.L158
	movl	$1, -172(%rbp)
	jmp	.L19
.L158:
	movl	$12, %r9d
	movq	%r8, %rsi
	movl	$.LC73, %edi
	cld
	movq	%r9, %rcx
	repz
	cmpsb
	jne	.L160
	movl	$1, -168(%rbp)
	jmp	.L19
.L160:
	movq	%r8, %rsi
	movl	$.LC74, %edi
	movl	$11, %ecx
	cld
	repz
	cmpsb
	jne	.L19
.L421:
	movl	$1, no_precomp(%rip)
	jmp	.L19
.L43:
	cmpq	$0, -184(%rbp)
	jne	.L471
.L44:
	leal	1(%r13), %ebx
	cmpl	-84(%rbp), %ebx
	je	.L472
.L45:
	movslq	%ebx,%rcx
	movl	$.LC35, %edi
	movl	%ebx, %r13d
	movq	(%r14,%rcx,8), %rdx
	movl	$2, %ecx
	cld
	movq	%rdx, -184(%rbp)
	movq	%rdx, %rsi
	repz
	cmpsb
	jne	.L19
	jmp	.L422
.L472:
	movl	$.LC34, %edi
	xorl	%eax, %eax
	call	fatal
	jmp	.L45
.L471:
	movl	$.LC33, %edi
	xorl	%eax, %eax
	call	fatal
	jmp	.L44
.L47:
	movq	(%r14,%rbx,8), %r8
	movl	$.LC36, %edi
	movl	$10, %ebx
	cld
	movq	%rbx, %rcx
	movq	%r8, %rsi
	repz
	cmpsb
	jne	.L48
	movl	$1, pedantic(%rip)
	jmp	.L19
.L48:
	movl	$17, %r10d
	movq	%r8, %rsi
	movl	$.LC37, %edi
	cld
	movq	%r10, %rcx
	repz
	cmpsb
	jne	.L50
	movl	$1, pedantic(%rip)
	movl	$1, pedantic_errors(%rip)
	jmp	.L19
.L50:
	movq	%r8, %rsi
	movl	$.LC38, %edi
	movl	$5, %ecx
	cld
	repz
	cmpsb
	jne	.L19
	incl	%r13d
	movslq	%r13d,%rsi
	movq	(%r14,%rsi,8), %rbx
	cmpb	$45, (%rbx)
	je	.L473
.L55:
	movq	%rbx, %rdi
	movl	$.LC39, %esi
	xorl	%eax, %eax
	call	fopen
.L54:
	testq	%rax, %rax
	movq	%rax, pcp_outfile(%rip)
	jne	.L421
	movq	%rbx, %rdi
	xorl	%eax, %eax
	call	pfatal_with_name
	jmp	.L421
.L473:
	cmpb	$0, 1(%rbx)
	jne	.L55
	movswl	_iob+86(%rip),%edi
	xorl	%eax, %eax
	call	dup
	movl	$.LC39, %esi
	movl	%eax, %edi
	xorl	%eax, %eax
	call	fdopen
	jmp	.L54
	.p2align 6,,7
.L57:
	movq	(%r14,%rbx,8), %r8
	movl	$.LC40, %edi
	movl	$13, %ecx
	cld
	movq	%r8, %rsi
	repz
	cmpsb
	jne	.L58
	movl	dollars_in_ident(%rip), %eax
	movl	$1, traditional(%rip)
	testl	%eax, %eax
	jle	.L19
	movl	$1, dollars_in_ident(%rip)
	jmp	.L19
.L58:
	movq	%r8, %rsi
	movl	$.LC41, %edi
	movl	$11, %ecx
	cld
	repz
	cmpsb
	jne	.L19
	movl	$0, no_trigraphs(%rip)
	jmp	.L19
.L163:
	movl	$1, -176(%rbp)
	jmp	.L19
.L122:
	movq	version_string(%rip), %rdx
	movq	$_iob+112, %r12
	movl	$.LC65, %esi
	movq	%r12, %rdi
	xorl	%eax, %eax
	call	fprintf
	xorl	%eax, %eax
	movl	$.LC66, %esi
	movq	%r12, %rdi
	call	fprintf
	jmp	.L19
.L70:
	movl	$1, inhibit_warnings(%rip)
	jmp	.L19
.L194:
	xorl	%eax, %eax
	call	abort
.LFE1:
.Lfe1:
	.size	main,.Lfe1-main
	.align 2
	.p2align 4,,15
	.type	path_include,@function
path_include:
.LFB2:
	pushq	%r13
.LCFI8:
	movq	%rdi, %r13
	pushq	%r12
.LCFI9:
	pushq	%rbp
.LCFI10:
	pushq	%rbx
.LCFI11:
	subq	$8, %rsp
.LCFI12:
	movzbl	(%rdi), %eax
	testb	%al, %al
	je	.L474
	.p2align 4,,7
.L487:
	testb	%al, %al
	movq	%r13, %rbp
	je	.L480
	cmpb	$58, %al
	je	.L480
	.p2align 4,,7
.L483:
	incq	%rbp
	movzbl	(%rbp), %eax
	testb	%al, %al
	je	.L480
	cmpb	$58, %al
	jne	.L483
.L480:
	cmpq	%rbp, %r13
	je	.L489
	movq	%rbp, %rbx
	xorl	%eax, %eax
	subq	%r13, %rbx
	leaq	1(%rbx), %rdi
	call	xmalloc
	movq	%rbx, %rdx
	movq	%r13, %rdi
	movq	%rax, %r12
	movq	%rax, %rsi
	xorl	%eax, %eax
	call	bcopy
	movb	$0, (%rbx,%r12)
.L485:
	movl	$24, %edi
	xorl	%eax, %eax
	call	xmalloc
	movq	%rax, %rsi
	movq	$0, (%rax)
	movq	$0, 16(%rax)
	movq	%r12, 8(%rax)
	movq	%rax, %rdi
	xorl	%eax, %eax
	call	append_include_chain
	cmpb	$0, (%rbp)
	je	.L474
	movzbl	1(%rbp), %eax
	leaq	1(%rbp), %r13
	jmp	.L487
.L474:
	addq	$8, %rsp
	popq	%rbx
	popq	%rbp
	popq	%r12
	popq	%r13
	ret
.L489:
	movl	$2, %edi
	xorl	%eax, %eax
	call	xmalloc
	movq	%rax, %r12
	movb	$46, (%rax)
	movb	$0, 1(%rax)
	jmp	.L485
.LFE2:
.Lfe2:
	.size	path_include,.Lfe2-path_include
	.section	.rodata.str1.1
.LC92:
	.string	"%d trigraph(s) encountered"
	.text
	.align 2
	.p2align 4,,15
	.type	trigraph_pcp,@function
trigraph_pcp:
.LFB3:
	pushq	%r15
.LCFI13:
	pushq	%r14
.LCFI14:
	pushq	%r13
.LCFI15:
	movq	%rdi, %r13
	pushq	%r12
.LCFI16:
	pushq	%rbp
.LCFI17:
	pushq	%rbx
.LCFI18:
	subq	$8, %rsp
.LCFI19:
	movq	32(%rdi), %rbp
	movq	%rbp, %rbx
	movq	%rbp, %r12
	.p2align 4,,7
.L491:
	movq	%rbx, %rdi
	movl	$63, %esi
	call	index
	testq	%rax, %rax
	je	.L512
	cmpb	$63, 1(%rax)
	leaq	1(%rax), %rbx
	jne	.L491
	leaq	2(%rax), %rbx
	movzbl	2(%rax), %eax
	subl	$33, %eax
	cmpl	$30, %eax
	ja	.L491
	mov	%eax, %edx
	jmp	*.L507(,%rdx,8)
	.section	.rodata
	.align 8
	.align 4
.L507:
	.quad	.L502
	.quad	.L491
	.quad	.L491
	.quad	.L491
	.quad	.L491
	.quad	.L491
	.quad	.L500
	.quad	.L497
	.quad	.L499
	.quad	.L491
	.quad	.L491
	.quad	.L491
	.quad	.L504
	.quad	.L491
	.quad	.L498
	.quad	.L491
	.quad	.L491
	.quad	.L491
	.quad	.L491
	.quad	.L491
	.quad	.L491
	.quad	.L491
	.quad	.L491
	.quad	.L491
	.quad	.L491
	.quad	.L491
	.quad	.L491
	.quad	.L501
	.quad	.L496
	.quad	.L503
	.quad	.L505
	.text
.L496:
	movl	$35, %r15d
.L495:
	movl	%ebx, %edx
	subl	%ebp, %edx
	cmpq	%rbp, %r12
	leal	-2(%rdx), %r14d
	je	.L508
	testl	%r14d, %r14d
	jle	.L508
	movq	%rbp, %rdi
	movq	%r12, %rsi
	movl	%r14d, %edx
	xorl	%eax, %eax
	call	bcopy
.L508:
	movslq	%r14d,%rsi
	incq	%rbx
	leaq	(%rsi,%r12), %rcx
	movq	%rbx, %rbp
	movb	%r15b, (%rcx)
	leaq	1(%rcx), %r12
	jmp	.L491
.L502:
	movl	$124, %r15d
	jmp	.L495
.L500:
	movl	$94, %r15d
	jmp	.L495
.L497:
	movl	$91, %r15d
	jmp	.L495
.L499:
	movl	$93, %r15d
	jmp	.L495
.L504:
	movl	$126, %r15d
	jmp	.L495
.L498:
	movl	$92, %r15d
	jmp	.L495
.L501:
	movl	$123, %r15d
	jmp	.L495
.L503:
	movl	$125, %r15d
	jmp	.L495
.L505:
	decq	%rbx
	jmp	.L491
	.p2align 6,,7
.L512:
	movl	%ebp, %ebx
	movl	28(%r13), %ecx
	subl	32(%r13), %ebx
	movl	%ecx, %edx
	subl	%ebx, %edx
	cmpq	%rbp, %r12
	je	.L510
	testl	%edx, %edx
	jle	.L510
	movq	%rbp, %rdi
	movq	%r12, %rsi
	xorl	%eax, %eax
	call	bcopy
	movl	28(%r13), %ecx
.L510:
	movl	%ebp, %edi
	subl	%r12d, %edi
	subl	%edi, %ecx
	movl	%ecx, %eax
	movl	%ecx, 28(%r13)
	cltq
	addq	32(%r13), %rax
	movb	$0, (%rax)
	movl	warn_trigraphs(%rip), %eax
	testl	%eax, %eax
	je	.L490
	cmpq	%r12, %rbp
	je	.L490
	movq	%rbp, %rsi
	addq	$8, %rsp
	movl	$.LC92, %edi
	subq	%r12, %rsi
	xorl	%eax, %eax
	movq	%rsi, %rbp
	shrq	$63, %rbp
	popq	%rbx
	addq	%rbp, %rsi
	popq	%rbp
	popq	%r12
	popq	%r13
	popq	%r14
	popq	%r15
	sarq	$1, %rsi
	jmp	warning
.L490:
	addq	$8, %rsp
	popq	%rbx
	popq	%rbp
	popq	%r12
	popq	%r13
	popq	%r14
	popq	%r15
	ret
.LFE3:
.Lfe3:
	.size	trigraph_pcp,.Lfe3-trigraph_pcp
	.section	.rodata.str1.32
	.align 32
.LC102:
	.string	"unterminated `#%s' conditional"
	.align 32
.LC93:
	.string	"unterminated string or character constant"
	.align 32
.LC94:
	.string	"possible real start of unterminated constant"
	.section	.rodata.str1.1
.LC95:
	.string	"NOTREACHED"
.LC101:
	.string	"unterminated comment"
.LC100:
	.string	"`/*' within comment"
.LC99:
	.string	"#pragma lint "
.LC96:
	.string	"ARGSUSED"
.LC97:
	.string	"LINTLIBRARY"
.LC98:
	.string	"VARARGS"
	.text
	.align 2
	.p2align 4,,15
	.type	rescan,@function
rescan:
.LFB4:
	pushq	%r15
.LCFI20:
	movq	%rdi, %r15
	pushq	%r14
.LCFI21:
	pushq	%r13
.LCFI22:
	pushq	%r12
.LCFI23:
	pushq	%rbp
.LCFI24:
	pushq	%rbx
.LCFI25:
	subq	$120, %rsp
.LCFI26:
	movl	no_output(%rip), %eax
	movl	%esi, 100(%rsp)
	movl	$0, 48(%rsp)
	movl	$0, 52(%rsp)
	movl	$0, 56(%rsp)
	movl	$0, 60(%rsp)
	testl	%eax, %eax
	je	.L947
	movl	indepth(%rip), %edx
	movslq	%edx,%rbx
	leaq	(%rbx,%rbx,4), %rcx
	salq	$4, %rcx
	cmpq	$0, instack(%rcx)
	leaq	instack(%rcx), %rdi
	jne	.L987
.L514:
	movslq	%edx,%rbp
	movq	40(%r15), %rsi
	movslq	28(%r15),%rdi
	leaq	(%rbp,%rbp,4), %rax
	subq	32(%r15), %rsi
	salq	$4, %rax
	movslq	instack+28(%rax),%r14
	movq	instack+40(%rax), %rbp
	leaq	instack(%rax), %r13
	addq	instack+32(%rax), %r14
	subq	%rsi, %rdi
	movq	%r14, %rsi
	subq	%rbp, %rsi
	cmpq	%rsi, %rdi
	jle	.L988
.L517:
	movq	%rbp, 64(%rsp)
	movq	40(%r15), %r12
	cmpb	$0, (%r14)
	jne	.L821
.L963:
	movzbl	(%rbp), %ebx
.L907:
	movzbl	%bl, %eax
	movb	%bl, 99(%rsp)
	incq	%rbp
	movb	%bl, (%r12)
	incq	%r12
	cmpl	$122, %eax
	ja	.L546
	mov	%eax, %edx
	jmp	*.L906(,%rdx,8)
	.section	.rodata
	.align 8
	.align 4
.L906:
	.quad	.L831
	.quad	.L546
	.quad	.L546
	.quad	.L546
	.quad	.L546
	.quad	.L546
	.quad	.L546
	.quad	.L546
	.quad	.L546
	.quad	.L546
	.quad	.L814
	.quad	.L546
	.quad	.L546
	.quad	.L546
	.quad	.L546
	.quad	.L546
	.quad	.L546
	.quad	.L546
	.quad	.L546
	.quad	.L546
	.quad	.L546
	.quad	.L546
	.quad	.L546
	.quad	.L546
	.quad	.L546
	.quad	.L546
	.quad	.L546
	.quad	.L546
	.quad	.L546
	.quad	.L546
	.quad	.L546
	.quad	.L546
	.quad	.L546
	.quad	.L546
	.quad	.L581
	.quad	.L528
	.quad	.L724
	.quad	.L546
	.quad	.L546
	.quad	.L581
	.quad	.L546
	.quad	.L546
	.quad	.L546
	.quad	.L546
	.quad	.L546
	.quad	.L546
	.quad	.L546
	.quad	.L617
	.quad	.L736
	.quad	.L736
	.quad	.L736
	.quad	.L736
	.quad	.L736
	.quad	.L736
	.quad	.L736
	.quad	.L736
	.quad	.L736
	.quad	.L736
	.quad	.L546
	.quad	.L546
	.quad	.L546
	.quad	.L546
	.quad	.L546
	.quad	.L546
	.quad	.L546
	.quad	.L726
	.quad	.L726
	.quad	.L726
	.quad	.L726
	.quad	.L726
	.quad	.L726
	.quad	.L726
	.quad	.L726
	.quad	.L726
	.quad	.L726
	.quad	.L726
	.quad	.L726
	.quad	.L726
	.quad	.L726
	.quad	.L726
	.quad	.L726
	.quad	.L726
	.quad	.L726
	.quad	.L726
	.quad	.L726
	.quad	.L726
	.quad	.L726
	.quad	.L726
	.quad	.L726
	.quad	.L726
	.quad	.L726
	.quad	.L546
	.quad	.L523
	.quad	.L546
	.quad	.L546
	.quad	.L726
	.quad	.L546
	.quad	.L726
	.quad	.L726
	.quad	.L726
	.quad	.L726
	.quad	.L726
	.quad	.L726
	.quad	.L726
	.quad	.L726
	.quad	.L726
	.quad	.L726
	.quad	.L726
	.quad	.L726
	.quad	.L726
	.quad	.L726
	.quad	.L726
	.quad	.L726
	.quad	.L726
	.quad	.L726
	.quad	.L726
	.quad	.L726
	.quad	.L726
	.quad	.L726
	.quad	.L726
	.quad	.L726
	.quad	.L726
	.quad	.L726
	.text
.L523:
	cmpq	%r14, %rbp
	jae	.L963
	movzbl	(%rbp), %eax
	cmpb	$10, %al
	je	.L989
	movl	48(%rsp), %r8d
	testl	%r8d, %r8d
	jg	.L527
	movb	%al, (%r12)
.L984:
	incq	%rbp
.L983:
	incq	%r12
	jmp	.L963
	.p2align 6,,7
.L527:
	decq	%rbp
	decq	%r12
.L975:
	movl	$1, 56(%rsp)
.L546:
	movl	48(%rsp), %r9d
	testl	%r9d, %r9d
	jle	.L963
	cmpq	$0, pcp_outfile(%rip)
	je	.L846
	movl	pcp_inside_if(%rip), %r10d
	testl	%r10d, %r10d
	je	.L844
.L846:
	movl	52(%rsp), %eax
	andl	$2147483647, %eax
	movslq	%eax,%r8
	movl	%eax, %esi
	imulq	$-1160222811, %r8, %r8
	sarl	$31, %esi
	shrq	$32, %r8
	leal	(%r8,%rax), %edi
	sarl	$10, %edi
	subl	%esi, %edi
	imull	$1403, %edi, %edi
	subl	%edi, %eax
	cltq
	movq	hashtab(,%rax,8), %r10
	testq	%r10, %r10
	je	.L844
.L905:
	movl	48(%rsp), %edi
	cmpl	%edi, 28(%r10)
	je	.L990
.L857:
.L849:
	movq	(%r10), %r10
	testq	%r10, %r10
	jne	.L905
.L844:
	movl	$0, 52(%rsp)
	movl	$0, 48(%rsp)
	movl	$0, 56(%rsp)
	jmp	.L963
.L990:
	movslq	48(%rsp),%rdx
	movl	56(%rsp), %r11d
	movq	%r12, %rcx
	movq	32(%r10), %rsi
	subq	%rdx, %rcx
	testl	%r11d, %r11d
	leaq	-1(%rcx), %rbx
	cmove	%rbx, %rcx
.L853:
	movzbl	(%rcx), %r9d
	movzbl	(%rsi), %r8d
	incq	%rcx
	incq	%rsi
	cmpb	%r9b, %r8b
	jne	.L849
	decl	%edi
	jne	.L853
	movl	56(%rsp), %ecx
	testl	%ecx, %ecx
	jne	.L942
	leaq	-1(%rbp), %r8
	leaq	-1(%r12), %rbx
.L859:
	movl	%ebx, %ebp
	movl	48(%rsp), %eax
	movl	24(%r15), %r12d
	subl	32(%r15), %ebp
	movl	%r12d, 72(%rsp)
	subl	%eax, %ebp
	movl	24(%r10), %eax
	movl	%ebp, 76(%rsp)
	cmpl	$34, %eax
	je	.L966
	cmpl	$32, %eax
	jne	.L861
	movl	100(%rsp), %eax
	testl	%eax, %eax
	je	.L943
	movslq	28(%r15),%r10
	movq	40(%r15), %rsi
	movq	%r14, %rdi
	subq	32(%r15), %rsi
	subq	%r8, %rdi
	subq	%rsi, %r10
	leaq	2(%rdi), %rsi
	cmpq	%rsi, %r10
	jle	.L991
.L864:
	leaq	2(%rbx), %r12
	movq	%r8, %rbp
	movb	$10, (%rbx)
	movb	$45, 1(%rbx)
	jmp	.L844
.L991:
	movq	%r15, %rdi
	xorl	%eax, %eax
	movq	%r8, 24(%rsp)
	call	grow_outbuf
	movq	24(%rsp), %r8
	jmp	.L864
.L943:
	movq	%r8, %rbp
	movq	%rbx, %r12
	jmp	.L844
.L861:
	subl	$31, %eax
	cmpl	$1, %eax
	ja	.L865
	movq	40(%r10), %r11
	movl	(%r11), %eax
	testl	%eax, %eax
	js	.L865
	movq	%r8, %rbp
	movq	%rbx, %r12
	movl	24(%r13), %edi
	movl	72(%rsp), %esi
.L900:
	cmpq	%r14, %r8
	jne	.L869
	movq	48(%r13), %rax
	testq	%rax, %rax
	jne	.L992
.L869:
	movzbl	(%r8), %edx
	cmpb	$47, %dl
	jne	.L876
	leaq	1(%r8), %r9
	cmpq	%r14, %r9
	je	.L876
	cmpb	$42, 1(%r8)
	je	.L993
.L876:
	movzbl	%dl, %ecx 
	cmpb	$0, is_space(%rcx)
	je	.L867
	incq	%r8
	movb	%dl, (%rbx)
	incq	%rbx
	cmpb	$10, -1(%r8)
	jne	.L900
	cmpq	$0, 48(%r13)
	je	.L994
	movl	100(%rsp), %eax
	testl	%eax, %eax
	je	.L995
.L894:
	movzbl	(%r8), %eax
.L976:
	movb	%al, (%rbx)
	incq	%r8
	incq	%rbx
	jmp	.L900
.L995:
	movzbl	(%r8), %eax
	decq	%rbx
	cmpb	$45, %al
	je	.L996
	cmpb	$10, %al
	jne	.L976
	incl	24(%r15)
	jmp	.L894
.L996:
	incq	%r8
	jmp	.L900
.L994:
	incl	24(%r13)
	incl	24(%r15)
	jmp	.L900
.L867:
	cmpb	$40, %dl
	je	.L865
	movl	%edi, 24(%r13)
	movl	%esi, 24(%r15)
	jmp	.L844
.L865:
	movslq	76(%rsp),%r14
	movl	72(%rsp), %ebp
	movq	%r8, 40(%r13)
	addq	32(%r15), %r14
	movq	%r10, %rdi
	movq	%r15, %rsi
	xorl	%eax, %eax
	movl	%ebp, 24(%r15)
	movq	%r14, 40(%r15)
	call	macroexpand
	movslq	indepth(%rip),%r13
	movq	40(%r15), %r12
	movslq	28(%r15),%rbx
	subq	32(%r15), %r12
	leaq	(%r13,%r13,4), %r10
	salq	$4, %r10
	subq	%r12, %rbx
	movslq	instack+28(%r10),%r14
	movq	instack+40(%r10), %rbp
	leaq	instack(%r10), %r13
	addq	instack+32(%r10), %r14
	movq	%r14, %rsi
	subq	%rbp, %rsi
	cmpq	%rsi, %rbx
	jle	.L997
.L904:
	movq	40(%r15), %r12
	movq	$0, 64(%rsp)
	jmp	.L844
.L997:
	movq	%r15, %rdi
	xorl	%eax, %eax
	call	grow_outbuf
	jmp	.L904
.L993:
	movl	put_out_comments(%rip), %eax
	testl	%eax, %eax
	je	.L877
	movb	$47, (%rbx)
	movb	$42, 1(%rbx)
	addq	$2, %rbx
.L878:
	leaq	3(%r8), %r11
	leaq	2(%r8), %rcx
	cmpq	%r14, %r11
	je	.L881
	movzbl	2(%r8), %eax
	cmpb	$42, %al
	je	.L998
.L941:
	leaq	3(%r8), %rdx
.L887:
	cmpb	$10, %al
	je	.L999
.L884:
	movl	put_out_comments(%rip), %eax
	testl	%eax, %eax
	je	.L885
	movzbl	(%rcx), %r8d
	movq	%rdx, %rcx
	movb	%r8b, (%rbx)
	incq	%rbx
.L880:
	leaq	1(%rdx), %r9
	cmpq	%r14, %r9
	movq	%r9, %rdx
	je	.L881
	movzbl	(%rcx), %eax
	cmpb	$42, %al
	jne	.L887
	cmpb	$47, 1(%rcx)
	jne	.L887
.L881:
	movl	put_out_comments(%rip), %eax
	leaq	2(%rcx), %r8
	testl	%eax, %eax
	je	.L900
	movb	$42, (%rbx)
	movb	$47, 1(%rbx)
	addq	$2, %rbx
	jmp	.L900
.L885:
	movq	%rdx, %rcx
	jmp	.L880
.L999:
	incl	24(%r13)
	incl	24(%r15)
	jmp	.L884
.L998:
	cmpb	$47, 3(%r8)
	jne	.L941
	jmp	.L881
.L877:
	movl	traditional(%rip), %eax
	testl	%eax, %eax
	jne	.L878
	movb	$32, (%rbx)
	incq	%rbx
	jmp	.L878
.L992:
	movq	64(%r13), %rdi
	movl	$31, 24(%rax)
	testq	%rdi, %rdi
	jne	.L1000
.L871:
	movl	indepth(%rip), %eax
	movslq	28(%r15),%rdx
	decl	%eax
	movl	%eax, indepth(%rip)
	cltq
	leaq	(%rax,%rax,4), %r9
	salq	$4, %r9
	movslq	instack+28(%r9),%r14
	movq	instack+40(%r9), %r8
	leaq	instack(%r9), %r13
	addq	instack+32(%r9), %r14
	movq	%rbx, 40(%r15)
	subq	32(%r15), %rbx
	movq	%r14, %rsi
	subq	%rbx, %rdx
	subq	%r8, %rsi
	cmpq	%rsi, %rdx
	jle	.L1001
.L874:
	movq	40(%r15), %rbx
	movl	instack+24(%r9), %edi
	movq	%r8, %rbp
	movl	24(%r15), %esi
	movq	$0, 64(%rsp)
	movq	%rbx, %r12
	jmp	.L900
.L1001:
	movq	%r15, %rdi
	xorl	%eax, %eax
	movq	%r8, 24(%rsp)
	movq	%r9, 16(%rsp)
	movq	%r10, 8(%rsp)
	call	grow_outbuf
	movq	8(%rsp), %r10
	movq	16(%rsp), %r9
	movq	24(%rsp), %r8
	jmp	.L874
.L1000:
	xorl	%eax, %eax
	movq	%r10, 8(%rsp)
	call	free
	movq	8(%rsp), %r10
	jmp	.L871
.L966:
	movq	%r10, %rdi
	xorl	%eax, %eax
	movq	%r8, 24(%rsp)
	call	pcstring_used
	movq	24(%rsp), %r8
	jmp	.L943
.L942:
	movq	%rbp, %r8
	movq	%r12, %rbx
	jmp	.L859
.L989:
	incl	24(%r13)
	incq	%rbp
.L978:
	decq	%r12
	jmp	.L963
	.p2align 6,,7
.L831:
	cmpq	%r14, %rbp
	jbe	.L546
	movq	48(%r13), %rdx
	testq	%rdx, %rdx
	je	.L833
	movl	traditional(%rip), %eax
	decq	%r12
	decq	%rbp
	testl	%eax, %eax
	je	.L834
	movl	48(%rsp), %edi
	testl	%edi, %edi
	je	.L834
	movslq	indepth(%rip),%r11
	leaq	(%r11,%r11,4), %rbx
	salq	$4, %rbx
	movq	instack-40(%rbx), %r8
	movzbq	(%r8), %rsi
	cmpb	$0, is_idchar(%rsi)
	je	.L975
.L834:
	movq	64(%r13), %rdi
	movl	$31, 24(%rdx)
	testq	%rdi, %rdi
	jne	.L1002
.L836:
	movl	indepth(%rip), %ebp
	movslq	28(%r15),%rdx
	decl	%ebp
	movslq	%ebp,%r14
	movl	%ebp, indepth(%rip)
	leaq	(%r14,%r14,4), %rcx
	salq	$4, %rcx
	movslq	instack+28(%rcx),%r14
	movq	instack+40(%rcx), %rbp
	leaq	instack(%rcx), %r13
	addq	instack+32(%rcx), %r14
	movq	%r12, 40(%r15)
	subq	32(%r15), %r12
	movq	%r14, %rsi
	subq	%r12, %rdx
	subq	%rbp, %rsi
	cmpq	%rsi, %rdx
	jle	.L1003
.L839:
	movq	40(%r15), %r12
	movq	$0, 64(%rsp)
	jmp	.L963
.L1003:
	movq	%r15, %rdi
	xorl	%eax, %eax
	call	grow_outbuf
	jmp	.L839
.L1002:
	xorl	%eax, %eax
	call	free
	jmp	.L836
.L833:
	movl	48(%rsp), %eax
	testl	%eax, %eax
	jne	.L527
.L841:
	movq	if_stack(%rip), %rax
	movq	56(%r13), %rdx
	leaq	-1(%r12), %rsi
	leaq	-1(%rbp), %rdi
	movq	%rsi, 40(%r15)
	movq	%rdi, 40(%r13)
	cmpq	%rdx, %rax
	movq	%rax, %rcx
	je	.L908
	movl	32(%rax), %eax
	subl	$5, %eax
	cmpl	$5, %eax
	ja	.L909
	mov	%eax, %r15d
	jmp	*.L915(,%r15,8)
	.section	.rodata
	.align 8
	.align 4
.L915:
	.quad	.L911
	.quad	.L912
	.quad	.L910
	.quad	.L913
	.quad	.L909
	.quad	.L914
	.text
.L910:
	movq	$.LC6, 32(%rsp)
.L909:
	movl	16(%rcx), %edi
	xorl	%eax, %eax
	call	line_for_error
	movq	32(%rsp), %rdx
	movl	$.LC102, %esi
	movl	%eax, %edi
	xorl	%eax, %eax
	call	error_with_line
	movq	56(%r13), %rdx
.L908:
	movq	%rdx, if_stack(%rip)
	addq	$120, %rsp
	popq	%rbx
	popq	%rbp
	popq	%r12
	popq	%r13
	popq	%r14
	popq	%r15
	ret
.L911:
	movq	$.LC7, 32(%rsp)
	jmp	.L909
.L912:
	movq	$.LC8, 32(%rsp)
	jmp	.L909
.L913:
	movq	$.LC10, 32(%rsp)
	jmp	.L909
.L914:
	movq	$.LC11, 32(%rsp)
	jmp	.L909
	.p2align 6,,7
.L814:
	cmpq	$0, 48(%r13)
	jne	.L1004
	movl	48(%rsp), %eax
	testl	%eax, %eax
	jg	.L527
	incl	24(%r13)
	movq	%rbp, 64(%rsp)
	movl	24(%r15), %eax
	incl	%eax
	movl	%eax, 24(%r15)
	cmpl	%eax, 24(%r13)
	je	.L963
	xorl	%ecx, %ecx
	movq	%r12, 40(%r15)
	movq	%r15, %rsi
	xorl	%eax, %eax
	movq	%r13, %rdi
	movl	$1, %edx
	call	output_line_command
	movq	40(%r15), %rcx
	movslq	28(%r15),%r12
	movslq	28(%r13),%rsi
	movq	40(%r13), %r9
	subq	32(%r13), %r9
	movq	%rcx, %r10
	subq	32(%r15), %r10
	subq	%r9, %rsi
	subq	%r10, %r12
	cmpq	%rsi, %r12
	jle	.L1005
.L830:
	movq	%rcx, %r12
	jmp	.L963
.L1005:
	movq	%r15, %rdi
	xorl	%eax, %eax
	call	grow_outbuf
	movq	40(%r15), %rcx
	jmp	.L830
.L1004:
	movzbl	(%rbp), %edx
	cmpb	$45, %dl
	je	.L1006
	movzbl	%dl, %ecx 
	cmpb	$0, is_space(%rcx)
	je	.L821
	movl	48(%rsp), %eax
	testl	%eax, %eax
	jg	.L527
	movl	100(%rsp), %eax
	testl	%eax, %eax
	je	.L1007
	movb	%dl, (%r12)
	jmp	.L984
.L1007:
	incq	%rbp
	movb	%dl, -1(%r12)
	cmpb	$10, %dl
	jne	.L963
	incl	24(%r15)
	jmp	.L963
.L1006:
	xorl	%eax, %eax
	testl	%eax, %eax
	jne	.L817
	movl	$0, 48(%rsp)
	movl	$0, 52(%rsp)
.L817:
	movl	100(%rsp), %eax
	incq	%rbp
	testl	%eax, %eax
	je	.L978
	movb	$45, (%r12)
	jmp	.L983
	.p2align 6,,7
.L528:
	movl	assertions_flag(%rip), %r9d
	testl	%r9d, %r9d
	je	.L529
	movzbl	(%rbp), %ebx
	movzbl	%bl, %r10d 
	cmpb	$0, is_hor_space(%r10)
	je	.L919
.L534:
	incq	%rbp
	movzbl	(%rbp), %ebx
	movzbl	%bl, %r11d 
	cmpb	$0, is_hor_space(%r11)
	jne	.L534
.L919:
	movzbl	%bl, %ecx 
	cmpb	$0, is_idchar(%rcx)
	je	.L921
.L538:
	incq	%rbp
	movb	%bl, (%r12)
	incq	%r12
	movzbl	(%rbp), %ebx
	movzbl	%bl, %edi 
	cmpb	$0, is_idchar(%rdi)
	jne	.L538
.L921:
	movzbl	%bl, %esi 
	cmpb	$0, is_hor_space(%rsi)
	je	.L923
.L543:
	incq	%rbp
	movzbl	(%rbp), %ebx
	movzbl	%bl, %edx 
	cmpb	$0, is_hor_space(%rdx)
	jne	.L543
.L923:
	cmpb	$40, %bl
	je	.L1008
.L529:
	cmpq	$0, 48(%r13)
	jne	.L546
	cmpq	$0, (%r13)
	jne	.L547
	movq	64(%rsp), %r9
	cmpq	32(%r13), %r9
	je	.L546
.L547:
	movl	48(%rsp), %eax
	testl	%eax, %eax
	jne	.L527
	cmpq	$0, 64(%rsp)
	je	.L546
	movl	traditional(%rip), %r10d
	movq	64(%rsp), %rdx
	testl	%r10d, %r10d
	jne	.L550
	movl	cplusplus_comments(%rip), %esi
.L569:
	movzbl	(%rdx), %ecx
	movzbl	%cl, %r11d 
	cmpb	$0, is_hor_space(%r11)
	jne	.L1009
	cmpb	$92, %cl
	jne	.L556
	cmpb	$10, 1(%rdx)
	je	.L1010
.L556:
	cmpb	$47, %cl
	jne	.L558
	cmpb	$42, 1(%rdx)
	je	.L1011
.L558:
	testl	%esi, %esi
	je	.L550
	cmpb	$47, %cl
	jne	.L550
	cmpb	$47, 1(%rdx)
	jne	.L550
	addq	$2, %rdx
	.p2align 4,,7
.L565:
	movzbl	(%rdx), %ecx
	incq	%rdx
	cmpb	$10, %cl
	jne	.L565
	jmp	.L569
.L550:
	leaq	1(%rdx), %rdi
	cmpq	%rbp, %rdi
	jne	.L546
	leaq	-1(%r12), %rbx
	movq	%rbp, 40(%r13)
	xorl	%eax, %eax
	movq	%rbx, 40(%r15)
	movq	%r13, %rdi
	movq	%r15, %rsi
	call	handle_directive
	testl	%eax, %eax
	je	.L1012
	movl	no_output(%rip), %r14d
	testl	%r14d, %r14d
	je	.L949
	movl	indepth(%rip), %edx
	movslq	%edx,%rbx
	leaq	(%rbx,%rbx,4), %rbp
	salq	$4, %rbp
	cmpq	$0, instack(%rbp)
	leaq	instack(%rbp), %rdi
	jne	.L1013
.L576:
	movslq	%edx,%rcx
	movq	40(%r15), %r11
	movslq	28(%r15),%r10
	leaq	(%rcx,%rcx,4), %rax
	subq	32(%r15), %r11
	salq	$4, %rax
	movslq	instack+28(%rax),%r14
	movq	instack+40(%rax), %rbp
	leaq	instack(%rax), %r13
	addq	instack+32(%rax), %r14
	subq	%r11, %r10
	movq	%r14, %rsi
	subq	%rbp, %rsi
	cmpq	%rsi, %r10
.L986:
	jle	.L1014
.L579:
	movq	40(%r15), %r12
.L980:
	movq	%rbp, 64(%rsp)
	jmp	.L963
.L1014:
	movq	%r15, %rdi
	xorl	%eax, %eax
	call	grow_outbuf
	jmp	.L579
.L1013:
	movl	$1, %esi
	xorl	%eax, %eax
	call	skip_if_group
.L949:
	movl	indepth(%rip), %edx
	jmp	.L576
.L1012:
	movl	no_output(%rip), %r12d
	testl	%r12d, %r12d
	je	.L572
	movslq	indepth(%rip),%rdx
	leaq	(%rdx,%rdx,4), %rsi
	salq	$4, %rsi
	cmpq	$0, instack(%rsi)
	leaq	instack(%rsi), %rdi
	je	.L572
	movl	$1, %esi
	xorl	%eax, %eax
	call	skip_if_group
	movslq	indepth(%rip),%r13
	movslq	28(%r15),%r8
	leaq	(%r13,%r13,4), %r9
	salq	$4, %r9
	movslq	instack+28(%r9),%r14
	movq	instack+40(%r9), %rbp
	leaq	instack(%r9), %r13
	addq	instack+32(%r9), %r14
	movq	%rbx, 40(%r15)
	subq	32(%r15), %rbx
	movq	%r14, %rsi
	subq	%rbx, %r8
	subq	%rbp, %rsi
	cmpq	%rsi, %r8
	jmp	.L986
.L572:
	leaq	1(%rbx), %r12
	jmp	.L546
	.p2align 6,,7
.L1011:
	cmpb	$42, 2(%rdx)
	leaq	2(%rdx), %rax
	je	.L1015
.L562:
	incq	%rax
	cmpb	$42, (%rax)
	jne	.L562
	cmpb	$47, 1(%rax)
	jne	.L562
.L925:
	leaq	2(%rax), %rdx
	jmp	.L569
.L1015:
	cmpb	$47, 3(%rdx)
	jne	.L562
	jmp	.L925
	.p2align 6,,7
.L1010:
	addq	$2, %rdx
	jmp	.L569
.L1009:
	incq	%rdx
	jmp	.L569
.L1008:
	movq	%rbp, 40(%r13)
	movq	%r13, %rdi
	xorl	%eax, %eax
	call	skip_paren_group
	xorl	%eax, %eax
	movq	%r12, %rsi
	movq	40(%r13), %rdx
	movq	%rbp, %rdi
	subq	%rbp, %rdx
	call	bcopy
	movq	40(%r13), %rbx
	movq	%rbx, %r8
	subq	%rbp, %r8
	movq	%rbx, %rbp
	addq	%r8, %r12
	jmp	.L529
.L724:
	movl	dollars_in_ident(%rip), %edi
	testl	%edi, %edi
	je	.L546
.L726:
	movl	52(%rsp), %r11d
	incl	48(%rsp)
	movzbl	%bl, %edx
	leal	(%rdx,%r11,4), %ebx
	movl	%ebx, 52(%rsp)
	jmp	.L963
.L581:
	movl	48(%rsp), %edi
	testl	%edi, %edi
	jne	.L527
	movl	24(%r13), %esi
	movl	%esi, 92(%rsp)
	.p2align 4,,7
.L616:
	cmpq	%r14, %rbp
	jae	.L944
	movzbl	(%rbp), %r10d
	movb	%r10b, (%r12)
	movzbl	(%rbp), %eax
	incq	%r12
	incq	%rbp
	cmpl	$39, %eax
	je	.L611
	cmpl	$39, %eax
	jle	.L1017
	cmpl	$92, %eax
	jne	.L616
	cmpq	%r14, %rbp
	jae	.L944
	movzbl	(%rbp), %ebx
	cmpb	$10, %bl
	je	.L1019
	cmpb	$92, %bl
	je	.L1020
.L606:
	movb	%bl, (%r12)
	incq	%rbp
	incq	%r12
	jmp	.L616
	.p2align 6,,7
.L1020:
	cmpb	$10, 1(%rbp)
	jne	.L606
	.p2align 4,,7
.L609:
	addq	$2, %rbp
	incl	24(%r13)
	movzbl	(%rbp), %ebx
	cmpb	$92, %bl
	jne	.L606
	cmpb	$10, 1(%rbp)
	je	.L609
	jmp	.L606
.L1019:
	incl	24(%r13)
	decq	%r12
	incq	%rbp
	jmp	.L616
.L944:
	movq	48(%r13), %rax
	testq	%rax, %rax
	je	.L587
	movq	64(%r13), %rdi
	movl	$31, 24(%rax)
	testq	%rdi, %rdi
	jne	.L1021
.L589:
	movl	indepth(%rip), %r13d
	movslq	28(%r15),%rdx
	decl	%r13d
	movslq	%r13d,%r9
	movl	%r13d, indepth(%rip)
	leaq	(%r9,%r9,4), %r8
	salq	$4, %r8
	movslq	instack+28(%r8),%r14
	movq	instack+40(%r8), %rbp
	leaq	instack(%r8), %r13
	addq	instack+32(%r8), %r14
	movq	%r12, 40(%r15)
	subq	32(%r15), %r12
	movq	%r14, %rsi
	subq	%r12, %rdx
	subq	%rbp, %rsi
	cmpq	%rsi, %rdx
	jle	.L1022
.L592:
	movq	40(%r15), %r12
	movq	$0, 64(%rsp)
	jmp	.L616
.L1022:
	movq	%r15, %rdi
	xorl	%eax, %eax
	call	grow_outbuf
	jmp	.L592
.L1021:
	xorl	%eax, %eax
	call	free
	jmp	.L589
.L587:
	movl	traditional(%rip), %ebx
	testl	%ebx, %ebx
	jne	.L963
	movl	92(%rsp), %edi
	xorl	%eax, %eax
	call	line_for_error
	movl	$.LC93, %esi
	movl	%eax, %edi
	xorl	%eax, %eax
	call	error_with_line
	movl	60(%rsp), %edi
	movl	$.LC94, %esi
	xorl	%eax, %eax
	call	error_with_line
	movl	$0, 60(%rsp)
	jmp	.L963
	.p2align 6,,7
.L1017:
	cmpl	$10, %eax
	jne	.L1023
	movl	traditional(%rip), %r11d
	incl	24(%r13)
	incl	24(%r15)
	testl	%r11d, %r11d
	jne	.L980
	movl	pedantic(%rip), %eax
	testl	%eax, %eax
	jne	.L599
	cmpb	$39, 99(%rsp)
	je	.L599
	movl	60(%rsp), %eax
	testl	%eax, %eax
	jne	.L616
	movl	24(%r13), %eax
	decl	%eax
	movl	%eax, 60(%rsp)
	jmp	.L616
.L599:
	movl	92(%rsp), %edi
	xorl	%eax, %eax
	call	line_for_error
	movl	$.LC93, %esi
	movl	%eax, %edi
.L981:
	xorl	%eax, %eax
	call	error_with_line
	jmp	.L963
.L1023:
	cmpl	$34, %eax
	jne	.L616
.L611:
	movzbl	99(%rsp), %ecx
	cmpb	%cl, -1(%rbp)
	jne	.L616
	jmp	.L963
.L597:
.L617:
	movzbl	(%rbp), %ebx
	cmpb	$92, %bl
	je	.L1025
.L618:
	cmpb	$42, %bl
	je	.L640
	movl	cplusplus_comments(%rip), %eax
	testl	%eax, %eax
	je	.L546
	cmpb	$47, %bl
	jne	.L546
.L640:
	cmpq	$0, 48(%r13)
	jne	.L546
	movl	48(%rsp), %eax
	testl	%eax, %eax
	jne	.L527
	cmpb	$47, %bl
	je	.L1026
	movl	lint(%rip), %edx
	movl	24(%r13), %r8d
	incq	%rbp
	testl	%edx, %edx
	movl	%r8d, 44(%rsp)
	je	.L653
	movl	$0, 108(%rsp)
	movq	%rbp, %r10
	leaq	104(%rsp), %r9
	movzbq	(%rbp), %rbx
	cmpb	$0, is_hor_space(%rbx)
	je	.L932
.L658:
	incq	%r10
	movzbq	(%r10), %r11
	cmpb	$0, is_hor_space(%r11)
	jne	.L658
.L932:
	xorl	%r8d, %r8d
	cmpq	%r14, %r10
	jae	.L660
	movq	%r14, %r8
	subq	%r10, %r8
	cmpq	$9, %r8
	jle	.L661
	movl	$.LC95, %eax
	movl	$10, %ebx
	movq	%r10, %rsi
	cld
	movq	%rax, %rdi
	movq	%rbx, %rcx
	repz
	cmpsb
	jne	.L661
	movl	$.LC95, %r8d
	movl	$10, (%r9)
.L660:
	testq	%r8, %r8
	jne	.L1027
.L653:
	movl	put_out_comments(%rip), %r8d
	testl	%r8d, %r8d
	jne	.L679
	movl	traditional(%rip), %ebx
	testl	%ebx, %ebx
	je	.L680
	decq	%r12
.L682:
	cmpq	%r14, %rbp
	movq	%rbp, 80(%rsp)
	jae	.L945
.L720:
	movzbl	(%rbp), %eax
	incq	%rbp
	cmpl	$42, %eax
	je	.L689
	cmpl	$42, %eax
	jg	.L719
	cmpl	$10, %eax
	je	.L715
.L683:
	cmpq	%r14, %rbp
	jb	.L720
.L945:
	movl	44(%rsp), %edi
	xorl	%eax, %eax
	call	line_for_error
	movl	$.LC101, %esi
	movl	%eax, %edi
	jmp	.L981
.L715:
	movl	put_out_comments(%rip), %r9d
	incl	24(%r13)
	testl	%r9d, %r9d
	jne	.L716
	movb	$10, (%r12)
	incq	%r12
.L716:
	incl	24(%r15)
	jmp	.L683
.L719:
	cmpl	$47, %eax
	jne	.L683
	movl	warn_comments(%rip), %r11d
	testl	%r11d, %r11d
	je	.L683
	cmpq	%r14, %rbp
	jae	.L945
	cmpb	$42, (%rbp)
	jne	.L683
	movl	$.LC100, %edi
	xorl	%eax, %eax
	call	warning
	jmp	.L683
.L689:
	cmpb	$92, (%rbp)
	je	.L1028
.L690:
	cmpq	%r14, %rbp
	jae	.L945
	cmpb	$47, (%rbp)
	jne	.L683
.L714:
	cmpq	%r14, %rbp
	jae	.L945
	movl	put_out_comments(%rip), %r10d
	incq	%rbp
	testl	%r10d, %r10d
	je	.L963
	movq	%rbp, %rbx
	movq	80(%rsp), %rdi
	subq	80(%rsp), %rbx
.L982:
	movq	%r12, %rsi
	movq	%rbx, %rdx
	xorl	%eax, %eax
	call	bcopy
	addq	%rbx, %r12
	jmp	.L963
	.p2align 6,,7
.L1028:
	cmpb	$10, 1(%rbp)
	jne	.L690
	movq	%rbp, %rsi
	movq	%rbp, %rdx
	xorl	%edi, %edi
.L700:
	movzbl	(%rdx), %ecx
	cmpb	$92, %cl
	movl	%ecx, %r8d
	jne	.L692
	movzbl	1(%rdx), %eax
	cmpb	$10, %al
	je	.L1029
	cmpb	$13, %al
	jne	.L692
	cmpb	$10, 2(%rdx)
	jne	.L692
	addq	$3, %rdx
.L973:
	incl	%edi
	jmp	.L700
.L692:
	testl	%edi, %edi
	je	.L690
	cmpb	$47, %r8b
	je	.L707
	cmpb	$42, %r8b
	jne	.L690
.L707:
	incq	%rdx
	movb	%cl, (%rsi)
	incq	%rsi
	movzbl	(%rdx), %eax
	cmpb	$42, %al
	movl	%eax, %ecx
	je	.L707
	cmpb	$47, %al
	je	.L707
	testl	%edi, %edi
	leal	-1(%rdi), %edx
	jle	.L690
.L711:
	movl	%edx, %ecx
	movb	$92, (%rsi)
	movb	$10, 1(%rsi)
	decl	%edx
	addq	$2, %rsi
	testl	%ecx, %ecx
	jg	.L711
	jmp	.L690
.L1029:
	addq	$2, %rdx
	jmp	.L973
.L680:
	movb	$32, -1(%r12)
	jmp	.L682
.L679:
	movb	$42, (%r12)
	incq	%r12
	jmp	.L682
.L1027:
	movb	$10, -1(%r12)
	movq	%r12, %rsi
	movl	$.LC99, %edi
	movl	$13, %edx
	xorl	%eax, %eax
	movq	%r8, 24(%rsp)
	call	bcopy
	leaq	13(%r12), %rbx
	movq	24(%rsp), %rax
	movl	104(%rsp), %edx
	movq	%rbx, %rsi
	movq	%rax, %rdi
	xorl	%eax, %eax
	call	bcopy
	movl	108(%rsp), %r12d
	movslq	104(%rsp),%rsi
	addq	%rsi, %rbx
	testl	%r12d, %r12d
	jne	.L1030
.L678:
	movq	%r13, %rdi
	movq	%r15, %rsi
	xorl	%edx, %edx
	xorl	%ecx, %ecx
	xorl	%eax, %eax
	leaq	2(%rbx), %r12
	call	output_line_command
	movb	$32, (%rbx)
	movb	$47, 1(%rbx)
	jmp	.L653
.L1030:
	movb	$32, (%rbx)
	xorl	%eax, %eax
	movl	108(%rsp), %edx
	movq	112(%rsp), %rdi
	incq	%rbx
	movq	%rbx, %rsi
	call	bcopy
	movslq	108(%rsp),%rdx
	addq	%rdx, %rbx
	jmp	.L678
.L661:
	cmpq	$7, %r8
	jle	.L662
	movl	$.LC96, %ecx
	movl	$8, %r11d
	movq	%r10, %rsi
	movq	%rcx, %rdi
	movq	%r11, %rcx
	cld
	repz
	cmpsb
	jne	.L662
	movl	$.LC96, %r8d
	movl	$8, (%r9)
	jmp	.L660
.L662:
	cmpq	$10, %r8
	jle	.L663
	movl	$.LC97, %eax
	movl	$11, %ebx
	movq	%r10, %rsi
	cld
	movq	%rax, %rdi
	movq	%rbx, %rcx
	repz
	cmpsb
	jne	.L663
	movl	$.LC97, %r8d
	movl	$11, (%r9)
	jmp	.L660
.L663:
	cmpq	$6, %r8
	jle	.L664
	movl	$.LC98, %ecx
	movl	$7, %r11d
	movq	%r10, %rsi
	movq	%rcx, %rdi
	movq	%r11, %rcx
	cld
	repz
	cmpsb
	jne	.L664
	cmpq	$7, %r8
	movl	$7, (%r9)
	leaq	7(%r10), %rbx
	je	.L972
	movq	__lc_ctype(%rip), %rdx
	movq	48(%rdx), %r8
	testq	%r8, %r8
	jne	.L667
	movzbq	7(%r10), %r9
	salq	$2, %r9
	addq	104(%rdx), %r9
	testb	$16, (%r9)
.L970:
	je	.L972
	movq	%rbx, 112(%rsp)
.L669:
	cmpq	%r14, %rbx
	jae	.L670
	movq	__lc_ctype(%rip), %rdx
	movq	48(%rdx), %rcx
	testq	%rcx, %rcx
	jne	.L674
	movzbq	(%rbx), %r10
	salq	$2, %r10
	addq	104(%rdx), %r10
	testb	$16, (%r10)
.L971:
	je	.L670
	incq	%rbx
	jmp	.L669
.L670:
	movl	%ebx, %edi
	subl	112(%rsp), %edi
	movl	%edi, 108(%rsp)
.L972:
	movl	$.LC98, %r8d
	jmp	.L660
	.p2align 6,,7
.L674:
	movzbl	(%rbx), %edi
	xorl	%eax, %eax
	movl	$16, %esi
	call	*%rcx
	testl	%eax, %eax
	jmp	.L971
.L667:
	movzbl	7(%r10), %edi
	xorl	%eax, %eax
	movl	$16, %esi
	call	*%r8
	testl	%eax, %eax
	jmp	.L970
	.p2align 6,,7
.L664:
	xorl	%r8d, %r8d
	jmp	.L660
.L1026:
	movl	put_out_comments(%rip), %eax
	decq	%rbp
	testl	%eax, %eax
	jne	.L645
	movb	$32, -1(%r12)
.L646:
	leaq	2(%rbp), %rdi
.L969:
	cmpq	%r14, %rbp
	jae	.L963
	movzbl	(%rbp), %esi
	incq	%rbp
	cmpb	$10, %sil
	jne	.L969
	movl	put_out_comments(%rip), %eax
	decq	%rbp
	testl	%eax, %eax
	je	.L963
	movq	%rbp, %rbx
	subq	%rdi, %rbx
	jmp	.L982
.L645:
	movb	$47, -1(%r12)
	movb	$47, (%r12)
	incq	%r12
	jmp	.L646
	.p2align 6,,7
.L1025:
	cmpb	$10, 1(%rbp)
	jne	.L618
	movq	%rbp, %rsi
	movq	%rbp, %rdx
	xorl	%edi, %edi
.L628:
	movzbl	(%rdx), %ecx
	cmpb	$92, %cl
	movl	%ecx, %r8d
	jne	.L620
	movzbl	1(%rdx), %eax
	cmpb	$10, %al
	je	.L1031
	cmpb	$13, %al
	jne	.L620
	cmpb	$10, 2(%rdx)
	jne	.L620
	addq	$3, %rdx
.L968:
	incl	%edi
	jmp	.L628
.L620:
	testl	%edi, %edi
	je	.L618
	cmpb	$47, %r8b
	je	.L635
	cmpb	$42, %r8b
	jne	.L618
.L635:
	incq	%rdx
	movb	%cl, (%rsi)
	incq	%rsi
	movzbl	(%rdx), %eax
	cmpb	$42, %al
	movl	%eax, %ecx
	je	.L635
	cmpb	$47, %al
	je	.L635
	testl	%edi, %edi
	leal	-1(%rdi), %edx
	jle	.L951
.L639:
	movl	%edx, %edi
	movb	$92, (%rsi)
	movb	$10, 1(%rsi)
	decl	%edx
	addq	$2, %rsi
	testl	%edi, %edi
	jg	.L639
.L951:
	movzbl	(%rbp), %ebx
	jmp	.L618
	.p2align 6,,7
.L1031:
	addq	$2, %rdx
	jmp	.L968
.L736:
	movl	48(%rsp), %esi
	testl	%esi, %esi
	jne	.L726
	cmpq	%r14, %rbp
	jae	.L963
	movzbl	(%rbp), %ebx
.L946:
	cmpb	$92, %bl
	je	.L1032
.L742:
	movq	__lc_ctype(%rip), %rdx
	incq	%rbp
	movq	48(%rdx), %rcx
	testq	%rcx, %rcx
	jne	.L747
	movzbl	%bl, %r8d 
	salq	$2, %r8
	addq	104(%rdx), %r8
	testb	$2, (%r8)
.L974:
	jne	.L746
	cmpb	$46, %bl
	je	.L1033
.L749:
	cmpb	$95, %bl
	jne	.L965
.L746:
	movb	%bl, (%r12)
	incq	%r12
	cmpb	$101, %bl
	je	.L751
	cmpb	$69, %bl
	je	.L751
.L957:
	movzbl	(%rbp), %ebx
.L738:
	cmpq	%r14, %rbp
	jb	.L946
	jmp	.L907
.L751:
	cmpq	%r14, %rbp
	jae	.L963
	movzbl	(%rbp), %ebx
	cmpb	$92, %bl
	je	.L1034
.L753:
	cmpq	%r14, %rbp
	jae	.L907
	cmpb	$43, %bl
	je	.L758
	cmpb	$45, %bl
	jne	.L738
.L758:
	movb	%bl, (%r12)
	incq	%rbp
	movl	traditional(%rip), %eax
	incq	%r12
	testl	%eax, %eax
	je	.L957
	jmp	.L963
.L1034:
	cmpb	$10, 1(%rbp)
	jne	.L753
.L756:
	addq	$2, %rbp
	incl	24(%r13)
	cmpq	%r14, %rbp
	jae	.L963
	movzbl	(%rbp), %ebx
	cmpb	$92, %bl
	jne	.L753
	cmpb	$10, 1(%rbp)
	je	.L756
	jmp	.L753
.L965:
	decq	%rbp
	jmp	.L963
.L1033:
	cmpb	$46, (%rbp)
	jne	.L746
	jmp	.L749
.L747:
	xorl	%eax, %eax
	movzbl	%bl, %edi
	movl	$2, %esi
	call	*%rcx
	testl	%eax, %eax
	jmp	.L974
.L1032:
	cmpb	$10, 1(%rbp)
	jne	.L742
.L745:
	addq	$2, %rbp
	incl	24(%r13)
	cmpq	%r14, %rbp
	jae	.L956
	movzbl	(%rbp), %ebx
	cmpb	$92, %bl
	jne	.L742
	cmpb	$10, 1(%rbp)
	je	.L745
	jmp	.L742
.L956:
	movzbl	(%rbp), %ebx
	jmp	.L742
.L988:
	movq	%r15, %rdi
	xorl	%eax, %eax
	call	grow_outbuf
	jmp	.L517
.L987:
	movl	$1, %esi
	xorl	%eax, %eax
	call	skip_if_group
.L947:
	movl	indepth(%rip), %edx
	jmp	.L514
.L821:
	xorl	%eax, %eax
	call	abort
.LFE4:
.Lfe4:
	.size	rescan,.Lfe4-rescan
	.data
	.align 32
	.type	line_directive_table.0,@object
	.size	line_directive_table.0,32
line_directive_table.0:
	.long	4
	.zero	4
	.quad	do_line
	.quad	.LC12
	.long	12
	.zero	4
	.section	.rodata.str1.1
.LC104:
	.string	"formfeed"
.LC103:
	.string	"%s in preprocessing directive"
.LC105:
	.string	"vertical tab"
.LC109:
	.string	"__NeXT__"
.LC106:
	.string	"`#' followed by integer"
	.section	.rodata.str1.32
	.align 32
.LC108:
	.string	"invalid preprocessor directive name"
	.align 32
.LC107:
	.string	"invalid preprocessor directive"
	.text
	.align 2
	.p2align 4,,15
	.type	handle_directive,@function
handle_directive:
.LFB5:
	pushq	%rbp
.LCFI27:
	movq	%rsp, %rbp
.LCFI28:
	pushq	%r15
.LCFI29:
	pushq	%r14
.LCFI30:
	movq	%rdi, %r14
	pushq	%r13
.LCFI31:
	pushq	%r12
.LCFI32:
	pushq	%rbx
.LCFI33:
	subq	$72, %rsp
.LCFI34:
	movq	40(%rdi), %r12
	movl	$0, -44(%rbp)
	movq	%rsi, -64(%rbp)
	leaq	-1(%r12), %rdx
	movq	%rdx, directive_start(%rip)
	.p2align 4,,7
.L1050:
	movzbl	(%r12), %edx
	movzbl	%dl, %ebx 
	movl	%edx, %ecx
	cmpb	$0, is_hor_space(%rbx)
	jne	.L1304
	cmpb	$47, %dl
	jne	.L1046
	cmpb	$42, 1(%r12)
	je	.L1305
.L1046:
	cmpb	$92, %cl
	jne	.L1037
	cmpb	$10, 1(%r12)
	jne	.L1037
	incl	24(%r14)
	addq	$2, %r12
	jmp	.L1050
.L1037:
	movq	%r12, %r13
	.p2align 4,,7
.L1080:
	movzbl	(%r13), %esi
	movl	%esi, %ebx
	movzbl	%bl, %edi 
	cmpb	$0, is_idchar(%rdi)
	jne	.L1299
	cmpb	$92, %sil
	je	.L1306
.L1056:
	movl	%esi, %eax
	movzbl	%al, %r8d 
	cmpb	$0, is_idchar(%r8)
	je	.L1052
.L1299:
	incq	%r13
	jmp	.L1080
.L1052:
	movl	%r13d, %ebx
	subl	%r12d, %ebx
	testl	%ebx, %ebx
	jne	.L1292
	cmpb	$10, %sil
	je	.L1307
	movzbl	(%r12), %edx
.L1083:
	movzbl	%dl, %r13d 
	movq	%r12, %rsi
	cmpb	$0, is_idchar(%r13)
	je	.L1085
	movzbl	(%r12), %ecx
.L1088:
	leal	-48(%rcx), %edi
	cmpb	$9, %dil
	ja	.L1085
	incq	%rsi
	movzbl	(%rsi), %ecx
	movzbl	%cl, %ebx 
	cmpb	$0, is_idchar(%rbx)
	jne	.L1088
.L1085:
	cmpq	%r12, %rsi
	je	.L1293
	movzbq	(%rsi), %rcx
	cmpb	$0, is_idchar(%rcx)
	jne	.L1092
	movl	pedantic(%rip), %eax
	testl	%eax, %eax
	jne	.L1308
.L1090:
	movq	%r12, %r13
	movq	$line_directive_table.0, -80(%rbp)
.L1091:
	movl	traditional(%rip), %eax
	movslq	28(%r14),%rbx
	movl	$0, -84(%rbp)
	addq	32(%r14), %rbx
	movl	$0, -48(%rbp)
	testl	%eax, %eax
	je	.L1105
	movq	-80(%rbp), %rdx
	movl	$1, %eax
	cmpb	$0, 29(%rdx)
	cmove	-84(%rbp), %eax
	movl	%eax, -84(%rbp)
.L1105:
	movq	-80(%rbp), %rsi
	cmpl	$4, 24(%rsi)
	je	.L1309
.L1106:
	cmpq	%rbx, %r13
	movq	%r13, %r12
	jae	.L1273
.L1166:
	movzbl	(%r12), %edx
	incq	%r12
	movzbl	%dl, %eax
	cmpl	$47, %eax
	je	.L1126
	cmpl	$47, %eax
	jg	.L1164
	cmpl	$34, %eax
	je	.L1115
	cmpl	$34, %eax
	jg	.L1165
	cmpl	$10, %eax
	je	.L1161
	cmpl	$10, %eax
	jl	.L1107
	cmpl	$12, %eax
	jg	.L1107
	movl	pedantic(%rip), %r9d
	testl	%r9d, %r9d
	jne	.L1310
.L1107:
	cmpq	%rbx, %r12
	jb	.L1166
.L1273:
	movq	%r12, 40(%r14)
	movq	%r12, %rax
.L1118:
	movl	no_output(%rip), %ebx
	movq	%rax, -72(%rbp)
	testl	%ebx, %ebx
	jne	.L1167
	movq	-80(%rbp), %rbx
	cmpb	$0, 30(%rbx)
	je	.L1167
	movl	put_out_comments(%rip), %r10d
	testl	%r10d, %r10d
	je	.L1167
	movq	-64(%rbp), %r15
	movq	40(%r15), %rcx
	movslq	28(%r15),%r11
	movq	32(%r15), %rdi
	movq	%rcx, %rsi
	subq	%rdi, %rsi
	subq	%rsi, %r11
	movl	(%rbx), %esi
	addl	$2, %esi
	movslq	%esi,%r8
	cmpq	%r8, %r11
	jle	.L1311
.L1169:
	cmpq	%rdi, %rcx
	jbe	.L1170
	cmpb	$10, -1(%rcx)
	je	.L1170
	movq	-64(%rbp), %rax
	incl	24(%rax)
	movb	$10, (%rcx)
	movq	40(%rax), %rdi
	incq	%rdi
	movq	%rdi, 40(%rax)
	movq	%rdi, %rcx
.L1170:
	movb	$35, (%rcx)
	xorl	%eax, %eax
	movq	-80(%rbp), %r15
	movq	-64(%rbp), %rbx
	movl	(%r15), %edx
	movq	16(%r15), %rdi
	movq	40(%rbx), %rsi
	incq	%rsi
	movq	%rsi, 40(%rbx)
	movl	%r12d, %ebx
	call	bcopy
	subl	%r13d, %ebx
	movq	-64(%rbp), %rsi
	movslq	(%r15),%rdx
	movslq	%ebx,%r15
	addq	40(%rsi), %rdx
	movslq	28(%rsi),%rcx
	movq	%rdx, 40(%rsi)
	subq	32(%rsi), %rdx
	subq	%rdx, %rcx
	cmpq	%r15, %rcx
	jle	.L1312
.L1172:
	movq	-64(%rbp), %r8
	movl	%ebx, %edx
	xorl	%eax, %eax
	movq	%r13, %rdi
	movq	40(%r8), %rsi
	call	bcopy
	movl	%ebx, %edx
	movq	-64(%rbp), %r10
	addq	%r15, 40(%r10)
	decl	%edx
	js	.L1279
.L1177:
	movslq	%edx,%r11
	cmpb	$10, (%r11,%r13)
	je	.L1313
.L1173:
	decl	%edx
	jns	.L1177
.L1279:
	leaq	-52(%rbp), %r9
	movq	%r9, -96(%rbp)
.L1167:
	movl	-44(%rbp), %edi
	testl	%edi, %edi
	je	.L1178
	movq	%r13, %rbx
	movq	%r12, %r13
	subq	%rbx, %r13
	addq	$20, %r13
	andq	$-16, %r13
	subq	%r13, %rsp
	cmpq	%r12, %rbx
	movq	%rsp, %r15
	movq	%rsp, %r13
	jae	.L1281
.L1239:
	movzbl	(%rbx), %edx
	incq	%rbx
	movzbl	%dl, %eax
	movb	%dl, (%r15)
	incq	%r15
	cmpl	$47, %eax
	je	.L1224
	cmpl	$47, %eax
	jg	.L1237
	cmpl	$34, %eax
	je	.L1215
	cmpl	$34, %eax
	jg	.L1238
	cmpl	$10, %eax
	je	.L1183
.L1179:
	cmpq	%r12, %rbx
	jb	.L1239
.L1281:
	movb	$0, (%r15)
.L1240:
	movl	no_output(%rip), %ebx
	movq	-72(%rbp), %r12
	testl	%ebx, %ebx
	movq	%r12, 40(%r14)
	jne	.L1241
	cmpq	$0, -96(%rbp)
	jne	.L1241
	movq	-80(%rbp), %rbx
	cmpb	$0, 30(%rbx)
	jne	.L1242
	cmpl	$1, 24(%rbx)
	je	.L1314
.L1241:
	movq	-80(%rbp), %rcx
	movq	%r15, %rsi
	movq	%r13, %rdi
	xorl	%eax, %eax
	movq	-64(%rbp), %rdx
	call	*8(%rcx)
	movq	40(%r14), %r13
	movq	-64(%rbp), %rbx
	subq	32(%r14), %r13
	movslq	28(%rbx),%r15
	movq	40(%rbx), %rsi
	subq	32(%rbx), %rsi
	subq	%rsi, %r15
	movslq	28(%r14),%rsi
	subq	%r13, %rsi
	cmpq	%rsi, %r15
	jle	.L1315
.L1263:
	movl	$1, %eax
.L1035:
	leaq	-40(%rbp), %rsp
	popq	%rbx
	popq	%r12
	popq	%r13
	popq	%r14
	popq	%r15
	leave
	ret
.L1315:
	movq	%rbx, %rdi
	xorl	%eax, %eax
	call	grow_outbuf
	jmp	.L1263
.L1314:
	movl	dump_macros(%rip), %eax
	subl	$2, %eax
	cmpl	$1, %eax
	ja	.L1241
.L1242:
	movq	-64(%rbp), %rdi
	movq	-80(%rbp), %rax
	movq	40(%rdi), %rcx
	movslq	28(%rdi),%r11
	movl	(%rax), %esi
	movq	%rcx, %r9
	subq	32(%rdi), %r9
	incl	%esi
	movslq	%esi,%r8
	subq	%r9, %r11
	cmpq	%r8, %r11
	jle	.L1316
.L1244:
	movb	$35, (%rcx)
	xorl	%eax, %eax
	movq	-80(%rbp), %r12
	movq	-64(%rbp), %rdx
	movq	16(%r12), %rdi
	movq	40(%rdx), %rsi
	incq	%rsi
	movq	%rsi, 40(%rdx)
	movl	(%r12), %edx
	call	bcopy
	movq	-64(%rbp), %r10
	movq	-80(%rbp), %rcx
	movslq	(%rcx),%rdx
	addq	40(%r10), %rdx
	movq	%rdx, 40(%r10)
	cmpb	$0, 30(%rcx)
	jne	.L1246
	movl	dump_macros(%rip), %eax
	cmpl	$3, %eax
	je	.L1246
	movq	-80(%rbp), %rdi
	cmpl	$1, 24(%rdi)
	jne	.L1241
	cmpl	$2, %eax
	jne	.L1241
	movzbq	(%r13), %rsi
	movq	%r13, %rdx
	cmpb	$0, is_hor_space(%rsi)
	je	.L1289
.L1255:
	incq	%rdx
	movzbq	(%rdx), %rcx
	cmpb	$0, is_hor_space(%rcx)
	jne	.L1255
.L1289:
	movzbq	(%rdx), %r10
	movq	%rdx, %r12
	cmpb	$0, is_idchar(%r10)
	je	.L1291
.L1259:
	incq	%rdx
	movzbq	(%rdx), %rbx
	cmpb	$0, is_idchar(%rbx)
	jne	.L1259
.L1291:
	movl	%edx, %ebx
	movq	-64(%rbp), %rdx
	subl	%r12d, %ebx
	leal	1(%rbx), %esi
	movq	40(%rdx), %rcx
	movslq	28(%rdx),%r11
	movslq	%esi,%r8
	movq	%rcx, %rax
	subq	32(%rdx), %rax
	subq	%rax, %r11
	cmpq	%r8, %r11
	jle	.L1317
.L1261:
	movb	$32, (%rcx)
	movq	%r12, %rdi
	movl	%ebx, %edx
	movq	-64(%rbp), %rcx
	xorl	%eax, %eax
	movq	40(%rcx), %rsi
	incq	%rsi
	movq	%rsi, 40(%rcx)
	call	bcopy
	movq	-64(%rbp), %r12
	movslq	%ebx,%rdi
	addq	%rdi, 40(%r12)
	jmp	.L1241
.L1317:
	movq	-64(%rbp), %rdi
	xorl	%eax, %eax
	call	grow_outbuf
	movq	-64(%rbp), %r9
	movq	40(%r9), %rcx
	jmp	.L1261
	.p2align 6,,7
.L1246:
	movq	-64(%rbp), %rcx
	movl	%r15d, %ebx
	subl	%r13d, %ebx
	movslq	%ebx,%r12
	subq	32(%rcx), %rdx
	movslq	28(%rcx),%r8
	subq	%rdx, %r8
	cmpq	%r12, %r8
	jle	.L1318
.L1248:
	movq	-64(%rbp), %r9
	movq	%r13, %rdi
	movl	%ebx, %edx
	xorl	%eax, %eax
	movq	40(%r9), %rsi
	call	bcopy
	movq	-64(%rbp), %r11
	addq	%r12, 40(%r11)
	jmp	.L1241
.L1318:
	movq	%rcx, %rdi
	movl	%ebx, %esi
	xorl	%eax, %eax
	call	grow_outbuf
	jmp	.L1248
.L1316:
	movq	-64(%rbp), %rdi
	xorl	%eax, %eax
	call	grow_outbuf
	movq	-64(%rbp), %rsi
	movq	40(%rsi), %rcx
	jmp	.L1244
.L1238:
	cmpl	$39, %eax
	jne	.L1179
.L1215:
	movl	24(%r14), %edx
	xorl	%ecx, %ecx
	xorl	%r8d, %r8d
	xorl	%r9d, %r9d
	xorl	%eax, %eax
	leaq	-1(%rbx), %rdi
	movq	%r12, %rsi
	call	skip_quoted_string
	cmpq	%rax, %rbx
	je	.L1179
.L1223:
	movzbl	(%rbx), %edx
	cmpb	$92, %dl
	je	.L1319
	movb	%dl, (%r15)
	incq	%rbx
.L1302:
	incq	%r15
.L1216:
	cmpq	%rax, %rbx
	jne	.L1223
	jmp	.L1179
.L1319:
	incq	%rbx
	cmpb	$10, (%rbx)
	je	.L1220
	movb	$92, (%r15)
	jmp	.L1302
.L1220:
	incq	%rbx
	jmp	.L1216
.L1237:
	cmpl	$60, %eax
	je	.L1184
	cmpl	$92, %eax
	jne	.L1179
	movzbl	(%rbx), %eax
	cmpb	$10, %al
	je	.L1320
	movb	%al, (%r15)
	incq	%rbx
	incq	%r15
	jmp	.L1179
.L1320:
	decq	%r15
	incq	%rbx
	cmpq	%r13, %r15
	je	.L1195
	movzbq	-1(%r15), %rcx
	leaq	-1(%r15), %rsi
	cmpb	$0, is_space(%rcx)
	je	.L1195
.L1200:
	cmpq	%r13, %rsi
	movq	%rsi, %r15
	je	.L1197
	movzbq	-1(%r15), %rdx
	leaq	-1(%rsi), %rsi
	cmpb	$0, is_space(%rdx)
	jne	.L1200
.L1197:
	movzbq	(%rbx), %r10
	incq	%r15
	cmpb	$0, is_hor_space(%r10)
	je	.L1179
.L1205:
	incq	%rbx
	movzbq	(%rbx), %r8
	cmpb	$0, is_hor_space(%r8)
	jne	.L1205
	jmp	.L1179
.L1195:
	movzbl	(%rbx), %edx
	movzbl	%dl, %r11d 
	cmpb	$0, is_space(%r11)
	je	.L1179
	incq	%rbx
	movb	%dl, (%r15)
	incq	%r15
	movzbq	(%rbx), %rsi
	cmpb	$0, is_hor_space(%rsi)
	je	.L1179
.L1212:
	incq	%rbx
	movzbq	(%rbx), %r9
	cmpb	$0, is_hor_space(%r9)
	jne	.L1212
	jmp	.L1179
	.p2align 6,,7
.L1184:
	movq	-80(%rbp), %rax
	cmpb	$0, 28(%rax)
	je	.L1179
	cmpq	%r12, %rbx
	jae	.L1281
	cmpb	$62, %dl
	je	.L1179
.L1192:
	movzbl	(%rbx), %eax
	incq	%rbx
	cmpb	$92, %al
	je	.L1321
.L1190:
	movb	%al, (%r15)
	incq	%r15
.L1186:
	cmpq	%r12, %rbx
	jae	.L1281
	cmpb	$62, %al
	jne	.L1192
	jmp	.L1179
.L1321:
	cmpq	%r12, %rbx
	jae	.L1190
	cmpb	$10, (%rbx)
	jne	.L1190
	incq	%rbx
	jmp	.L1186
	.p2align 6,,7
.L1224:
	movzbl	(%rbx), %eax
	cmpb	$42, %al
	je	.L1226
	movl	cplusplus_comments(%rip), %edi
	testl	%edi, %edi
	je	.L1179
	cmpb	$47, %al
	jne	.L1179
.L1226:
	movq	-96(%rbp), %rsi
	leaq	1(%rbx), %rcx
	xorl	%edx, %edx
	xorl	%eax, %eax
	movq	%rcx, 40(%r14)
	movq	%r14, %rdi
	movq	%rcx, -104(%rbp)
	call	skip_to_end_of_comment
	movl	-84(%rbp), %eax
	testl	%eax, %eax
	je	.L1227
	movq	40(%r14), %rax
	cmpq	%rax, %rbx
	je	.L1232
.L1231:
	movzbl	(%rbx), %edx
	movb	%dl, (%r15)
	movq	40(%r14), %rax
	incq	%r15
	movq	-104(%rbp), %rbx
	leaq	1(%rbx), %r10
	cmpq	%rax, %rbx
	movq	%r10, -104(%rbp)
	jne	.L1231
.L1232:
	movq	%rax, %rbx
	jmp	.L1179
.L1227:
	movl	traditional(%rip), %eax
	testl	%eax, %eax
	je	.L1233
	decq	%r15
.L1303:
	movq	40(%r14), %rax
	jmp	.L1232
.L1233:
	movb	$32, -1(%r15)
	jmp	.L1303
	.p2align 6,,7
.L1178:
	movq	%r12, %r15
	jmp	.L1240
.L1313:
	movq	-64(%rbp), %rsi
	incl	24(%rsi)
	jmp	.L1173
.L1312:
	movq	%rsi, %rdi
	xorl	%eax, %eax
	movl	%ebx, %esi
	call	grow_outbuf
	jmp	.L1172
.L1311:
	movq	-64(%rbp), %rdi
	xorl	%eax, %eax
	call	grow_outbuf
	movq	-64(%rbp), %r9
	movq	40(%r9), %rcx
	movq	32(%r9), %rdi
	jmp	.L1169
.L1310:
	cmpb	$12, %dl
	movl	$.LC104, %esi
	movl	$.LC103, %edi
	movl	$.LC105, %edx
	cmovne	%rdx, %rsi
	xorl	%eax, %eax
	call	pedwarn
	jmp	.L1107
.L1161:
	decq	%r12
	jmp	.L1273
	.p2align 6,,7
.L1165:
	cmpl	$39, %eax
	jne	.L1107
.L1115:
	movl	24(%r14), %edx
	leaq	-1(%r12), %rdi
	xorl	%eax, %eax
	movq	%rbx, %rsi
	leaq	24(%r14), %rcx
	leaq	-44(%rbp), %r8
	leaq	-48(%rbp), %r9
	call	skip_quoted_string
	movl	-48(%rbp), %r10d
	movq	%rax, %r12
	testl	%r10d, %r10d
	je	.L1107
	movl	traditional(%rip), %r8d
	testl	%r8d, %r8d
	jne	.L1273
	movq	%rax, 40(%r14)
	jmp	.L1263
	.p2align 6,,7
.L1164:
	cmpl	$60, %eax
	je	.L1119
	cmpl	$92, %eax
	jne	.L1107
	cmpq	%rbx, %r12
	jae	.L1273
	cmpb	$10, (%r12)
	je	.L1322
.L1113:
	incq	%r12
	jmp	.L1107
.L1322:
	incl	24(%r14)
	movl	$1, -44(%rbp)
	jmp	.L1113
.L1119:
	movq	-80(%rbp), %r11
	cmpb	$0, 28(%r11)
	je	.L1107
	movzbl	(%r12), %eax
	testb	%al, %al
	je	.L1107
	cmpb	$62, %al
	je	.L1107
.L1125:
	incq	%r12
	movzbl	(%r12), %eax
	testb	%al, %al
	je	.L1107
	cmpb	$62, %al
	jne	.L1125
	jmp	.L1107
	.p2align 6,,7
.L1126:
	movzbl	(%r12), %edi
	cmpb	$92, %dil
	je	.L1323
.L1127:
	cmpb	$42, %dil
	je	.L1150
	movl	cplusplus_comments(%rip), %eax
	testl	%eax, %eax
	je	.L1107
	cmpb	$47, %dil
	jne	.L1107
.L1150:
	leaq	1(%r12), %rdi
	xorl	%edx, %edx
	xorl	%eax, %eax
	movq	%rdi, 40(%r14)
	leaq	24(%r14), %rsi
	leaq	-1(%r12), %r15
	movq	%r14, %rdi
	call	skip_to_end_of_comment
	movq	40(%r14), %r12
	cmpq	%rbx, %r12
	movq	%r12, %rax
	je	.L1152
	cmpb	$10, (%r12)
	je	.L1152
	movl	-84(%rbp), %ecx
	testl	%ecx, %ecx
	jne	.L1107
	incl	-44(%rbp)
	jmp	.L1107
.L1152:
	movq	%r15, %r12
	jmp	.L1118
	.p2align 6,,7
.L1323:
	cmpb	$10, 1(%r12)
	jne	.L1127
	movq	%r12, %rsi
	movq	%r12, %rdx
	xorl	%r8d, %r8d
.L1137:
	movzbl	(%rdx), %ecx
	cmpb	$92, %cl
	movl	%ecx, %r9d
	jne	.L1129
	movzbl	1(%rdx), %eax
	cmpb	$10, %al
	je	.L1324
	cmpb	$13, %al
	jne	.L1129
	cmpb	$10, 2(%rdx)
	jne	.L1129
	addq	$3, %rdx
.L1301:
	incl	%r8d
	jmp	.L1137
.L1129:
	testl	%r8d, %r8d
	je	.L1127
	cmpb	$47, %r9b
	je	.L1144
	cmpb	$42, %r9b
	jne	.L1127
.L1144:
	incq	%rdx
	movb	%cl, (%rsi)
	incq	%rsi
	movzbl	(%rdx), %eax
	cmpb	$42, %al
	movl	%eax, %ecx
	je	.L1144
	cmpb	$47, %al
	je	.L1144
	testl	%r8d, %r8d
	leal	-1(%r8), %edx
	jle	.L1296
.L1148:
	movl	%edx, %r15d
	movb	$92, (%rsi)
	movb	$10, 1(%rsi)
	decl	%edx
	addq	$2, %rsi
	testl	%r15d, %r15d
	jg	.L1148
.L1296:
	movzbl	(%r12), %edi
	jmp	.L1127
.L1324:
	addq	$2, %rdx
	jmp	.L1301
.L1309:
	movl	objc(%rip), %eax
	testl	%eax, %eax
	jne	.L1106
	movl	$-1, %esi
	xorl	%eax, %eax
	movl	$.LC109, %edi
	movl	%esi, %edx
	call	lookup
	testq	%rax, %rax
	jne	.L1106
.L1101:
	xorl	%eax, %eax
	jmp	.L1035
.L1308:
	movl	$.LC106, %edi
	xorl	%eax, %eax
	call	pedwarn
	jmp	.L1090
.L1092:
	movl	lang_asm(%rip), %eax
	testl	%eax, %eax
	jne	.L1101
	movl	$.LC108, %edi
	xorl	%eax, %eax
	call	error
	jmp	.L1101
.L1293:
	cmpb	$35, %dl
	je	.L1096
	movzbl	%dl, %r12d 
	cmpb	$0, is_hor_space(%r12)
	je	.L1295
	.p2align 4,,7
.L1096:
	incq	%rsi
	movzbl	(%rsi), %ecx
	cmpb	$35, %cl
	je	.L1096
	movzbl	%cl, %r14d 
	cmpb	$0, is_hor_space(%r14)
	jne	.L1096
.L1270:
	cmpb	$10, %cl
	jne	.L1092
	movl	pedantic(%rip), %eax
	testl	%eax, %eax
	je	.L1101
	movl	lang_asm(%rip), %eax
	testl	%eax, %eax
	jne	.L1101
	movl	$.LC107, %edi
	xorl	%eax, %eax
	call	warning
	jmp	.L1101
.L1295:
	movzbl	(%rsi), %ecx
	jmp	.L1270
.L1307:
	movq	%r13, 40(%r14)
	jmp	.L1263
.L1292:
	movzbl	(%r12), %edx
	movzbl	%dl, %r15d 
	cmpb	$0, is_idstart(%r15)
	je	.L1083
	movl	directive_table(%rip), %eax
	movq	$directive_table, -80(%rbp)
	testl	%eax, %eax
	jle	.L1101
.L1264:
	cmpl	%ebx, %eax
	je	.L1325
.L1102:
	addq	$32, -80(%rbp)
	movq	-80(%rbp), %r10
	movl	(%r10), %eax
	testl	%eax, %eax
	jg	.L1264
	jmp	.L1101
.L1325:
	movq	-80(%rbp), %r9
	movslq	%eax,%rdx
	movq	%r12, %rsi
	movq	16(%r9), %rdi
	call	strncmp
	testl	%eax, %eax
	jne	.L1102
	movq	$0, -96(%rbp)
	jmp	.L1091
	.p2align 6,,7
.L1306:
	cmpb	$10, 1(%r13)
	jne	.L1056
	movq	%r13, %r8
	movq	%r13, %rcx
	xorl	%edi, %edi
	.p2align 4,,7
.L1066:
	movzbl	(%rcx), %ebx
	cmpb	$92, %bl
	movl	%ebx, %eax
	jne	.L1058
	movzbl	1(%rcx), %edx
	cmpb	$10, %dl
	je	.L1326
	cmpb	$13, %dl
	jne	.L1058
	cmpb	$10, 2(%rcx)
	jne	.L1058
	addq	$3, %rcx
.L1300:
	incl	%edi
	jmp	.L1066
.L1058:
	testl	%edi, %edi
	je	.L1056
	movzbl	%al, %r9d 
	cmpb	$0, is_idchar(%r9)
	je	.L1056
	.p2align 4,,7
.L1073:
	incq	%rcx
	movb	%bl, (%r8)
	incq	%r8
	movzbl	(%rcx), %r10d
	movl	%r10d, %ebx
	movzbl	%bl, %esi 
	cmpb	$0, is_idchar(%rsi)
	jne	.L1073
	testl	%edi, %edi
	leal	-1(%rdi), %edx
	jle	.L1294
	.p2align 4,,7
.L1077:
	movl	%edx, %r11d
	movb	$92, (%r8)
	movb	$10, 1(%r8)
	decl	%edx
	addq	$2, %r8
	testl	%r11d, %r11d
	jg	.L1077
.L1294:
	movzbl	(%r13), %esi
	jmp	.L1056
.L1326:
	addq	$2, %rcx
	jmp	.L1300
.L1305:
	movq	%r12, 40(%r14)
	movq	%r14, %rdi
	leaq	24(%r14), %rsi
	xorl	%edx, %edx
	xorl	%eax, %eax
	call	skip_to_end_of_comment
	movq	40(%r14), %r12
	jmp	.L1050
.L1304:
	leal	-11(%rdx), %ecx
	cmpb	$1, %cl
	ja	.L1040
	movl	pedantic(%rip), %eax
	testl	%eax, %eax
	jne	.L1327
.L1040:
	incq	%r12
	jmp	.L1050
.L1327:
	cmpb	$12, %dl
	movl	$.LC104, %esi
	movl	$.LC103, %edi
	movl	$.LC105, %edx
	cmovne	%rdx, %rsi
	xorl	%eax, %eax
	call	pedwarn
	jmp	.L1040
.L1183:
	xorl	%eax, %eax
	call	abort
.LFE5:
.Lfe5:
	.size	handle_directive,.Lfe5-handle_directive
	.section	.rodata.str1.1
.LC110:
	.string	"Jan"
.LC111:
	.string	"Feb"
.LC112:
	.string	"Mar"
.LC113:
	.string	"Apr"
.LC114:
	.string	"May"
.LC115:
	.string	"Jun"
.LC116:
	.string	"Jul"
.LC117:
	.string	"Aug"
.LC118:
	.string	"Sep"
.LC119:
	.string	"Oct"
.LC120:
	.string	"Nov"
.LC121:
	.string	"Dec"
	.data
	.align 32
	.type	monthnames,@object
	.size	monthnames,96
monthnames:
	.quad	.LC110
	.quad	.LC111
	.quad	.LC112
	.quad	.LC113
	.quad	.LC114
	.quad	.LC115
	.quad	.LC116
	.quad	.LC117
	.quad	.LC118
	.quad	.LC119
	.quad	.LC120
	.quad	.LC121
	.align 4
	.type	import_warning.1,@object
	.size	import_warning.1,4
import_warning.1:
	.long	0
	.section	.rodata.str1.32
	.align 32
.LC135:
	.string	"macro or `#include' recursion too deep"
	.align 32
.LC133:
	.string	"`#import' expects \"fname\" or <fname>"
	.align 32
.LC134:
	.string	"`#include' expects \"fname\" or <fname>"
	.section	.rodata.str1.1
.LC139:
	.string	"%s%d"
.LC138:
	.string	"%s\n"
.LC136:
	.string	"/"
	.section	.rodata.str1.32
	.align 32
.LC137:
	.string	"No include path in which to find %s"
	.align 32
.LC122:
	.string	"using `#import' is not recommended"
	.align 32
.LC123:
	.string	"The fact that a certain header file need not be processed more than once\n"
	.align 32
.LC124:
	.string	"should be indicated in the header file, not where it is used.\n"
	.align 32
.LC125:
	.string	"The best way to do this is with a conditional of this form:\n\n"
	.section	.rodata.str1.1
.LC126:
	.string	"  #ifndef _FOO_H_INCLUDED\n"
.LC127:
	.string	"  #define _FOO_H_INCLUDED\n"
	.section	.rodata.str1.32
	.align 32
.LC128:
	.string	"  ... <real contents of file> ...\n"
	.align 32
.LC129:
	.string	"  #endif /* Not _FOO_H_INCLUDED */\n\n"
	.align 32
.LC130:
	.string	"Then users can use `#include' any number of times.\n"
	.align 32
.LC131:
	.string	"GNU C automatically avoids processing the file more than once\n"
	.align 32
.LC132:
	.string	"when it is equipped with such a conditional.\n"
	.text
	.align 2
	.p2align 4,,15
	.type	do_include,@function
do_include:
.LFB6:
	pushq	%rbp
.LCFI35:
	movq	%rsp, %rbp
.LCFI36:
	pushq	%r15
.LCFI37:
	pushq	%r14
.LCFI38:
	pushq	%r13
.LCFI39:
	movq	%rdi, %r13
	pushq	%r12
.LCFI40:
	movq	%rsi, %r12
	xorl	%esi, %esi
	pushq	%rbx
.LCFI41:
	subq	$344, %rsp
.LCFI42:
	movl	$-1, -360(%rbp)
	movl	$0, -356(%rbp)
	movl	24(%rcx), %ebx
	movq	%rdx, -336(%rbp)
	movq	$0, -368(%rbp)
	movq	include(%rip), %rdx
	movl	$0, -352(%rbp)
	cmpl	$4, %ebx
	sete	%sil
	xorl	%ecx, %ecx
	cmpl	$3, %ebx
	movq	%rdx, -376(%rbp)
	sete	%cl
	movl	%esi, -340(%rbp)
	movl	-340(%rbp), %eax
	movl	%ecx, -344(%rbp)
	testl	%eax, %eax
	je	.L1330
	movl	warn_import(%rip), %eax
	testl	%eax, %eax
	je	.L1330
	movl	inhibit_warnings(%rip), %r8d
	testl	%r8d, %r8d
	jne	.L1330
	movslq	indepth(%rip),%r9
	leaq	(%r9,%r9,4), %rdi
	salq	$4, %rdi
	cmpb	$0, instack+72(%rdi)
	jne	.L1330
	movl	import_warning.1(%rip), %r10d
	testl	%r10d, %r10d
	je	.L1503
	.p2align 4,,7
.L1330:
	movzbq	(%r13), %r11
	movq	%r13, %rdx
	cmpb	$0, is_hor_space(%r11)
	je	.L1486
	.p2align 4,,7
.L1335:
	incq	%rdx
	movzbl	(%rdx), %ecx
	movzbl	%cl, %r15d 
	cmpb	$0, is_hor_space(%r15)
	jne	.L1335
.L1467:
	cmpq	%rdx, %r12
	je	.L1337
	movzbq	-1(%r12), %rbx
	leaq	-1(%r12), %rsi
	cmpb	$0, is_hor_space(%rbx)
	je	.L1337
	.p2align 4,,7
.L1340:
	cmpq	%rdx, %rsi
	movq	%rsi, %r12
	je	.L1337
	movzbq	-1(%r12), %r8
	leaq	-1(%rsi), %rsi
	cmpb	$0, is_hor_space(%r8)
	jne	.L1340
.L1337:
	movzbl	%cl, %eax
	leaq	1(%rdx), %r15
	cmpl	$34, %eax
	je	.L1342
	cmpl	$60, %eax
	je	.L1371
.L1359:
	movl	-352(%rbp), %eax
	testl	%eax, %eax
	jne	.L1504
	movl	assertions_flag(%rip), %eax
	movl	%r12d, %ebx
	movl	indepth(%rip), %r15d
	subl	%r13d, %ebx
	movl	$0, assertions_flag(%rip)
	testl	%ebx, %ebx
	movl	%eax, -348(%rbp)
	js	.L1502
	movslq	%ebx,%r14
	addq	$16, %r14
	andq	$-16, %r14
	subq	%r14, %rsp
	cmpq	%r12, %r13
	movq	%rsp, %r14
	movq	%rsp, %rdx
	je	.L1475
	.p2align 4,,7
.L1388:
	movzbl	(%r13), %r8d
	incq	%r13
	movb	%r8b, (%rdx)
	incq	%rdx
	cmpq	%r12, %r13
	jne	.L1388
.L1475:
	movslq	%ebx,%rdx
	leal	100(%rbx,%rbx), %edi
	xorl	%eax, %eax
	movb	$0, (%rdx,%r14)
	movl	%edi, -292(%rbp)
	call	xmalloc
	movq	$0, -256(%rbp)
	movq	$0, -272(%rbp)
	movq	%rax, -288(%rbp)
	movq	%rax, -280(%rbp)
	movq	$0, -320(%rbp)
	movl	indepth(%rip), %eax
	cmpl	$198, %eax
	jle	.L1389
	cltq
	leaq	(%rax,%rax,4), %r15
	xorl	%eax, %eax
	salq	$4, %r15
	movl	instack+24(%r15), %edi
	call	line_for_error
	movl	$.LC135, %esi
	movl	%eax, %edi
	xorl	%eax, %eax
	call	error_with_line
.L1498:
	movq	-320(%rbp), %rdi
	movq	-296(%rbp), %r9
	xorl	%eax, %eax
	movq	-288(%rbp), %r13
	movq	-280(%rbp), %r12
	movq	-272(%rbp), %rcx
	movq	-312(%rbp), %r11
	movq	%rdi, -240(%rbp)
	movq	%r9, -216(%rbp)
	movq	-304(%rbp), %r10
	movq	-240(%rbp), %rdx
	movq	-216(%rbp), %rdi
	movq	%r13, -208(%rbp)
	movq	%r12, -200(%rbp)
	movq	%rcx, -192(%rbp)
	movq	%r11, -232(%rbp)
	movq	%r10, -224(%rbp)
	movq	-256(%rbp), %rsi
	movq	-264(%rbp), %rbx
	movq	%rdx, -160(%rbp)
	movq	%rdi, -136(%rbp)
	movq	-232(%rbp), %r8
	movq	-208(%rbp), %rdi
	movq	-200(%rbp), %rdx
	movq	-192(%rbp), %r11
	movq	-248(%rbp), %r15
	movq	%rsi, -176(%rbp)
	movq	-224(%rbp), %r14
	movq	%r8, -152(%rbp)
	movq	%rbx, -184(%rbp)
	movq	%rdx, -120(%rbp)
	movq	%rdi, -128(%rbp)
	subq	%rdi, %rdx
	leaq	16(%rdx), %r12
	movq	%r15, -168(%rbp)
	andq	$-16, %r12
	movq	%r14, -144(%rbp)
	movq	%r11, -112(%rbp)
	movq	-184(%rbp), %r10
	movq	-176(%rbp), %r9
	subq	%r12, %rsp
	movq	-168(%rbp), %r13
	movq	%rsp, %rsi
	movq	%r10, -104(%rbp)
	movq	%r9, -96(%rbp)
	movq	%r13, -88(%rbp)
	call	bcopy
	movq	%rsp, %r13
	movq	-120(%rbp), %rcx
	movq	-128(%rbp), %rdi
	xorl	%eax, %eax
	subq	%rdi, %rcx
	leaq	(%rsp,%rcx), %r12
	call	free
	incl	-352(%rbp)
	jmp	.L1330
.L1389:
	incl	%eax
	leaq	-320(%rbp), %rdi
	movl	$1, -296(%rbp)
	movl	%eax, indepth(%rip)
	cltq
	leaq	(%rax,%rax,4), %rsi
	xorl	%eax, %eax
	salq	$4, %rsi
	movl	%ebx, instack+28(%rsi)
	movq	$0, instack(%rsi)
	movq	$0, instack+8(%rsi)
	movq	if_stack(%rip), %rbx
	movb	$0, instack+72(%rsi)
	movq	$0, instack+48(%rsi)
	movq	$0, instack+64(%rsi)
	movq	%r14, instack+40(%rsi)
	movq	%r14, instack+32(%rsi)
	movl	$1, instack+24(%rsi)
	movq	%rbx, instack+56(%rsi)
	xorl	%esi, %esi
	call	rescan
	movl	indepth(%rip), %eax
	decl	%eax
	cmpl	%r15d, %eax
	movl	%eax, indepth(%rip)
	jne	.L1502
	movl	-280(%rbp), %eax
	subl	-288(%rbp), %eax
	movl	%eax, -292(%rbp)
	movl	-348(%rbp), %eax
	movl	%eax, assertions_flag(%rip)
	jmp	.L1498
.L1504:
	movl	-340(%rbp), %eax
	testl	%eax, %eax
	je	.L1381
	movl	$.LC133, %edi
.L1501:
	xorl	%eax, %eax
	call	error
.L1328:
	leaq	-40(%rbp), %rsp
	xorl	%eax, %eax
	popq	%rbx
	popq	%r12
	popq	%r13
	popq	%r14
	popq	%r15
	leave
	ret
.L1381:
	movl	$.LC134, %edi
	jmp	.L1501
	.p2align 6,,7
.L1371:
	cmpq	%r12, %r15
	movq	%r15, %r14
	je	.L1489
	cmpb	$62, (%r15)
	je	.L1490
	.p2align 4,,7
.L1376:
	incq	%r14
	cmpq	%r12, %r14
	je	.L1491
	cmpb	$62, (%r14)
	jne	.L1376
.L1497:
	leaq	1(%r14), %r11
	cmpq	%r12, %r11
	jne	.L1359
	movq	first_bracket_include(%rip), %rax
	movl	$1, -356(%rbp)
	testq	%rax, %rax
	je	.L1492
	movq	%rax, -376(%rbp)
.L1492:
	movl	max_include_len(%rip), %edx
.L1341:
	movl	-344(%rbp), %eax
	testl	%eax, %eax
	je	.L1393
	movslq	indepth(%rip),%r8
	leaq	(%r8,%r8,4), %rax
	salq	$4, %rax
	addq	$instack, %rax
	cmpq	$instack, %rax
	jb	.L1393
.L1400:
	cmpq	$0, (%rax)
	jne	.L1505
	subq	$80, %rax
	cmpq	$instack, %rax
	jae	.L1400
.L1393:
	movl	%r14d, %r13d
	xorl	%eax, %eax
	subl	%r15d, %r13d
	leal	2(%r13,%rdx), %edi
	call	xmalloc
	cmpb	$47, (%r15)
	movq	%rax, %r12
	je	.L1506
	movq	-376(%rbp), %rdx
	testq	%rdx, %rdx
	movq	%rdx, -368(%rbp)
	je	.L1406
.L1419:
	movq	-368(%rbp), %rbx
	movq	8(%rbx), %rsi
	testq	%rsi, %rsi
	je	.L1411
	cmpb	$0, (%rsi)
	jne	.L1507
.L1409:
	movq	-368(%rbp), %r9
	movq	(%r9), %rcx
	testq	%rcx, %rcx
	movq	%rcx, -368(%rbp)
	jne	.L1419
.L1406:
	movl	-360(%rbp), %eax
	testl	%eax, %eax
	js	.L1508
.L1420:
	movq	dont_repeat_files(%rip), %rbx
	testq	%rbx, %rbx
	jne	.L1440
.L1480:
	movq	all_include_files(%rip), %rbx
	testq	%rbx, %rbx
	je	.L1484
.L1446:
	movq	8(%rbx), %rdi
	movq	%r12, %rsi
	call	strcmp
	testl	%eax, %eax
	je	.L1442
	movq	(%rbx), %rbx
	testq	%rbx, %rbx
	jne	.L1446
.L1484:
	movl	$24, %edi
	xorl	%eax, %eax
	call	xmalloc
	movq	%r12, %rdi
	movq	all_include_files(%rip), %rsi
	movq	%rax, %r13
	movq	$0, 16(%rax)
	movq	%rsi, (%rax)
	movq	%rax, all_include_files(%rip)
	xorl	%eax, %eax
	call	savestring
	movl	-356(%rbp), %r15d
	movq	%rax, 8(%r13)
	xorl	%eax, %eax
	testl	%r15d, %r15d
	jne	.L1450
	movl	system_include_depth(%rip), %edx
	testl	%edx, %edx
	jle	.L1449
.L1450:
	movl	$1, %eax
.L1449:
	cmpl	%eax, print_deps(%rip)
	jg	.L1509
.L1447:
	movl	print_include_names(%rip), %ebx
	testl	%ebx, %ebx
	jne	.L1510
.L1451:
	movl	-356(%rbp), %ecx
	testl	%ecx, %ecx
	je	.L1452
	incl	system_include_depth(%rip)
.L1452:
	movl	-360(%rbp), %edi
	movq	%r12, %rsi
	xorl	%eax, %eax
	xorl	%r15d, %r15d
	xorl	%r14d, %r14d
	call	add_import
	movq	%r12, %rdi
	call	strlen
	movl	-360(%rbp), %edi
	leaq	-320(%rbp), %rsi
	addq	$45, %rax
	andq	$-16, %rax
	subq	%rax, %rsp
	xorl	%eax, %eax
	call	fstat
	movq	%rsp, %r13
	movl	no_precomp(%rip), %r9d
	testl	%r9d, %r9d
	je	.L1454
.L1453:
	testq	%r15, %r15
	je	.L1463
.L1485:
	movq	%r13, %rdi
	call	strlen
	leaq	1(%rax), %rdi
	xorl	%eax, %eax
	call	xmalloc
	movq	%r13, %rsi
	movq	%rax, %rdi
	call	strcpy
	xorl	%eax, %eax
	movq	-336(%rbp), %rcx
	movl	-324(%rbp), %esi
	movq	%r15, %rdi
	movq	%r12, %rdx
	call	pcfinclude
.L1464:
	movl	-356(%rbp), %r14d
	testl	%r14d, %r14d
	je	.L1328
	decl	system_include_depth(%rip)
	jmp	.L1328
.L1463:
	movq	%r12, %rdi
	xorl	%eax, %eax
	call	is_system_include
	movq	-368(%rbp), %r8
	movq	-336(%rbp), %rdx
	movl	-360(%rbp), %edi
	movl	%eax, %ecx
	movq	%r12, %rsi
	xorl	%eax, %eax
	call	finclude
	jmp	.L1464
.L1454:
	movl	%r14d, %ecx
	movq	%r13, %rdi
	movl	$.LC139, %esi
	movq	%r12, %rdx
	xorl	%eax, %eax
	incl	%r14d
	call	sprintf
	xorl	%eax, %eax
	movl	$438, %edx
	xorl	%esi, %esi
	movq	%r13, %rdi
	call	open
	cmpl	$-1, %eax
	movl	%eax, %ebx
	je	.L1453
	movl	%eax, %edi
	leaq	-240(%rbp), %rsi
	xorl	%eax, %eax
	call	fstat
	movl	$4, %ecx
	leaq	-236(%rbp), %rdi
	leaq	-316(%rbp), %rsi
	cld
	repz
	cmpsb
	jne	.L1459
	movl	-240(%rbp), %eax
	cmpl	%eax, -320(%rbp)
	je	.L1496
.L1459:
	movl	%ebx, %edi
	movq	%r12, %rsi
	leaq	-324(%rbp), %rdx
	xorl	%eax, %eax
	call	check_precompiled
	movl	%ebx, %edi
	movq	%rax, %r15
	xorl	%eax, %eax
	call	close
	testq	%r15, %r15
	je	.L1454
	jmp	.L1485
.L1496:
	movl	%ebx, %edi
	xorl	%eax, %eax
	call	close
	jmp	.L1453
.L1510:
	movq	$_iob+112, %rdi
	movl	$.LC138, %esi
	movq	%r12, %rdx
	xorl	%eax, %eax
	call	fprintf
	jmp	.L1451
.L1509:
	movl	$.LC23, %edi
	xorl	%esi, %esi
	xorl	%eax, %eax
	call	deps_output
	movq	%r12, %rdi
	xorl	%esi, %esi
	xorl	%eax, %eax
	call	deps_output
	movl	$.LC87, %edi
	xorl	%esi, %esi
	xorl	%eax, %eax
	call	deps_output
	jmp	.L1447
.L1442:
	testq	%rbx, %rbx
	jne	.L1447
	jmp	.L1484
	.p2align 6,,7
.L1440:
	movq	8(%rbx), %rdi
	movq	%r12, %rsi
	call	strcmp
	testl	%eax, %eax
	je	.L1495
	movq	(%rbx), %rbx
	testq	%rbx, %rbx
	jne	.L1440
	jmp	.L1480
.L1495:
	movl	-360(%rbp), %edi
	xorl	%eax, %eax
	call	close
	jmp	.L1328
.L1508:
	movslq	%r13d,%r14
	movq	%r12, %rdi
	movq	%r15, %rsi
	movq	%r14, %rdx
	call	strncpy
	movb	$0, (%r14,%r12)
	cmpq	$0, -376(%rbp)
	je	.L1421
	movq	%r12, %rdi
	xorl	%eax, %eax
	call	error_from_errno
.L1422:
	movl	-356(%rbp), %r12d
	xorl	%eax, %eax
	testl	%r12d, %r12d
	jne	.L1425
	movl	system_include_depth(%rip), %r10d
	testl	%r10d, %r10d
	jle	.L1424
.L1425:
	movl	$1, %eax
.L1424:
	cmpl	%eax, print_deps(%rip)
	jle	.L1328
	xorl	%eax, %eax
	xorl	%esi, %esi
	movl	$.LC23, %edi
	call	deps_output
	movl	-356(%rbp), %eax
	testl	%eax, %eax
	je	.L1426
	cmpq	$0, -376(%rbp)
	je	.L1426
.L1433:
	movq	-376(%rbp), %r11
	movq	8(%r11), %rdi
	testq	%rdi, %rdi
	je	.L1429
	cmpb	$0, (%rdi)
	jne	.L1494
.L1429:
	movq	-376(%rbp), %r8
	movq	(%r8), %rdi
	testq	%rdi, %rdi
	movq	%rdi, -376(%rbp)
	jne	.L1433
.L1426:
	movq	%r15, %rdi
	movl	%r13d, %esi
	xorl	%eax, %eax
	call	deps_output
	movl	$.LC87, %edi
	xorl	%esi, %esi
	xorl	%eax, %eax
	call	deps_output
	jmp	.L1328
.L1494:
	xorl	%esi, %esi
	xorl	%eax, %eax
	call	deps_output
	movl	$.LC136, %edi
	xorl	%esi, %esi
	xorl	%eax, %eax
	call	deps_output
	jmp	.L1426
	.p2align 6,,7
.L1421:
	movl	$.LC137, %edi
	movq	%r12, %rsi
	xorl	%eax, %eax
	call	error
	jmp	.L1422
	.p2align 6,,7
.L1507:
	movq	%r12, %rdi
	call	strcpy
	movl	$.LC136, %esi
	movq	%r12, %rdi
	call	strcat
	movq	%r12, %rdi
	call	strlen
	movslq	%r13d,%rdx
	addq	%rdx, %rax
	movb	$0, (%rax,%r12)
.L1413:
	movq	%r12, %rdi
	movq	%r15, %rsi
	call	strncat
	movl	-340(%rbp), %eax
	testl	%eax, %eax
	je	.L1414
	movq	%r12, %rdi
	xorl	%eax, %eax
	call	lookup_import
.L1500:
	movl	%eax, -360(%rbp)
	cmpl	$-2, -360(%rbp)
	je	.L1328
	xorl	%eax, %eax
	movq	%r12, %rdi
	call	redundant_include_p
	testl	%eax, %eax
	jne	.L1495
	movl	-360(%rbp), %eax
	testl	%eax, %eax
	js	.L1409
	jmp	.L1420
	.p2align 6,,7
.L1414:
	movq	%r12, %rdi
	xorl	%esi, %esi
	movl	$438, %edx
	xorl	%eax, %eax
	call	open
	jmp	.L1500
.L1411:
	movb	$0, (%r12)
	movslq	%r13d,%rdx
	jmp	.L1413
.L1506:
	movslq	%r13d,%r14
	movq	%rax, %rdi
	movq	%r15, %rsi
	movq	%r14, %rdx
	call	strncpy
	xorl	%eax, %eax
	movq	%r12, %rdi
	movb	$0, (%r14,%r12)
	call	redundant_include_p
	testl	%eax, %eax
	jne	.L1328
	movl	-340(%rbp), %eax
	testl	%eax, %eax
	je	.L1403
	movq	%r12, %rdi
	xorl	%eax, %eax
	call	lookup_import
.L1499:
	movl	%eax, -360(%rbp)
	cmpl	$-2, -360(%rbp)
	jne	.L1406
	jmp	.L1328
.L1403:
	movq	%r12, %rdi
	xorl	%esi, %esi
	movl	$438, %edx
	xorl	%eax, %eax
	call	open
	jmp	.L1499
.L1505:
	movq	16(%rax), %rax
	testq	%rax, %rax
	je	.L1393
	movq	(%rax), %rsi
	movq	%rsi, -376(%rbp)
	jmp	.L1393
.L1491:
	movzbl	(%r14), %eax
.L1373:
	cmpb	$62, %al
	jne	.L1359
	jmp	.L1497
.L1490:
	movl	$62, %eax
	jmp	.L1373
.L1489:
	movzbl	(%r15), %eax
	jmp	.L1373
.L1342:
	movq	%r12, %rdx
	movq	%r15, %rdi
	subq	%r15, %rdx
	addq	$16, %rdx
	andq	$-16, %rdx
	subq	%rdx, %rsp
	cmpq	%r12, %rdi
	movq	%rsp, %r15
	movq	%rsp, %rcx
	je	.L1344
.L1482:
	movzbl	(%rdi), %eax
	cmpb	$34, %al
	je	.L1347
	.p2align 4,,7
.L1350:
	incq	%rdi
	movb	%al, (%rcx)
	incq	%rcx
	cmpq	%r12, %rdi
	je	.L1347
	movzbl	(%rdi), %eax
	cmpb	$34, %al
	jne	.L1350
.L1347:
	leaq	1(%rdi), %rdx
	cmpq	%r12, %rdx
	je	.L1344
	movzbq	1(%rdi), %rsi
	cmpb	$0, is_hor_space(%rsi)
	je	.L1353
	.p2align 4,,7
.L1356:
	incq	%rdx
	cmpq	%r12, %rdx
	je	.L1359
	movzbq	(%rdx), %rdi
	cmpb	$0, is_hor_space(%rdi)
	jne	.L1356
.L1353:
	cmpq	%r12, %rdx
	je	.L1359
	cmpb	$34, (%rdx)
	jne	.L1359
	leaq	1(%rdx), %rdi
	cmpq	%r12, %rdi
	jne	.L1482
.L1344:
	movb	$0, (%rcx)
	leaq	1(%rcx), %r14
	movl	ignore_srcdir(%rip), %r12d
	testl	%r12d, %r12d
	jne	.L1492
	movslq	indepth(%rip),%r13
	leaq	(%r13,%r13,4), %rax
	salq	$4, %rax
	addq	$instack, %rax
	cmpq	$instack, %rax
	jb	.L1492
.L1370:
	movq	8(%rax), %r12
	testq	%r12, %r12
	jne	.L1511
	subq	$80, %rax
	cmpq	$instack, %rax
	jae	.L1370
	jmp	.L1492
.L1511:
	movq	-376(%rbp), %r9
	leaq	-80(%rbp), %rcx
	movq	%r12, %rdi
	movl	$47, %esi
	movq	%rcx, -376(%rbp)
	movq	%r9, -80(%rbp)
	call	rindex
	testq	%rax, %rax
	jne	.L1512
	movq	$0, -72(%rbp)
	jmp	.L1492
.L1512:
	movl	%eax, %r13d
	movq	%r12, %rsi
	subl	%r12d, %r13d
	movslq	%r13d,%r10
	movslq	%r13d,%rbx
	addq	$16, %r10
	movq	%rbx, %rdx
	andq	$-16, %r10
	subq	%r10, %rsp
	movq	%rsp, %rdi
	movq	%rsp, -72(%rbp)
	call	strncpy
	addq	-72(%rbp), %rbx
	movb	$0, (%rbx)
	movl	max_include_len(%rip), %edx
	cmpl	%edx, %r13d
	jle	.L1341
	movl	%r13d, %edx
	movl	%r13d, max_include_len(%rip)
	jmp	.L1341
	.p2align 6,,7
.L1486:
	movzbl	(%r13), %ecx
	jmp	.L1467
.L1503:
	movq	$_iob+112, %r14
	movl	$.LC122, %edi
	xorl	%eax, %eax
	movl	$1, import_warning.1(%rip)
	call	warning
	movq	%r14, %rdi
	movl	$.LC123, %esi
	xorl	%eax, %eax
	call	fprintf
	xorl	%eax, %eax
	movl	$.LC124, %esi
	movq	%r14, %rdi
	call	fprintf
	xorl	%eax, %eax
	movl	$.LC125, %esi
	movq	%r14, %rdi
	call	fprintf
	xorl	%eax, %eax
	movl	$.LC126, %esi
	movq	%r14, %rdi
	call	fprintf
	xorl	%eax, %eax
	movl	$.LC127, %esi
	movq	%r14, %rdi
	call	fprintf
	xorl	%eax, %eax
	movl	$.LC128, %esi
	movq	%r14, %rdi
	call	fprintf
	xorl	%eax, %eax
	movl	$.LC129, %esi
	movq	%r14, %rdi
	call	fprintf
	xorl	%eax, %eax
	movl	$.LC130, %esi
	movq	%r14, %rdi
	call	fprintf
	xorl	%eax, %eax
	movl	$.LC131, %esi
	movq	%r14, %rdi
	call	fprintf
	xorl	%eax, %eax
	movl	$.LC132, %esi
	movq	%r14, %rdi
	call	fprintf
	jmp	.L1330
.L1502:
	xorl	%eax, %eax
	call	abort
.LFE6:
.Lfe6:
	.size	do_include,.Lfe6-do_include
	.align 2
	.p2align 4,,15
	.type	redundant_include_p,@function
redundant_include_p:
.LFB7:
	pushq	%rbp
.LCFI43:
	movq	%rdi, %rbp
	pushq	%rbx
.LCFI44:
	subq	$8, %rsp
.LCFI45:
	movq	all_include_files(%rip), %rbx
	testq	%rbx, %rbx
	jne	.L1519
.L1521:
	xorl	%edx, %edx
.L1513:
	addq	$8, %rsp
	movl	%edx, %eax
	popq	%rbx
	popq	%rbp
	ret
	.p2align 6,,7
.L1519:
	movq	8(%rbx), %rsi
	movq	%rbp, %rdi
	call	strcmp
	testl	%eax, %eax
	jne	.L1516
	movq	16(%rbx), %rdi
	testq	%rdi, %rdi
	jne	.L1522
.L1516:
	movq	(%rbx), %rbx
	testq	%rbx, %rbx
	jne	.L1519
	jmp	.L1521
	.p2align 6,,7
.L1522:
	movl	$-1, %esi
	xorl	%eax, %eax
	movl	%esi, %edx
	call	lookup
	movl	$1, %edx
	testq	%rax, %rax
	je	.L1516
	jmp	.L1513
.LFE7:
.Lfe7:
	.size	redundant_include_p,.Lfe7-redundant_include_p
	.align 2
	.p2align 4,,15
	.type	is_system_include,@function
is_system_include:
.LFB8:
	pushq	%r13
.LCFI46:
	movq	%rdi, %r13
	pushq	%r12
.LCFI47:
	pushq	%rbp
.LCFI48:
	pushq	%rbx
.LCFI49:
	subq	$8, %rsp
.LCFI50:
	movq	first_system_include(%rip), %rbp
	testq	%rbp, %rbp
	je	.L1532
	.p2align 4,,7
.L1530:
	movq	8(%rbp), %rbx
	testq	%rbx, %rbx
	jne	.L1533
.L1526:
	movq	(%rbp), %rbp
	testq	%rbp, %rbp
	jne	.L1530
.L1532:
	xorl	%eax, %eax
.L1523:
	addq	$8, %rsp
	popq	%rbx
	popq	%rbp
	popq	%r12
	popq	%r13
	ret
	.p2align 6,,7
.L1533:
	movq	%rbx, %rdi
	call	strlen
	movq	%r13, %rsi
	movq	%rbx, %rdi
	mov	%eax, %r12d
	movq	%r12, %rdx
	call	strncmp
	testl	%eax, %eax
	jne	.L1526
	cmpb	$47, (%r12,%r13)
	jne	.L1526
	movl	$1, %eax
	jmp	.L1523
.LFE8:
.Lfe8:
	.size	is_system_include,.Lfe8-is_system_include
	.align 2
	.p2align 4,,15
	.type	finclude,@function
finclude:
.LFB9:
	pushq	%r15
.LCFI51:
	pushq	%r14
.LCFI52:
	movl	%edi, %r14d
	pushq	%r13
.LCFI53:
	pushq	%r12
.LCFI54:
	pushq	%rbp
.LCFI55:
	movq	%r8, %rbp
	pushq	%rbx
.LCFI56:
	movl	%ecx, %ebx
	subq	$40, %rsp
.LCFI57:
	movl	indepth(%rip), %eax
	movq	%rsi, 16(%rsp)
	movq	%rdx, 8(%rsp)
	movl	$0, 4(%rsp)
	cmpl	$198, %eax
	jle	.L1535
	cltq
	leaq	(%rax,%rax,4), %rdx
	xorl	%eax, %eax
	salq	$4, %rdx
	movl	instack+24(%rdx), %edi
	call	line_for_error
	movl	$.LC135, %esi
	movl	%eax, %edi
	xorl	%eax, %eax
	call	error_with_line
.L1534:
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	popq	%r12
	popq	%r13
	popq	%r14
	popq	%r15
	ret
	.p2align 6,,7
.L1535:
	xorl	%eax, %eax
	leaq	36(%rsp), %rsi
	leaq	24(%rsp), %rdx
	call	file_size_and_mode
	testl	%eax, %eax
	js	.L1560
	movslq	indepth(%rip),%rdi
	movl	36(%rsp), %eax
	movq	16(%rsp), %rcx
	movq	if_stack(%rip), %rdx
	andl	$61440, %eax
	leaq	(%rdi,%rdi,4), %rsi
	salq	$4, %rsi
	cmpl	$32768, %eax
	leaq	instack+80(%rsi), %r12
	movq	$0, 24(%r12)
	movq	$0, 72(%r12)
	movq	$0, 32(%r12)
	movq	$0, 40(%r12)
	movq	$0, 48(%r12)
	movq	$0, 64(%r12)
	movq	%rcx, (%r12)
	movq	%rcx, 8(%r12)
	movl	$0, 28(%r12)
	movl	$1, 24(%r12)
	movq	%rdx, 56(%r12)
	movb	%bl, 72(%r12)
	movq	%rbp, 16(%r12)
	je	.L1561
	movl	$2002, %edi
	xorl	%eax, %eax
	movq	$0, 24(%rsp)
	call	xmalloc
	movl	$2000, %r15d
	movl	$2000, %ebp
	movq	%rax, %r13
	movq	%rax, 32(%r12)
	movq	%rax, %rbx
	movq	24(%rsp), %rdx
	.p2align 4,,7
.L1546:
	movq	%rbp, %r8
	xorl	%eax, %eax
	movl	%r14d, %edi
	subq	%rdx, %r8
	movq	%rbx, %rsi
	movq	%r8, %rdx
	call	read
	cltq
	testq	%rax, %rax
	js	.L1543
	testq	%rax, %rax
	je	.L1547
	movq	24(%rsp), %rdx
	addq	%rax, %rbx
	addq	%rax, %rdx
	cmpq	%rdx, %rbp
	movq	%rdx, 24(%rsp)
	jne	.L1546
	addl	%r15d, %r15d
	movq	%r13, %rdi
	xorl	%eax, %eax
	leal	2(%r15), %esi
	movslq	%r15d,%rbp
	call	xrealloc
	movq	24(%rsp), %rdx
	movq	%rax, %r13
	movq	%rax, 32(%r12)
	leaq	(%rdx,%rax), %rbx
	jmp	.L1546
.L1547:
	movq	32(%r12), %rbx
	movl	24(%rsp), %eax
	movq	%rbx, 40(%r12)
	movl	%eax, 28(%r12)
.L1545:
	xorl	%eax, %eax
	movl	%r14d, %edi
	call	close
	movl	no_trigraphs(%rip), %eax
	incl	input_file_stack_tick(%rip)
	incl	indepth(%rip)
	testl	%eax, %eax
	je	.L1562
.L1552:
	movl	28(%r12), %edx
	testl	%edx, %edx
	movl	%edx, %esi
	jle	.L1558
	movq	32(%r12), %rcx
	movslq	%edx,%rbp
	cmpb	$10, -1(%rbp,%rcx)
	je	.L1555
.L1554:
	movslq	%esi,%r10
	movb	$10, (%r10,%rcx)
	movq	32(%r12), %rcx
	movl	$1, 4(%rsp)
	movl	28(%r12), %eax
	incl	%eax
	movl	%eax, 28(%r12)
	movl	%eax, %edx
.L1553:
	movslq	%edx,%r11
	xorl	%eax, %eax
	movq	%r12, %rdi
	movb	$0, (%r11,%rcx)
	xorl	%edx, %edx
	movl	$1, %ecx
	movq	8(%rsp), %rsi
	call	output_line_command
	movq	8(%rsp), %rdi
	xorl	%esi, %esi
	xorl	%eax, %eax
	call	rescan
	movl	pedantic(%rip), %r13d
	testl	%r13d, %r13d
	je	.L1556
	movl	4(%rsp), %r14d
	testl	%r14d, %r14d
	jne	.L1564
.L1556:
	movl	indepth(%rip), %edx
	incl	input_file_stack_tick(%rip)
	movl	$2, %ecx
	movq	8(%rsp), %rsi
	xorl	%eax, %eax
	decl	%edx
	movslq	%edx,%r15
	movl	%edx, indepth(%rip)
	xorl	%edx, %edx
	leaq	(%r15,%r15,4), %rdi
	salq	$4, %rdi
	addq	$instack, %rdi
	call	output_line_command
.L1559:
	movq	32(%r12), %rdi
	xorl	%eax, %eax
	call	free
	jmp	.L1534
.L1564:
	movl	$.LC89, %edi
	xorl	%eax, %eax
	call	pedwarn
	jmp	.L1556
.L1555:
	cmpl	$1, %esi
	jle	.L1553
	movslq	%esi,%r9
	cmpb	$92, -2(%r9,%rcx)
	jne	.L1553
	jmp	.L1554
.L1558:
	movq	32(%r12), %rcx
	jmp	.L1555
.L1562:
	movq	%r12, %rdi
	xorl	%eax, %eax
	call	trigraph_pcp
	jmp	.L1552
.L1543:
	movq	16(%rsp), %rdi
	xorl	%eax, %eax
	call	perror_with_name
	movl	%r14d, %edi
	xorl	%eax, %eax
	call	close
	jmp	.L1559
.L1561:
	movq	24(%rsp), %rdi
	xorl	%eax, %eax
	addq	$2, %rdi
	call	xmalloc
	movq	24(%rsp), %rdx
	movq	%rax, 32(%r12)
	movq	%rax, 40(%r12)
	testq	%rdx, %rdx
	jle	.L1545
	.p2align 4,,7
.L1544:
	movslq	28(%r12),%rsi
	xorl	%eax, %eax
	movl	%r14d, %edi
	addq	32(%r12), %rsi
	call	read
	cltq
	testq	%rax, %rax
	jle	.L1565
	movq	24(%rsp), %rdx
	addl	%eax, 28(%r12)
	subq	%rax, %rdx
	testq	%rdx, %rdx
	movq	%rdx, 24(%rsp)
	jg	.L1544
	jmp	.L1545
.L1565:
	testq	%rax, %rax
	jne	.L1543
	jmp	.L1545
.L1560:
	movq	16(%rsp), %rdi
	xorl	%eax, %eax
	call	perror_with_name
	movl	%r14d, %edi
	xorl	%eax, %eax
	call	close
	jmp	.L1534
.LFE9:
.Lfe9:
	.size	finclude,.Lfe9-finclude
	.align 2
	.p2align 4,,15
	.type	lookup_import,@function
lookup_import:
.LFB10:
	pushq	%r12
.LCFI58:
	xorl	%ecx, %ecx
	movq	%rdi, %rdx
	pushq	%rbp
.LCFI59:
	movq	%rdi, %rbp
	pushq	%rbx
.LCFI60:
	subq	$80, %rsp
.LCFI61:
	movzbl	(%rdi), %eax
	testb	%al, %al
	je	.L1589
	.p2align 4,,7
.L1570:
	incq	%rdx
	movsbl	%al,%ebx
	movzbl	(%rdx), %eax
	addl	%ebx, %ecx
	testb	%al, %al
	jne	.L1570
.L1589:
	movslq	%ecx,%rsi
	movl	%ecx, %eax
	imulq	$-2078209981, %rsi, %rsi
	cltd
	shrq	$32, %rsi
	leal	(%rsi,%rcx), %ebx
	sarl	$4, %ebx
	subl	%edx, %ebx
	movl	%ebx, %eax
	sall	$5, %eax
	subl	%ebx, %eax
	subl	%eax, %ecx
	movslq	%ecx,%rdx
	movq	import_hash_table(,%rdx,8), %rbx
	testq	%rbx, %rbx
	je	.L1591
	.p2align 4,,7
.L1576:
	movq	(%rbx), %rsi
	movq	%rbp, %rdi
	movl	$-2, %r12d
	call	strcmp
	testl	%eax, %eax
	je	.L1566
	movq	16(%rbx), %rbx
	testq	%rbx, %rbx
	jne	.L1576
.L1591:
	xorl	%esi, %esi
	xorl	%eax, %eax
	movq	%rbp, %rdi
	movl	$438, %edx
	call	open
	testl	%eax, %eax
	movl	%eax, %r12d
	js	.L1566
	movl	%eax, %edi
	movq	%rsp, %rsi
	xorl	%eax, %eax
	call	fstat
	movl	$import_hash_table, %r9d
	xorl	%r10d, %r10d
	.p2align 4,,7
.L1587:
	movq	(%r9), %r11
	testq	%r11, %r11
	je	.L1595
	leaq	4(%rsp), %r8
	.p2align 4,,7
.L1586:
	movl	$4, %ebp
	leaq	8(%r11), %rsi
	movq	%r8, %rdi
	cld
	movq	%rbp, %rcx
	repz
	cmpsb
	jne	.L1585
	movl	(%rsp), %eax
	cmpl	%eax, 12(%r11)
	je	.L1596
.L1585:
	movq	16(%r11), %r11
	testq	%r11, %r11
	jne	.L1586
.L1595:
	incl	%r10d
	addq	$8, %r9
	cmpl	$30, %r10d
	jle	.L1587
.L1566:
	addq	$80, %rsp
	movl	%r12d, %eax
	popq	%rbx
	popq	%rbp
	popq	%r12
	ret
.L1596:
	movl	%r12d, %edi
	xorl	%eax, %eax
	movl	$-2, %r12d
	call	close
	jmp	.L1566
.LFE10:
.Lfe10:
	.size	lookup_import,.Lfe10-lookup_import
	.align 2
	.p2align 4,,15
	.type	add_import,@function
add_import:
.LFB11:
	pushq	%r13
.LCFI62:
	xorl	%ecx, %ecx
	movq	%rsi, %rdx
	pushq	%r12
.LCFI63:
	pushq	%rbp
.LCFI64:
	movq	%rsi, %rbp
	pushq	%rbx
.LCFI65:
	subq	$88, %rsp
.LCFI66:
	movzbl	(%rsi), %eax
	testb	%al, %al
	je	.L1604
	.p2align 4,,7
.L1601:
	incq	%rdx
	movsbl	%al,%ebx
	movzbl	(%rdx), %eax
	addl	%ebx, %ecx
	testb	%al, %al
	jne	.L1601
.L1604:
	movslq	%ecx,%rsi
	movl	%ecx, %eax
	movl	%ecx, %r12d
	imulq	$-2078209981, %rsi, %rsi
	cltd
	shrq	$32, %rsi
	leal	(%rsi,%rcx), %ebx
	movq	%rsp, %rsi
	sarl	$4, %ebx
	subl	%edx, %ebx
	movl	%ebx, %eax
	sall	$5, %eax
	subl	%ebx, %eax
	subl	%eax, %r12d
	xorl	%eax, %eax
	call	fstat
	xorl	%eax, %eax
	movl	$24, %edi
	call	xmalloc
	movq	%rbp, %rdi
	movq	%rax, %rbx
	call	strlen
	leaq	1(%rax), %rdi
	xorl	%eax, %eax
	call	xmalloc
	movq	%rbp, %rsi
	movq	%rax, %rdi
	movq	%rax, (%rbx)
	call	strcpy
	xorl	%eax, %eax
	movl	$4, %edx
	leaq	4(%rsp), %rdi
	leaq	8(%rbx), %rsi
	call	bcopy
	movslq	%r12d,%rdx
	movl	(%rsp), %eax
	salq	$3, %rdx
	movq	import_hash_table(%rdx), %rcx
	movl	%eax, 12(%rbx)
	movq	%rcx, 16(%rbx)
	movq	%rbx, import_hash_table(%rdx)
	addq	$88, %rsp
	popq	%rbx
	popq	%rbp
	popq	%r12
	popq	%r13
	ret
.LFE11:
.Lfe11:
	.size	add_import,.Lfe11-add_import
	.align 2
	.p2align 4,,15
	.type	check_precompiled,@function
check_precompiled:
.LFB12:
	pushq	%r14
.LCFI67:
	movq	%rdx, %r14
	pushq	%r13
.LCFI68:
	movl	%edi, %r13d
	pushq	%r12
.LCFI69:
	xorl	%r12d, %r12d
	pushq	%rbp
.LCFI70:
	pushq	%rbx
.LCFI71:
	subq	$16, %rsp
.LCFI72:
	cmpq	$0, pcp_outfile(%rip)
	je	.L1629
.L1628:
	xorl	%edx, %edx
.L1605:
	addq	$16, %rsp
	movq	%rdx, %rax
	popq	%rbx
	popq	%rbp
	popq	%r12
	popq	%r13
	popq	%r14
	ret
	.p2align 6,,7
.L1629:
	movq	%rsp, %rdx
	xorl	%eax, %eax
	leaq	12(%rsp), %rsi
	call	file_size_and_mode
	xorl	%edx, %edx
	testl	%eax, %eax
	js	.L1605
	movl	12(%rsp), %eax
	andl	$61440, %eax
	cmpl	$32768, %eax
	jne	.L1608
	movq	(%rsp), %rdi
	xorl	%eax, %eax
	addq	$2, %rdi
	call	xmalloc
	movq	(%rsp), %rdx
	movq	%rax, %rbp
	testq	%rdx, %rdx
	jle	.L1627
.L1615:
	movslq	%r12d,%rbx
	xorl	%eax, %eax
	movl	%r13d, %edi
	leaq	(%rbx,%rbp), %rsi
	call	read
	testl	%eax, %eax
	js	.L1613
	testl	%eax, %eax
	je	.L1616
	movq	(%rsp), %rdx
	addl	%eax, %r12d
	cltq
	movslq	%r12d,%rbx
	subq	%rax, %rdx
	testq	%rdx, %rdx
	movq	%rdx, (%rsp)
	jg	.L1615
.L1616:
	testl	%r12d, %r12d
	jle	.L1617
	leaq	(%rbx,%rbp), %rax
	cmpb	$10, -1(%rax)
	je	.L1617
	incl	%r12d
	movb	$10, (%rax)
	movslq	%r12d,%rbx
.L1617:
	leaq	(%rbx,%rbp), %rdx
	xorl	%eax, %eax
	movq	%rbp, %rdi
	movb	$0, (%rdx)
	movq	%rdx, (%r14)
	call	check_preconditions
	testl	%eax, %eax
	je	.L1613
	cmpb	$0, (%rbp)
	je	.L1626
	.p2align 4,,7
.L1623:
	incq	%rbp
	cmpb	$0, (%rbp)
	jne	.L1623
.L1626:
	leaq	1(%rbp), %rdx
	jmp	.L1605
	.p2align 6,,7
.L1613:
	movq	%rbp, %rdi
	xorl	%eax, %eax
	call	free
	jmp	.L1628
.L1627:
	xorl	%ebx, %ebx
	jmp	.L1616
.L1608:
	xorl	%eax, %eax
	call	abort
.LFE12:
.Lfe12:
	.size	check_precompiled,.Lfe12-check_precompiled
	.section	.rodata.str1.32
	.align 32
.LC140:
	.string	"Bad format encountered while reading precompiled file"
	.text
	.align 2
	.p2align 4,,15
	.type	check_preconditions,@function
check_preconditions:
.LFB13:
	pushq	%rbp
.LCFI73:
	pushq	%rbx
.LCFI74:
	movq	%rdi, %rbx
	subq	$40, %rsp
.LCFI75:
	cmpb	$0, (%rdi)
	jne	.L1651
.L1653:
	movl	$1, %edx
.L1630:
	addq	$40, %rsp
	movl	%edx, %eax
	popq	%rbx
	popq	%rbp
	ret
	.p2align 6,,7
.L1651:
	movq	%rbx, %rdi
	movl	$10, %esi
	call	index
	cmpb	$35, (%rbx)
	leaq	1(%rbx), %r8
	movq	%rax, %rbp
	jne	.L1640
	movl	$.LC5, %edi
	movq	%r8, %rsi
	movl	$6, %ecx
	cld
	repz
	cmpsb
	je	.L1659
	movl	$.LC16, %edi
	movq	%r8, %rsi
	movl	$5, %ecx
	cld
	repz
	cmpsb
	jne	.L1640
	movsbq	6(%rbx),%rcx
	leaq	6(%rbx), %rdx
	cmpb	$0, is_hor_space(%rcx)
	je	.L1655
	.p2align 4,,7
.L1644:
	incq	%rdx
	movsbq	(%rdx),%rbx
	cmpb	$0, is_hor_space(%rbx)
	jne	.L1644
.L1655:
	movsbq	(%rdx),%rsi
	movq	%rdx, %rdi
	cmpb	$0, is_idchar(%rsi)
	je	.L1657
	.p2align 4,,7
.L1648:
	incq	%rdx
	movsbq	(%rdx),%r8
	cmpb	$0, is_idchar(%r8)
	jne	.L1648
.L1657:
	movl	%edx, %esi
	xorl	%eax, %eax
	movl	$-1, %edx
	subl	%edi, %esi
	call	lookup
	xorl	%edx, %edx
	testq	%rax, %rax
	jne	.L1630
.L1639:
	cmpb	$0, 1(%rbp)
	leaq	1(%rbp), %rbx
	jne	.L1651
	jmp	.L1653
.L1640:
	movl	$.LC140, %edi
	xorl	%eax, %eax
	call	error
.L1658:
	xorl	%edx, %edx
	jmp	.L1630
	.p2align 6,,7
.L1659:
	movq	%rax, %rdx
	xorl	%ecx, %ecx
	leaq	7(%rbx), %rsi
	xorl	%eax, %eax
	movq	%rsp, %rdi
	call	create_definition
	cmpq	$0, (%rsp)
	je	.L1660
	movq	8(%rsp), %rdi
	movl	16(%rsp), %esi
	xorl	%eax, %eax
	movl	$-1, %edx
	call	lookup
	testq	%rax, %rax
	je	.L1658
	movl	24(%rax), %edx
	leal	-30(%rdx), %ebx
	cmpl	$1, %ebx
	ja	.L1658
	cmpl	$31, %edx
	jne	.L1639
	movq	40(%rax), %rsi
	movq	(%rsp), %rdi
	xorl	%eax, %eax
	call	compare_defs
	testl	%eax, %eax
	jne	.L1639
	movq	(%rsp), %rax
	cmpl	$2, 4(%rax)
	jne	.L1658
	movq	16(%rax), %rax
	cmpb	$10, (%rax)
	jne	.L1658
	cmpb	$32, 1(%rax)
	je	.L1639
	jmp	.L1658
	.p2align 6,,7
.L1660:
	xorl	%eax, %eax
	call	abort
.LFE13:
.Lfe13:
	.size	check_preconditions,.Lfe13-check_preconditions
	.align 2
	.p2align 4,,15
	.type	pcfinclude,@function
pcfinclude:
.LFB14:
	pushq	%rbp
.LCFI76:
	movq	%rsp, %rbp
.LCFI77:
	pushq	%r15
.LCFI78:
	leaq	4(%rdi), %r15
	pushq	%r14
.LCFI79:
	pushq	%r13
.LCFI80:
	pushq	%r12
.LCFI81:
	pushq	%rbx
.LCFI82:
	subq	$376, %rsp
.LCFI83:
	movq	%rcx, -384(%rbp)
	movq	%rdx, -376(%rbp)
	movzbl	(%rdi), %ecx
	movzbl	1(%rdi), %esi
	movzbl	2(%rdi), %ebx
	movzbl	3(%rdi), %eax
	sall	$8, %ecx
	orl	%esi, %ecx
	sall	$8, %ecx
	orl	%ebx, %ecx
	sall	$8, %ecx
	orl	%eax, %ecx
	decl	%ecx
	movl	%ecx, -408(%rbp)
	incl	%ecx
	je	.L1706
.L1704:
	movl	%r15d, %edx
	andl	$3, %edx
	je	.L1665
	movl	$4, %eax
	subl	%edx, %eax
	cltq
	addq	%rax, %r15
.L1665:
	movq	%r15, -392(%rbp)
	leaq	48(%r15), %rcx
	cmpb	$0, 48(%r15)
	movq	%rcx, %rsi
	je	.L1708
	.p2align 4,,7
.L1670:
	incq	%rcx
	cmpb	$0, (%rcx)
	jne	.L1670
.L1708:
	movl	assertions_flag(%rip), %eax
	movl	%ecx, %ebx
	leaq	1(%rcx), %r13
	subl	%esi, %ebx
	movl	indepth(%rip), %r14d
	movl	$0, assertions_flag(%rip)
	testl	%ebx, %ebx
	movl	%eax, -396(%rbp)
	js	.L1720
	movslq	%ebx,%rdx
	addq	$16, %rdx
	andq	$-16, %rdx
	subq	%rdx, %rsp
	cmpq	%rcx, %rsi
	movq	%rsp, %r12
	movq	%rsp, %rdx
	je	.L1710
	.p2align 4,,7
.L1675:
	movzbl	(%rsi), %edi
	incq	%rsi
	movb	%dil, (%rdx)
	incq	%rdx
	cmpq	%rcx, %rsi
	jne	.L1675
.L1710:
	movslq	%ebx,%rcx
	leal	100(%rbx,%rbx), %edi
	xorl	%eax, %eax
	movb	$0, (%rcx,%r12)
	movl	%edi, -260(%rbp)
	call	xmalloc
	movq	$0, -224(%rbp)
	movq	$0, -240(%rbp)
	movq	%rax, -256(%rbp)
	movq	%rax, -248(%rbp)
	movq	$0, -288(%rbp)
	movl	indepth(%rip), %eax
	cmpl	$198, %eax
	jle	.L1676
	cltq
	leaq	(%rax,%rax,4), %r8
	xorl	%eax, %eax
	salq	$4, %r8
	movl	instack+24(%r8), %edi
	call	line_for_error
	movl	$.LC135, %esi
	movl	%eax, %edi
	xorl	%eax, %eax
	call	error_with_line
.L1717:
	movq	-288(%rbp), %rbx
	movq	-280(%rbp), %r14
	movq	-272(%rbp), %r12
	movq	-264(%rbp), %r11
	movq	-256(%rbp), %r10
	movq	-248(%rbp), %r9
	movq	-240(%rbp), %r8
	movq	-224(%rbp), %rdi
	movq	%rbx, -208(%rbp)
	movq	%r14, -200(%rbp)
	movq	%r12, -192(%rbp)
	movq	%r11, -184(%rbp)
	movq	%r10, -176(%rbp)
	movq	%r9, -168(%rbp)
	movq	-232(%rbp), %rcx
	movq	%r8, -160(%rbp)
	movq	-216(%rbp), %rdx
	movq	-208(%rbp), %rsi
	movq	-200(%rbp), %rbx
	movq	-192(%rbp), %r14
	movq	%rdi, -144(%rbp)
	movq	-184(%rbp), %r12
	movq	-168(%rbp), %r11
	movq	%rcx, -152(%rbp)
	movq	-176(%rbp), %rdi
	movq	-160(%rbp), %r10
	movq	%rdx, -136(%rbp)
	movq	%rsi, -128(%rbp)
	movq	%rbx, -120(%rbp)
	movq	%r14, -112(%rbp)
	movq	%r12, -104(%rbp)
	movq	%r11, -88(%rbp)
	leaq	32(%r15), %rbx
	movq	%rdi, -96(%rbp)
	movq	%r10, -80(%rbp)
	movq	stringlist_tailp(%rip), %rsi
	movq	-152(%rbp), %r9
	movq	-144(%rbp), %r8
	movq	%rbx, stringlist_tailp(%rip)
	movq	-136(%rbp), %rcx
	movl	-100(%rbp), %eax
	movq	-376(%rbp), %rdx
	movq	%r9, -72(%rbp)
	movq	%r8, -64(%rbp)
	movq	%rcx, -56(%rbp)
	movq	$0, 32(%r15)
	movl	$0, 12(%r15)
	movq	%rdi, (%r15)
	movq	%rdx, 24(%r15)
	movl	%eax, 8(%r15)
	movl	outbuf+40(%rip), %eax
	movq	%r15, (%rsi)
	subl	outbuf+32(%rip), %eax
	movl	%eax, 40(%r15)
	leaq	4(%r13), %r15
	movzbl	3(%r13), %r11d
	movzbl	(%r13), %edx
	movzbl	1(%r13), %r14d
	movzbl	2(%r13), %r12d
	sall	$8, %edx
	orl	%r14d, %edx
	sall	$8, %edx
	orl	%r12d, %edx
	sall	$8, %edx
	orl	%r11d, %edx
	cmpl	$-1, %edx
	je	.L1721
	decl	%edx
	movl	%edx, -412(%rbp)
	incl	%edx
	je	.L1662
	.p2align 4,,7
.L1703:
	leaq	16(%r15), %rbx
	movq	%rbx, %rdi
	call	strlen
	movq	-392(%rbp), %rsi
	leaq	(%rax,%rbx), %r14
	movl	indepth(%rip), %eax
	movl	%r14d, %r12d
	subl	%ebx, %r12d
	movq	%rsi, (%r15)
	movl	%eax, -400(%rbp)
	testl	%r12d, %r12d
	movl	assertions_flag(%rip), %eax
	movl	$0, assertions_flag(%rip)
	movl	%eax, -404(%rbp)
	js	.L1720
	movslq	%r12d,%rdx
	addq	$16, %rdx
	andq	$-16, %rdx
	subq	%rdx, %rsp
	cmpq	%r14, %rbx
	movq	%rsp, %r13
	movq	%rsp, %rdx
	je	.L1713
	.p2align 4,,7
.L1689:
	movzbl	(%rbx), %edi
	incq	%rbx
	movb	%dil, (%rdx)
	incq	%rdx
	cmpq	%r14, %rbx
	jne	.L1689
.L1713:
	movslq	%r12d,%rcx
	leal	100(%r12,%r12), %edi
	xorl	%eax, %eax
	movb	$0, (%rcx,%r13)
	movl	%edi, -340(%rbp)
	call	xmalloc
	movq	$0, -304(%rbp)
	movq	$0, -320(%rbp)
	movq	%rax, -336(%rbp)
	movq	%rax, -328(%rbp)
	movq	$0, -368(%rbp)
	movl	indepth(%rip), %eax
	cmpl	$198, %eax
	jle	.L1690
	cltq
	leaq	(%rax,%rax,4), %r8
	xorl	%eax, %eax
	salq	$4, %r8
	movl	instack+24(%r8), %edi
	call	line_for_error
	movl	$.LC135, %esi
	movl	%eax, %edi
	xorl	%eax, %eax
	call	error_with_line
.L1718:
	movq	-368(%rbp), %r8
	movq	-360(%rbp), %rcx
	movq	-352(%rbp), %rdi
	movq	-344(%rbp), %rdx
	movq	-336(%rbp), %rsi
	movq	-320(%rbp), %rbx
	movq	-312(%rbp), %r12
	movq	%r8, -208(%rbp)
	movq	%rcx, -200(%rbp)
	movq	%rdi, -192(%rbp)
	movq	%rdx, -184(%rbp)
	movq	-328(%rbp), %r13
	movq	%rsi, -176(%rbp)
	movq	%rbx, -160(%rbp)
	movq	-304(%rbp), %r11
	movq	%r12, -152(%rbp)
	movq	-296(%rbp), %r10
	movq	-208(%rbp), %r9
	movq	-176(%rbp), %r12
	movq	-200(%rbp), %r8
	movq	%r13, -168(%rbp)
	movq	-192(%rbp), %rcx
	movq	-184(%rbp), %rdi
	movq	%r11, -144(%rbp)
	movq	-160(%rbp), %rdx
	movq	-152(%rbp), %rsi
	movq	%r10, -136(%rbp)
	movq	%r9, -128(%rbp)
	movq	%r8, -120(%rbp)
	movq	%r12, -96(%rbp)
	movq	%rcx, -112(%rbp)
	movq	%rdi, -104(%rbp)
	movq	%rdx, -80(%rbp)
	movq	%rsi, -72(%rbp)
	movq	%r12, -88(%rbp)
	movq	-144(%rbp), %r13
	movq	-136(%rbp), %rbx
	movq	%r13, -64(%rbp)
	movq	%rbx, -56(%rbp)
	movzbq	(%r12), %r11
	cmpb	$0, is_hor_space(%r11)
	je	.L1715
	.p2align 4,,7
.L1696:
	movq	-88(%rbp), %r10
	leaq	1(%r10), %rax
	movq	%rax, -88(%rbp)
	movzbq	1(%r10), %r9
	cmpb	$0, is_hor_space(%r9)
	jne	.L1696
.L1715:
	movq	-88(%rbp), %rdi
	movzbq	(%rdi), %r11
	cmpb	$0, is_idstart(%r11)
	je	.L1716
	movslq	-100(%rbp),%rbx
	movq	-96(%rbp), %rdx
	leaq	(%rbx,%rdx), %r12
	cmpq	%r12, %rdi
	je	.L1698
	movl	$-1, %esi
	xorl	%eax, %eax
	movl	%esi, %edx
	call	lookup
	testq	%rax, %rax
	je	.L1723
	cmpl	$34, 24(%rax)
	je	.L1724
	movq	-392(%rbp), %rsi
	movl	$1, 12(%rsi)
.L1719:
	movq	-96(%rbp), %rdx
.L1683:
	xorl	%eax, %eax
	movq	%rdx, %rdi
	leaq	1(%r14), %r15
	call	free
	decl	-412(%rbp)
	cmpl	$-1, -412(%rbp)
	jne	.L1703
.L1662:
	decl	-408(%rbp)
	cmpl	$-1, -408(%rbp)
	jne	.L1704
.L1706:
	movslq	indepth(%rip),%r14
	movq	-384(%rbp), %rsi
	xorl	%edx, %edx
	movl	$1, %ecx
	xorl	%eax, %eax
	leaq	(%r14,%r14,4), %rdi
	salq	$4, %rdi
	addq	$instack, %rdi
	call	output_line_command
	leaq	-40(%rbp), %rsp
	popq	%rbx
	popq	%r12
	popq	%r13
	popq	%r14
	popq	%r15
	leave
	ret
.L1724:
	movq	40(%rax), %r13
	movq	%r13, 8(%r15)
	movq	%r15, 40(%rax)
	jmp	.L1719
.L1723:
	movq	-88(%rbp), %rdi
	movl	$-1, %esi
	movq	$0, 8(%r15)
	movl	$34, %edx
	xorl	%ecx, %ecx
	movq	%r15, %r8
	movl	%esi, %r9d
	xorl	%eax, %eax
	call	install
	jmp	.L1719
.L1698:
	movq	-392(%rbp), %r15
	movl	$1, 12(%r15)
	jmp	.L1683
.L1716:
	movq	-96(%rbp), %rdx
	jmp	.L1698
.L1690:
	incl	%eax
	movq	if_stack(%rip), %r10
	xorl	%esi, %esi
	movl	%eax, indepth(%rip)
	leaq	-368(%rbp), %rdi
	movl	$1, -344(%rbp)
	cltq
	leaq	(%rax,%rax,4), %r9
	xorl	%eax, %eax
	salq	$4, %r9
	movq	$0, instack(%r9)
	movq	$0, instack+8(%r9)
	movb	$0, instack+72(%r9)
	movq	$0, instack+48(%r9)
	movq	$0, instack+64(%r9)
	movl	%r12d, instack+28(%r9)
	movq	%r13, instack+40(%r9)
	movq	%r13, instack+32(%r9)
	movq	%r10, instack+56(%r9)
	movl	$1, instack+24(%r9)
	call	rescan
	movl	indepth(%rip), %eax
	decl	%eax
	cmpl	-400(%rbp), %eax
	movl	%eax, indepth(%rip)
	jne	.L1720
	movl	-328(%rbp), %eax
	subl	-336(%rbp), %eax
	movl	%eax, -340(%rbp)
	movl	-404(%rbp), %eax
	movl	%eax, assertions_flag(%rip)
	jmp	.L1718
.L1721:
	movq	-392(%rbp), %r13
	movl	$1, 12(%r13)
	jmp	.L1662
.L1676:
	incl	%eax
	movq	if_stack(%rip), %r10
	xorl	%esi, %esi
	movl	%eax, indepth(%rip)
	leaq	-288(%rbp), %rdi
	movl	$1, -264(%rbp)
	cltq
	leaq	(%rax,%rax,4), %r9
	xorl	%eax, %eax
	salq	$4, %r9
	movq	$0, instack(%r9)
	movq	$0, instack+8(%r9)
	movb	$0, instack+72(%r9)
	movq	$0, instack+48(%r9)
	movq	$0, instack+64(%r9)
	movl	%ebx, instack+28(%r9)
	movq	%r12, instack+40(%r9)
	movq	%r12, instack+32(%r9)
	movq	%r10, instack+56(%r9)
	movl	$1, instack+24(%r9)
	call	rescan
	movl	indepth(%rip), %eax
	decl	%eax
	cmpl	%r14d, %eax
	movl	%eax, indepth(%rip)
	jne	.L1720
	movl	-248(%rbp), %eax
	subl	-256(%rbp), %eax
	movl	%eax, -260(%rbp)
	movl	-396(%rbp), %eax
	movl	%eax, assertions_flag(%rip)
	jmp	.L1717
.L1720:
	xorl	%eax, %eax
	call	abort
.LFE14:
.Lfe14:
	.size	pcfinclude,.Lfe14-pcfinclude
	.align 2
	.p2align 4,,15
	.type	pcstring_used,@function
pcstring_used:
.LFB15:
	movq	40(%rdi), %rdx
	testq	%rdx, %rdx
	je	.L1732
	.p2align 4,,7
.L1730:
	movq	(%rdx), %rcx
	movq	8(%rdx), %rdx
	testq	%rdx, %rdx
	movl	$1, 12(%rcx)
	jne	.L1730
.L1732:
	xorl	%eax, %eax
	jmp	delete_macro
.LFE15:
.Lfe15:
	.size	pcstring_used,.Lfe15-pcstring_used
	.section	.rodata.str1.1
.LC141:
	.string	"\n# %d \"%s\"\n"
	.text
	.align 2
	.p2align 4,,15
	.type	write_output,@function
write_output:
.LFB16:
	subq	$40, %rsp
.LCFI84:
	movl	$80, %edi
	xorl	%eax, %eax
	movq	%rbp, 8(%rsp)
.LCFI85:
	movq	%r12, 16(%rsp)
.LCFI86:
	movq	%r13, 24(%rsp)
.LCFI87:
	movq	%r14, 32(%rsp)
.LCFI88:
	movq	%rbx, (%rsp)
.LCFI89:
	movl	$80, %r14d
	call	xmalloc
	movq	stringlist(%rip), %r12
	movq	outbuf+32(%rip), %rbp
	movq	%rax, %r13
.L1748:
	movq	outbuf+40(%rip), %rcx
.L1734:
	cmpq	%rcx, %rbp
	jae	.L1749
	testq	%r12, %r12
	je	.L1741
.L1746:
	movq	%rbp, %rax
	movl	40(%r12), %esi
	subq	outbuf+32(%rip), %rax
	movslq	%esi,%rbx
	cmpq	%rbx, %rax
	je	.L1750
	testq	%r12, %r12
	je	.L1741
	movl	%ebp, %ecx
	movl	%esi, %ebx
	subl	outbuf+32(%rip), %ecx
	subl	%ecx, %ebx
	.p2align 4,,7
.L1742:
	movswl	_iob+86(%rip),%edi
	movq	%rbp, %rsi
	movl	%ebx, %edx
	xorl	%eax, %eax
	call	write
	movslq	%ebx,%rsi
	addq	%rsi, %rbp
	jmp	.L1748
	.p2align 6,,7
.L1741:
	movl	outbuf+40(%rip), %ebx
	subl	%ebp, %ebx
	jmp	.L1742
.L1750:
	movl	12(%r12), %eax
	testl	%eax, %eax
	jne	.L1751
.L1738:
	movq	32(%r12), %r12
	jmp	.L1734
.L1751:
	movq	24(%r12), %rdi
	call	strlen
	cmpl	%eax, %r14d
	jl	.L1752
.L1739:
	movq	24(%r12), %rcx
	movl	16(%r12), %edx
	movl	$.LC141, %esi
	movq	%r13, %rdi
	xorl	%eax, %eax
	call	sprintf
	movq	%r13, %rdi
	call	strlen
	movq	%r13, %rsi
	movswl	_iob+86(%rip),%edi
	movq	%rax, %rdx
	xorl	%eax, %eax
	call	write
	xorl	%eax, %eax
	movl	8(%r12), %edx
	movswl	_iob+86(%rip),%edi
	movq	(%r12), %rsi
	call	write
	movq	outbuf+40(%rip), %rcx
	jmp	.L1738
.L1752:
	leal	(%r14,%r14), %edx
	movq	%r13, %rdi
	xorl	%eax, %eax
	movl	%edx, %esi
	movl	%edx, %r14d
	call	xrealloc
	movq	%rax, %r13
	jmp	.L1739
	.p2align 6,,7
.L1749:
	testq	%r12, %r12
	jne	.L1746
	movq	(%rsp), %rbx
	movq	8(%rsp), %rbp
	movq	16(%rsp), %r12
	movq	24(%rsp), %r13
	movq	32(%rsp), %r14
	addq	$40, %rsp
	ret
.LFE16:
.Lfe16:
	.size	write_output,.Lfe16-write_output
	.section	.rodata.str1.1
.LC142:
	.string	"macro"
	.section	.rodata.str1.32
	.align 32
.LC147:
	.string	"duplicate argument name `%s' in `#define'"
	.align 32
.LC146:
	.string	"unterminated parameter list in `#define'"
	.align 32
.LC145:
	.string	"badly punctuated parameter list in `#define'"
	.align 32
.LC144:
	.string	"invalid character in macro parameter name"
	.align 32
.LC143:
	.string	"another parameter follows `%s'"
	.text
	.align 2
	.p2align 4,,15
	.type	create_definition,@function
create_definition:
.LFB17:
	pushq	%rbp
.LCFI90:
	movq	%rsp, %rbp
.LCFI91:
	pushq	%r15
.LCFI92:
	movq	%rdx, %r15
	pushq	%r14
.LCFI93:
	movq	%rsi, %r14
	pushq	%r13
.LCFI94:
	pushq	%r12
.LCFI95:
	pushq	%rbx
.LCFI96:
	subq	$104, %rsp
.LCFI97:
	movl	$0, -120(%rbp)
	movl	$0, -124(%rbp)
	movslq	indepth(%rip),%rsi
	movq	%rcx, -96(%rbp)
	movq	%rdi, -88(%rbp)
	leaq	(%rsi,%rsi,4), %rcx
	salq	$4, %rcx
	movq	instack+8(%rcx), %rdx
	movl	instack+24(%rcx), %ebx
	movq	%rdx, -112(%rbp)
	movl	%ebx, -104(%rbp)
	movzbq	(%r14), %rdx
	cmpb	$0, is_hor_space(%rdx)
	je	.L1808
	.p2align 4,,7
.L1757:
	incq	%r14
	movzbq	(%r14), %rdi
	cmpb	$0, is_hor_space(%rdi)
	jne	.L1757
.L1808:
	movq	%r14, %rdi
	xorl	%eax, %eax
	movl	$.LC142, %esi
	call	check_macro_name
	movl	%eax, -100(%rbp)
	movslq	-100(%rbp),%r8
	leaq	(%r8,%r14), %rdi
	movzbl	(%rdi), %eax
	cmpb	$40, %al
	je	.L1829
	movzbl	%al, %r8d 
	leaq	1(%rdi), %rcx
	movq	%r15, %rsi
	cmpb	$0, is_hor_space(%r8)
	movl	$-1, %edx
	cmovne	%rcx, %rdi
	xorl	%eax, %eax
	xorl	%ecx, %ecx
	call	collect_expansion
	movq	%rax, %rbx
	movq	$.LC23, 56(%rax)
.L1805:
	movl	-104(%rbp), %eax
	xorl	%edi, %edi
	movq	-88(%rbp), %rdx
	cmpq	$0, -96(%rbp)
	movq	%rbx, -80(%rbp)
	movq	%r14, -72(%rbp)
	sete	%dil
	movl	%eax, 24(%rbx)
	movq	-112(%rbp), %rax
	movq	%rax, 32(%rbx)
	movl	%edi, 8(%rbx)
	movl	-100(%rbp), %eax
	movl	%eax, -64(%rbp)
	movq	%r14, 8(%rdx)
	movq	%rbx, (%rdx)
.L1828:
	movq	-64(%rbp), %rbx
	movq	-88(%rbp), %rax
	movq	%rbx, 16(%rdx)
	leaq	-40(%rbp), %rsp
	popq	%rbx
	popq	%r12
	popq	%r13
	popq	%r14
	popq	%r15
	leave
	ret
.L1829:
	movq	$0, -136(%rbp)
	movl	$0, -116(%rbp)
	leaq	1(%rdi), %r12
	movzbq	1(%rdi), %r9
	cmpb	$0, is_hor_space(%r9)
	je	.L1821
	.p2align 4,,7
.L1763:
	incq	%r12
	movzbl	(%r12), %ecx
	movzbl	%cl, %r10d 
	cmpb	$0, is_hor_space(%r10)
	jne	.L1763
.L1810:
	cmpb	$41, %cl
	je	.L1812
.L1796:
	movl	-116(%rbp), %eax
	subq	$32, %rsp
	movq	-136(%rbp), %r11
	movq	%rsp, %r13
	movq	%r12, 8(%rsp)
	movb	$0, 24(%rsp)
	movq	%rsp, -136(%rbp)
	movl	%eax, 20(%rsp)
	movq	%r11, (%rsp)
	incl	%eax
	movl	%eax, -116(%rbp)
	movl	-124(%rbp), %eax
	testl	%eax, %eax
	jne	.L1830
.L1767:
	movzbl	(%r12), %ecx
	movzbl	%cl, %edx 
	cmpb	$0, is_idstart(%rdx)
	je	.L1831
.L1768:
	movzbl	%cl, %ebx 
	cmpb	$0, is_idchar(%rbx)
	je	.L1770
	.p2align 4,,7
.L1773:
	incq	%r12
	movq	%r15, %rcx
	subq	%r12, %rcx
	cmpq	$3, %rcx
	ja	.L1832
.L1769:
	movzbq	(%r12), %rsi
	cmpb	$0, is_idchar(%rsi)
	jne	.L1773
.L1770:
	movl	%r12d, %r9d
	movl	-120(%rbp), %eax
	leaq	3(%r12), %r10
	subl	8(%r13), %r9d
	cmpl	$1, -124(%rbp)
	leal	2(%r9,%rax), %r8d
	cmove	%r10, %r12
	movl	%r9d, 16(%r13)
	movl	%r8d, -120(%rbp)
	movzbl	(%r12), %ecx
	movzbl	%cl, %edi 
	cmpb	$0, is_hor_space(%rdi)
	je	.L1815
	.p2align 4,,7
.L1779:
	incq	%r12
	movzbl	(%r12), %ecx
	movzbl	%cl, %r11d 
	cmpb	$0, is_hor_space(%r11)
	jne	.L1779
.L1815:
	movl	16(%r13), %edx
	testl	%edx, %edx
	je	.L1781
	cmpb	$44, %cl
	je	.L1826
	cmpb	$41, %cl
	jne	.L1781
	cmpb	$44, %cl
	je	.L1826
.L1783:
	cmpq	%r15, %r12
	jae	.L1824
	movq	(%r13), %rbx
	testq	%rbx, %rbx
	je	.L1818
	.p2align 4,,7
.L1795:
	cmpl	16(%rbx), %edx
	je	.L1833
.L1792:
	movq	(%rbx), %rbx
	testq	%rbx, %rbx
	je	.L1834
	movl	16(%r13), %edx
	jmp	.L1795
.L1834:
	movzbl	(%r12), %ecx
.L1818:
	cmpb	$41, %cl
	jne	.L1796
.L1812:
	leaq	1(%r12), %rdi
	cmpq	%r15, %rdi
	jae	.L1797
	movzbl	1(%r12), %eax
	cmpb	$32, %al
	je	.L1798
	cmpb	$9, %al
	je	.L1798
.L1797:
	movl	-116(%rbp), %edx
	movq	-136(%rbp), %rcx
	movq	%r15, %rsi
	xorl	%eax, %eax
	call	collect_expansion
	movzbl	-124(%rbp), %r12d
	movq	%rax, %rbx
	movb	%r12b, 40(%rax)
	xorl	%r12d, %r12d
	xorl	%eax, %eax
	movl	-120(%rbp), %edi
	incl	%edi
	call	xmalloc
	movq	%rax, 56(%rbx)
	cmpq	$0, -136(%rbp)
	jne	.L1804
.L1820:
	movslq	%r12d,%rdx
	addq	56(%rbx), %rdx
	movb	$0, (%rdx)
	jmp	.L1805
.L1804:
	movq	-136(%rbp), %r13
	movslq	%r12d,%rsi
	xorl	%eax, %eax
	addq	56(%rbx), %rsi
	movl	16(%r13), %edx
	movq	8(%r13), %rdi
	call	bcopy
	movq	-136(%rbp), %rdx
	movq	(%rdx), %rax
	addl	16(%rdx), %r12d
	testq	%rax, %rax
	je	.L1801
	movslq	%r12d,%r15
	leal	1(%r12), %eax
	addq	56(%rbx), %r15
	cltq
	addl	$2, %r12d
	movb	$44, (%r15)
	addq	56(%rbx), %rax
	movb	$32, (%rax)
	movq	(%rdx), %rax
.L1801:
	testq	%rax, %rax
	movq	%rax, -136(%rbp)
	jne	.L1804
	jmp	.L1820
.L1798:
	leaq	2(%r12), %rdi
	jmp	.L1797
	.p2align 6,,7
.L1833:
	movq	8(%r13), %rdi
	movq	8(%rbx), %rsi
	movslq	%edx,%rdx
	call	strncmp
	testl	%eax, %eax
	jne	.L1792
	movslq	16(%r13),%rdx
	movq	8(%r13), %rsi
	movslq	%edx,%r9
	addq	$16, %r9
	andq	$-16, %r9
	subq	%r9, %rsp
	movq	%rsp, %rdi
	call	strncpy
	xorl	%eax, %eax
	movq	%rsp, %rsi
	movslq	16(%r13),%r14
	movl	$.LC147, %edi
	movb	$0, (%rsp,%r14)
	call	error
.L1782:
	movq	-88(%rbp), %r11
	movq	$0, -80(%rbp)
	movq	-88(%rbp), %rdx
	movq	$0, (%r11)
	movq	-72(%rbp), %r10
	movq	%r10, 8(%rdx)
	jmp	.L1828
.L1824:
	movl	$.LC146, %edi
.L1827:
	xorl	%eax, %eax
	call	error
	jmp	.L1782
.L1826:
	incq	%r12
	movzbl	(%r12), %ecx
	movzbl	%cl, %ebx 
	cmpb	$0, is_hor_space(%rbx)
	je	.L1783
	.p2align 4,,7
.L1788:
	incq	%r12
	movzbl	(%r12), %ecx
	movzbl	%cl, %esi 
	cmpb	$0, is_hor_space(%rsi)
	jne	.L1788
	jmp	.L1783
.L1781:
	movl	$.LC145, %edi
	jmp	.L1827
	.p2align 6,,7
.L1832:
	movl	$rest_extension, %edi
	movq	%r12, %rsi
	movl	$3, %edx
	call	strncmp
	testl	%eax, %eax
	jne	.L1769
	movl	$1, -124(%rbp)
	movb	$1, 24(%r13)
	jmp	.L1770
.L1831:
	movl	$.LC144, %edi
	xorl	%eax, %eax
	call	pedwarn
	movzbl	(%r12), %ecx
	jmp	.L1768
.L1830:
	movl	$.LC143, %edi
	movl	$rest_extension, %esi
	xorl	%eax, %eax
	call	pedwarn
	jmp	.L1767
.L1821:
	movzbl	(%r12), %ecx
	jmp	.L1810
.LFE17:
.Lfe17:
	.size	create_definition,.Lfe17-create_definition
	.section	.rodata.str1.1
.LC148:
	.string	"invalid %s name"
.LC150:
	.string	"defined"
.LC151:
	.string	"invalid %s name `defined'"
.LC149:
	.string	"invalid %s name `%s'"
	.text
	.align 2
	.p2align 4,,15
	.type	check_macro_name,@function
check_macro_name:
.LFB18:
	pushq	%rbp
.LCFI98:
	movq	%rdi, %r8
	movq	%rdi, %rdx
	movq	%rsp, %rbp
.LCFI99:
	pushq	%r13
.LCFI100:
	movq	%rsi, %r13
	pushq	%r12
.LCFI101:
	pushq	%rbx
.LCFI102:
	subq	$8, %rsp
.LCFI103:
	movzbl	(%rdi), %ebx
	movzbl	%bl, %ecx 
	cmpb	$0, is_idchar(%rcx)
	je	.L1847
	.p2align 4,,7
.L1840:
	incq	%rdx
	movzbq	(%rdx), %rcx
	cmpb	$0, is_idchar(%rcx)
	jne	.L1840
.L1847:
	movl	%edx, %r12d
	movl	$.LC148, %edi
	subl	%r8d, %r12d
	testl	%r12d, %r12d
	je	.L1848
	movzbl	%bl, %edx 
	cmpb	$0, is_idstart(%rdx)
	je	.L1849
	movl	$7, %r9d
	movl	$.LC150, %edi
	movq	%r8, %rsi
	cld
	movq	%r9, %rcx
	repz
	cmpsb
	jne	.L1842
	cmpl	$7, %r12d
	je	.L1850
.L1842:
	leaq	-24(%rbp), %rsp
	movl	%r12d, %eax
	popq	%rbx
	popq	%r12
	popq	%r13
	leave
	ret
.L1850:
	movl	$.LC151, %edi
.L1848:
	movq	%r13, %rsi
	xorl	%eax, %eax
	call	error
	jmp	.L1842
.L1849:
	movslq	%r12d,%rsi
	movq	%r8, %rdi
	movl	%r12d, %edx
	addq	$16, %rsi
	xorl	%eax, %eax
	movslq	%r12d,%rbx
	andq	$-16, %rsi
	subq	%rsi, %rsp
	movq	%rsp, %rsi
	call	bcopy
	xorl	%eax, %eax
	movq	%rsp, %rdx
	movl	$.LC149, %edi
	movq	%r13, %rsi
	movb	$0, (%rsp,%rbx)
	call	error
	jmp	.L1842
.LFE18:
.Lfe18:
	.size	check_macro_name,.Lfe18-check_macro_name
	.align 2
	.p2align 4,,15
	.type	compare_defs,@function
compare_defs:
.LFB19:
	subq	$56, %rsp
.LCFI104:
	movq	%rbx, 8(%rsp)
.LCFI105:
	movq	%r13, 32(%rsp)
.LCFI106:
	movq	%rbp, 16(%rsp)
.LCFI107:
	movq	%r12, 24(%rsp)
.LCFI108:
	movq	%r14, 40(%rsp)
.LCFI109:
	movq	%r15, 48(%rsp)
.LCFI110:
	movl	(%rsi), %eax
	movq	%rdi, %rbx
	movq	%rsi, %r13
	cmpl	%eax, (%rdi)
	movq	16(%rdi), %r14
	movl	$1, 4(%rsp)
	movq	16(%rsi), %r15
	je	.L1867
.L1860:
	movl	$1, %edx
.L1851:
	movq	8(%rsp), %rbx
	movq	16(%rsp), %rbp
	movl	%edx, %eax
	movq	24(%rsp), %r12
	movq	32(%rsp), %r13
	movq	40(%rsp), %r14
	movq	48(%rsp), %r15
	addq	$56, %rsp
	ret
	.p2align 6,,7
.L1867:
	movq	56(%rdi), %rdi
	movq	56(%rsi), %rsi
	call	strcmp
	movl	$1, %edx
	testl	%eax, %eax
	jne	.L1851
	movq	48(%rbx), %r12
	movq	48(%r13), %rbp
	testq	%r12, %r12
	je	.L1855
	testq	%rbp, %rbp
	je	.L1855
.L1863:
	movl	12(%r12), %eax
	cmpl	12(%rbp), %eax
	je	.L1868
.L1862:
	movl	4(%rsp), %edi
	movl	12(%r12), %edx
	xorl	%r9d, %r9d
	movl	12(%rbp), %r8d
	xorl	%eax, %eax
	movq	%r14, %rsi
	movq	%r15, %rcx
	call	comp_def_part
	testl	%eax, %eax
	jne	.L1860
.L1861:
	movl	16(%rbp), %eax
	cmpl	%eax, 16(%r12)
	jne	.L1860
	movl	8(%r12), %ecx
	movl	8(%rbp), %eax
	andl	$16777215, %ecx
	andl	$16777215, %eax
	cmpl	%eax, %ecx
	jne	.L1860
	movslq	12(%r12),%rcx
	movslq	12(%rbp),%rdx
	movl	$0, 4(%rsp)
	movq	(%r12), %r12
	movq	(%rbp), %rbp
	addq	%rcx, %r14
	addq	%rdx, %r15
	testq	%r12, %r12
	je	.L1855
	testq	%rbp, %rbp
	jne	.L1863
.L1855:
	cmpq	%rbp, %r12
	movl	$1, %edx
	jne	.L1851
	movslq	4(%rbx),%rdx
	movslq	4(%r13),%r8
	movq	%r14, %rsi
	subq	16(%rbx), %rsi
	movl	4(%rsp), %edi
	xorl	%eax, %eax
	movq	%r15, %rbx
	movq	%r15, %rcx
	movl	$1, %r9d
	subq	16(%r13), %rbx
	subq	%rsi, %rdx
	movq	%r14, %rsi
	subq	%rbx, %r8
	call	comp_def_part
	xorl	%edx, %edx
	testl	%eax, %eax
	setne	%dl
	jmp	.L1851
.L1868:
	movslq	%eax,%rdx
	movq	%r14, %rdi
	movq	%r15, %rsi
	call	strncmp
	testl	%eax, %eax
	je	.L1861
	jmp	.L1862
.LFE19:
.Lfe19:
	.size	compare_defs,.Lfe19-compare_defs
	.align 2
	.p2align 4,,15
	.type	comp_def_part,@function
comp_def_part:
.LFB20:
	movslq	%edx,%rax
	testl	%edi, %edi
	pushq	%rbx
.LCFI111:
	leaq	(%rax,%rsi), %r10
	movslq	%r8d,%rax
	leaq	(%rax,%rcx), %r8
	je	.L1870
	cmpq	%r10, %rsi
	je	.L1872
	movzbq	(%rsi), %rdx
	cmpb	$0, is_space(%rdx)
	je	.L1872
	.p2align 4,,7
.L1875:
	incq	%rsi
	cmpq	%r10, %rsi
	je	.L1872
	movzbq	(%rsi), %rbx
	cmpb	$0, is_space(%rbx)
	jne	.L1875
.L1872:
	cmpq	%r8, %rcx
	je	.L1870
	movzbq	(%rcx), %rdi
	cmpb	$0, is_space(%rdi)
	je	.L1870
	.p2align 4,,7
.L1880:
	incq	%rcx
	cmpq	%r8, %rcx
	je	.L1870
	movzbq	(%rcx), %r11
	cmpb	$0, is_space(%r11)
	jne	.L1880
.L1870:
	testl	%r9d, %r9d
	je	.L1881
	cmpq	%r10, %rsi
	je	.L1883
	movzbq	-1(%r10), %r9
	leaq	-1(%r10), %rdx
	cmpb	$0, is_space(%r9)
	je	.L1883
	.p2align 4,,7
.L1886:
	cmpq	%rdx, %rsi
	movq	%rdx, %r10
	je	.L1883
	movzbq	-1(%r10), %rbx
	leaq	-1(%rdx), %rdx
	cmpb	$0, is_space(%rbx)
	jne	.L1886
.L1883:
	cmpq	%r8, %rcx
	je	.L1881
	movzbq	-1(%r8), %rdi
	leaq	-1(%r8), %rdx
	cmpb	$0, is_space(%rdi)
	je	.L1881
	.p2align 4,,7
.L1891:
	cmpq	%rdx, %rcx
	movq	%rdx, %r8
	je	.L1881
	movzbq	-1(%r8), %r11
	leaq	-1(%rdx), %rdx
	cmpb	$0, is_space(%r11)
	jne	.L1891
.L1881:
	cmpq	%r10, %rsi
	je	.L1893
	cmpq	%r8, %rcx
	je	.L1893
	.p2align 4,,7
.L1910:
	movzbl	(%rsi), %ebx
	movzbl	%bl, %edx 
	cmpb	$0, is_space(%rdx)
	je	.L1920
	movzbl	(%rcx), %edx
	movzbl	%dl, %r9d 
	movl	%edx, %edi
	cmpb	$0, is_space(%r9)
	je	.L1896
	cmpq	%r10, %rsi
	je	.L1898
	.p2align 4,,7
.L1901:
	incq	%rsi
	cmpq	%r10, %rsi
	je	.L1898
	movzbq	(%rsi), %rbx
	cmpb	$0, is_space(%rbx)
	jne	.L1901
.L1898:
	cmpq	%r8, %rcx
	je	.L1892
	movl	%edi, %eax
	movzbl	%al, %edi 
	cmpb	$0, is_space(%rdi)
	je	.L1892
	.p2align 4,,7
.L1906:
	incq	%rcx
	cmpq	%r8, %rcx
	je	.L1892
	movzbq	(%rcx), %r11
	cmpb	$0, is_space(%r11)
	jne	.L1906
	.p2align 4,,7
.L1892:
	cmpq	%r10, %rsi
	je	.L1893
	cmpq	%r8, %rcx
	jne	.L1910
.L1893:
	xorl	%eax, %eax
	cmpq	%r10, %rsi
	je	.L1921
.L1912:
	movl	$1, %eax
.L1911:
	popq	%rbx
	ret
.L1921:
	cmpq	%r8, %rcx
	jne	.L1912
	jmp	.L1911
	.p2align 6,,7
.L1896:
	cmpb	%dl, %bl
	jne	.L1893
	incq	%rsi
	incq	%rcx
	jmp	.L1892
	.p2align 6,,7
.L1920:
	movzbl	(%rcx), %edx
	jmp	.L1896
.LFE20:
.Lfe20:
	.size	comp_def_part,.Lfe20-comp_def_part
	.section	.rodata.str1.32
	.align 32
.LC157:
	.string	"`#' operator should be followed by a macro argument name"
	.align 32
.LC155:
	.string	"macro argument `%.*s' is stringified."
	.align 32
.LC156:
	.string	"macro arg `%.*s' would be stringified with -traditional."
	.align 32
.LC154:
	.string	"`#' operator is not followed by a macro argument name"
	.align 32
.LC153:
	.string	"`##' at end of macro definition"
	.align 32
.LC152:
	.string	"`##' at start of macro definition"
	.text
	.align 2
	.p2align 4,,15
	.type	collect_expansion,@function
collect_expansion:
.LFB21:
	pushq	%r15
.LCFI112:
	pushq	%r14
.LCFI113:
	pushq	%r13
.LCFI114:
	pushq	%r12
.LCFI115:
	pushq	%rbp
.LCFI116:
	pushq	%rbx
.LCFI117:
	movq	%rdi, %rbx
	subq	$88, %rsp
.LCFI118:
	cmpq	%rdi, %rsi
	movq	%rsi, 80(%rsp)
	movl	%edx, 76(%rsp)
	movq	%rcx, 64(%rsp)
	movq	$0, 16(%rsp)
	movq	$0, 24(%rsp)
	movq	$0, 32(%rsp)
	movl	$0, (%rsp)
	jb	.L2069
	movq	80(%rsp), %r13
	movq	%rdi, %rcx
	cmpq	%r13, %rdi
	jae	.L1930
	movzbq	-1(%r13), %rsi
	leaq	-1(%r13), %rdx
	cmpb	$0, is_space(%rsi)
	je	.L1925
	.p2align 4,,7
.L1928:
	cmpq	%rdx, %rbx
	movq	%rdx, %r13
	jae	.L1930
	movzbq	-1(%r13), %rsi
	leaq	-1(%rdx), %rdx
	cmpb	$0, is_space(%rsi)
	jne	.L1928
.L1925:
	cmpq	%r13, %rbx
	jae	.L1930
	movzbq	(%rbx), %rdx
	cmpb	$0, is_space(%rdx)
	je	.L1930
	.p2align 4,,7
.L1933:
	incq	%rcx
	cmpq	%r13, %rcx
	jae	.L1930
	movzbq	(%rcx), %rdi
	cmpb	$0, is_space(%rdi)
	jne	.L1933
	.p2align 4,,7
.L1930:
	movq	80(%rsp), %r9
	movq	%rcx, %rax
	movl	%r13d, %r8d
	subq	%rbx, %rax
	subl	%ecx, %r8d
	movl	$1, %edi
	subq	%r13, %r9
	addq	%rax, %r9
	xorl	%eax, %eax
	leal	67(%r8,%r9,2), %ebp
	movl	%ebp, %esi
	movl	%ebp, 52(%rsp)
	call	xcalloc
	movl	76(%rsp), %ecx
	movq	%rax, %r12
	movq	%rax, 56(%rsp)
	addq	$64, %r12
	cmpq	%r13, %rbx
	movl	%ecx, (%rax)
	movq	%r12, 16(%rax)
	movq	%r12, 8(%rsp)
	jae	.L1935
	movzbq	(%rbx), %r10
	cmpb	$0, is_space(%r10)
	je	.L1935
	.p2align 4,,7
.L1938:
	movb	$10, (%r12)
	movzbl	(%rbx), %r11d
	incq	%rbx
	movb	%r11b, 1(%r12)
	addq	$2, %r12
	cmpq	%r13, %rbx
	jae	.L1935
	movzbq	(%rbx), %r14
	cmpb	$0, is_space(%r14)
	jne	.L1938
.L1935:
	movq	%r13, %r15
	subq	%rbx, %r15
	cmpq	$1, %r15
	jle	.L1939
	cmpb	$35, (%rbx)
	je	.L2071
.L1939:
	cmpq	%r13, %rbx
	jae	.L2048
	.p2align 4,,7
.L2034:
	movl	$0, 4(%rsp)
	leaq	1(%rbx), %rbp
	movzbl	(%rbx), %r14d
	movb	%r14b, (%r12)
	movl	traditional(%rip), %esi
	incq	%r12
	testl	%esi, %esi
	jne	.L1943
	movzbl	%r14b, %eax
	cmpl	$35, %eax
	je	.L1954
	cmpl	$35, %eax
	jg	.L1979
	cmpl	$34, %eax
	je	.L1946
	.p2align 4,,7
.L1980:
	movl	%r14d, %ebx
	movzbl	%bl, %edx 
	cmpb	$0, is_idchar(%rdx)
	je	.L2064
	movl	76(%rsp), %r8d
	testl	%r8d, %r8d
	jle	.L2064
	leaq	-1(%rbp), %r9
	decq	%r12
	cmpq	%r13, %rbp
	movq	%r9, 40(%rsp)
	je	.L2003
	movzbq	(%rbp), %r10
	cmpb	$0, is_idchar(%r10)
	je	.L2003
	.p2align 4,,7
.L2006:
	incq	%rbp
	cmpq	%r13, %rbp
	je	.L2003
	movzbq	(%rbp), %r11
	cmpb	$0, is_idchar(%r11)
	jne	.L2006
.L2003:
	movl	%ebp, %r15d
	subl	40(%rsp), %r15d
	cmpb	$0, is_idstart(%rdx)
	je	.L2007
	movq	64(%rsp), %rbx
	testq	%rbx, %rbx
	je	.L2007
	.p2align 4,,7
.L2027:
	movq	8(%rbx), %rdi
	cmpb	%r14b, (%rdi)
	je	.L2072
.L2010:
	movq	(%rbx), %rbx
	testq	%rbx, %rbx
	jne	.L2027
.L2007:
	movl	4(%rsp), %eax
	testl	%eax, %eax
	jne	.L2064
	movq	40(%rsp), %rbx
	cmpq	%rbp, %rbx
	je	.L2060
	.p2align 4,,7
.L2032:
	movzbl	(%rbx), %edx
	incq	%rbx
	movb	%dl, (%r12)
	incq	%r12
	cmpq	%rbp, %rbx
	jne	.L2032
.L2060:
	movq	40(%rsp), %rbp
	cmpq	%rbp, 32(%rsp)
	je	.L2073
.L1940:
	cmpq	%r13, %rbx
	jb	.L2034
.L2048:
	cmpq	80(%rsp), %r13
	jae	.L2035
	movzbq	(%r13), %rcx
	cmpb	$0, is_space(%rcx)
	je	.L2041
	.p2align 4,,7
.L2040:
	movb	$10, (%r12)
	movzbl	(%r13), %edi
	incq	%r13
	movb	%dil, 1(%r12)
	addq	$2, %r12
	cmpq	80(%rsp), %r13
	jae	.L2041
	movzbq	(%r13), %r8
	cmpb	$0, is_space(%r8)
	jne	.L2040
.L2041:
	movb	$0, (%r12)
	movl	%r12d, %r13d
	movq	56(%rsp), %r12
	subl	16(%r12), %r13d
	movl	%r13d, 4(%r12)
	incl	%r13d
	cmpl	52(%rsp), %r13d
	jg	.L2069
	movq	56(%rsp), %rax
	addq	$88, %rsp
	popq	%rbx
	popq	%rbp
	popq	%r12
	popq	%r13
	popq	%r14
	popq	%r15
	ret
.L2035:
	movl	traditional(%rip), %eax
	testl	%eax, %eax
	jne	.L2041
	movl	(%rsp), %eax
	testl	%eax, %eax
	jne	.L2041
	movb	$10, (%r12)
	movb	$32, 1(%r12)
	addq	$2, %r12
	jmp	.L2041
.L2073:
	movl	$.LC157, %edi
	xorl	%eax, %eax
	call	error
	jmp	.L1940
	.p2align 6,,7
.L2064:
	movq	%rbp, %rbx
	jmp	.L1940
	.p2align 6,,7
.L2072:
	cmpl	%r15d, 16(%rbx)
	jne	.L2010
	movq	40(%rsp), %rsi
	movslq	%r15d,%rdx
	call	strncmp
	testl	%eax, %eax
	jne	.L2010
	movl	(%rsp), %r14d
	testl	%r14d, %r14d
	je	.L2013
	movl	warn_stringify(%rip), %edx
	testl	%edx, %edx
	je	.L2013
	movl	traditional(%rip), %esi
	testl	%esi, %esi
	je	.L2014
	movl	$.LC155, %edi
.L2068:
	movq	8(%rbx), %rdx
	movl	%r15d, %esi
	xorl	%eax, %eax
	call	warning
.L2013:
	movl	traditional(%rip), %r15d
	testl	%r15d, %r15d
	jne	.L2016
	movl	(%rsp), %ecx
	testl	%ecx, %ecx
	jne	.L2007
.L2016:
	movl	$24, %edi
	xorl	%eax, %eax
	call	xmalloc
	movq	%rax, %rcx
	movq	$0, (%rax)
	movq	40(%rsp), %rax
	cmpq	%rax, 24(%rsp)
	leaq	8(%rcx), %rdx
	movb	$0, 10(%rcx)
	sete	9(%rcx)
	movzbl	24(%rbx), %r8d
	movb	%r8b, 11(%rcx)
	movl	traditional(%rip), %edi
	testl	%edi, %edi
	je	.L2017
	movl	(%rsp), %eax
	testl	%eax, %eax
	setne	%al
.L2018:
	movb	%al, (%rdx)
	cmpq	$0, 16(%rsp)
	jne	.L2019
	movq	56(%rsp), %r10
	movq	%rcx, 48(%r10)
.L2020:
	movl	%r12d, %r14d
	movl	20(%rbx), %eax
	movq	%rcx, 16(%rsp)
	subl	8(%rsp), %r14d
	movq	%rbp, %rdx
	movl	%eax, 16(%rcx)
	movl	%r14d, 12(%rcx)
	movzbq	(%rbp), %rbx
	cmpb	$0, is_hor_space(%rbx)
	je	.L2058
.L2025:
	incq	%rdx
	movzbq	(%rdx), %rsi
	cmpb	$0, is_hor_space(%rsi)
	jne	.L2025
.L2058:
	leaq	2(%rdx), %r15
	cmpq	%r13, %r15
	ja	.L2026
	cmpb	$35, (%rdx)
	je	.L2074
.L2026:
	movq	%r12, 8(%rsp)
	movl	$1, 4(%rsp)
	jmp	.L2007
.L2074:
	cmpb	$35, 1(%rdx)
	jne	.L2026
	movb	$1, 10(%rcx)
	jmp	.L2026
.L2019:
	movq	16(%rsp), %r11
	movq	%rcx, (%r11)
	jmp	.L2020
.L2017:
	movq	40(%rsp), %r9
	cmpq	%r9, 32(%rsp)
	sete	%al
	jmp	.L2018
.L2014:
	movl	$.LC156, %edi
	jmp	.L2068
	.p2align 6,,7
.L1946:
	movl	(%rsp), %ebx
	testl	%ebx, %ebx
	jne	.L2070
	movzbl	%r14b, %edi
	movl	%edi, (%rsp)
	jmp	.L1980
.L2070:
	movzbl	%r14b, %ebx
	cmpl	(%rsp), %ebx
	jne	.L1980
	movl	$0, (%rsp)
	jmp	.L1980
	.p2align 6,,7
.L1979:
	cmpl	$39, %eax
	je	.L1946
	cmpl	$92, %eax
	jne	.L1980
	cmpq	%r13, %rbp
	jae	.L1980
	cmpb	$35, 1(%rbx)
	je	.L2075
.L1951:
	cmpq	%r13, %rbp
	jae	.L1980
	movl	(%rsp), %eax
	testl	%eax, %eax
	je	.L1980
	movzbl	(%rbp), %edx
	incq	%rbp
	movb	%dl, (%r12)
	incq	%r12
	jmp	.L1980
.L2075:
	movl	(%rsp), %eax
	testl	%eax, %eax
	jne	.L1951
	leaq	2(%rbx), %rbp
	movb	$35, -1(%r12)
	jmp	.L1980
	.p2align 6,,7
.L1954:
	movl	(%rsp), %eax
	testl	%eax, %eax
	jne	.L1980
	cmpq	%r13, %rbp
	jae	.L1956
	cmpb	$35, 1(%rbx)
	je	.L2076
.L1956:
	movzbl	(%rbp), %edx
	decq	%r12
	movzbl	%dl, %r11d 
	cmpb	$0, is_hor_space(%r11)
	je	.L2053
	.p2align 4,,7
.L1973:
	incq	%rbp
	movzbl	(%rbp), %edx
	movzbl	%dl, %r15d 
	cmpb	$0, is_hor_space(%r15)
	jne	.L1973
.L2053:
	cmpq	%r13, %rbp
	je	.L1975
	movzbl	%dl, %esi 
	cmpb	$0, is_idstart(%rsi)
	je	.L1975
	movl	76(%rsp), %eax
	testl	%eax, %eax
	jle	.L1975
	movq	%rbp, 32(%rsp)
	jmp	.L1980
.L1975:
	movl	$.LC154, %edi
.L2066:
	xorl	%eax, %eax
	call	error
	jmp	.L1980
.L2076:
	decq	%r12
	cmpq	8(%rsp), %r12
	jbe	.L1958
	movzbq	-1(%r12), %rcx
	leaq	-1(%r12), %rdx
	cmpb	$0, is_hor_space(%rcx)
	je	.L1958
.L1961:
	cmpq	8(%rsp), %rdx
	movq	%rdx, %r12
	jbe	.L1958
	movzbq	-1(%r12), %r8
	leaq	-1(%rdx), %rdx
	cmpb	$0, is_hor_space(%r8)
	jne	.L1961
.L1958:
	incq	%rbp
	movzbq	(%rbp), %r9
	cmpb	$0, is_hor_space(%r9)
	je	.L2051
.L1966:
	incq	%rbp
	movzbq	(%rbp), %r10
	cmpb	$0, is_hor_space(%r10)
	jne	.L1966
.L2051:
	cmpq	%r13, %rbp
	movq	%rbp, 24(%rsp)
	movl	$.LC153, %edi
	je	.L2066
	jmp	.L1980
	.p2align 6,,7
.L1943:
	movzbl	%r14b, %eax
	cmpl	$39, %eax
	je	.L1983
	cmpl	$39, %eax
	jg	.L2000
	cmpl	$34, %eax
	jne	.L1980
.L1983:
	movl	(%rsp), %eax
	testl	%eax, %eax
	jne	.L2070
	movzbl	%r14b, %edi
	movl	%edi, (%rsp)
	jmp	.L1980
	.p2align 6,,7
.L2000:
	cmpl	$47, %eax
	je	.L1990
	cmpl	$92, %eax
	jne	.L1980
	movl	(%rsp), %eax
	testl	%eax, %eax
	je	.L1980
	cmpq	%r13, %rbp
	jae	.L1980
	movzbl	1(%rbx), %edx
	movzbl	%dl, %ecx
	cmpl	(%rsp), %ecx
	je	.L1989
	cmpb	$92, %dl
	jne	.L1980
.L1989:
	movb	%dl, (%r12)
	addq	$2, %rbx
	incq	%r12
	jmp	.L1940
	.p2align 6,,7
.L1990:
	movl	(%rsp), %eax
	testl	%eax, %eax
	jne	.L1980
	cmpb	$42, 1(%rbx)
	jne	.L1980
	leaq	2(%rbx), %rbp
	decq	%r12
	cmpq	%r13, %rbp
	jae	.L1980
.L1997:
	incq	%rbp
	cmpq	%r13, %rbp
	jae	.L1980
	cmpb	$42, -2(%rbp)
	jne	.L1997
	cmpb	$47, -1(%rbp)
	jne	.L1997
	jmp	.L1980
	.p2align 6,,7
.L2071:
	cmpb	$35, 1(%rbx)
	jne	.L1939
	movl	$.LC152, %edi
	xorl	%eax, %eax
	addq	$2, %rbx
	call	error
	jmp	.L1939
.L2069:
	xorl	%eax, %eax
	call	abort
.LFE21:
.Lfe21:
	.size	collect_expansion,.Lfe21-collect_expansion
	.section	.rodata.str1.32
	.align 32
.LC159:
	.string	"`#else' or `#elif' after `#else'"
	.align 32
.LC158:
	.string	"`#%s' not within a conditional"
	.text
	.align 2
	.p2align 4,,15
	.type	skip_if_group,@function
skip_if_group:
.LFB22:
	pushq	%r15
.LCFI119:
	pushq	%r14
.LCFI120:
	pushq	%r13
.LCFI121:
	pushq	%r12
.LCFI122:
	pushq	%rbp
.LCFI123:
	movq	%rdi, %rbp
	pushq	%rbx
.LCFI124:
	subq	$24, %rsp
.LCFI125:
	movq	if_stack(%rip), %rdx
	movslq	28(%rdi),%r12
	addq	32(%rdi), %r12
	movq	40(%rdi), %rbx
	movl	%esi, 20(%rsp)
	movq	%rdx, 8(%rsp)
	movq	%rbx, %r14
	cmpq	%r12, %rbx
	jae	.L2232
	.p2align 4,,7
.L2230:
	movzbl	(%rbx), %eax
	incq	%rbx
	cmpl	$39, %eax
	je	.L2108
	cmpl	$39, %eax
	jg	.L2228
	cmpl	$34, %eax
	je	.L2108
	cmpl	$34, %eax
	jg	.L2229
	cmpl	$10, %eax
	je	.L2112
	.p2align 4,,7
.L2078:
	cmpq	%r12, %rbx
	jb	.L2230
.L2232:
	movq	%rbx, 40(%rbp)
.L2077:
	addq	$24, %rsp
	popq	%rbx
	popq	%rbp
	popq	%r12
	popq	%r13
	popq	%r14
	popq	%r15
	ret
.L2112:
	incl	24(%rbp)
	movq	%rbx, %r14
	jmp	.L2078
.L2229:
	cmpl	$35, %eax
	jne	.L2078
	leaq	-1(%rbx), %rsi
	testq	%r14, %r14
	movq	%rsi, 40(%rbp)
	je	.L2078
	movq	%r14, %rdx
	movl	cplusplus_comments(%rip), %esi
	.p2align 4,,7
.L2133:
	movzbl	(%rdx), %ecx
	movzbl	%cl, %ebx 
	cmpb	$0, is_hor_space(%rbx)
	jne	.L2266
	cmpb	$92, %cl
	jne	.L2120
	cmpb	$10, 1(%rdx)
	je	.L2267
.L2120:
	cmpb	$47, %cl
	jne	.L2122
	cmpb	$42, 1(%rdx)
	je	.L2268
.L2122:
	testl	%esi, %esi
	je	.L2116
	cmpb	$47, %cl
	jne	.L2116
	cmpb	$47, 1(%rdx)
	jne	.L2116
	addq	$2, %rdx
	.p2align 4,,7
.L2129:
	movzbl	(%rdx), %edi
	incq	%rdx
	cmpb	$10, %dil
	jne	.L2129
	jmp	.L2133
.L2116:
	movq	40(%rbp), %rax
	cmpq	%rax, %rdx
	leaq	1(%rax), %rbx
	jne	.L2078
	leaq	1(%rdx), %rbx
	movl	cplusplus_comments(%rip), %edi
.L2154:
	movzbl	(%rbx), %esi
	movl	%esi, %edx
	movzbl	%dl, %r8d 
	cmpb	$0, is_hor_space(%r8)
	jne	.L2269
	cmpb	$92, %sil
	jne	.L2140
	cmpb	$10, 1(%rbx)
	je	.L2270
.L2140:
	cmpb	$47, %dl
	jne	.L2142
	cmpb	$42, 1(%rbx)
	je	.L2271
.L2142:
	testl	%edi, %edi
	je	.L2136
	cmpb	$47, %dl
	jne	.L2136
	cmpb	$47, 1(%rbx)
	jne	.L2136
	addq	$2, %rbx
	.p2align 4,,7
.L2150:
	movzbl	(%rbx), %r9d
	incq	%rbx
	cmpb	$10, %r9b
	jne	.L2150
	jmp	.L2154
.L2136:
	movq	%rbx, %r10
.L2184:
	movl	%esi, %ecx
	movzbl	%cl, %r11d 
	cmpb	$0, is_idchar(%r11)
	jne	.L2259
	cmpb	$92, %sil
	je	.L2272
.L2160:
	movl	%esi, %eax
	movzbl	%al, %edi 
	cmpb	$0, is_idchar(%rdi)
	je	.L2156
.L2259:
	incq	%rbx
	movzbl	(%rbx), %esi
	jmp	.L2184
.L2156:
	movl	%ebx, %r15d
	subl	%r10d, %r15d
	testl	%r15d, %r15d
	jne	.L2247
	cmpb	$10, %sil
	je	.L2078
.L2187:
	movzbl	(%r10), %edx
	movq	%r10, %rcx
	movzbl	%dl, %r9d 
	cmpb	$0, is_idchar(%r9)
	je	.L2189
.L2192:
	leal	-48(%rdx), %r11d
	cmpb	$9, %r11b
	ja	.L2189
	incq	%rcx
	movzbl	(%rcx), %edx
	movzbl	%dl, %r13d 
	cmpb	$0, is_idchar(%r13)
	jne	.L2192
.L2189:
	cmpq	%r10, %rcx
	je	.L2248
	movzbl	%dl, %r10d 
	cmpb	$0, is_idchar(%r10)
	jne	.L2257
	movl	pedantic(%rip), %ecx
	testl	%ecx, %ecx
	je	.L2078
	movl	$.LC106, %edi
.L2262:
	xorl	%eax, %eax
	call	pedwarn
	jmp	.L2078
.L2257:
	movl	lang_asm(%rip), %r13d
	testl	%r13d, %r13d
	jne	.L2078
	movl	pedantic(%rip), %edx
	testl	%edx, %edx
	je	.L2078
	movl	$.LC108, %edi
	jmp	.L2262
.L2248:
	cmpb	$35, %dl
	je	.L2199
	movzbl	%dl, %r15d 
	cmpb	$0, is_hor_space(%r15)
	je	.L2245
.L2199:
	incq	%rcx
	movzbl	(%rcx), %edx
	cmpb	$35, %dl
	je	.L2199
	movzbl	%dl, %esi 
	cmpb	$0, is_hor_space(%rsi)
	jne	.L2199
.L2245:
	cmpb	$10, %dl
	jne	.L2257
	movl	pedantic(%rip), %edx
	testl	%edx, %edx
	je	.L2078
	movl	lang_asm(%rip), %edi
	testl	%edi, %edi
	jne	.L2078
	movl	$.LC107, %edi
	jmp	.L2262
	.p2align 6,,7
.L2247:
	movzbq	(%r10), %r8
	cmpb	$0, is_idstart(%r8)
	je	.L2187
	movl	directive_table(%rip), %eax
	movl	$directive_table, %r13d
	testl	%eax, %eax
	js	.L2251
.L2224:
	cmpl	%eax, %r15d
	je	.L2273
.L2205:
	addq	$32, %r13
	movl	(%r13), %eax
	testl	%eax, %eax
	jns	.L2224
	jmp	.L2257
.L2273:
	movq	16(%r13), %rsi
	movq	%r10, %rdi
	movslq	%eax,%rdx
	movq	%r10, (%rsp)
	call	strncmp
	movq	(%rsp), %r10
	testl	%eax, %eax
	jne	.L2205
	movl	20(%rsp), %eax
	testl	%eax, %eax
	jne	.L2077
	movl	24(%r13), %eax
	subl	$5, %eax
	cmpl	$10, %eax
	ja	.L2254
	mov	%eax, %r8d
	jmp	*.L2222(,%r8,8)
	.section	.rodata
	.align 8
	.align 4
.L2222:
	.quad	.L2212
	.quad	.L2212
	.quad	.L2212
	.quad	.L2214
	.quad	.L2254
	.quad	.L2255
	.quad	.L2254
	.quad	.L2254
	.quad	.L2254
	.quad	.L2254
	.quad	.L2214
	.text
.L2212:
	movl	$1, %edi
	movl	$40, %esi
	xorl	%eax, %eax
	call	xcalloc
	movq	8(%rbp), %r9
	movq	if_stack(%rip), %r11
	movq	%rax, %rdx
	movq	%r11, (%rax)
	movq	%r9, 8(%rdx)
	movq	%rax, if_stack(%rip)
	movl	24(%rbp), %eax
	movl	%eax, 16(%rdx)
.L2265:
	movl	24(%r13), %eax
.L2221:
	movl	%eax, 32(%rdx)
.L2254:
	movl	(%r13), %eax
.L2204:
	testl	%eax, %eax
	jns	.L2078
	jmp	.L2257
.L2255:
	movq	if_stack(%rip), %rdx
.L2216:
	movslq	indepth(%rip),%r15
	movq	%rdx, %rdi
	leaq	(%r15,%r15,4), %rcx
	salq	$4, %rcx
	cmpq	instack+56(%rcx), %rdx
	je	.L2256
	cmpq	8(%rsp), %rdx
	je	.L2077
	movl	24(%r13), %eax
	cmpl	$15, %eax
	je	.L2220
	cmpl	$8, 32(%rdx)
	jne	.L2221
	movl	$.LC159, %edi
	xorl	%eax, %eax
	call	error
	movq	if_stack(%rip), %rdx
	jmp	.L2265
.L2220:
	movq	(%rdx), %rsi
	xorl	%eax, %eax
	movq	%rsi, if_stack(%rip)
	call	free
	jmp	.L2254
.L2256:
	movq	16(%r13), %rsi
	movl	$.LC158, %edi
	xorl	%eax, %eax
	call	error
	jmp	.L2254
.L2214:
	movl	pedantic(%rip), %r10d
	testl	%r10d, %r10d
	je	.L2255
	movq	if_stack(%rip), %rdx
	cmpq	8(%rsp), %rdx
	je	.L2216
	movq	%rbx, %rdi
	xorl	%eax, %eax
	call	validate_else
	jmp	.L2255
.L2251:
	movl	directive_table(%rip), %eax
	jmp	.L2204
	.p2align 6,,7
.L2272:
	cmpb	$10, 1(%rbx)
	jne	.L2160
	movq	%rbx, %r9
	movq	%rbx, %rcx
	xorl	%r8d, %r8d
.L2170:
	movzbl	(%rcx), %edi
	cmpb	$92, %dil
	movl	%edi, %eax
	jne	.L2162
	movzbl	1(%rcx), %edx
	cmpb	$10, %dl
	je	.L2274
	cmpb	$13, %dl
	jne	.L2162
	cmpb	$10, 2(%rcx)
	jne	.L2162
	addq	$3, %rcx
.L2260:
	incl	%r8d
	jmp	.L2170
.L2162:
	testl	%r8d, %r8d
	je	.L2160
	movzbl	%al, %r13d 
	cmpb	$0, is_idchar(%r13)
	je	.L2160
.L2177:
	incq	%rcx
	movb	%dil, (%r9)
	incq	%r9
	movzbl	(%rcx), %edx
	movzbl	%dl, %r15d 
	movl	%edx, %edi
	cmpb	$0, is_idchar(%r15)
	jne	.L2177
	testl	%r8d, %r8d
	leal	-1(%r8), %edx
	jle	.L2250
.L2181:
	movl	%edx, %esi
	movb	$92, (%r9)
	movb	$10, 1(%r9)
	decl	%edx
	addq	$2, %r9
	testl	%esi, %esi
	jg	.L2181
.L2250:
	movzbl	(%rbx), %esi
	jmp	.L2160
.L2274:
	addq	$2, %rcx
	jmp	.L2260
.L2271:
	movzbl	2(%rbx), %eax
	leaq	2(%rbx), %rdx
	cmpb	$42, %al
	je	.L2275
.L2147:
	cmpb	$10, %al
	je	.L2276
.L2146:
	incq	%rdx
	movzbl	(%rdx), %eax
	cmpb	$42, %al
	jne	.L2147
	cmpb	$47, 1(%rdx)
	jne	.L2147
.L2239:
	leaq	2(%rdx), %rbx
	jmp	.L2154
	.p2align 6,,7
.L2276:
	incl	24(%rbp)
	jmp	.L2146
.L2275:
	cmpb	$47, 3(%rbx)
	jne	.L2147
	jmp	.L2239
	.p2align 6,,7
.L2270:
	addq	$2, %rbx
	jmp	.L2154
.L2269:
	incq	%rbx
	jmp	.L2154
.L2268:
	cmpb	$42, 2(%rdx)
	leaq	2(%rdx), %rax
	je	.L2277
	.p2align 4,,7
.L2126:
	incq	%rax
	cmpb	$42, (%rax)
	jne	.L2126
	cmpb	$47, 1(%rax)
	jne	.L2126
.L2237:
	leaq	2(%rax), %rdx
	jmp	.L2133
.L2277:
	cmpb	$47, 3(%rdx)
	jne	.L2126
	jmp	.L2237
	.p2align 6,,7
.L2267:
	addq	$2, %rdx
	jmp	.L2133
.L2266:
	incq	%rdx
	jmp	.L2133
	.p2align 6,,7
.L2108:
	movl	24(%rbp), %edx
	leaq	-1(%rbx), %rdi
	leaq	24(%rbp), %rcx
	movq	%r12, %rsi
	xorl	%r8d, %r8d
	xorl	%r9d, %r9d
	xorl	%eax, %eax
	call	skip_quoted_string
.L2263:
	movq	%rax, %rbx
	jmp	.L2078
	.p2align 6,,7
.L2228:
	cmpl	$47, %eax
	je	.L2082
	cmpl	$92, %eax
	jne	.L2078
	cmpq	%r12, %rbx
	jae	.L2232
	cmpb	$10, (%rbx)
	je	.L2278
.L2111:
	incq	%rbx
	jmp	.L2078
.L2278:
	incl	24(%rbp)
	jmp	.L2111
.L2082:
	movzbl	(%rbx), %esi
	cmpb	$92, %sil
	je	.L2279
.L2083:
	cmpb	$42, %sil
	je	.L2106
	movl	cplusplus_comments(%rip), %eax
	testl	%eax, %eax
	je	.L2078
	cmpb	$47, %sil
	jne	.L2078
.L2106:
	leaq	1(%rbx), %rdx
	leaq	24(%rbp), %rsi
	movq	%rbp, %rdi
	movq	%rdx, 40(%rbp)
	xorl	%eax, %eax
	xorl	%edx, %edx
	call	skip_to_end_of_comment
	jmp	.L2263
.L2279:
	cmpb	$10, 1(%rbx)
	jne	.L2083
	movq	%rbx, %rdi
	movq	%rbx, %rdx
	xorl	%r8d, %r8d
.L2093:
	movzbl	(%rdx), %ecx
	cmpb	$92, %cl
	movl	%ecx, %r9d
	jne	.L2085
	movzbl	1(%rdx), %eax
	cmpb	$10, %al
	je	.L2280
	cmpb	$13, %al
	jne	.L2085
	cmpb	$10, 2(%rdx)
	jne	.L2085
	addq	$3, %rdx
.L2258:
	incl	%r8d
	jmp	.L2093
.L2085:
	testl	%r8d, %r8d
	je	.L2083
	cmpb	$47, %r9b
	je	.L2100
	cmpb	$42, %r9b
	jne	.L2083
.L2100:
	incq	%rdx
	movb	%cl, (%rdi)
	incq	%rdi
	movzbl	(%rdx), %eax
	cmpb	$42, %al
	movl	%eax, %ecx
	je	.L2100
	cmpb	$47, %al
	je	.L2100
	testl	%r8d, %r8d
	leal	-1(%r8), %edx
	jle	.L2249
.L2104:
	movl	%edx, %ecx
	movb	$92, (%rdi)
	movb	$10, 1(%rdi)
	decl	%edx
	addq	$2, %rdi
	testl	%ecx, %ecx
	jg	.L2104
.L2249:
	movzbl	(%rbx), %esi
	jmp	.L2083
.L2280:
	addq	$2, %rdx
	jmp	.L2258
.LFE22:
.Lfe22:
	.size	skip_if_group,.Lfe22-skip_if_group
	.section	.rodata.str1.32
	.align 32
.LC160:
	.string	"text following `#else' or `#endif' violates ANSI standard"
	.text
	.align 2
	.p2align 4,,15
	.type	validate_else,@function
validate_else:
.LFB23:
	.p2align 4,,7
.L2358:
	movzbl	(%rdi), %edx
.L2346:
	cmpb	$92, %dl
	je	.L2362
.L2285:
	movzbl	%dl, %ecx 
	cmpb	$0, is_hor_space(%rcx)
	jne	.L2363
	cmpb	$47, %dl
	jne	.L2283
	movzbl	1(%rdi), %r8d
	leaq	1(%rdi), %rax
	cmpb	$92, %r8b
	je	.L2364
.L2289:
	cmpb	$42, %r8b
	je	.L2365
	movl	cplusplus_comments(%rip), %eax
	testl	%eax, %eax
	je	.L2358
	cmpb	$47, %r8b
	jne	.L2358
	addq	$2, %rdi
.L2341:
	movzbl	(%rdi), %edx
	testb	%dl, %dl
	je	.L2346
	incq	%rdi
	cmpb	$10, %dl
	jne	.L2341
	jmp	.L2358
	.p2align 6,,7
.L2365:
	addq	$2, %rdi
	movzbl	(%rdi), %edx
	testb	%dl, %dl
	je	.L2346
.L2338:
	cmpb	$92, 1(%rdi)
	leaq	1(%rdi), %r11
	je	.L2366
.L2315:
	cmpb	$42, %dl
	je	.L2367
.L2337:
	movzbl	(%r11), %edx
	movq	%r11, %rdi
	testb	%dl, %dl
	jne	.L2338
	jmp	.L2346
.L2367:
	cmpb	$47, 1(%rdi)
	jne	.L2337
	addq	$2, %rdi
	jmp	.L2358
	.p2align 6,,7
.L2366:
	cmpb	$10, 2(%rdi)
	jne	.L2315
	movq	%r11, %r8
	movq	%r11, %rcx
	xorl	%r9d, %r9d
.L2325:
	movzbl	(%rcx), %esi
	cmpb	$92, %sil
	movl	%esi, %r10d
	jne	.L2317
	movzbl	1(%rcx), %eax
	cmpb	$10, %al
	je	.L2368
	cmpb	$13, %al
	jne	.L2317
	cmpb	$10, 2(%rcx)
	jne	.L2317
	addq	$3, %rcx
.L2361:
	incl	%r9d
	jmp	.L2325
.L2317:
	testl	%r9d, %r9d
	je	.L2315
	cmpb	$47, %r10b
	je	.L2332
	cmpb	$42, %r10b
	jne	.L2315
.L2332:
	incq	%rcx
	movb	%sil, (%r8)
	incq	%r8
	movzbl	(%rcx), %eax
	cmpb	$42, %al
	movl	%eax, %esi
	je	.L2332
	cmpb	$47, %al
	je	.L2332
	testl	%r9d, %r9d
	leal	-1(%r9), %edx
	jle	.L2356
.L2336:
	movl	%edx, %esi
	movb	$92, (%r8)
	movb	$10, 1(%r8)
	decl	%edx
	addq	$2, %r8
	testl	%esi, %esi
	jg	.L2336
.L2356:
	movzbl	(%rdi), %edx
	jmp	.L2315
.L2368:
	addq	$2, %rcx
	jmp	.L2361
	.p2align 6,,7
.L2364:
	cmpb	$10, 2(%rdi)
	jne	.L2289
	movq	%rax, %rsi
	movq	%rax, %rdx
	xorl	%r9d, %r9d
	.p2align 4,,7
.L2299:
	movzbl	(%rdx), %ecx
	cmpb	$92, %cl
	movl	%ecx, %r10d
	jne	.L2291
	movzbl	1(%rdx), %eax
	cmpb	$10, %al
	je	.L2369
	cmpb	$13, %al
	jne	.L2291
	cmpb	$10, 2(%rdx)
	jne	.L2291
	addq	$3, %rdx
.L2360:
	incl	%r9d
	jmp	.L2299
.L2291:
	testl	%r9d, %r9d
	je	.L2289
	cmpb	$47, %r10b
	je	.L2306
	cmpb	$42, %r10b
	jne	.L2289
	.p2align 4,,7
.L2306:
	incq	%rdx
	movb	%cl, (%rsi)
	incq	%rsi
	movzbl	(%rdx), %eax
	cmpb	$42, %al
	movl	%eax, %ecx
	je	.L2306
	cmpb	$47, %al
	je	.L2306
	testl	%r9d, %r9d
	leal	-1(%r9), %edx
	jle	.L2355
.L2310:
	movl	%edx, %r8d
	movb	$92, (%rsi)
	movb	$10, 1(%rsi)
	decl	%edx
	addq	$2, %rsi
	testl	%r8d, %r8d
	jg	.L2310
.L2355:
	movzbl	1(%rdi), %r8d
	jmp	.L2289
.L2369:
	addq	$2, %rdx
	jmp	.L2360
.L2283:
	testb	%dl, %dl
	je	.L2281
	cmpb	$10, %dl
	je	.L2281
	movl	$.LC160, %edi
	xorl	%eax, %eax
	jmp	pedwarn
.L2281:
	ret
.L2363:
	incq	%rdi
	jmp	.L2358
	.p2align 6,,7
.L2362:
	cmpb	$10, 1(%rdi)
	leaq	2(%rdi), %rdx
	cmove	%rdx, %rdi
	movzbl	(%rdi), %edx
	jmp	.L2285
.LFE23:
.Lfe23:
	.size	validate_else,.Lfe23-validate_else
	.align 2
	.p2align 4,,15
	.type	skip_to_end_of_comment,@function
skip_to_end_of_comment:
.LFB24:
	pushq	%r15
.LCFI126:
	movl	%edx, %r15d
	pushq	%r14
.LCFI127:
	movq	%rsi, %r14
	pushq	%r13
.LCFI128:
	movq	%rdi, %r13
	pushq	%r12
.LCFI129:
	xorl	%r12d, %r12d
	pushq	%rbp
.LCFI130:
	pushq	%rbx
.LCFI131:
	subq	$8, %rsp
.LCFI132:
	movl	put_out_comments(%rip), %eax
	movq	40(%rdi), %rbx
	movslq	28(%rdi),%rbp
	addq	32(%rdi), %rbp
	testl	%eax, %eax
	je	.L2371
	testq	%rsi, %rsi
	movl	$1, %eax
	cmove	%eax, %r12d
.L2371:
	testl	%r12d, %r12d
	je	.L2372
	movq	outbuf+40(%rip), %rcx
	movb	$47, (%rcx)
	movq	outbuf+40(%rip), %rcx
	leaq	1(%rcx), %rdx
	movq	%rdx, outbuf+40(%rip)
	movb	$42, 1(%rcx)
	incq	outbuf+40(%rip)
.L2372:
	movl	cplusplus_comments(%rip), %eax
	testl	%eax, %eax
	je	.L2373
	cmpb	$47, -1(%rbx)
	je	.L2436
.L2373:
	cmpq	%rbp, %rbx
	jae	.L2428
	.p2align 4,,7
.L2424:
	testl	%r12d, %r12d
	je	.L2389
	movzbl	(%rbx), %eax
	movq	outbuf+40(%rip), %rcx
	movb	%al, (%rcx)
	incq	outbuf+40(%rip)
.L2389:
	movzbl	(%rbx), %eax
	incq	%rbx
	cmpl	$42, %eax
	je	.L2396
	cmpl	$42, %eax
	jg	.L2423
	cmpl	$10, %eax
	je	.L2393
.L2386:
	cmpq	%rbp, %rbx
	jb	.L2424
.L2428:
	movq	%rbx, 40(%r13)
	movq	%rbx, %rax
	addq	$8, %rsp
	popq	%rbx
	popq	%rbp
	popq	%r12
	popq	%r13
	popq	%r14
	popq	%r15
	ret
	.p2align 6,,7
.L2393:
	testq	%r14, %r14
	je	.L2394
	incl	(%r14)
.L2394:
	testl	%r12d, %r12d
	je	.L2386
	incl	outbuf+24(%rip)
	jmp	.L2386
	.p2align 6,,7
.L2423:
	cmpl	$47, %eax
	jne	.L2386
	movl	warn_comments(%rip), %eax
	testl	%eax, %eax
	je	.L2386
	testl	%r15d, %r15d
	jne	.L2386
	cmpq	%rbp, %rbx
	jae	.L2428
	cmpb	$42, (%rbx)
	jne	.L2386
	movl	$.LC100, %edi
	xorl	%eax, %eax
	call	warning
	jmp	.L2386
	.p2align 6,,7
.L2396:
	movzbl	(%rbx), %edi
	cmpb	$92, %dil
	je	.L2437
.L2397:
	cmpb	$47, %dil
	jne	.L2386
	testl	%r12d, %r12d
	je	.L2420
	movq	outbuf+40(%rip), %r12
	movb	$47, (%r12)
	incq	outbuf+40(%rip)
.L2420:
	incq	%rbx
	jmp	.L2428
.L2437:
	cmpb	$10, 1(%rbx)
	jne	.L2397
	movq	%rbx, %rsi
	movq	%rbx, %rdx
	xorl	%r8d, %r8d
	.p2align 4,,7
.L2407:
	movzbl	(%rdx), %ecx
	cmpb	$92, %cl
	movl	%ecx, %r9d
	jne	.L2399
	movzbl	1(%rdx), %eax
	cmpb	$10, %al
	je	.L2438
	cmpb	$13, %al
	jne	.L2399
	cmpb	$10, 2(%rdx)
	jne	.L2399
	addq	$3, %rdx
.L2435:
	incl	%r8d
	jmp	.L2407
.L2399:
	testl	%r8d, %r8d
	je	.L2397
	cmpb	$47, %r9b
	je	.L2414
	cmpb	$42, %r9b
	jne	.L2397
	.p2align 4,,7
.L2414:
	incq	%rdx
	movb	%cl, (%rsi)
	incq	%rsi
	movzbl	(%rdx), %eax
	cmpb	$42, %al
	movl	%eax, %ecx
	je	.L2414
	cmpb	$47, %al
	je	.L2414
	testl	%r8d, %r8d
	leal	-1(%r8), %edx
	jle	.L2432
.L2418:
	movl	%edx, %edi
	movb	$92, (%rsi)
	movb	$10, 1(%rsi)
	decl	%edx
	addq	$2, %rsi
	testl	%edi, %edi
	jg	.L2418
.L2432:
	movzbl	(%rbx), %edi
	jmp	.L2397
.L2438:
	addq	$2, %rdx
	jmp	.L2435
.L2436:
	testl	%r12d, %r12d
	je	.L2374
	cmpq	%rbp, %rbx
	jae	.L2376
.L2379:
	movzbl	(%rbx), %esi
	movq	outbuf+40(%rip), %rdi
	incq	%rbx
	movb	%sil, (%rdi)
	incq	outbuf+40(%rip)
	cmpb	$10, %sil
	je	.L2433
	cmpq	%rbp, %rbx
	jb	.L2379
.L2376:
	movq	outbuf+40(%rip), %r10
	movb	$42, -1(%r10)
	movq	outbuf+40(%rip), %r9
	movb	$47, (%r9)
	movq	outbuf+40(%rip), %rbp
	leaq	1(%rbp), %r8
	movq	%r8, outbuf+40(%rip)
	movb	$10, 1(%rbp)
	incq	outbuf+40(%rip)
	jmp	.L2428
.L2433:
	decq	%rbx
	jmp	.L2376
.L2374:
	cmpq	%rbp, %rbx
	jae	.L2428
.L2385:
	movzbl	(%rbx), %r11d
	incq	%rbx
	cmpb	$10, %r11b
	je	.L2434
	cmpq	%rbp, %rbx
	jb	.L2385
	jmp	.L2428
.L2434:
	decq	%rbx
	jmp	.L2428
.LFE24:
.Lfe24:
	.size	skip_to_end_of_comment,.Lfe24-skip_to_end_of_comment
	.section	.rodata.str1.32
	.align 32
.LC161:
	.string	"unterminated character constant"
	.text
	.align 2
	.p2align 4,,15
	.type	skip_quoted_string,@function
skip_quoted_string:
.LFB25:
	pushq	%rbp
.LCFI133:
	movq	%r9, %rbp
	pushq	%rbx
.LCFI134:
	leaq	1(%rdi), %rbx
	subq	$8, %rsp
.LCFI135:
	movzbl	(%rdi), %r9d
	.p2align 4,,7
.L2466:
	cmpq	%rsi, %rbx
	jae	.L2471
	movzbl	(%rbx), %eax
	incq	%rbx
	cmpb	$92, %al
	je	.L2472
	cmpb	$10, %al
	je	.L2473
	cmpb	%r9b, %al
	jne	.L2466
.L2441:
	movq	%rbx, %rax
	addq	$8, %rsp
	popq	%rbx
	popq	%rbp
	ret
.L2473:
	movl	traditional(%rip), %eax
	testl	%eax, %eax
	jne	.L2470
	cmpb	$39, %r9b
	je	.L2474
	testq	%rcx, %rcx
	je	.L2466
	incl	(%rcx)
	jmp	.L2466
.L2474:
	movl	%edx, %edi
	xorl	%eax, %eax
	call	line_for_error
	movl	$.LC161, %esi
	movl	%eax, %edi
	xorl	%eax, %eax
	call	error_with_line
.L2470:
	decq	%rbx
.L2469:
	testq	%rbp, %rbp
	je	.L2441
	movl	$1, (%rbp)
	jmp	.L2441
.L2472:
	movzbl	(%rbx), %eax
	cmpb	$92, %al
	je	.L2475
.L2447:
	cmpb	$10, %al
	je	.L2476
.L2453:
	incq	%rbx
	jmp	.L2466
.L2476:
	testq	%rcx, %rcx
	je	.L2453
	testq	%r8, %r8
	je	.L2454
	movl	$1, (%r8)
.L2454:
	incl	(%rcx)
	jmp	.L2453
.L2475:
	cmpb	$10, 1(%rbx)
	jne	.L2447
.L2452:
	testq	%r8, %r8
	je	.L2450
	movl	$1, (%r8)
.L2450:
	testq	%rcx, %rcx
	je	.L2451
	incl	(%rcx)
.L2451:
	addq	$2, %rbx
	movzbl	(%rbx), %eax
	cmpb	$92, %al
	jne	.L2447
	cmpb	$10, 1(%rbx)
	je	.L2452
	jmp	.L2447
.L2471:
	movl	%edx, %edi
	xorl	%eax, %eax
	call	line_for_error
	movl	$.LC93, %esi
	movl	%eax, %edi
	xorl	%eax, %eax
	call	error_with_line
	jmp	.L2469
.LFE25:
.Lfe25:
	.size	skip_quoted_string,.Lfe25-skip_quoted_string
	.align 2
	.p2align 4,,15
	.type	skip_paren_group,@function
skip_paren_group:
.LFB26:
	pushq	%r12
.LCFI136:
	xorl	%r12d, %r12d
	pushq	%rbp
.LCFI137:
	movq	%rdi, %rbp
	pushq	%rbx
.LCFI138:
	subq	$16, %rsp
.LCFI139:
	movq	40(%rdi), %rdx
	movslq	28(%rdi),%rbx
	addq	32(%rdi), %rbx
	movl	$0, 12(%rsp)
	cmpq	%rbx, %rdx
	je	.L2494
	.p2align 4,,7
.L2492:
	movzbl	(%rdx), %eax
	incq	%rdx
	subl	$34, %eax
	cmpl	$13, %eax
	ja	.L2478
	mov	%eax, %ecx
	jmp	*.L2490(,%rcx,8)
	.section	.rodata
	.align 8
	.align 4
.L2490:
	.quad	.L2488
	.quad	.L2478
	.quad	.L2478
	.quad	.L2478
	.quad	.L2478
	.quad	.L2488
	.quad	.L2482
	.quad	.L2483
	.quad	.L2478
	.quad	.L2478
	.quad	.L2478
	.quad	.L2478
	.quad	.L2478
	.quad	.L2485
	.text
.L2482:
	incl	%r12d
	.p2align 4,,7
.L2478:
	cmpq	%rbx, %rdx
	jne	.L2492
.L2494:
	movq	%rdx, 40(%rbp)
	movq	%rdx, %rax
	addq	$16, %rsp
	popq	%rbx
	popq	%rbp
	popq	%r12
	ret
	.p2align 6,,7
.L2488:
	leaq	-1(%rdx), %rdi
	xorl	%ecx, %ecx
	xorl	%r8d, %r8d
	xorl	%edx, %edx
	xorl	%eax, %eax
	movq	%rbx, %rsi
	leaq	8(%rsp), %r9
	movl	$0, 8(%rsp)
	call	skip_quoted_string
	movq	%rax, %rdx
	movl	8(%rsp), %eax
	testl	%eax, %eax
	je	.L2478
	jmp	.L2494
	.p2align 6,,7
.L2483:
	decl	%r12d
	jne	.L2478
	jmp	.L2494
	.p2align 6,,7
.L2485:
	cmpb	$42, (%rdx)
	jne	.L2488
	movq	%rdx, 40(%rbp)
	movq	%rbp, %rdi
	leaq	12(%rsp), %rsi
	xorl	%edx, %edx
	xorl	%eax, %eax
	call	skip_to_end_of_comment
	movq	40(%rbp), %rdx
	jmp	.L2488
.LFE26:
.Lfe26:
	.size	skip_paren_group,.Lfe26-skip_paren_group
	.section	.rodata.str1.1
.LC162:
	.string	"# %d \"%s\""
.LC165:
	.string	" 3"
.LC163:
	.string	" 1"
.LC164:
	.string	" 2"
	.text
	.align 2
	.p2align 4,,15
	.type	output_line_command,@function
output_line_command:
.LFB27:
	pushq	%rbp
.LCFI140:
	movq	%rsp, %rbp
.LCFI141:
	subq	$32, %rsp
.LCFI142:
	movl	no_line_commands(%rip), %eax
	movq	%rbx, (%rsp)
.LCFI143:
	movq	%r12, 8(%rsp)
.LCFI144:
	movq	%r13, 16(%rsp)
.LCFI145:
	movq	%r14, 24(%rsp)
.LCFI146:
	movq	%rdi, %rbx
	movq	%rsi, %r12
	testl	%eax, %eax
	movl	%ecx, %r13d
	jne	.L2519
	cmpq	$0, (%rdi)
	je	.L2519
	movl	no_output(%rip), %eax
	testl	%eax, %eax
	jne	.L2519
	testl	%edx, %edx
	je	.L2518
	movl	24(%rdi), %ecx
	movl	24(%rsi), %esi
	cmpl	%esi, %ecx
	je	.L2495
	cmpl	%esi, %ecx
	jle	.L2498
	leal	8(%rsi), %edx
	cmpl	%edx, %ecx
	jge	.L2498
	movslq	28(%r12),%rdi
	movq	40(%r12), %r8
	subq	32(%r12), %r8
	subq	%r8, %rdi
	cmpq	$10, %rdi
	jle	.L2520
.L2502:
	cmpl	%esi, %ecx
	jle	.L2495
.L2506:
	movq	40(%r12), %rcx
	movb	$10, (%rcx)
	movl	24(%r12), %eax
	incq	40(%r12)
	incl	%eax
	movl	%eax, 24(%r12)
	cmpl	%eax, 24(%rbx)
	jg	.L2506
	.p2align 4,,7
.L2495:
	movq	-32(%rbp), %rbx
	movq	-24(%rbp), %r12
	movq	-16(%rbp), %r13
	movq	-8(%rbp), %r14
	leave
	ret
.L2520:
	movl	$10, %esi
	movq	%r12, %rdi
	xorl	%eax, %eax
	call	grow_outbuf
	movl	24(%r12), %esi
	movl	24(%rbx), %ecx
	jmp	.L2502
	.p2align 6,,7
.L2498:
	testl	%ecx, %ecx
	jne	.L2507
	movq	40(%rbx), %rcx
	movslq	28(%rbx),%rsi
	movq	%rcx, %r9
	subq	32(%rbx), %r9
	cmpq	%rsi, %r9
	jge	.L2507
	cmpb	$10, (%rcx)
	je	.L2521
.L2507:
	movq	8(%rbx), %rdi
	call	strlen
	movq	8(%rbx), %rcx
	movl	24(%rbx), %edx
	addq	$115, %rax
	movl	$.LC162, %esi
	andq	$-16, %rax
	subq	%rax, %rsp
	xorl	%eax, %eax
	movq	%rsp, %rdi
	movq	%rsp, %r14
	call	sprintf
	testl	%r13d, %r13d
	jne	.L2522
.L2508:
	cmpb	$0, 72(%rbx)
	jne	.L2523
.L2513:
	movq	%rsp, %rdi
	call	strlen
	movq	32(%r12), %rdi
	movq	40(%r12), %r8
	movslq	28(%r12),%r9
	leal	2(%rax), %esi
	movslq	%eax,%r13
	movslq	%esi,%rdx
	movb	$10, (%rsp,%r13)
	leal	1(%rax), %r13d
	movq	%r8, %rcx
	subq	%rdi, %rcx
	subq	%rcx, %r9
	cmpq	%rdx, %r9
	jle	.L2524
.L2515:
	cmpq	%rdi, %r8
	jbe	.L2516
	cmpb	$10, -1(%r8)
	je	.L2516
	movb	$10, (%r8)
	incq	40(%r12)
.L2516:
	movq	40(%r12), %rsi
	movq	%r14, %rdi
	movl	%r13d, %edx
	xorl	%eax, %eax
	movslq	%r13d,%r14
	call	bcopy
	addq	%r14, 40(%r12)
	.p2align 4,,7
.L2519:
	movl	24(%rbx), %eax
	movl	%eax, 24(%r12)
	jmp	.L2495
.L2524:
	movq	%r12, %rdi
	xorl	%eax, %eax
	call	grow_outbuf
	movq	32(%r12), %rdi
	movq	40(%r12), %r8
	jmp	.L2515
.L2523:
	movq	%rsp, %rdi
	movl	$.LC165, %esi
	call	strcat
	jmp	.L2513
.L2522:
	movl	$.LC163, %esi
	decl	%r13d
	movl	$.LC164, %r11d
	cmovne	%r11, %rsi
	movq	%rsp, %rdi
	call	strcat
	jmp	.L2508
.L2521:
	leaq	1(%rcx), %r10
	movl	$1, 24(%rbx)
	movq	%r10, 40(%rbx)
	jmp	.L2507
.L2518:
	movl	24(%rdi), %ecx
	jmp	.L2498
.LFE27:
.Lfe27:
	.size	output_line_command,.Lfe27-output_line_command
	.local	timebuf.2
	.comm	timebuf.2,8,8
	.section	.rodata.str1.32
	.align 32
.LC166:
	.string	"Predefined macro `%s' used inside `#if' during precompilation"
	.section	.rodata.str1.1
.LC169:
	.string	"\"\""
.LC168:
	.string	"\"%s\""
.LC170:
	.string	"%d"
.LC171:
	.string	"%s"
.LC172:
	.string	"long unsigned int"
.LC173:
	.string	"long int"
.LC174:
	.string	"short unsigned int"
.LC177:
	.string	"\"%02d:%02d:%02d\""
.LC176:
	.string	"\"%s %2d %4d\""
.LC175:
	.string	"#define %s %d\n"
	.section	.rodata.str1.32
	.align 32
.LC183:
	.string	"cccp error: invalid special hash type"
	.section	.rodata.str1.1
.LC178:
	.string	" 0 "
.LC180:
	.string	" 1 "
	.section	.rodata.str1.32
	.align 32
.LC182:
	.string	"`defined' without an identifier"
	.section	.rodata.str1.1
.LC179:
	.string	"#define %s\n"
.LC181:
	.string	"#undef "
.LC167:
	.string	"cccp error: not in any file?!"
.LC189:
	.string	"\\%03o"
.LC184:
	.string	"arguments given to macro `%s'"
	.section	.rodata.str1.32
	.align 32
.LC187:
	.string	"macro `%s' used with only %d args"
	.align 32
.LC186:
	.string	"macro `%s' used with just one arg"
	.section	.rodata.str1.1
.LC185:
	.string	"macro `%s' used without args"
	.section	.rodata.str1.32
	.align 32
.LC188:
	.string	"macro `%s' used with too many (%d) args"
	.text
	.align 2
	.p2align 4,,15
	.type	macroexpand,@function
macroexpand:
.LFB28:
	pushq	%rbp
.LCFI147:
	movq	%rsp, %rbp
.LCFI148:
	pushq	%r15
.LCFI149:
	pushq	%r14
.LCFI150:
	pushq	%r13
.LCFI151:
	movq	%rsi, %r13
	pushq	%r12
.LCFI152:
	pushq	%rbx
.LCFI153:
	subq	$88, %rsp
.LCFI154:
	movq	%rdi, -56(%rbp)
	movq	40(%rdi), %rdx
	movl	indepth(%rip), %edi
	movq	%rdx, -72(%rbp)
	movslq	%edi,%rcx
	leaq	(%rcx,%rcx,4), %rdx
	salq	$4, %rdx
	cmpl	$198, %edi
	movl	instack+24(%rdx), %r14d
	jg	.L2815
	movq	-56(%rbp), %rcx
	movl	24(%rcx), %edx
	cmpl	$31, %edx
	je	.L2527
	xorl	%ebx, %ebx
	xorl	%r15d, %r15d
	cmpq	$0, pcp_outfile(%rip)
	je	.L2528
	movl	pcp_inside_if(%rip), %eax
	testl	%eax, %eax
	je	.L2528
	cmpl	$33, %edx
	je	.L2528
	cmpl	$30, %edx
	je	.L2528
	movq	32(%rcx), %rsi
	movl	$.LC166, %edi
	xorl	%eax, %eax
	call	error
	movl	indepth(%rip), %edi
	.p2align 4,,7
.L2528:
	testl	%edi, %edi
	movl	%edi, %edx
	js	.L2530
	.p2align 4,,7
.L2534:
	movslq	%edx,%r8
	leaq	(%r8,%r8,4), %rsi
	salq	$4, %rsi
	cmpq	$0, instack(%rsi)
	leaq	instack(%rsi), %rcx
	jne	.L2806
	decl	%edx
	jns	.L2534
.L2530:
	testq	%rbx, %rbx
	je	.L2816
	movq	-56(%rbp), %r9
	movl	24(%r9), %edx
	leal	-20(%rdx), %eax
	cmpl	$13, %eax
	ja	.L2599
	mov	%eax, %r10d
	jmp	*.L2600(,%r10,8)
	.section	.rodata
	.align 8
	.align 4
.L2600:
	.quad	.L2557
	.quad	.L2559
	.quad	.L2539
	.quad	.L2539
	.quad	.L2544
	.quad	.L2551
	.quad	.L2552
	.quad	.L2553
	.quad	.L2554
	.quad	.L2559
	.quad	.L2555
	.quad	.L2599
	.quad	.L2599
	.quad	.L2564
	.text
.L2539:
	cmpl	$22, %edx
	je	.L2817
	movq	instack+8(%rip), %rbx
.L2541:
	testq	%rbx, %rbx
	jne	.L2818
	movl	$.LC169, %r14d
.L2537:
	movq	%r14, %rdi
	call	strlen
	movq	40(%r13), %rdi
	movslq	28(%r13),%r15
	subq	32(%r13), %rdi
	movslq	%eax,%r12
	movq	%rax, %rbx
	subq	%rdi, %r15
	cmpq	%r12, %r15
	jle	.L2819
.L2602:
	movq	40(%r13), %rsi
	movq	%r14, %rdi
	movl	%ebx, %edx
	xorl	%eax, %eax
	call	bcopy
	addq	%r12, 40(%r13)
.L2525:
	leaq	-40(%rbp), %rsp
	popq	%rbx
	popq	%r12
	popq	%r13
	popq	%r14
	popq	%r15
	leave
	ret
.L2819:
	movl	%eax, %esi
	movq	%r13, %rdi
	xorl	%eax, %eax
	call	grow_outbuf
	jmp	.L2602
.L2818:
	movq	%rbx, %rdi
	call	strlen
	movq	%rbx, %rdx
	movl	$.LC168, %esi
	addq	$18, %rax
	andq	$-16, %rax
	subq	%rax, %rsp
	movq	%rsp, %r14
	movq	%rsp, %rdi
.L2808:
	xorl	%eax, %eax
	call	sprintf
	jmp	.L2537
.L2817:
	movq	8(%rbx), %rbx
	jmp	.L2541
.L2557:
	subq	$16, %rsp
	movl	$.LC170, %esi
	movl	24(%rbx), %edx
	movq	%rsp, %r14
	movq	%rsp, %rdi
.L2809:
	xorl	%eax, %eax
	call	sprintf
	jmp	.L2537
.L2544:
	xorl	%esi, %esi
	movl	%edi, %ecx
	testl	%edi, %edi
	js	.L2769
.L2550:
	movslq	%ecx,%r11
	leal	1(%rsi), %ebx
	leaq	(%r11,%r11,4), %rdi
	salq	$4, %rdi
	cmpq	$0, instack(%rdi)
	cmovne	%ebx, %esi
	decl	%ecx
	jns	.L2550
.L2769:
	subq	$16, %rsp
	leal	-1(%rsi), %edx
	movl	$.LC170, %esi
	movq	%rsp, %r14
	movq	%rsp, %rdi
	jmp	.L2809
.L2551:
	movq	version_string(%rip), %rdi
	call	strlen
	movq	version_string(%rip), %rdx
	movl	$.LC168, %esi
	addq	$18, %rax
	andq	$-16, %rax
	subq	%rax, %rsp
	movq	%rsp, %r14
	movq	%rsp, %rdi
	jmp	.L2808
.L2552:
	subq	$32, %rsp
	movl	$.LC171, %esi
	movl	$.LC172, %edx
	movq	%rsp, %r14
	movq	%rsp, %rdi
	jmp	.L2808
.L2553:
	subq	$16, %rsp
	movl	$.LC171, %esi
	movl	$.LC173, %edx
	movq	%rsp, %r14
	movq	%rsp, %rdi
	jmp	.L2808
.L2554:
	subq	$32, %rsp
	movl	$.LC171, %esi
	movl	$.LC174, %edx
	movq	%rsp, %r14
	movq	%rsp, %rdi
	jmp	.L2808
.L2559:
	movq	timebuf.2(%rip), %r9
	subq	$32, %rsp
	movq	%rsp, %r14
	testq	%r9, %r9
	je	.L2820
.L2560:
	cmpl	$21, %edx
	je	.L2821
	movl	8(%r9), %edx
	movl	4(%r9), %ecx
	movq	%rsp, %rdi
	movl	(%r9), %r8d
	movl	$.LC177, %esi
	xorl	%eax, %eax
	call	sprintf
	jmp	.L2537
.L2821:
	movslq	16(%r9),%r10
	movl	20(%r9), %r8d
	movq	%rsp, %rdi
	movl	12(%r9), %ecx
	movl	$.LC176, %esi
	xorl	%eax, %eax
	addl	$1900, %r8d
	movq	monthnames(,%r10,8), %rdx
	call	sprintf
	jmp	.L2537
.L2820:
	xorl	%edi, %edi
	xorl	%eax, %eax
	call	time
	leaq	-44(%rbp), %rdi
	movl	%eax, -44(%rbp)
	xorl	%eax, %eax
	call	localtime
	movq	-56(%rbp), %rcx
	movq	%rax, %r9
	movq	%rax, timebuf.2(%rip)
	movl	24(%rcx), %edx
	jmp	.L2560
.L2555:
	movq	-56(%rbp), %r12
	subq	$16, %rsp
	xorl	%eax, %eax
	movq	%rsp, %rdi
	movl	$.LC170, %esi
	movq	%rsp, %r14
	movl	40(%r12), %edx
	call	sprintf
	movl	pcp_inside_if(%rip), %eax
	testl	%eax, %eax
	je	.L2537
	movq	pcp_outfile(%rip), %rdi
	testq	%rdi, %rdi
	je	.L2537
	movq	-56(%rbp), %r15
	movl	$.LC175, %esi
	xorl	%eax, %eax
	movq	32(%r15), %rdx
	movl	40(%r15), %ecx
	call	fprintf
	jmp	.L2537
.L2599:
	movl	$.LC183, %edi
	xorl	%eax, %eax
	call	error
	jmp	.L2814
.L2564:
	movslq	%edi,%r9
	movl	$.LC178, %r14d
	leaq	(%r9,%r9,4), %r8
	salq	$4, %r8
	movq	instack+40(%r8), %rsi
	leaq	instack(%r8), %rbx
	movzbq	(%rsi), %rdx
	cmpb	$0, is_hor_space(%rdx)
	je	.L2771
.L2569:
	movq	40(%rbx), %r11
	leaq	1(%r11), %rax
	movq	%rax, 40(%rbx)
	movzbq	1(%r11), %rdi
	cmpb	$0, is_hor_space(%rdi)
	jne	.L2569
.L2771:
	movq	40(%rbx), %rdi
	cmpb	$40, (%rdi)
	je	.L2822
.L2570:
	movzbq	(%rdi), %rsi
	cmpb	$0, is_idstart(%rsi)
	je	.L2577
	movl	$-1, %esi
	xorl	%eax, %eax
	movl	%esi, %edx
	call	lookup
	testq	%rax, %rax
	je	.L2578
	movq	pcp_outfile(%rip), %rdi
	testq	%rdi, %rdi
	je	.L2579
	movl	pcp_inside_if(%rip), %r8d
	testl	%r8d, %r8d
	je	.L2579
	movq	40(%rax), %r9
	movl	8(%r9), %r14d
	testl	%r14d, %r14d
	jne	.L2823
.L2579:
	movl	$.LC180, %r14d
.L2580:
	movq	40(%rbx), %rdi
	movzbq	(%rdi), %r10
	movq	%rdi, %rdx
	cmpb	$0, is_idchar(%r10)
	je	.L2776
.L2591:
	movq	%rdx, %r8
	leaq	1(%rdx), %rdi
	movq	%rdi, 40(%rbx)
	movq	%rdi, %rdx
	movzbq	1(%r8), %rsi
	cmpb	$0, is_idchar(%rsi)
	jne	.L2591
.L2776:
	movzbq	(%rdi), %rdx
	cmpb	$0, is_hor_space(%rdx)
	je	.L2778
.L2596:
	movq	%rdi, %r11
	leaq	1(%rdi), %rcx
	movq	%rcx, 40(%rbx)
	movq	%rcx, %rdi
	movzbq	1(%r11), %r9
	cmpb	$0, is_hor_space(%r9)
	jne	.L2596
.L2778:
	testl	%r15d, %r15d
	je	.L2537
	movq	40(%rbx), %rax
	cmpb	$41, (%rax)
	je	.L2824
.L2577:
	movl	$.LC182, %edi
	xorl	%eax, %eax
	call	error
	jmp	.L2537
.L2824:
	incq	%rax
	movq	%rax, 40(%rbx)
	jmp	.L2537
.L2823:
	movq	32(%rax), %rdx
	movl	$.LC179, %esi
	xorl	%eax, %eax
	call	fprintf
	jmp	.L2579
	.p2align 6,,7
.L2578:
	movq	pcp_outfile(%rip), %rdi
	testq	%rdi, %rdi
	je	.L2580
	movl	pcp_inside_if(%rip), %eax
	testl	%eax, %eax
	je	.L2580
	movq	40(%rbx), %r12
	xorl	%eax, %eax
	movl	$.LC181, %esi
	call	fprintf
	movzbl	(%r12), %edx
	movzbl	%dl, %edi 
	cmpb	$0, is_idchar(%rdi)
	jne	.L2585
.L2774:
	movq	pcp_outfile(%rip), %rsi
	movl	(%rsi), %eax
	decl	%eax
	testl	%eax, %eax
	movl	%eax, (%rsi)
	js	.L2825
	movq	8(%rsi), %r12
	movb	$10, (%r12)
	incq	8(%rsi)
	jmp	.L2580
.L2825:
	movl	$10, %edi
	xorl	%eax, %eax
	call	_flsbuf
	jmp	.L2580
	.p2align 6,,7
.L2585:
	movq	pcp_outfile(%rip), %rsi
	movzbl	%dl, %edi
	incq	%r12
	xorl	%eax, %eax
	call	fputc
	movzbl	(%r12), %ecx
	movzbl	%cl, %r11d 
	movl	%ecx, %edx
	cmpb	$0, is_idchar(%r11)
	jne	.L2585
	jmp	.L2774
	.p2align 6,,7
.L2822:
	leaq	1(%rdi), %rcx
	movl	$1, %r15d
	movq	%rcx, 40(%rbx)
	movzbq	1(%rdi), %r12
	cmpb	$0, is_hor_space(%r12)
	je	.L2801
.L2575:
	movq	40(%rbx), %rdx
	leaq	1(%rdx), %rdi
	movq	%rdi, 40(%rbx)
	movzbq	1(%rdx), %r10
	cmpb	$0, is_hor_space(%r10)
	jne	.L2575
	jmp	.L2570
.L2801:
	movq	40(%rbx), %rdi
	jmp	.L2570
	.p2align 6,,7
.L2816:
	movl	$.LC167, %edi
	xorl	%eax, %eax
	call	error
	jmp	.L2525
.L2806:
	movq	%rcx, %rbx
	jmp	.L2530
.L2527:
	movl	pcp_inside_if(%rip), %r13d
	testl	%r13d, %r13d
	je	.L2603
	movq	pcp_outfile(%rip), %rsi
	testq	%rsi, %rsi
	je	.L2603
	movq	-72(%rbp), %rax
	movl	8(%rax), %ebx
	testl	%ebx, %ebx
	jne	.L2826
.L2603:
	movq	-72(%rbp), %r12
	movl	(%r12), %ecx
	testl	%ecx, %ecx
	movl	%ecx, -60(%rbp)
	js	.L2604
	movl	%ecx, %r9d
	xorl	%r13d, %r13d
	xorl	%ecx, %ecx
	incl	%r9d
	movslq	%r9d,%r8
	leaq	0(,%r8,8), %rsi
	subq	%r8, %rsi
	leaq	15(,%rsi,8), %r10
	andq	$-16, %r10
	subq	%r10, %rsp
	cmpl	-60(%rbp), %ecx
	movq	%rsp, -80(%rbp)
	jge	.L2780
	.p2align 4,,7
.L2609:
	movslq	%ecx,%rbx
	movq	-80(%rbp), %r15
	incl	%ecx
	leaq	0(,%rbx,8), %r11
	subq	%rbx, %r11
	leaq	(%r15,%r11,8), %rdx
	movb	$0, 50(%rdx)
	movq	$.LC23, 8(%rdx)
	movq	$.LC23, (%rdx)
	cmpl	-60(%rbp), %ecx
	movl	$0, 24(%rdx)
	movl	$0, 20(%rdx)
	movl	$0, 16(%rdx)
	movq	$0, 40(%rdx)
	movq	$0, 32(%rdx)
	jl	.L2609
.L2780:
	xorl	%ebx, %ebx
	xorl	%r12d, %r12d
	movl	$1, %r15d
	.p2align 4,,7
.L2610:
	movslq	%edi,%r10
	leaq	(%r10,%r10,4), %rcx
	salq	$4, %rcx
	incq	instack+40(%rcx)
	testl	%r12d, %r12d
	jne	.L2612
	cmpl	-60(%rbp), %ebx
	jl	.L2615
	movl	-60(%rbp), %edi
	testl	%edi, %edi
	jne	.L2614
	testl	%ebx, %ebx
	jne	.L2614
.L2615:
	movl	-60(%rbp), %eax
	decl	%eax
	cmpl	%eax, %ebx
	je	.L2827
.L2616:
	movslq	%ebx,%r8
	movq	-80(%rbp), %rax
	leaq	0(,%r8,8), %rsi
	subq	%r8, %rsi
	leaq	(%rax,%rsi,8), %rdi
	movl	%r12d, %esi
.L2810:
	xorl	%eax, %eax
	call	macarg
	testq	%rax, %rax
	movq	%rax, %r13
	jne	.L2807
	incl	%ebx
	movl	indepth(%rip), %edi
.L2612:
	movslq	%edi,%r11
	leaq	(%r11,%r11,4), %rdx
	salq	$4, %rdx
	movq	instack+40(%rdx), %r9
	cmpb	$41, (%r9)
	jne	.L2610
.L2611:
	cmpl	$1, %ebx
	je	.L2828
.L2620:
	movl	-60(%rbp), %ecx
	movl	$0, -116(%rbp)
	testl	%ecx, %ecx
	jne	.L2627
	testl	%ebx, %ebx
	jle	.L2627
	testq	%r13, %r13
	je	.L2829
.L2629:
	movl	indepth(%rip), %edi
	movl	-60(%rbp), %edx
	movslq	%edi,%r14
	leaq	(%r14,%r14,4), %r11
	salq	$4, %r11
	incq	instack+40(%r11)
	testl	%edx, %edx
	jne	.L2644
	movq	-72(%rbp), %r10
	movq	-72(%rbp), %r12
	movq	16(%r10), %r15
	movl	4(%r12), %r13d
	movq	%r15, -128(%rbp)
.L2763:
	leal	1(%rdi), %eax
	movl	-60(%rbp), %edx
	movl	$0, %ecx
	movl	%eax, indepth(%rip)
	movl	traditional(%rip), %ebx
	movq	-128(%rbp), %rdi
	cltq
	movq	if_stack(%rip), %r11
	leaq	(%rax,%rax,4), %r14
	salq	$4, %r14
	testl	%edx, %edx
	cmovg	-128(%rbp), %rcx
	testl	%ebx, %ebx
	movq	$0, instack(%r14)
	movq	$0, instack+8(%r14)
	movl	$0, instack+24(%r14)
	movq	%rdi, instack+32(%r14)
	movl	%r13d, instack+28(%r14)
	movq	%rdi, instack+40(%r14)
	movq	%r11, instack+56(%r14)
	movb	$0, instack+72(%r14)
	movq	%rcx, instack+64(%r14)
	movq	-56(%rbp), %rcx
	movq	%rcx, instack+48(%r14)
	jne	.L2525
	movl	$32, 24(%rcx)
	jmp	.L2525
.L2644:
	movq	-72(%rbp), %rdi
	movq	-72(%rbp), %r13
	movq	-72(%rbp), %rbx
	movl	4(%rdi), %ecx
	movq	16(%rbx), %rsi
	movl	%ecx, -100(%rbp)
	movq	48(%r13), %rcx
	movq	%rsi, -88(%rbp)
	testq	%rcx, %rcx
	je	.L2783
	movl	traditional(%rip), %edi
	.p2align 4,,7
.L2656:
	cmpb	$0, 8(%rcx)
	je	.L2650
	movl	16(%rcx), %esi
	movq	-80(%rbp), %r8
	movslq	%esi,%rax
	leaq	0(,%rax,8), %r9
	subq	%rax, %r9
	movl	24(%r8,%r9,8), %edx
.L2813:
	addl	%edx, -100(%rbp)
.L2651:
	movslq	%esi,%r8
	movq	-80(%rbp), %rsi
	leaq	0(,%r8,8), %rbx
	subq	%r8, %rbx
	leaq	(%rsi,%rbx,8), %rdx
	movzbl	50(%rdx), %eax
	cmpb	$9, %al
	jg	.L2648
	incb	%al
	movb	%al, 50(%rdx)
.L2648:
	movq	(%rcx), %rcx
	testq	%rcx, %rcx
	jne	.L2656
.L2783:
	movl	-100(%rbp), %edi
	xorl	%eax, %eax
	xorl	%r13d, %r13d
	incl	%edi
	call	xmalloc
	movq	-72(%rbp), %rcx
	xorl	%esi, %esi
	movq	%rax, -128(%rbp)
	movl	$0, -112(%rbp)
	movq	48(%rcx), %r15
	testq	%r15, %r15
	je	.L2785
.L2747:
	movslq	16(%r15),%r11
	movq	-80(%rbp), %rax
	xorl	%ecx, %ecx
	leaq	0(,%r11,8), %r9
	subq	%r11, %r9
	leaq	(%rax,%r9,8), %rdi
	movl	12(%r15), %eax
	movq	%rdi, -96(%rbp)
	cmpl	%eax, %ecx
	jge	.L2787
	.p2align 4,,7
.L2668:
	movl	-116(%rbp), %r14d
	testl	%r14d, %r14d
	je	.L2666
	cmpb	$0, 11(%r15)
	je	.L2667
	cmpb	$0, 9(%r15)
	jne	.L2663
.L2667:
	testq	%rsi, %rsi
	je	.L2666
	cmpb	$0, 11(%rsi)
	je	.L2666
	cmpb	$0, 10(%rsi)
	jne	.L2663
	.p2align 4,,7
.L2666:
	movslq	-112(%rbp),%rdi
	movq	-88(%rbp), %rdx
	movslq	%r13d,%r12
	movq	-128(%rbp), %r10
	incl	%r13d
	movzbl	(%rdi,%rdx), %r8d
	movb	%r8b, (%r12,%r10)
	movl	12(%r15), %eax
.L2663:
	incl	%ecx
	incl	-112(%rbp)
	cmpl	%eax, %ecx
	jl	.L2668
.L2787:
	cmpb	$0, 8(%r15)
	je	.L2669
	movq	-96(%rbp), %rax
	xorl	%r12d, %r12d
	movl	$0, -108(%rbp)
	movl	$0, -104(%rbp)
	movl	16(%rax), %r14d
	cmpl	%r14d, %r12d
	jge	.L2676
	movq	(%rax), %rbx
	movzbq	(%rbx), %rsi
	movq	%rbx, %rdx
	cmpb	$0, is_space(%rsi)
	je	.L2671
	.p2align 4,,7
.L2674:
	incl	%r12d
	cmpl	%r14d, %r12d
	jge	.L2676
	movslq	%r12d,%r11
	movzbq	(%r11,%rdx), %r9
	cmpb	$0, is_space(%r9)
	jne	.L2674
.L2671:
	cmpl	%r14d, %r12d
	jge	.L2676
	movslq	%r14d,%r8
	movzbq	-1(%r8,%rdx), %r10
	cmpb	$0, is_space(%r10)
	je	.L2676
.L2679:
	decl	%r14d
	cmpl	%r14d, %r12d
	jge	.L2676
	movslq	%r14d,%rsi
	movzbq	-1(%rsi,%rdx), %rdi
	cmpb	$0, is_space(%rdi)
	jne	.L2679
.L2676:
	movl	traditional(%rip), %eax
	testl	%eax, %eax
	jne	.L2680
	movq	-128(%rbp), %rax
	movslq	%r13d,%rdx
	incl	%r13d
	movb	$34, (%rdx,%rax)
.L2680:
	cmpl	%r14d, %r12d
	jge	.L2791
	.p2align 4,,7
.L2711:
	movq	-96(%rbp), %r9
	movslq	%r12d,%rdx
	movq	%rdx, %rsi
	movq	(%r9), %rcx
	leaq	(%rdx,%rcx), %rax
	movzbl	(%rax), %ebx
	cmpl	$10, %ebx
	je	.L2830
.L2685:
	movl	-104(%rbp), %eax
	testl	%eax, %eax
	jne	.L2686
	cmpl	$10, %ebx
	je	.L2831
	movslq	%ebx,%r11
	cmpb	$0, is_space(%r11)
	je	.L2686
	.p2align 4,,7
.L2696:
	cmpl	$10, %ebx
	je	.L2832
	movslq	%ebx,%r10
	cmpb	$0, is_space(%r10)
	je	.L2690
	incl	%r12d
.L2693:
	movslq	%r12d,%r8
	movzbl	(%r8,%rcx), %ebx
	movq	%r8, %rdx
	jmp	.L2696
.L2690:
	decl	%r12d
	movl	$32, %ebx
.L2686:
	movl	-108(%rbp), %eax
	testl	%eax, %eax
	je	.L2697
	movl	$0, -108(%rbp)
.L2698:
	cmpl	$34, %ebx
	je	.L2706
	movl	-104(%rbp), %ecx
	testl	%ecx, %ecx
	je	.L2705
	cmpl	$92, %ebx
	je	.L2706
.L2705:
	movq	__lc_ctype(%rip), %rdx
	movq	48(%rdx), %rcx
	testq	%rcx, %rcx
	jne	.L2708
	movslq	%ebx,%r9
	salq	$2, %r9
	addq	104(%rdx), %r9
	cmpb	$0, (%r9)
	js	.L2709
.L2707:
	movslq	%r13d,%rdi
	movl	$.LC189, %esi
	movl	%ebx, %edx
	addq	-128(%rbp), %rdi
	xorl	%eax, %eax
	addl	$4, %r13d
	call	sprintf
.L2683:
	incl	%r12d
	cmpl	%r14d, %r12d
	jl	.L2711
.L2791:
	movl	traditional(%rip), %r14d
	testl	%r14d, %r14d
	jne	.L2713
	movq	-128(%rbp), %r11
	movslq	%r13d,%r12
	incl	%r13d
	movb	$34, (%r12,%r11)
.L2713:
	cmpl	-100(%rbp), %r13d
	jg	.L2814
	movq	%r15, %rsi
	movq	(%r15), %r15
	testq	%r15, %r15
	jne	.L2747
.L2785:
	movq	-72(%rbp), %r15
	movl	4(%r15), %eax
	cmpl	%eax, -112(%rbp)
	jge	.L2797
	xorl	%edi, %edi
	.p2align 4,,7
.L2755:
	movslq	-112(%rbp),%rcx
	movq	-88(%rbp), %r9
	movl	-116(%rbp), %ebx
	cmpb	$41, (%rcx,%r9)
	cmove	%edi, %ebx
	testl	%ebx, %ebx
	movl	%ebx, -116(%rbp)
	je	.L2754
	testq	%rsi, %rsi
	je	.L2754
	cmpb	$0, 11(%rsi)
	je	.L2754
	cmpb	$0, 10(%rsi)
	jne	.L2750
.L2754:
	movq	-88(%rbp), %rax
	movq	-128(%rbp), %rdx
	movslq	%r13d,%r14
	incl	%r13d
	movzbl	(%rcx,%rax), %r11d
	movb	%r11b, (%r14,%rdx)
	movq	-72(%rbp), %rcx
	movl	4(%rcx), %eax
.L2750:
	incl	-112(%rbp)
	cmpl	%eax, -112(%rbp)
	jl	.L2755
.L2797:
	movq	-128(%rbp), %rsi
	movslq	%r13d,%rdi
	xorl	%r12d, %r12d
	movb	$0, (%rdi,%rsi)
	cmpl	-60(%rbp), %r12d
	jge	.L2805
	.p2align 4,,7
.L2762:
	movslq	%r12d,%r15
	movq	-80(%rbp), %r10
	leaq	0(,%r15,8), %r8
	subq	%r15, %r8
	leaq	(%r10,%r8,8), %rbx
	movq	32(%rbx), %rdi
	testq	%rdi, %rdi
	jne	.L2833
.L2760:
	movq	40(%rbx), %rdi
	testq	%rdi, %rdi
	jne	.L2834
.L2758:
	incl	%r12d
	cmpl	-60(%rbp), %r12d
	jl	.L2762
.L2805:
	movl	indepth(%rip), %edi
	jmp	.L2763
.L2834:
	xorl	%eax, %eax
	call	free
	jmp	.L2758
.L2833:
	xorl	%eax, %eax
	call	free
	jmp	.L2760
	.p2align 6,,7
.L2709:
	movq	-128(%rbp), %rax
	movslq	%r13d,%rdx
	incl	%r13d
	movb	%bl, (%rdx,%rax)
	jmp	.L2683
.L2708:
	xorl	%eax, %eax
	movl	%ebx, %edi
	movl	$128, %esi
	call	*%rcx
	testl	%eax, %eax
	je	.L2707
	jmp	.L2709
.L2706:
	movq	-128(%rbp), %rsi
	movslq	%r13d,%rdi
	incl	%r13d
	movb	$92, (%rdi,%rsi)
	jmp	.L2705
	.p2align 6,,7
.L2697:
	cmpl	$92, %ebx
	movl	$1, %eax
	cmovne	-108(%rbp), %eax
	movl	%eax, -108(%rbp)
	movl	-104(%rbp), %eax
	testl	%eax, %eax
	je	.L2700
	cmpl	-104(%rbp), %ebx
	jne	.L2698
	movl	$0, -104(%rbp)
	jmp	.L2698
.L2700:
	cmpl	$34, %ebx
	je	.L2704
	cmpl	$39, %ebx
	jne	.L2698
.L2704:
	movl	%ebx, -104(%rbp)
	jmp	.L2698
	.p2align 6,,7
.L2832:
	movzbq	1(%rdx,%rcx), %rbx
	cmpb	$0, is_space(%rbx)
	je	.L2690
	addl	$2, %r12d
	jmp	.L2693
.L2831:
	cmpb	$10, 1(%rsi,%rcx)
	je	.L2696
	jmp	.L2686
.L2830:
	cmpb	$10, 1(%rax)
	je	.L2685
	incl	%r12d
	jmp	.L2683
.L2669:
	testl	$16776960, 8(%r15)
	jne	.L2715
	movl	traditional(%rip), %ebx
	testl	%ebx, %ebx
	je	.L2714
.L2715:
	movq	-96(%rbp), %r8
	cmpb	$0, 9(%r15)
	movslq	16(%r8),%r10
	movq	(%r8), %rbx
	leaq	(%r10,%rbx), %r12
	je	.L2716
	cmpq	%r12, %rbx
	je	.L2804
	movzbl	(%rbx), %edx
	movzbl	%dl, %ecx 
	cmpb	$0, is_space(%rcx)
	je	.L2718
.L2721:
	incq	%rbx
	cmpq	%r12, %rbx
	je	.L2804
	movzbl	(%rbx), %edx
	movzbl	%dl, %edi 
	cmpb	$0, is_space(%rdi)
	jne	.L2721
.L2718:
	cmpq	%r12, %rbx
	je	.L2723
	movzbl	%dl, %esi 
	cmpb	$0, is_idchar(%rsi)
	je	.L2723
.L2726:
	movq	-128(%rbp), %rax
	incq	%rbx
	movslq	%r13d,%r9
	incl	%r13d
	cmpq	%r12, %rbx
	movb	%dl, (%r9,%rax)
	je	.L2804
	movzbl	(%rbx), %edx
	movzbl	%dl, %r14d 
	cmpb	$0, is_idchar(%r14)
	jne	.L2726
.L2723:
	cmpb	$10, %dl
	je	.L2835
.L2716:
	cmpb	$0, 10(%r15)
	je	.L2728
	cmpq	%r12, %rbx
	je	.L2728
	.p2align 4,,7
.L2743:
	movzbl	-1(%r12), %edx
	leaq	-1(%r12), %rcx
	movzbl	%dl, %r11d 
	cmpb	$0, is_space(%r11)
	je	.L2732
	movq	%rcx, %r12
.L2729:
	cmpq	%r12, %rbx
	jne	.L2743
.L2728:
	movslq	%r13d,%rsi
	movq	%r12, %rdx
	movq	%rbx, %rdi
	addq	-128(%rbp), %rsi
	subq	%rbx, %rdx
	xorl	%eax, %eax
	call	bcopy
	movl	%r12d, %r8d
	subl	%ebx, %r8d
	addl	%r8d, %r13d
	jmp	.L2713
.L2732:
	cmpb	$45, %dl
	jne	.L2728
	cmpq	%rbx, %rcx
	movq	%rcx, %rax
	je	.L2736
	cmpb	$10, -2(%r12)
	je	.L2739
.L2736:
	movq	%r12, %r10
	subq	%rax, %r10
	movq	%r10, %rax
	decq	%rax
	testl	$1, %eax 
	je	.L2728
	subq	$2, %r12
	jmp	.L2729
	.p2align 6,,7
.L2739:
	decq	%rax
	cmpq	%rbx, %rax
	je	.L2736
	cmpb	$10, -1(%rax)
	je	.L2739
	jmp	.L2736
.L2835:
	cmpb	$45, 1(%rbx)
	leaq	2(%rbx), %rdx
	cmove	%rdx, %rbx
	jmp	.L2716
.L2804:
	movzbl	(%rbx), %edx
	jmp	.L2723
.L2714:
	movq	-96(%rbp), %r12
	movslq	%r13d,%rsi
	xorl	%eax, %eax
	addq	-128(%rbp), %rsi
	movq	8(%r12), %rdi
	movl	20(%r12), %edx
	call	bcopy
	movq	-96(%rbp), %rbx
	movl	20(%rbx), %esi
	addl	%esi, %r13d
	cmpb	$1, 50(%rbx)
	jle	.L2713
	cmpb	$0, 48(%rbx)
	jle	.L2713
	movq	8(%rbx), %rdi
	movb	$1, 50(%rbx)
	xorl	%eax, %eax
	call	delete_newlines
	movl	%eax, 20(%rbx)
	jmp	.L2713
	.p2align 6,,7
.L2650:
	testl	$16776960, 8(%rcx)
	jne	.L2653
	testl	%edi, %edi
	je	.L2652
.L2653:
	movl	16(%rcx), %esi
	movq	-80(%rbp), %r11
	movslq	%esi,%r12
	leaq	0(,%r12,8), %r14
	subq	%r12, %r14
	movl	16(%r11,%r14,8), %edx
	addl	%edx, -100(%rbp)
	jmp	.L2651
.L2652:
	movl	16(%rcx), %esi
	movq	-80(%rbp), %r15
	movslq	%esi,%r13
	leaq	0(,%r13,8), %r10
	subq	%r13, %r10
	movl	20(%r15,%r10,8), %edx
	jmp	.L2813
.L2829:
	movq	-56(%rbp), %r13
	movl	$.LC184, %edi
	movq	32(%r13), %rsi
.L2812:
	xorl	%eax, %eax
	call	error
	jmp	.L2629
.L2627:
	cmpl	-60(%rbp), %ebx
	jge	.L2630
	cmpl	$1, -60(%rbp)
	je	.L2836
.L2631:
	movl	-60(%rbp), %eax
	decl	%eax
	cmpl	%eax, %ebx
	je	.L2837
.L2633:
	testq	%r13, %r13
	jne	.L2629
	testl	%ebx, %ebx
	je	.L2838
	cmpl	$1, %ebx
	je	.L2839
	movq	-56(%rbp), %r8
	movl	$.LC187, %edi
	movq	32(%r8), %rsi
.L2811:
	movl	%ebx, %edx
	xorl	%eax, %eax
	call	error
	jmp	.L2629
.L2839:
	movq	-56(%rbp), %rax
	movl	$.LC186, %edi
	movq	32(%rax), %rsi
	jmp	.L2812
.L2838:
	movq	-56(%rbp), %rbx
	movl	$.LC185, %edi
	movq	32(%rbx), %rsi
	jmp	.L2812
.L2837:
	movq	-72(%rbp), %rsi
	cmpb	$0, 40(%rsi)
	je	.L2633
	movl	$1, -116(%rbp)
	jmp	.L2629
.L2836:
	testl	%ebx, %ebx
	jne	.L2631
	movl	traditional(%rip), %edi
	testl	%edi, %edi
	jne	.L2629
	jmp	.L2631
	.p2align 6,,7
.L2630:
	cmpl	-60(%rbp), %ebx
	jle	.L2629
	testq	%r13, %r13
	jne	.L2629
	movq	-56(%rbp), %r9
	movl	$.LC188, %edi
	movq	32(%r9), %rsi
	jmp	.L2811
.L2828:
	movq	-80(%rbp), %r12
	movslq	16(%r12),%r14
	movq	(%r12), %rdx
	leaq	(%r14,%rdx), %rcx
	cmpq	%rcx, %rdx
	je	.L2799
	movzbq	(%rdx), %r15
	cmpb	$0, is_space(%r15)
	je	.L2622
.L2625:
	incq	%rdx
	cmpq	%rcx, %rdx
	je	.L2799
	movzbq	(%rdx), %r10
	cmpb	$0, is_space(%r10)
	jne	.L2625
.L2622:
	cmpq	%rcx, %rdx
	jne	.L2620
.L2799:
	xorl	%ebx, %ebx
	jmp	.L2620
.L2807:
	movl	%r14d, %edi
	xorl	%eax, %eax
	call	line_for_error
	movq	%r13, %rsi
	movl	%eax, %edi
	xorl	%eax, %eax
	call	error_with_line
	jmp	.L2611
.L2827:
	movq	-72(%rbp), %r13
	cmpb	$0, 40(%r13)
	cmovne	%r15d, %r12d
	jmp	.L2616
.L2614:
	xorl	%edi, %edi
	xorl	%esi, %esi
	jmp	.L2810
.L2604:
	movq	-72(%rbp), %r9
	movq	-72(%rbp), %r12
	movq	16(%r9), %r13
	movq	%r13, -128(%rbp)
	movl	4(%r12), %r13d
	jmp	.L2763
.L2826:
	movq	-56(%rbp), %rdi
	xorl	%eax, %eax
	call	dump_single_macro
	movl	indepth(%rip), %edi
	jmp	.L2603
	.p2align 6,,7
.L2815:
	movl	%r14d, %edi
	xorl	%eax, %eax
	call	line_for_error
	movl	$.LC135, %esi
	movl	%eax, %edi
	xorl	%eax, %eax
	call	error_with_line
	jmp	.L2525
.L2814:
	xorl	%eax, %eax
	call	abort
.LFE28:
.Lfe28:
	.size	macroexpand,.Lfe28-macroexpand
	.section	.rodata.str1.1
.LC190:
	.string	"unterminated macro call"
	.text
	.align 2
	.p2align 4,,15
	.type	macarg,@function
macarg:
.LFB29:
	pushq	%rbp
.LCFI155:
	xorl	%eax, %eax
	movq	%rsp, %rbp
.LCFI156:
	pushq	%r15
.LCFI157:
	pushq	%r14
.LCFI158:
	leaq	-296(%rbp), %rcx
	leaq	-300(%rbp), %r8
	pushq	%r13
.LCFI159:
	pushq	%r12
.LCFI160:
	pushq	%rbx
.LCFI161:
	subq	$296, %rsp
.LCFI162:
	movl	$0, -300(%rbp)
	movl	$0, -296(%rbp)
	movslq	indepth(%rip),%rdx
	movl	%esi, -316(%rbp)
	movq	%rdi, -312(%rbp)
	movl	-316(%rbp), %r9d
	movl	$0, -292(%rbp)
	leaq	(%rdx,%rdx,4), %rbx
	leaq	-292(%rbp), %rdx
	salq	$4, %rbx
	movslq	instack+28(%rbx),%rsi
	movq	instack+40(%rbx), %rdi
	leaq	instack(%rbx), %r13
	addq	instack+32(%rbx), %rsi
	call	macarg1
	cmpq	$0, instack(%rbx)
	movq	%rax, %r12
	je	.L2842
	movl	-296(%rbp), %eax
	testl	%eax, %eax
	jne	.L2841
	movl	-300(%rbp), %ecx
	testl	%ecx, %ecx
	jne	.L2841
.L2842:
	movslq	instack+28(%rbx),%rdx
	addq	instack+32(%rbx), %rdx
	cmpq	%rdx, %r12
	je	.L2894
	cmpq	$0, -312(%rbp)
	je	.L2843
	movq	-312(%rbp), %rsi
	movq	instack+40(%rbx), %r9
	movl	%r12d, %r8d
	movzbl	-296(%rbp), %edi
	movq	%r9, (%rsi)
	subl	instack+40(%rbx), %r8d
	movb	%dil, 48(%rsi)
	movl	%r8d, 16(%rsi)
.L2843:
	movq	%r12, instack+40(%rbx)
.L2844:
	cmpq	$0, -312(%rbp)
	je	.L2855
	movq	-312(%rbp), %rdx
	movl	indepth(%rip), %r13d
	movslq	16(%rdx),%r14
	movq	(%rdx), %rcx
	leaq	(%r14,%rcx), %rsi
	movl	assertions_flag(%rip), %r14d
	movl	$0, assertions_flag(%rip)
	movl	%esi, %ebx
	subl	%ecx, %ebx
	testl	%ebx, %ebx
	js	.L2897
	movslq	%ebx,%rdi
	addq	$16, %rdi
	andq	$-16, %rdi
	subq	%rdi, %rsp
	cmpq	%rsi, %rcx
	movq	%rsp, %r12
	movq	%rsp, %rdx
	je	.L2889
	.p2align 4,,7
.L2860:
	movzbl	(%rcx), %r8d
	incq	%rcx
	movb	%r8b, (%rdx)
	incq	%rdx
	cmpq	%rsi, %rcx
	jne	.L2860
.L2889:
	movslq	%ebx,%rsi
	leal	100(%rbx,%rbx), %edi
	xorl	%eax, %eax
	movb	$0, (%rsi,%r12)
	movl	%edi, -260(%rbp)
	call	xmalloc
	movq	$0, -224(%rbp)
	movq	$0, -240(%rbp)
	movq	%rax, -256(%rbp)
	movq	%rax, -248(%rbp)
	movq	$0, -288(%rbp)
	movl	indepth(%rip), %eax
	cmpl	$198, %eax
	jle	.L2861
	cltq
	leaq	(%rax,%rax,4), %r13
	xorl	%eax, %eax
	salq	$4, %r13
	movl	instack+24(%r13), %edi
	call	line_for_error
	movl	$.LC135, %esi
	movl	%eax, %edi
	xorl	%eax, %eax
	call	error_with_line
.L2896:
	movq	-288(%rbp), %r13
	movq	-280(%rbp), %rsi
	movq	-272(%rbp), %r8
	movq	-264(%rbp), %rdi
	movq	-256(%rbp), %rdx
	movq	-248(%rbp), %rcx
	movq	-240(%rbp), %rbx
	movq	%r13, -208(%rbp)
	movq	%rsi, -200(%rbp)
	movq	%r8, -192(%rbp)
	movq	%rdi, -184(%rbp)
	movq	-232(%rbp), %r14
	movq	%rdx, -176(%rbp)
	movq	%rcx, -168(%rbp)
	movq	-224(%rbp), %r12
	movq	%rbx, -160(%rbp)
	movq	-184(%rbp), %r13
	movq	-216(%rbp), %r11
	movq	-176(%rbp), %rbx
	movq	-208(%rbp), %r10
	movq	%r14, -152(%rbp)
	movq	-200(%rbp), %r15
	movq	-192(%rbp), %r9
	movq	%r12, -144(%rbp)
	movq	-168(%rbp), %rsi
	movq	-160(%rbp), %r8
	movq	%r13, -104(%rbp)
	movq	%rbx, -96(%rbp)
	movq	%r11, -136(%rbp)
	movq	%r10, -128(%rbp)
	movq	%r15, -120(%rbp)
	movq	%r9, -112(%rbp)
	movq	%rsi, -88(%rbp)
	movq	%r8, -80(%rbp)
	movl	-100(%rbp), %eax
	movq	-312(%rbp), %r14
	movq	-152(%rbp), %rdi
	movq	-144(%rbp), %rdx
	movq	-136(%rbp), %rcx
	movq	%rdi, -72(%rbp)
	movq	%rdx, -64(%rbp)
	movq	%rcx, -56(%rbp)
	movslq	16(%r14),%r12
	movq	%rbx, 8(%r14)
	movq	%rbx, 40(%r14)
	movl	%eax, 20(%r14)
	movq	(%r14), %rbx
	leaq	(%r12,%rbx), %r13
	cmpq	%r13, %rbx
	je	.L2870
	movzbq	(%rbx), %r9
	cmpb	$0, is_space(%r9)
	je	.L2865
	.p2align 4,,7
.L2868:
	incq	%rbx
	cmpq	%r13, %rbx
	je	.L2870
	movzbq	(%rbx), %r15
	cmpb	$0, is_space(%r15)
	jne	.L2868
.L2865:
	cmpq	%r13, %rbx
	je	.L2870
	movzbq	-1(%r13), %r10
	leaq	-1(%r13), %rdx
	cmpb	$0, is_space(%r10)
	je	.L2870
	.p2align 4,,7
.L2873:
	cmpq	%rdx, %rbx
	movq	%rdx, %r13
	je	.L2870
	movzbq	-1(%r13), %r11
	leaq	-1(%rdx), %rdx
	cmpb	$0, is_space(%r11)
	jne	.L2873
.L2870:
	movl	traditional(%rip), %eax
	testl	%eax, %eax
	sete	%r14b
	movzbl	%r14b, %r12d
	addl	%r12d, %r12d
	cmpq	%r13, %rbx
	je	.L2893
	.p2align 4,,7
.L2885:
	movzbl	(%rbx), %eax
	incl	%r12d
	incq	%rbx
	cmpb	$34, %al
	je	.L2880
	cmpb	$92, %al
	je	.L2880
	movq	__lc_ctype(%rip), %rdx
	movq	48(%rdx), %rcx
	testq	%rcx, %rcx
	jne	.L2883
	movzbl	%al, %ecx 
	salq	$2, %rcx
	addq	104(%rdx), %rcx
	cmpb	$0, (%rcx)
	js	.L2876
.L2884:
	addl	$3, %r12d
.L2876:
	cmpq	%r13, %rbx
	jne	.L2885
.L2893:
	movq	-312(%rbp), %rbx
	movl	%r12d, 24(%rbx)
.L2855:
	xorl	%eax, %eax
.L2840:
	leaq	-40(%rbp), %rsp
	popq	%rbx
	popq	%r12
	popq	%r13
	popq	%r14
	popq	%r15
	leave
	ret
	.p2align 6,,7
.L2883:
	movzbl	%al, %edi
	movl	$128, %esi
	xorl	%eax, %eax
	call	*%rcx
	testl	%eax, %eax
	jne	.L2876
	jmp	.L2884
	.p2align 6,,7
.L2880:
	incl	%r12d
	jmp	.L2876
.L2861:
	leal	1(%rax), %r11d
	movq	if_stack(%rip), %r15
	leaq	-288(%rbp), %rdi
	movslq	%r11d,%r10
	xorl	%eax, %eax
	movl	$1, %esi
	leaq	(%r10,%r10,4), %r9
	movl	%r11d, indepth(%rip)
	movl	$1, -264(%rbp)
	salq	$4, %r9
	movq	$0, instack(%r9)
	movq	$0, instack+8(%r9)
	movb	$0, instack+72(%r9)
	movq	$0, instack+48(%r9)
	movq	$0, instack+64(%r9)
	movl	%ebx, instack+28(%r9)
	movq	%r12, instack+40(%r9)
	movq	%r12, instack+32(%r9)
	movq	%r15, instack+56(%r9)
	movl	$1, instack+24(%r9)
	call	rescan
	movl	indepth(%rip), %eax
	decl	%eax
	cmpl	%r13d, %eax
	movl	%eax, indepth(%rip)
	jne	.L2897
	movl	-248(%rbp), %eax
	movl	%r14d, assertions_flag(%rip)
	subl	-256(%rbp), %eax
	movl	%eax, -260(%rbp)
	jmp	.L2896
.L2894:
	movl	-296(%rbp), %eax
.L2841:
	movl	%r12d, %r14d
	movl	%eax, -324(%rbp)
	subl	40(%r13), %r14d
	leal	1(%rax,%r14), %edi
	xorl	%eax, %eax
	call	xmalloc
	movl	%r14d, %edx
	movq	40(%r13), %rdi
	movq	%rax, %rsi
	movq	%rax, %r15
	movl	$0, -320(%rbp)
	xorl	%eax, %eax
	call	bcopy
	movslq	28(%r13),%rbx
	movl	-296(%rbp), %eax
	addq	32(%r13), %rbx
	addl	%eax, 24(%r13)
	movq	%r12, 40(%r13)
	cmpq	%rbx, %r12
	je	.L2850
.L2887:
	cmpq	$0, -312(%rbp)
	je	.L2855
	movzbl	-296(%rbp), %r9d
	movq	-312(%rbp), %rdi
	movq	%r15, (%rdi)
	movl	%r14d, 16(%rdi)
	movq	%r15, 32(%rdi)
	movb	%r9b, 48(%rdi)
	movzbl	-300(%rbp), %r8d
	movb	%r8b, 49(%rdi)
	movl	-296(%rbp), %edx
	testl	%edx, %edx
	jne	.L2853
	movl	-300(%rbp), %eax
	testl	%eax, %eax
	je	.L2852
.L2853:
	cmpq	$0, (%r13)
	jne	.L2898
.L2852:
	movq	-312(%rbp), %r11
	movslq	16(%r11),%rcx
	addq	(%r11), %rcx
	movb	$0, (%rcx)
	movl	-324(%rbp), %r12d
	leal	(%r12,%r14), %r10d
	cmpl	%r10d, 16(%r11)
	jle	.L2844
	jmp	.L2897
	.p2align 6,,7
.L2898:
	movslq	-320(%rbp),%rbx
	movl	%r14d, %esi
	xorl	%eax, %eax
	subl	-320(%rbp), %esi
	leaq	(%rbx,%r15), %rdi
	call	discard_comments
	movq	-312(%rbp), %r15
	addl	-320(%rbp), %eax
	movl	%eax, 16(%r15)
	jmp	.L2852
	.p2align 6,,7
.L2850:
	movl	indepth(%rip), %edx
	movslq	%edx,%r11
	leaq	(%r11,%r11,4), %r10
	salq	$4, %r10
	cmpq	$0, instack+48(%r10)
	je	.L2895
	movq	64(%r13), %rdi
	movq	48(%r13), %r12
	testq	%rdi, %rdi
	movl	$31, 24(%r12)
	jne	.L2899
.L2849:
	decl	%edx
	movl	-316(%rbp), %r9d
	leaq	-296(%rbp), %rcx
	movslq	%edx,%r13
	leaq	-300(%rbp), %r8
	movl	%edx, indepth(%rip)
	leaq	(%r13,%r13,4), %rbx
	xorl	%eax, %eax
	leaq	-292(%rbp), %rdx
	salq	$4, %rbx
	movl	$0, -296(%rbp)
	movl	$0, -300(%rbp)
	movslq	instack+28(%rbx),%rsi
	movq	instack+40(%rbx), %rdi
	leaq	instack(%rbx), %r13
	addq	instack+32(%rbx), %rsi
	call	macarg1
	movq	%r15, %rdi
	movl	-296(%rbp), %edx
	movl	%eax, %esi
	addl	%edx, -324(%rbp)
	movq	%rax, %r12
	subl	instack+40(%rbx), %esi
	movl	-324(%rbp), %eax
	movl	%r14d, -320(%rbp)
	addl	%esi, %r14d
	leal	1(%rax,%r14), %esi
	xorl	%eax, %eax
	call	xrealloc
	movq	%r12, %rdx
	movq	instack+40(%rbx), %rdi
	movq	%rax, %r15
	movslq	%r14d,%rax
	leaq	(%rax,%r15), %rsi
	xorl	%eax, %eax
	subq	%rdi, %rdx
	subq	%rdx, %rsi
	call	bcopy
	movslq	instack+28(%rbx),%rcx
	movl	-296(%rbp), %eax
	addq	instack+32(%rbx), %rcx
	addl	%eax, instack+24(%rbx)
	movq	%r12, instack+40(%rbx)
	cmpq	%rcx, %r12
	je	.L2850
	jmp	.L2887
.L2899:
	xorl	%eax, %eax
	call	free
	movl	indepth(%rip), %edx
	jmp	.L2849
.L2895:
	movq	%r15, %rdi
	xorl	%eax, %eax
	call	free
	movl	$.LC190, %eax
	jmp	.L2840
.L2897:
	xorl	%eax, %eax
	call	abort
.LFE29:
.Lfe29:
	.size	macarg,.Lfe29-macarg
	.align 2
	.p2align 4,,15
	.type	macarg1,@function
macarg1:
.LFB30:
	pushq	%r15
.LCFI163:
	cmpq	%rsi, %rdi
	movq	%rdi, %r11
	pushq	%r14
.LCFI164:
	movl	%r9d, %r15d
	movq	%r8, %r14
	pushq	%r13
.LCFI165:
	pushq	%r12
.LCFI166:
	movq	%rcx, %r12
	pushq	%rbp
.LCFI167:
	movq	%rdx, %rbp
	pushq	%rbx
.LCFI168:
	jae	.L2900
	.p2align 4,,7
.L2994:
	movzbl	(%r11), %edx
	movzbl	%dl, %r10d
	movl	%edx, %eax
	cmpl	$41, %r10d
	je	.L2906
	cmpl	$41, %r10d
	jg	.L2992
	cmpl	$39, %r10d
	je	.L2971
	cmpl	$39, %r10d
	jg	.L2905
	cmpl	$10, %r10d
	je	.L2937
	cmpl	$34, %r10d
	leaq	1(%r11), %rdx
	je	.L2971
	.p2align 4,,7
.L2904:
	cmpq	%rsi, %rdx
	movq	%rdx, %r11
	jb	.L2994
.L2900:
	popq	%rbx
	popq	%rbp
	popq	%r12
	popq	%r13
	popq	%r14
	popq	%r15
	movq	%r11, %rax
	ret
	.p2align 6,,7
.L2971:
	incq	%r11
	movzbl	%al, %r10d
	leaq	1(%r11), %rdx
	cmpq	%rsi, %rdx
	jae	.L2904
	movzbl	(%r11), %edi
	movzbl	%dil, %r8d
	cmpl	%r10d, %r8d
	je	.L2904
	.p2align 4,,7
.L2987:
	cmpb	$92, %dil
	je	.L3017
	cmpb	$10, %dil
	je	.L3018
.L2974:
	movq	%rdx, %r11
	leaq	1(%rdx), %rdx
	cmpq	%rsi, %rdx
	jae	.L2904
	movzbl	(%r11), %r13d
	movzbl	%r13b, %r9d
	movl	%r13d, %edi
	cmpl	%r10d, %r9d
	jne	.L2987
	jmp	.L2904
.L3018:
	incl	(%r12)
	cmpl	$39, %r10d
	je	.L2904
	jmp	.L2974
	.p2align 6,,7
.L3017:
	movzbl	(%rdx), %edi
	movq	%rdx, %r11
	cmpb	$10, %dil
	je	.L3019
.L2978:
	cmpb	$92, %dil
	leaq	1(%r11), %rdx
	jne	.L2974
	cmpb	$10, 1(%r11)
	je	.L2983
.L3012:
	leaq	1(%r11), %rdx
	jmp	.L2974
	.p2align 6,,7
.L2983:
	addq	$2, %r11
	cmpb	$92, (%r11)
	jne	.L3012
	cmpb	$10, 1(%r11)
	je	.L2983
	jmp	.L3012
.L3019:
	incl	(%r12)
	movzbl	(%rdx), %edi
	jmp	.L2978
.L2937:
	incl	(%r12)
.L3013:
	leaq	1(%r11), %rdx
	jmp	.L2904
	.p2align 6,,7
.L2905:
	incl	(%rbp)
	jmp	.L3013
	.p2align 6,,7
.L2992:
	cmpl	$47, %r10d
	je	.L2912
	cmpl	$47, %r10d
	jg	.L2993
	cmpl	$44, %r10d
	leaq	1(%r11), %rdx
	jne	.L2904
	movl	(%rbp), %r10d
	testl	%r10d, %r10d
	jne	.L3013
	testl	%r15d, %r15d
	leaq	1(%r11), %rdx
	jne	.L2904
	jmp	.L2900
	.p2align 6,,7
.L2993:
	cmpl	$92, %r10d
	leaq	1(%r11), %rdx
	jne	.L2904
	leaq	1(%r11), %rdx
	cmpq	%rsi, %rdx
	jae	.L2904
	movl	traditional(%rip), %eax
	testl	%eax, %eax
	je	.L2904
	cmpb	$10, (%rdx)
	movq	%rdx, %r11
	jne	.L3013
	jmp	.L2937
	.p2align 6,,7
.L2912:
	movzbl	1(%r11), %r8d
	leaq	1(%r11), %r13
	movq	%r13, %rdx
	cmpb	$92, %r8b
	je	.L3020
.L2913:
	movl	cplusplus_comments(%rip), %ecx
	testl	%ecx, %ecx
	je	.L2935
	cmpb	$47, %r8b
	je	.L3021
.L2935:
	cmpb	$42, %r8b
	jne	.L2904
	cmpq	%rsi, %r13
	jae	.L2904
	addq	$2, %r11
	movl	$1, (%r14)
	leaq	1(%r11), %rdx
	cmpq	%rsi, %rdx
	jae	.L2904
.L2969:
	movzbl	(%r11), %edi
	cmpb	$42, %dil
	je	.L3022
.L2967:
	cmpb	$10, %dil
	je	.L3023
.L2968:
	movq	%rdx, %r11
	leaq	1(%rdx), %rdx
	cmpq	%rsi, %rdx
	jb	.L2969
	jmp	.L2904
.L3023:
	incl	(%r12)
	jmp	.L2968
.L3022:
	cmpb	$92, 1(%r11)
	je	.L3024
.L2945:
	cmpb	$42, %dil
	jne	.L2967
	cmpb	$47, 1(%r11)
	jne	.L2967
	jmp	.L2904
	.p2align 6,,7
.L3024:
	cmpb	$10, 2(%r11)
	jne	.L2945
	movq	%rdx, %rbx
	movq	%rdx, %r10
	xorl	%r13d, %r13d
.L2955:
	movzbl	(%r10), %ecx
	cmpb	$92, %cl
	movl	%ecx, %r8d
	jne	.L2947
	movzbl	1(%r10), %eax
	cmpb	$10, %al
	je	.L3025
	cmpb	$13, %al
	jne	.L2947
	cmpb	$10, 2(%r10)
	jne	.L2947
	addq	$3, %r10
.L3015:
	incl	%r13d
	jmp	.L2955
.L2947:
	testl	%r13d, %r13d
	je	.L2945
	cmpb	$47, %r8b
	je	.L2962
	cmpb	$42, %r8b
	jne	.L2945
.L2962:
	incq	%r10
	movb	%cl, (%rbx)
	incq	%rbx
	movzbl	(%r10), %eax
	cmpb	$42, %al
	movl	%eax, %ecx
	je	.L2962
	cmpb	$47, %al
	je	.L2962
	testl	%r13d, %r13d
	leal	-1(%r13), %ecx
	jle	.L3009
.L2966:
	movl	%ecx, %edi
	movb	$92, (%rbx)
	movb	$10, 1(%rbx)
	decl	%ecx
	addq	$2, %rbx
	testl	%edi, %edi
	jg	.L2966
.L3009:
	movzbl	(%r11), %edi
	jmp	.L2945
.L3025:
	addq	$2, %r10
	jmp	.L3015
	.p2align 6,,7
.L3021:
	movl	$1, (%r14)
	addq	$2, %r11
.L2936:
	cmpq	%rsi, %r11
	jae	.L2937
	movzbl	(%r11), %edx
	incq	%r11
	cmpb	$10, %dl
	jne	.L2936
	jmp	.L2937
.L3020:
	cmpb	$10, 2(%r11)
	jne	.L2913
	movq	%r13, %rcx
	movq	%r13, %rdi
	xorl	%r9d, %r9d
	.p2align 4,,7
.L2923:
	movzbl	(%rdi), %r10d
	cmpb	$92, %r10b
	movl	%r10d, %ebx
	jne	.L2915
	movzbl	1(%rdi), %eax
	cmpb	$10, %al
	je	.L3026
	cmpb	$13, %al
	jne	.L2915
	cmpb	$10, 2(%rdi)
	jne	.L2915
	addq	$3, %rdi
.L3014:
	incl	%r9d
	jmp	.L2923
.L2915:
	testl	%r9d, %r9d
	je	.L2913
	cmpb	$47, %bl
	je	.L2930
	cmpb	$42, %bl
	jne	.L2913
	.p2align 4,,7
.L2930:
	incq	%rdi
	movb	%r10b, (%rcx)
	incq	%rcx
	movzbl	(%rdi), %eax
	cmpb	$42, %al
	movl	%eax, %r10d
	je	.L2930
	cmpb	$47, %al
	je	.L2930
	testl	%r9d, %r9d
	leal	-1(%r9), %edi
	jle	.L3008
.L2934:
	movl	%edi, %ebx
	movb	$92, (%rcx)
	movb	$10, 1(%rcx)
	decl	%edi
	addq	$2, %rcx
	testl	%ebx, %ebx
	jg	.L2934
.L3008:
	movzbl	1(%r11), %r8d
	jmp	.L2913
.L3026:
	addq	$2, %rdi
	jmp	.L3014
	.p2align 6,,7
.L2906:
	movl	(%rbp), %eax
	leaq	1(%r11), %rdx
	decl	%eax
	testl	%eax, %eax
	movl	%eax, (%rbp)
	jns	.L2904
	jmp	.L2900
.LFE30:
.Lfe30:
	.size	macarg1,.Lfe30-macarg1
	.align 2
	.p2align 4,,15
	.type	discard_comments,@function
discard_comments:
.LFB31:
	pushq	%rbp
.LCFI169:
	testl	%edx, %edx
	pushq	%rbx
.LCFI170:
	jle	.L3127
	movslq	%esi,%rsi
	movslq	%edx,%rdx
	leaq	(%rsi,%rdi), %rcx
	cmpq	%rcx, %rdi
	leaq	(%rdx,%rcx), %r8
	je	.L3028
	.p2align 4,,7
.L3032:
	decq	%rcx
	decq	%r8
	movzbl	(%rcx), %ebx
	cmpq	%rcx, %rdi
	movb	%bl, (%r8)
	jne	.L3032
.L3028:
	leaq	(%rsi,%rdi), %rbx
	leaq	(%rdx,%rdi), %rcx
	movq	%rdi, %r9
	leaq	(%rdx,%rbx), %rdx
	cmpq	%rdx, %rcx
	jae	.L3117
.L3114:
	movzbl	(%rcx), %r8d
	incq	%rcx
	movb	%r8b, (%r9)
	incq	%r9
	cmpl	$39, %r8d
	je	.L3098
	cmpl	$39, %r8d
	jg	.L3113
	cmpl	$10, %r8d
	je	.L3037
	cmpl	$34, %r8d
	je	.L3098
.L3033:
	cmpq	%rdx, %rcx
	jb	.L3114
	.p2align 4,,7
.L3117:
	popq	%rbx
	popq	%rbp
	movl	%r9d, %eax
	subl	%edi, %eax
	ret
	.p2align 6,,7
.L3098:
	cmpq	%rdx, %rcx
	jae	.L3117
	.p2align 4,,7
.L3110:
	movzbl	(%rcx), %eax
	incq	%rcx
	movb	%al, (%r9)
	incq	%r9
	cmpl	%r8d, %eax
	je	.L3033
	cmpl	$10, %eax
	je	.L3132
.L3103:
	cmpl	$92, %eax
	je	.L3133
.L3099:
	cmpq	%rdx, %rcx
	jb	.L3110
	jmp	.L3117
	.p2align 6,,7
.L3133:
	cmpq	%rdx, %rcx
	jae	.L3117
	movzbl	(%rcx), %eax
	cmpb	$92, %al
	je	.L3134
.L3106:
	movb	%al, (%r9)
	incq	%rcx
	incq	%r9
	jmp	.L3099
.L3134:
	cmpb	$10, 1(%rcx)
	jne	.L3106
	.p2align 4,,7
.L3109:
	addq	$2, %rcx
	movzbl	(%rcx), %eax
	cmpb	$92, %al
	jne	.L3106
	cmpb	$10, 1(%rcx)
	je	.L3109
	jmp	.L3106
	.p2align 6,,7
.L3132:
	cmpl	$39, %r8d
	jne	.L3103
	jmp	.L3033
.L3037:
	movb	$10, (%r9)
	incq	%r9
	jmp	.L3033
	.p2align 6,,7
.L3113:
	cmpl	$47, %r8d
	je	.L3040
	cmpl	$92, %r8d
	jne	.L3033
	cmpb	$10, (%rcx)
	jne	.L3033
	decq	%r9
	incq	%rcx
	jmp	.L3033
.L3040:
	movzbl	(%rcx), %eax
	cmpb	$92, %al
	je	.L3135
.L3041:
	movl	cplusplus_comments(%rip), %esi
	testl	%esi, %esi
	je	.L3063
	cmpb	$47, %al
	je	.L3136
.L3063:
	cmpb	$42, %al
	jne	.L3033
	leaq	1(%rcx), %rax
	cmpq	%rdx, %rax
	jae	.L3033
	leaq	2(%rcx), %r10
	decq	%r9
	movq	%rax, %rsi
	cmpq	%rdx, %r10
	jae	.L3071
.L3096:
	movzbl	(%rsi), %r10d
	cmpb	$42, %r10b
	je	.L3137
.L3095:
	incq	%rsi
	leaq	1(%rsi), %rcx
	cmpq	%rdx, %rcx
	jb	.L3096
.L3071:
	leaq	2(%rsi), %rcx
	jmp	.L3033
.L3137:
	cmpb	$92, 1(%rsi)
	leaq	1(%rsi), %rax
	je	.L3138
.L3073:
	cmpb	$42, %r10b
	jne	.L3095
	cmpb	$47, 1(%rsi)
	jne	.L3095
	jmp	.L3071
	.p2align 6,,7
.L3138:
	cmpb	$10, 2(%rsi)
	jne	.L3073
	movq	%rax, %r11
	movq	%rax, %rcx
	xorl	%ebx, %ebx
.L3083:
	movzbl	(%rcx), %r8d
	cmpb	$92, %r8b
	movl	%r8d, %ebp
	jne	.L3075
	movzbl	1(%rcx), %eax
	cmpb	$10, %al
	je	.L3139
	cmpb	$13, %al
	jne	.L3075
	cmpb	$10, 2(%rcx)
	jne	.L3075
	addq	$3, %rcx
.L3131:
	incl	%ebx
	jmp	.L3083
.L3075:
	testl	%ebx, %ebx
	je	.L3073
	cmpb	$47, %bpl
	je	.L3090
	cmpb	$42, %bpl
	jne	.L3073
.L3090:
	incq	%rcx
	movb	%r8b, (%r11)
	incq	%r11
	movzbl	(%rcx), %eax
	cmpb	$42, %al
	movl	%eax, %r8d
	je	.L3090
	cmpb	$47, %al
	je	.L3090
	testl	%ebx, %ebx
	leal	-1(%rbx), %ecx
	jle	.L3129
.L3094:
	movl	%ecx, %ebx
	movb	$92, (%r11)
	movb	$10, 1(%r11)
	decl	%ecx
	addq	$2, %r11
	testl	%ebx, %ebx
	jg	.L3094
.L3129:
	movzbl	(%rsi), %r10d
	jmp	.L3073
.L3139:
	addq	$2, %rcx
	jmp	.L3131
	.p2align 6,,7
.L3136:
	decq	%r9
	incq	%rcx
.L3064:
	cmpq	%rdx, %rcx
	jae	.L3117
	movzbl	(%rcx), %r8d
	incq	%rcx
	cmpb	$10, %r8b
	jne	.L3064
	jmp	.L3033
.L3135:
	cmpb	$10, 1(%rcx)
	jne	.L3041
	movq	%rcx, %r11
	movq	%rcx, %r8
	xorl	%ebx, %ebx
.L3051:
	movzbl	(%r8), %esi
	cmpb	$92, %sil
	movl	%esi, %ebp
	jne	.L3043
	movzbl	1(%r8), %r10d
	cmpb	$10, %r10b
	je	.L3140
	cmpb	$13, %r10b
	jne	.L3043
	cmpb	$10, 2(%r8)
	jne	.L3043
	addq	$3, %r8
.L3130:
	incl	%ebx
	jmp	.L3051
.L3043:
	testl	%ebx, %ebx
	je	.L3041
	cmpb	$47, %bpl
	je	.L3058
	cmpb	$42, %bpl
	jne	.L3041
.L3058:
	incq	%r8
	movb	%sil, (%r11)
	incq	%r11
	movzbl	(%r8), %eax
	cmpb	$42, %al
	movl	%eax, %esi
	je	.L3058
	cmpb	$47, %al
	je	.L3058
	testl	%ebx, %ebx
	leal	-1(%rbx), %esi
	jle	.L3128
.L3062:
	movl	%esi, %ebp
	movb	$92, (%r11)
	movb	$10, 1(%r11)
	decl	%esi
	addq	$2, %r11
	testl	%ebp, %ebp
	jg	.L3062
.L3128:
	movzbl	(%rcx), %eax
	jmp	.L3041
.L3140:
	addq	$2, %r8
	jmp	.L3130
	.p2align 6,,7
.L3127:
	movslq	%esi,%rsi
	movslq	%edx,%rdx
	jmp	.L3028
.LFE31:
.Lfe31:
	.size	discard_comments,.Lfe31-discard_comments
	.align 2
	.p2align 4,,15
	.type	delete_newlines,@function
delete_newlines:
.LFB32:
	movslq	%esi,%rax
	movq	%rdi, %rcx
	leaq	(%rax,%rdi), %r8
	movq	%rdi, %rax
	cmpq	%r8, %rdi
	jae	.L3161
.L3159:
	movzbl	(%rcx), %esi
	incq	%rcx
	movb	%sil, (%rax)
	incq	%rax
	cmpl	$34, %esi
	je	.L3149
	cmpl	$34, %esi
	jg	.L3158
	cmpl	$10, %esi
	je	.L3146
.L3142:
	cmpq	%r8, %rcx
	jb	.L3159
	.p2align 4,,7
.L3161:
	subl	%edi, %eax
	ret
.L3146:
	cmpb	$10, (%rcx)
	jne	.L3142
	incq	%rcx
	decq	%rax
	jmp	.L3142
	.p2align 6,,7
.L3158:
	cmpl	$39, %esi
	jne	.L3142
.L3149:
	cmpq	%r8, %rcx
	jae	.L3161
	.p2align 4,,7
.L3155:
	movzbl	(%rcx), %edx
	incq	%rcx
	movb	%dl, (%rax)
	incq	%rax
	cmpl	%esi, %edx
	je	.L3142
	cmpl	$10, %edx
	je	.L3163
.L3150:
	cmpq	%r8, %rcx
	jb	.L3155
	jmp	.L3161
	.p2align 6,,7
.L3163:
	cmpl	$39, %esi
	jne	.L3150
	jmp	.L3142
.LFE32:
.Lfe32:
	.size	delete_newlines,.Lfe32-delete_newlines
	.section	.rodata.str1.1
.LC191:
	.string	"%s:%d: "
	.text
	.align 2
	.p2align 4,,15
.globl error
	.type	error,@function
error:
.LFB33:
	pushq	%r15
.LCFI171:
	xorl	%eax, %eax
	movq	%rcx, %r15
	pushq	%r14
.LCFI172:
	movq	%rdx, %r14
	pushq	%r13
.LCFI173:
	movq	%rsi, %r13
	pushq	%r12
.LCFI174:
	movq	%rdi, %r12
	pushq	%rbp
.LCFI175:
	pushq	%rbx
.LCFI176:
	xorl	%ebx, %ebx
	subq	$8, %rsp
.LCFI177:
	call	print_containing_files
	movl	indepth(%rip), %edx
	testl	%edx, %edx
	js	.L3166
	.p2align 4,,7
.L3170:
	movslq	%edx,%rcx
	leaq	(%rcx,%rcx,4), %rsi
	salq	$4, %rsi
	cmpq	$0, instack(%rsi)
	leaq	instack(%rsi), %rcx
	jne	.L3174
	decl	%edx
	jns	.L3170
.L3166:
	testq	%rbx, %rbx
	jne	.L3175
	movq	$_iob+112, %rbp
.L3171:
	movq	%rbp, %rdi
	movq	%r12, %rsi
	movq	%r13, %rdx
	movq	%r14, %rcx
	movq	%r15, %r8
	xorl	%eax, %eax
	call	fprintf
	xorl	%eax, %eax
	movl	$.LC66, %esi
	movq	%rbp, %rdi
	call	fprintf
	incl	errors(%rip)
	addq	$8, %rsp
	popq	%rbx
	popq	%rbp
	popq	%r12
	popq	%r13
	popq	%r14
	popq	%r15
	ret
.L3175:
	movq	8(%rbx), %rdx
	movl	24(%rbx), %ecx
	movq	$_iob+112, %rbp
	movq	%rbp, %rdi
	movl	$.LC191, %esi
	xorl	%eax, %eax
	call	fprintf
	jmp	.L3171
.L3174:
	movq	%rcx, %rbx
	jmp	.L3166
.LFE33:
.Lfe33:
	.size	error,.Lfe33-error
	.section	.rodata.str1.1
.LC192:
	.string	"%s: %s\n"
.LC193:
	.string	"%s: undocumented I/O error\n"
	.text
	.align 2
	.p2align 4,,15
	.type	error_from_errno,@function
error_from_errno:
.LFB34:
	pushq	%r12
.LCFI178:
	xorl	%eax, %eax
	movq	%rdi, %r12
	pushq	%rbp
.LCFI179:
	pushq	%rbx
.LCFI180:
	xorl	%ebx, %ebx
	call	print_containing_files
	movl	indepth(%rip), %edx
	testl	%edx, %edx
	js	.L3178
	.p2align 4,,7
.L3182:
	movslq	%edx,%rcx
	leaq	(%rcx,%rcx,4), %rsi
	salq	$4, %rsi
	cmpq	$0, instack(%rsi)
	leaq	instack(%rsi), %rcx
	jne	.L3188
	decl	%edx
	jns	.L3182
.L3178:
	testq	%rbx, %rbx
	jne	.L3189
	movq	$_iob+112, %rbp
.L3183:
	movl	errno(%rip), %eax
	cmpl	sys_nerr(%rip), %eax
	jge	.L3184
	cltq
	movq	%rbp, %rdi
	movl	$.LC192, %esi
	movq	sys_errlist(,%rax,8), %rcx
	movq	%r12, %rdx
	xorl	%eax, %eax
	call	fprintf
.L3185:
	popq	%rbx
	popq	%rbp
	incl	errors(%rip)
	popq	%r12
	ret
.L3184:
	movq	%rbp, %rdi
	movl	$.LC193, %esi
	movq	%r12, %rdx
	xorl	%eax, %eax
	call	fprintf
	jmp	.L3185
.L3189:
	movq	8(%rbx), %rdx
	movl	24(%rbx), %ecx
	movq	$_iob+112, %rbp
	movq	%rbp, %rdi
	movl	$.LC191, %esi
	xorl	%eax, %eax
	call	fprintf
	jmp	.L3183
.L3188:
	movq	%rcx, %rbx
	jmp	.L3178
.LFE34:
.Lfe34:
	.size	error_from_errno,.Lfe34-error_from_errno
	.section	.rodata.str1.1
.LC194:
	.string	"warning: "
	.text
	.align 2
	.p2align 4,,15
.globl warning
	.type	warning,@function
warning:
.LFB35:
	pushq	%r15
.LCFI181:
	movq	%rcx, %r15
	pushq	%r14
.LCFI182:
	movq	%rdx, %r14
	pushq	%r13
.LCFI183:
	movq	%rsi, %r13
	pushq	%r12
.LCFI184:
	movq	%rdi, %r12
	pushq	%rbp
.LCFI185:
	pushq	%rbx
.LCFI186:
	xorl	%ebx, %ebx
	subq	$8, %rsp
.LCFI187:
	movl	inhibit_warnings(%rip), %eax
	testl	%eax, %eax
	jne	.L3190
	movl	warnings_are_errors(%rip), %eax
	testl	%eax, %eax
	je	.L3192
	incl	errors(%rip)
.L3192:
	xorl	%eax, %eax
	call	print_containing_files
	movl	indepth(%rip), %edx
	testl	%edx, %edx
	js	.L3194
	.p2align 4,,7
.L3198:
	movslq	%edx,%rcx
	leaq	(%rcx,%rcx,4), %rsi
	salq	$4, %rsi
	cmpq	$0, instack(%rsi)
	leaq	instack(%rsi), %rcx
	jne	.L3202
	decl	%edx
	jns	.L3198
.L3194:
	testq	%rbx, %rbx
	jne	.L3203
	movq	$_iob+112, %rbp
.L3199:
	movq	%rbp, %rdi
	movl	$.LC194, %esi
	xorl	%eax, %eax
	call	fprintf
	xorl	%eax, %eax
	movq	%r15, %r8
	movq	%rbp, %rdi
	movq	%r12, %rsi
	movq	%r13, %rdx
	movq	%r14, %rcx
	call	fprintf
	addq	$8, %rsp
	xorl	%eax, %eax
	popq	%rbx
	movq	%rbp, %rdi
	movl	$.LC66, %esi
	popq	%rbp
	popq	%r12
	popq	%r13
	popq	%r14
	popq	%r15
	jmp	fprintf
.L3203:
	movq	8(%rbx), %rdx
	movl	24(%rbx), %ecx
	movq	$_iob+112, %rbp
	movq	%rbp, %rdi
	movl	$.LC191, %esi
	xorl	%eax, %eax
	call	fprintf
	jmp	.L3199
.L3202:
	movq	%rcx, %rbx
	jmp	.L3194
	.p2align 6,,7
.L3190:
	addq	$8, %rsp
	popq	%rbx
	popq	%rbp
	popq	%r12
	popq	%r13
	popq	%r14
	popq	%r15
	ret
.LFE35:
.Lfe35:
	.size	warning,.Lfe35-warning
	.align 2
	.p2align 4,,15
	.type	error_with_line,@function
error_with_line:
.LFB36:
	pushq	%r15
.LCFI188:
	xorl	%eax, %eax
	movq	%r8, %r15
	pushq	%r14
.LCFI189:
	movq	%rcx, %r14
	pushq	%r13
.LCFI190:
	movq	%rdx, %r13
	pushq	%r12
.LCFI191:
	movq	%rsi, %r12
	pushq	%rbp
.LCFI192:
	pushq	%rbx
.LCFI193:
	xorl	%ebx, %ebx
	subq	$8, %rsp
.LCFI194:
	movl	%edi, 4(%rsp)
	call	print_containing_files
	movl	indepth(%rip), %edx
	testl	%edx, %edx
	js	.L3206
	.p2align 4,,7
.L3210:
	movslq	%edx,%rcx
	leaq	(%rcx,%rcx,4), %rsi
	salq	$4, %rsi
	cmpq	$0, instack(%rsi)
	leaq	instack(%rsi), %rcx
	jne	.L3214
	decl	%edx
	jns	.L3210
.L3206:
	testq	%rbx, %rbx
	jne	.L3215
	movq	$_iob+112, %rbp
.L3211:
	movq	%rbp, %rdi
	movq	%r12, %rsi
	movq	%r13, %rdx
	movq	%r14, %rcx
	movq	%r15, %r8
	xorl	%eax, %eax
	call	fprintf
	xorl	%eax, %eax
	movl	$.LC66, %esi
	movq	%rbp, %rdi
	call	fprintf
	incl	errors(%rip)
	addq	$8, %rsp
	popq	%rbx
	popq	%rbp
	popq	%r12
	popq	%r13
	popq	%r14
	popq	%r15
	ret
.L3215:
	movq	8(%rbx), %rdx
	movl	4(%rsp), %ecx
	movq	$_iob+112, %rbp
	movq	%rbp, %rdi
	movl	$.LC191, %esi
	xorl	%eax, %eax
	call	fprintf
	jmp	.L3211
.L3214:
	movq	%rcx, %rbx
	jmp	.L3206
.LFE36:
.Lfe36:
	.size	error_with_line,.Lfe36-error_with_line
	.align 2
	.p2align 4,,15
.globl pedwarn
	.type	pedwarn,@function
pedwarn:
.LFB37:
	movl	pedantic_errors(%rip), %eax
	testl	%eax, %eax
	je	.L3217
	xorl	%eax, %eax
	jmp	error
	.p2align 6,,7
.L3217:
	xorl	%eax, %eax
	jmp	warning
.LFE37:
.Lfe37:
	.size	pedwarn,.Lfe37-pedwarn
	.section	.rodata.str1.1
.LC195:
	.string	"In file included"
.LC197:
	.string	" from %s:%d"
.LC198:
	.string	":\n"
.LC196:
	.string	","
	.text
	.align 2
	.p2align 4,,15
	.type	print_containing_files,@function
print_containing_files:
.LFB38:
	pushq	%r13
.LCFI195:
	xorl	%esi, %esi
	movl	$1, %r13d
	pushq	%r12
.LCFI196:
	pushq	%rbp
.LCFI197:
	pushq	%rbx
.LCFI198:
	subq	$8, %rsp
.LCFI199:
	movl	input_file_stack_tick(%rip), %eax
	cmpl	%eax, last_error_tick(%rip)
	je	.L3219
	movl	indepth(%rip), %edx
	testl	%edx, %edx
	js	.L3222
	.p2align 4,,7
.L3226:
	movslq	%edx,%rcx
	leaq	(%rcx,%rcx,4), %rbx
	salq	$4, %rbx
	cmpq	$0, instack(%rbx)
	leaq	instack(%rbx), %rcx
	jne	.L3241
	decl	%edx
	jns	.L3226
.L3222:
	testq	%rsi, %rsi
	je	.L3219
	movl	%edx, %ebx
	decl	%ebx
	js	.L3239
	.p2align 4,,7
.L3235:
	movslq	%ebx,%rsi
	leaq	(%rsi,%rsi,4), %rdx
	salq	$4, %rdx
	cmpq	$0, instack(%rdx)
	leaq	instack(%rdx), %rbp
	je	.L3230
	testl	%r13d, %r13d
	je	.L3233
	movq	$_iob+112, %r12
	xorl	%r13d, %r13d
	movl	$.LC195, %esi
	movq	%r12, %rdi
.L3240:
	xorl	%eax, %eax
	call	fprintf
	xorl	%eax, %eax
	movl	24(%rbp), %ecx
	movq	8(%rbp), %rdx
	movq	%r12, %rdi
	movl	$.LC197, %esi
	call	fprintf
.L3230:
	decl	%ebx
	jns	.L3235
.L3239:
	testl	%r13d, %r13d
	je	.L3242
.L3236:
	movl	input_file_stack_tick(%rip), %eax
	movl	%eax, last_error_tick(%rip)
.L3219:
	addq	$8, %rsp
	popq	%rbx
	popq	%rbp
	popq	%r12
	popq	%r13
	ret
.L3242:
	movq	$_iob+112, %rdi
	movl	$.LC198, %esi
	xorl	%eax, %eax
	call	fprintf
	jmp	.L3236
	.p2align 6,,7
.L3233:
	movq	$_iob+112, %r12
	movl	$.LC196, %esi
	movq	%r12, %rdi
	jmp	.L3240
.L3241:
	movq	%rcx, %rsi
	jmp	.L3222
.LFE38:
.Lfe38:
	.size	print_containing_files,.Lfe38-print_containing_files
	.align 2
	.p2align 4,,15
	.type	line_for_error,@function
line_for_error:
.LFB39:
	subq	$8, %rsp
.LCFI200:
	movl	indepth(%rip), %ecx
	testl	%ecx, %ecx
	js	.L3252
	movslq	%ecx,%rdx
	.p2align 4,,7
.L3250:
	leaq	(%rdx,%rdx,4), %rsi
	salq	$4, %rsi
	cmpq	$0, instack(%rsi)
	jne	.L3243
	decl	%ecx
	js	.L3253
	movslq	%ecx,%rdi
	leaq	(%rdi,%rdi,4), %rsi
	movq	%rdi, %rdx
	salq	$4, %rsi
	movl	instack+24(%rsi), %edi
	jmp	.L3250
.L3253:
	xorl	%edi, %edi
.L3243:
	movl	%edi, %eax
	addq	$8, %rsp
	ret
.L3252:
	xorl	%eax, %eax
	call	abort
.LFE39:
.Lfe39:
	.size	line_for_error,.Lfe39-line_for_error
	.align 2
	.p2align 4,,15
	.type	grow_outbuf,@function
grow_outbuf:
.LFB40:
	subq	$24, %rsp
.LCFI201:
	movq	%rbx, 8(%rsp)
.LCFI202:
	movq	%rbp, 16(%rsp)
.LCFI203:
	movq	%rdi, %rbx
	movl	28(%rdi), %ecx
	movq	40(%rdi), %rax
	subq	32(%rdi), %rax
	movslq	%esi,%rdi
	movslq	%ecx,%rbp
	subq	%rax, %rbp
	cmpq	%rdi, %rbp
	jg	.L3254
	leal	(%rsi,%rsi,2), %edi
	movl	40(%rbx), %eax
	addl	%ecx, %ecx
	movl	%edi, %edx
	subl	32(%rbx), %eax
	movl	%ecx, 28(%rbx)
	shrl	$31, %edx
	addl	%edx, %edi
	sarl	$1, %edi
	leal	(%rax,%rdi), %eax
	cmpl	%ecx, %eax
	jle	.L3256
	movl	%eax, 28(%rbx)
.L3256:
	movq	32(%rbx), %rdi
	movl	28(%rbx), %esi
	xorl	%eax, %eax
	call	xrealloc
	testq	%rax, %rax
	movq	%rax, %rbp
	je	.L3258
.L3257:
	movq	40(%rbx), %rsi
	subq	32(%rbx), %rsi
	movq	%rbp, 32(%rbx)
	leaq	(%rsi,%rbp), %rcx
	movq	%rcx, 40(%rbx)
.L3254:
	movq	8(%rsp), %rbx
	movq	16(%rsp), %rbp
	xorl	%eax, %eax
	addq	$24, %rsp
	ret
.L3258:
	xorl	%eax, %eax
	call	memory_full
	jmp	.L3257
.LFE40:
.Lfe40:
	.size	grow_outbuf,.Lfe40-grow_outbuf
	.align 2
	.p2align 4,,15
	.type	install,@function
install:
.LFB41:
	pushq	%r15
.LCFI204:
	movl	%ecx, %r15d
	pushq	%r14
.LCFI205:
	movq	%r8, %r14
	pushq	%r13
.LCFI206:
	movl	%edx, %r13d
	pushq	%r12
.LCFI207:
	movl	%r9d, %r12d
	pushq	%rbp
.LCFI208:
	movl	%esi, %ebp
	pushq	%rbx
.LCFI209:
	movq	%rdi, %rbx
	subq	$8, %rsp
.LCFI210:
	testl	%esi, %esi
	js	.L3278
.L3260:
	testl	%r12d, %r12d
	js	.L3279
.L3265:
	leal	49(%rbp), %edi
	xorl	%eax, %eax
	call	xmalloc
	movslq	%r12d,%rdi
	salq	$3, %rdi
	movq	%rax, %rsi
	leaq	hashtab(%rdi), %r8
	movq	%r8, 16(%rax)
	movq	hashtab(%rdi), %rax
	movq	%rax, (%rsi)
	movq	%rsi, hashtab(%rdi)
	movq	(%rsi), %rax
	movq	$0, 8(%rsi)
	testq	%rax, %rax
	je	.L3266
	movq	%rsi, 8(%rax)
.L3266:
	cmpl	$30, %r13d
	movl	%r13d, 24(%rsi)
	movl	%ebp, 28(%rsi)
	je	.L3280
	movq	%r14, 40(%rsi)
.L3268:
	leaq	48(%rsi), %rdx
	testl	%ebp, %ebp
	movq	%rdx, 32(%rsi)
	movq	%rdx, %rcx
	jle	.L3277
	movl	%ebp, %edx
	.p2align 4,,7
.L3273:
	movzbl	(%rbx), %r9d
	incq	%rbx
	movb	%r9b, (%rcx)
	incq	%rcx
	decl	%edx
	jne	.L3273
.L3277:
	movslq	%ebp,%rbx
	movq	%rsi, %rax
	addq	32(%rsi), %rbx
	movb	$0, (%rbx)
	addq	$8, %rsp
	popq	%rbx
	popq	%rbp
	popq	%r12
	popq	%r13
	popq	%r14
	popq	%r15
	ret
.L3280:
	movl	%r15d, 40(%rsi)
	jmp	.L3268
.L3279:
	movq	%rbx, %rdi
	movl	%ebp, %esi
	movl	$1403, %edx
	xorl	%eax, %eax
	call	hashf
	movl	%eax, %r12d
	jmp	.L3265
.L3278:
	movzbq	(%rdi), %rcx
	movq	%rdi, %rdx
	cmpb	$0, is_idchar(%rcx)
	je	.L3275
	.p2align 4,,7
.L3264:
	incq	%rdx
	movzbq	(%rdx), %rcx
	cmpb	$0, is_idchar(%rcx)
	jne	.L3264
.L3275:
	movl	%edx, %ebp
	subl	%ebx, %ebp
	jmp	.L3260
.LFE41:
.Lfe41:
	.size	install,.Lfe41-install
	.align 2
	.p2align 4,,15
.globl lookup
	.type	lookup,@function
lookup:
.LFB42:
	pushq	%r12
.LCFI211:
	testl	%esi, %esi
	movl	%edx, %ecx
	pushq	%rbp
.LCFI212:
	movq	%rdi, %r12
	movl	%esi, %ebp
	pushq	%rbx
.LCFI213:
	js	.L3298
.L3282:
	testl	%ecx, %ecx
	js	.L3299
.L3288:
	movslq	%ecx,%rdx
	movq	hashtab(,%rdx,8), %rbx
	testq	%rbx, %rbx
	je	.L3297
	.p2align 4,,7
.L3293:
	cmpl	%ebp, 28(%rbx)
	je	.L3300
.L3292:
	movq	(%rbx), %rbx
	testq	%rbx, %rbx
	jne	.L3293
.L3297:
	xorl	%ebx, %ebx
.L3281:
	movq	%rbx, %rax
	popq	%rbx
	popq	%rbp
	popq	%r12
	ret
	.p2align 6,,7
.L3300:
	movq	32(%rbx), %rdi
	movq	%r12, %rsi
	movslq	%ebp,%rdx
	call	strncmp
	testl	%eax, %eax
	jne	.L3292
	jmp	.L3281
.L3299:
	movq	%r12, %rdi
	movl	%ebp, %esi
	movl	$1403, %edx
	xorl	%eax, %eax
	call	hashf
	movl	%eax, %ecx
	jmp	.L3288
.L3298:
	movzbq	(%rdi), %rbx
	movq	%rdi, %rdx
	cmpb	$0, is_idchar(%rbx)
	je	.L3295
	.p2align 4,,7
.L3287:
	incq	%rdx
	movzbq	(%rdx), %rbx
	cmpb	$0, is_idchar(%rbx)
	jne	.L3287
.L3295:
	movl	%edx, %ebp
	subl	%r12d, %ebp
	jmp	.L3282
.LFE42:
.Lfe42:
	.size	lookup,.Lfe42-lookup
	.align 2
	.p2align 4,,15
	.type	delete_macro,@function
delete_macro:
.LFB43:
	movq	8(%rdi), %rdx
	testq	%rdx, %rdx
	je	.L3302
	movq	(%rdi), %rcx
	movq	%rcx, (%rdx)
.L3302:
	movq	(%rdi), %rax
	testq	%rax, %rax
	je	.L3303
	movq	%rdx, 8(%rax)
.L3303:
	movq	16(%rdi), %rdx
	cmpq	(%rdx), %rdi
	je	.L3305
.L3304:
	xorl	%eax, %eax
	jmp	free
	.p2align 6,,7
.L3305:
	movq	%rax, (%rdx)
	jmp	.L3304
.LFE43:
.Lfe43:
	.size	delete_macro,.Lfe43-delete_macro
	.align 2
	.p2align 4,,15
	.type	hashf,@function
hashf:
.LFB44:
	leal	-1(%rsi), %ecx
	xorl	%r8d, %r8d
	cmpl	$-1, %ecx
	je	.L3312
	.p2align 4,,7
.L3310:
	movzbl	(%rdi), %esi
	decl	%ecx
	incq	%rdi
	cmpl	$-1, %ecx
	leal	(%rsi,%r8,4), %r8d
	jne	.L3310
.L3312:
	andl	$2147483647, %r8d
	movl	%edx, %esi
	movl	%r8d, %eax
	cltd
	idivl	%esi
	movl	%edx, %eax
	ret
.LFE44:
.Lfe44:
	.size	hashf,.Lfe44-hashf
	.section	.rodata.str1.1
.LC199:
	.string	"#define %s"
.LC200:
	.string	"("
.LC202:
	.string	")"
.LC204:
	.string	" ## "
.LC203:
	.string	" #"
.LC201:
	.string	", "
	.text
	.align 2
	.p2align 4,,15
	.type	dump_single_macro,@function
dump_single_macro:
.LFB45:
	pushq	%r15
.LCFI214:
	movq	%rdi, %rcx
	xorl	%eax, %eax
	pushq	%r14
.LCFI215:
	pushq	%r13
.LCFI216:
	pushq	%r12
.LCFI217:
	pushq	%rbp
.LCFI218:
	movq	%rsi, %rbp
	pushq	%rbx
.LCFI219:
	subq	$8, %rsp
.LCFI220:
	movq	32(%rcx), %rdx
	movq	40(%rdi), %r12
	movq	%rsi, %rdi
	movl	$.LC199, %esi
	call	fprintf
	movl	(%r12), %eax
	testl	%eax, %eax
	js	.L3314
	xorl	%eax, %eax
	movq	%rbp, %rdi
	movl	$.LC200, %esi
	call	fprintf
	xorl	%ebx, %ebx
	cmpl	(%r12), %ebx
	jl	.L3320
.L3331:
	movq	%rbp, %rdi
	movl	$.LC202, %esi
	xorl	%eax, %eax
	call	fprintf
.L3314:
	xorl	%eax, %eax
	movq	%rbp, %rdi
	movl	$.LC87, %esi
	call	fprintf
	xorl	%r14d, %r14d
	xorl	%r13d, %r13d
	movq	48(%r12), %rbx
	testq	%rbx, %rbx
	je	.L3333
	xorl	%r15d, %r15d
	.p2align 4,,7
.L3329:
	movq	16(%r12), %rdi
	movl	12(%rbx), %edx
	xorl	%eax, %eax
	movl	%r14d, %esi
	movq	%rbp, %rcx
	call	dump_defn_1
	movl	12(%rbx), %eax
	testl	%eax, %eax
	cmovne	%r15d, %r13d
	addl	%eax, %r14d
	cmpb	$0, 8(%rbx)
	jne	.L3334
.L3326:
	cmpb	$0, 9(%rbx)
	je	.L3327
	testl	%r13d, %r13d
	je	.L3335
.L3327:
	movl	16(%rbx), %esi
	xorl	%eax, %eax
	movq	%r12, %rdi
	movq	%rbp, %rdx
	xorl	%r13d, %r13d
	call	dump_arg_n
	cmpb	$0, 10(%rbx)
	jne	.L3336
.L3323:
	movq	(%rbx), %rbx
	testq	%rbx, %rbx
	jne	.L3329
.L3333:
	movl	4(%r12), %edx
	movq	16(%r12), %rdi
	movl	%r14d, %esi
	movq	%rbp, %rcx
	xorl	%eax, %eax
	subl	%r14d, %edx
	call	dump_defn_1
	addq	$8, %rsp
	movq	%rbp, %rdi
	movl	$.LC66, %esi
	popq	%rbx
	popq	%rbp
	popq	%r12
	popq	%r13
	popq	%r14
	popq	%r15
	xorl	%eax, %eax
	jmp	fprintf
	.p2align 6,,7
.L3336:
	movq	%rbp, %rdi
	movl	$.LC204, %esi
	xorl	%eax, %eax
	call	fprintf
	movl	$1, %r13d
	jmp	.L3323
	.p2align 6,,7
.L3335:
	movq	%rbp, %rdi
	movl	$.LC204, %esi
	xorl	%eax, %eax
	call	fprintf
	jmp	.L3327
	.p2align 6,,7
.L3334:
	movq	%rbp, %rdi
	movl	$.LC203, %esi
	xorl	%eax, %eax
	call	fprintf
	jmp	.L3326
	.p2align 6,,7
.L3320:
	xorl	%eax, %eax
	movl	%ebx, %esi
	movq	%r12, %rdi
	movq	%rbp, %rdx
	incl	%ebx
	call	dump_arg_n
	movl	(%r12), %eax
	cmpl	%eax, %ebx
	jl	.L3337
.L3317:
	cmpl	%eax, %ebx
	jl	.L3320
	jmp	.L3331
	.p2align 6,,7
.L3337:
	movq	%rbp, %rdi
	movl	$.LC201, %esi
	xorl	%eax, %eax
	call	fprintf
	movl	(%r12), %eax
	jmp	.L3317
.LFE45:
.Lfe45:
	.size	dump_single_macro,.Lfe45-dump_single_macro
	.align 2
	.p2align 4,,15
	.type	dump_all_macros,@function
dump_all_macros:
.LFB46:
	pushq	%r12
.LCFI221:
	movl	$hashtab, %r12d
	pushq	%rbp
.LCFI222:
	movl	$1402, %ebp
	pushq	%rbx
.LCFI223:
	.p2align 4,,7
.L3349:
	movq	(%r12), %rbx
	testq	%rbx, %rbx
	je	.L3353
	.p2align 4,,7
.L3348:
	cmpl	$31, 24(%rbx)
	je	.L3354
.L3345:
	movq	(%rbx), %rbx
	testq	%rbx, %rbx
	jne	.L3348
.L3353:
	addq	$8, %r12
	decl	%ebp
	jns	.L3349
	popq	%rbx
	popq	%rbp
	popq	%r12
	ret
	.p2align 6,,7
.L3354:
	movq	%rbx, %rdi
	movq	$_iob+56, %rsi
	xorl	%eax, %eax
	call	dump_single_macro
	jmp	.L3345
.LFE46:
.Lfe46:
	.size	dump_all_macros,.Lfe46-dump_all_macros
	.align 2
	.p2align 4,,15
	.type	dump_defn_1,@function
dump_defn_1:
.LFB47:
	pushq	%r12
.LCFI224:
	movslq	%esi,%rax
	pushq	%rbp
.LCFI225:
	movq	%rcx, %rbp
	pushq	%rbx
.LCFI226:
	leaq	(%rax,%rdi), %rbx
	movslq	%edx,%rax
	leaq	(%rax,%rbx), %r12
	cmpq	%r12, %rbx
	jae	.L3367
	.p2align 4,,7
.L3365:
	cmpb	$10, (%rbx)
	je	.L3362
	movl	(%rbp), %eax
	decl	%eax
	testl	%eax, %eax
	movl	%eax, (%rbp)
	js	.L3368
	movzbl	(%rbx), %edx
	movq	8(%rbp), %rcx
	movb	%dl, (%rcx)
	incq	8(%rbp)
.L3362:
	incq	%rbx
	cmpq	%r12, %rbx
	jb	.L3365
.L3367:
	popq	%rbx
	popq	%rbp
	popq	%r12
	ret
.L3368:
	movzbl	(%rbx), %edi
	movq	%rbp, %rsi
	xorl	%eax, %eax
	call	_flsbuf
	jmp	.L3362
.LFE47:
.Lfe47:
	.size	dump_defn_1,.Lfe47-dump_defn_1
	.align 2
	.p2align 4,,15
	.type	dump_arg_n,@function
dump_arg_n:
.LFB48:
	pushq	%r13
.LCFI227:
	movq	%rdi, %r13
	pushq	%r12
.LCFI228:
	movq	%rdx, %r12
	pushq	%rbp
.LCFI229:
	movl	%esi, %ebp
	pushq	%rbx
.LCFI230:
	leal	1(%rbp), %edx
	subq	$8, %rsp
.LCFI231:
	cmpl	(%rdi), %edx
	movq	56(%rdi), %rbx
	jl	.L3373
.L3382:
	movzbl	(%rbx), %eax
	testb	%al, %al
	je	.L3369
	cmpb	$44, %al
	je	.L3369
	.p2align 4,,7
.L3380:
	movl	(%r12), %eax
	decl	%eax
	testl	%eax, %eax
	movl	%eax, (%r12)
	js	.L3384
	movzbl	(%rbx), %esi
	movq	8(%r12), %rcx
	movb	%sil, (%rcx)
	incq	8(%r12)
.L3379:
	incq	%rbx
	movzbl	(%rbx), %eax
	testb	%al, %al
	je	.L3369
	cmpb	$44, %al
	jne	.L3380
.L3369:
	addq	$8, %rsp
	popq	%rbx
	popq	%rbp
	popq	%r12
	popq	%r13
	ret
.L3384:
	movzbl	(%rbx), %edi
	movq	%r12, %rsi
	xorl	%eax, %eax
	call	_flsbuf
	jmp	.L3379
	.p2align 6,,7
.L3373:
	movq	%rbx, %rdi
	incl	%ebp
	movl	$32, %esi
	call	index
	leal	1(%rbp), %edx
	cmpl	(%r13), %edx
	leaq	1(%rax), %rbx
	jl	.L3373
	jmp	.L3382
.LFE48:
.Lfe48:
	.size	dump_arg_n,.Lfe48-dump_arg_n
	.align 2
	.p2align 4,,15
	.type	initialize_char_syntax,@function
initialize_char_syntax:
.LFB49:
	movl	$97, %ecx
	movl	$65, %esi
	.p2align 4,,7
.L3390:
	movslq	%ecx,%rdi
	movslq	%esi,%rax
	incl	%ecx
	incl	%esi
	movb	$1, is_idchar(%rax)
	movb	$1, is_idstart(%rax)
	cmpl	$122, %ecx
	movb	$1, is_idchar(%rdi)
	movb	$1, is_idstart(%rdi)
	jle	.L3390
	movl	$48, %edx
	.p2align 4,,7
.L3395:
	movslq	%edx,%rcx
	incl	%edx
	cmpl	$57, %edx
	movb	$1, is_idchar(%rcx)
	jle	.L3395
	movzbl	dollars_in_ident(%rip), %edx
	movb	$1, is_idchar+95(%rip)
	movb	$1, is_idstart+95(%rip)
	movb	$1, is_hor_space+32(%rip)
	movb	$1, is_hor_space+9(%rip)
	movb	$1, is_hor_space+11(%rip)
	movb	$1, is_hor_space+12(%rip)
	movb	$1, is_hor_space+13(%rip)
	movb	$1, is_space+32(%rip)
	movb	$1, is_space+9(%rip)
	movb	$1, is_space+11(%rip)
	movb	$1, is_space+12(%rip)
	movb	%dl, is_idchar+36(%rip)
	movb	%dl, is_idstart+36(%rip)
	movb	$1, is_space+10(%rip)
	movb	$1, is_space+13(%rip)
	ret
.LFE49:
.Lfe49:
	.size	initialize_char_syntax,.Lfe49-initialize_char_syntax
	.section	.rodata.str1.1
.LC205:
	.string	"__LINE__"
.LC206:
	.string	"__DATE__"
.LC207:
	.string	"__FILE__"
.LC208:
	.string	"__BASE_FILE__"
.LC209:
	.string	"__INCLUDE_LEVEL__"
.LC210:
	.string	"__VERSION__"
.LC211:
	.string	"__SIZE_TYPE__"
.LC212:
	.string	"__PTRDIFF_TYPE__ "
.LC213:
	.string	"__WCHAR_TYPE__"
.LC214:
	.string	"__TIME__"
.LC217:
	.string	" __BASE_FILE__ \"%s\"\n"
.LC218:
	.string	" __VERSION__ \"%s\"\n"
.LC219:
	.string	" __SIZE_TYPE__ %s\n"
.LC220:
	.string	" __PTRDIFF_TYPE__ %s\n"
.LC221:
	.string	" __WCHAR_TYPE__ %s\n"
.LC222:
	.string	" __DATE__ \"%s %2d %4d\"\n"
.LC223:
	.string	" __TIME__ \"%02d:%02d:%02d\"\n"
.LC225:
	.string	" __OBJC__ 1"
.LC224:
	.string	" __STDC__ 1"
.LC216:
	.string	"__OBJC__"
.LC215:
	.string	"__STDC__"
	.text
	.align 2
	.p2align 4,,15
	.type	initialize_builtins,@function
initialize_builtins:
.LFB50:
	pushq	%r15
.LCFI232:
	xorl	%ecx, %ecx
	xorl	%r8d, %r8d
	pushq	%r14
.LCFI233:
	movl	$20, %edx
	xorl	%eax, %eax
	pushq	%r13
.LCFI234:
	movq	%rdi, %r15
	movl	$.LC205, %edi
	pushq	%r12
.LCFI235:
	pushq	%rbp
.LCFI236:
	movq	%rsi, %rbp
	movl	$-1, %esi
	pushq	%rbx
.LCFI237:
	movl	%esi, %r9d
	subq	$2072, %rsp
.LCFI238:
	call	install
	xorl	%eax, %eax
	xorl	%r8d, %r8d
	movl	$-1, %esi
	xorl	%ecx, %ecx
	movl	$.LC206, %edi
	movl	%esi, %r9d
	movl	$21, %edx
	call	install
	xorl	%eax, %eax
	xorl	%r8d, %r8d
	movl	$-1, %esi
	xorl	%ecx, %ecx
	movl	$.LC207, %edi
	movl	%esi, %r9d
	movl	$22, %edx
	call	install
	xorl	%eax, %eax
	xorl	%r8d, %r8d
	movl	$-1, %esi
	xorl	%ecx, %ecx
	movl	$.LC208, %edi
	movl	%esi, %r9d
	movl	$23, %edx
	call	install
	xorl	%eax, %eax
	xorl	%r8d, %r8d
	movl	$-1, %esi
	xorl	%ecx, %ecx
	movl	$.LC209, %edi
	movl	%esi, %r9d
	movl	$24, %edx
	call	install
	xorl	%eax, %eax
	xorl	%r8d, %r8d
	movl	$-1, %esi
	xorl	%ecx, %ecx
	movl	$.LC210, %edi
	movl	%esi, %r9d
	movl	$25, %edx
	call	install
	xorl	%eax, %eax
	xorl	%r8d, %r8d
	movl	$-1, %esi
	xorl	%ecx, %ecx
	movl	$.LC211, %edi
	movl	%esi, %r9d
	movl	$26, %edx
	call	install
	xorl	%eax, %eax
	xorl	%r8d, %r8d
	movl	$-1, %esi
	movl	$.LC212, %edi
	movl	$27, %edx
	movl	%esi, %r9d
	xorl	%ecx, %ecx
	call	install
	xorl	%eax, %eax
	xorl	%r8d, %r8d
	movl	$-1, %esi
	xorl	%ecx, %ecx
	movl	$.LC213, %edi
	movl	%esi, %r9d
	movl	$28, %edx
	call	install
	xorl	%eax, %eax
	xorl	%r8d, %r8d
	movl	$-1, %esi
	xorl	%ecx, %ecx
	movl	$.LC214, %edi
	movl	$29, %edx
	movl	%esi, %r9d
	call	install
	movl	traditional(%rip), %eax
	testl	%eax, %eax
	je	.L3462
.L3401:
	movl	objc(%rip), %eax
	testl	%eax, %eax
	jne	.L3463
.L3402:
	movl	debug_output(%rip), %eax
	testl	%eax, %eax
	je	.L3400
	movq	timebuf.2(%rip), %r14
	testq	%r14, %r14
	je	.L3464
.L3404:
	movq	instack+8(%rip), %rdx
	leaq	16(%rsp), %r12
	movl	$.LC217, %esi
	movq	%r12, %rdi
	xorl	%eax, %eax
	call	sprintf
	xorl	%eax, %eax
	xorl	%ecx, %ecx
	movq	%rbp, %rsi
	movq	%r15, %rdi
	xorl	%edx, %edx
	call	output_line_command
	movq	%r12, %rsi
	.p2align 4,,7
.L3406:
	movl	(%rsi), %eax
	addq	$4, %rsi
	leal	-16843009(%rax), %edx
	notl	%eax
	andl	%eax, %edx
	movl	%edx, %ecx
	andl	$-2139062144, %ecx
	je	.L3406
	movl	%ecx, %r9d
	leaq	2(%rsi), %rdi
	movq	%rsi, %r13
	shrl	$16, %r9d
	movslq	28(%rbp),%r8
	andl	$32896, %edx
	cmove	%r9d, %ecx
	cmove	%rdi, %r13
	movq	40(%rbp), %rdi
	movl	%ecx, %ebx
	addb	%cl, %bl
	movl	directive_table(%rip), %ebx
	sbbq	$3, %r13
	movq	%rdi, %rdx
	subq	32(%rbp), %rdx
	movq	%r13, %rcx
	subq	%r12, %rcx
	leal	1(%rbx), %eax
	leaq	(%rcx,%rax), %rsi
	subq	%rdx, %r8
	cmpq	%rsi, %r8
	jle	.L3465
.L3409:
	movb	$35, (%rdi)
	xorl	%eax, %eax
	movl	%ebx, %edx
	movq	40(%rbp), %rsi
	movq	directive_table+16(%rip), %rdi
	incq	%rsi
	movq	%rsi, 40(%rbp)
	call	bcopy
	mov	%ebx, %eax
	addq	40(%rbp), %rax
	cmpq	%r12, %r13
	movq	%rax, 40(%rbp)
	je	.L3410
	cmpb	$32, (%r12)
	je	.L3410
	movb	$32, (%rax)
	incq	40(%rbp)
.L3410:
	movq	40(%rbp), %rsi
	movq	%r13, %rbx
	movq	%r12, %rdi
	subq	%r12, %rbx
	xorl	%eax, %eax
	movq	%rbx, %rdx
	call	bcopy
	xorl	%eax, %eax
	movq	version_string(%rip), %rdx
	addq	%rbx, 40(%rbp)
	movq	%r12, %rdi
	movl	$.LC218, %esi
	call	sprintf
	xorl	%eax, %eax
	xorl	%ecx, %ecx
	movq	%rbp, %rsi
	movq	%r15, %rdi
	xorl	%edx, %edx
	call	output_line_command
	movq	%r12, %rsi
	.p2align 4,,7
.L3412:
	movl	(%rsi), %eax
	addq	$4, %rsi
	leal	-16843009(%rax), %edx
	notl	%eax
	andl	%eax, %edx
	movl	%edx, %ecx
	andl	$-2139062144, %ecx
	je	.L3412
	movl	%ecx, %r13d
	movq	40(%rbp), %rdi
	leaq	2(%rsi), %rbx
	shrl	$16, %r13d
	movslq	28(%rbp),%r10
	andl	$32896, %edx
	cmove	%r13d, %ecx
	movq	%rsi, %r13
	movl	%ecx, %edx
	cmove	%rbx, %r13
	movq	%rdi, %rsi
	addb	%cl, %dl
	movl	directive_table(%rip), %ebx
	sbbq	$3, %r13
	subq	32(%rbp), %rsi
	movq	%r13, %r11
	subq	%r12, %r11
	leal	1(%rbx), %r8d
	subq	%rsi, %r10
	leaq	(%r11,%r8), %rsi
	cmpq	%rsi, %r10
	jle	.L3466
.L3415:
	movb	$35, (%rdi)
	xorl	%eax, %eax
	movl	%ebx, %edx
	movq	40(%rbp), %rsi
	movq	directive_table+16(%rip), %rdi
	incq	%rsi
	movq	%rsi, 40(%rbp)
	call	bcopy
	mov	%ebx, %eax
	addq	40(%rbp), %rax
	cmpq	%r12, %r13
	movq	%rax, 40(%rbp)
	je	.L3416
	cmpb	$32, (%r12)
	je	.L3416
	movb	$32, (%rax)
	incq	40(%rbp)
.L3416:
	movq	40(%rbp), %rsi
	movq	%r13, %rbx
	movq	%r12, %rdi
	subq	%r12, %rbx
	xorl	%eax, %eax
	movq	%rbx, %rdx
	call	bcopy
	xorl	%eax, %eax
	movl	$.LC172, %edx
	addq	%rbx, 40(%rbp)
	movq	%r12, %rdi
	movl	$.LC219, %esi
	call	sprintf
	xorl	%eax, %eax
	xorl	%ecx, %ecx
	movq	%rbp, %rsi
	movq	%r15, %rdi
	xorl	%edx, %edx
	call	output_line_command
	movq	%r12, %rsi
	.p2align 4,,7
.L3418:
	movl	(%rsi), %eax
	addq	$4, %rsi
	leal	-16843009(%rax), %edx
	notl	%eax
	andl	%eax, %edx
	movl	%edx, %ecx
	andl	$-2139062144, %ecx
	je	.L3418
	movl	%ecx, %r8d
	leaq	2(%rsi), %r11
	movq	%rsi, %r13
	shrl	$16, %r8d
	movl	directive_table(%rip), %ebx
	movslq	28(%rbp),%r9
	andl	$32896, %edx
	cmove	%r8d, %ecx
	cmove	%r11, %r13
	movl	%ecx, %edi
	leal	1(%rbx), %eax
	addb	%cl, %dil
	movq	40(%rbp), %rdi
	sbbq	$3, %r13
	movq	%r13, %rcx
	movq	%rdi, %r10
	subq	%r12, %rcx
	subq	32(%rbp), %r10
	leaq	(%rcx,%rax), %rsi
	subq	%r10, %r9
	cmpq	%rsi, %r9
	jle	.L3467
.L3421:
	movb	$35, (%rdi)
	xorl	%eax, %eax
	movl	%ebx, %edx
	movq	40(%rbp), %rsi
	movq	directive_table+16(%rip), %rdi
	incq	%rsi
	movq	%rsi, 40(%rbp)
	call	bcopy
	mov	%ebx, %eax
	addq	40(%rbp), %rax
	cmpq	%r12, %r13
	movq	%rax, 40(%rbp)
	je	.L3422
	cmpb	$32, (%r12)
	je	.L3422
	movb	$32, (%rax)
	incq	40(%rbp)
.L3422:
	movq	40(%rbp), %rsi
	movq	%r13, %rbx
	movq	%r12, %rdi
	subq	%r12, %rbx
	xorl	%eax, %eax
	movq	%rbx, %rdx
	call	bcopy
	xorl	%eax, %eax
	movl	$.LC173, %edx
	addq	%rbx, 40(%rbp)
	movq	%r12, %rdi
	movl	$.LC220, %esi
	call	sprintf
	xorl	%eax, %eax
	xorl	%ecx, %ecx
	movq	%rbp, %rsi
	movq	%r15, %rdi
	xorl	%edx, %edx
	call	output_line_command
	movq	%r12, %rsi
	.p2align 4,,7
.L3424:
	movl	(%rsi), %eax
	addq	$4, %rsi
	leal	-16843009(%rax), %edx
	notl	%eax
	andl	%eax, %edx
	movl	%edx, %ecx
	andl	$-2139062144, %ecx
	je	.L3424
	movl	%ecx, %r13d
	movq	40(%rbp), %rdi
	leaq	2(%rsi), %rbx
	shrl	$16, %r13d
	movslq	28(%rbp),%r9
	andl	$32896, %edx
	cmove	%r13d, %ecx
	movq	%rsi, %r13
	movl	%ecx, %edx
	cmove	%rbx, %r13
	movq	%rdi, %rsi
	addb	%cl, %dl
	movl	directive_table(%rip), %ebx
	sbbq	$3, %r13
	subq	32(%rbp), %rsi
	movq	%r13, %rcx
	subq	%r12, %rcx
	leal	1(%rbx), %eax
	subq	%rsi, %r9
	leaq	(%rcx,%rax), %rsi
	cmpq	%rsi, %r9
	jle	.L3468
.L3427:
	movb	$35, (%rdi)
	xorl	%eax, %eax
	movl	%ebx, %edx
	movq	40(%rbp), %rsi
	movq	directive_table+16(%rip), %rdi
	incq	%rsi
	movq	%rsi, 40(%rbp)
	call	bcopy
	mov	%ebx, %eax
	addq	40(%rbp), %rax
	cmpq	%r12, %r13
	movq	%rax, 40(%rbp)
	je	.L3428
	cmpb	$32, (%r12)
	je	.L3428
	movb	$32, (%rax)
	incq	40(%rbp)
.L3428:
	movq	40(%rbp), %rsi
	movq	%r13, %rbx
	movq	%r12, %rdi
	subq	%r12, %rbx
	xorl	%eax, %eax
	movq	%rbx, %rdx
	call	bcopy
	xorl	%eax, %eax
	movl	$.LC174, %edx
	addq	%rbx, 40(%rbp)
	movq	%r12, %rdi
	movl	$.LC221, %esi
	call	sprintf
	xorl	%eax, %eax
	xorl	%ecx, %ecx
	movq	%rbp, %rsi
	movq	%r15, %rdi
	xorl	%edx, %edx
	call	output_line_command
	movq	%r12, %rsi
	.p2align 4,,7
.L3430:
	movl	(%rsi), %eax
	addq	$4, %rsi
	leal	-16843009(%rax), %edx
	notl	%eax
	andl	%eax, %edx
	movl	%edx, %ecx
	andl	$-2139062144, %ecx
	je	.L3430
	movl	%ecx, %ebx
	movq	%rsi, %r13
	movslq	28(%rbp),%r10
	shrl	$16, %ebx
	andl	$32896, %edx
	leaq	2(%rsi), %rdx
	cmove	%ebx, %ecx
	cmove	%rdx, %r13
	movl	directive_table(%rip), %ebx
	movl	%ecx, %edi
	addb	%cl, %dil
	movq	40(%rbp), %rdi
	sbbq	$3, %r13
	leal	1(%rbx), %r8d
	movq	%r13, %r11
	movq	%rdi, %r9
	subq	%r12, %r11
	subq	32(%rbp), %r9
	leaq	(%r11,%r8), %rsi
	subq	%r9, %r10
	cmpq	%rsi, %r10
	jle	.L3469
.L3433:
	movb	$35, (%rdi)
	xorl	%eax, %eax
	movl	%ebx, %edx
	movq	40(%rbp), %rsi
	movq	directive_table+16(%rip), %rdi
	incq	%rsi
	movq	%rsi, 40(%rbp)
	call	bcopy
	mov	%ebx, %eax
	addq	40(%rbp), %rax
	cmpq	%r12, %r13
	movq	%rax, 40(%rbp)
	je	.L3434
	cmpb	$32, (%r12)
	je	.L3434
	movb	$32, (%rax)
	incq	40(%rbp)
.L3434:
	movq	40(%rbp), %rsi
	movq	%r13, %rbx
	movq	%r12, %rdi
	subq	%r12, %rbx
	xorl	%eax, %eax
	movq	%rbx, %rdx
	call	bcopy
	xorl	%eax, %eax
	movl	$.LC222, %esi
	movslq	16(%r14),%rcx
	movl	20(%r14), %r8d
	movq	%r12, %rdi
	addq	%rbx, 40(%rbp)
	addl	$1900, %r8d
	movq	monthnames(,%rcx,8), %rdx
	movl	12(%r14), %ecx
	call	sprintf
	xorl	%eax, %eax
	xorl	%ecx, %ecx
	movq	%rbp, %rsi
	movq	%r15, %rdi
	xorl	%edx, %edx
	call	output_line_command
	movq	%r12, %rsi
	.p2align 4,,7
.L3436:
	movl	(%rsi), %eax
	addq	$4, %rsi
	leal	-16843009(%rax), %edx
	notl	%eax
	andl	%eax, %edx
	movl	%edx, %ecx
	andl	$-2139062144, %ecx
	je	.L3436
	movl	%ecx, %r13d
	movq	40(%rbp), %rdi
	leaq	2(%rsi), %r9
	shrl	$16, %r13d
	movl	directive_table(%rip), %ebx
	movslq	28(%rbp),%r10
	andl	$32896, %edx
	cmove	%r13d, %ecx
	movq	%rsi, %r13
	movq	%rdi, %rsi
	movl	%ecx, %r8d
	cmove	%r9, %r13
	leal	1(%rbx), %eax
	addb	%cl, %r8b
	sbbq	$3, %r13
	subq	32(%rbp), %rsi
	movq	%r13, %r11
	subq	%r12, %r11
	subq	%rsi, %r10
	leaq	(%r11,%rax), %rsi
	cmpq	%rsi, %r10
	jle	.L3470
.L3439:
	movb	$35, (%rdi)
	xorl	%eax, %eax
	movl	%ebx, %edx
	movq	40(%rbp), %rsi
	movq	directive_table+16(%rip), %rdi
	incq	%rsi
	movq	%rsi, 40(%rbp)
	call	bcopy
	mov	%ebx, %eax
	addq	40(%rbp), %rax
	cmpq	%r12, %r13
	movq	%rax, 40(%rbp)
	je	.L3440
	cmpb	$32, (%r12)
	je	.L3440
	movb	$32, (%rax)
	incq	40(%rbp)
.L3440:
	movq	40(%rbp), %rsi
	movq	%r13, %rbx
	movq	%r12, %rdi
	subq	%r12, %rbx
	xorl	%eax, %eax
	movq	%rbx, %rdx
	call	bcopy
	xorl	%eax, %eax
	movl	(%r14), %r8d
	addq	%rbx, 40(%rbp)
	movl	8(%r14), %edx
	movq	%r12, %rdi
	movl	4(%r14), %ecx
	movl	$.LC223, %esi
	call	sprintf
	xorl	%eax, %eax
	xorl	%ecx, %ecx
	movq	%rbp, %rsi
	movq	%r15, %rdi
	xorl	%edx, %edx
	call	output_line_command
	movq	%r12, %rsi
	.p2align 4,,7
.L3442:
	movl	(%rsi), %eax
	addq	$4, %rsi
	leal	-16843009(%rax), %edx
	notl	%eax
	andl	%eax, %edx
	movl	%edx, %ecx
	andl	$-2139062144, %ecx
	je	.L3442
	movl	%ecx, %r11d
	leaq	2(%rsi), %rbx
	movq	%rsi, %r13
	shrl	$16, %r11d
	movslq	28(%rbp),%r14
	andl	$32896, %edx
	cmove	%r11d, %ecx
	cmove	%rbx, %r13
	movl	directive_table(%rip), %ebx
	movl	%ecx, %edi
	addb	%cl, %dil
	movq	40(%rbp), %rdi
	sbbq	$3, %r13
	leal	1(%rbx), %r10d
	movq	%r13, %rcx
	movq	%rdi, %rdx
	subq	%r12, %rcx
	subq	32(%rbp), %rdx
	leaq	(%rcx,%r10), %rsi
	subq	%rdx, %r14
	cmpq	%rsi, %r14
	jle	.L3471
.L3445:
	movb	$35, (%rdi)
	xorl	%eax, %eax
	movl	%ebx, %edx
	movq	40(%rbp), %rsi
	movq	directive_table+16(%rip), %rdi
	incq	%rsi
	movq	%rsi, 40(%rbp)
	call	bcopy
	mov	%ebx, %eax
	addq	40(%rbp), %rax
	cmpq	%r12, %r13
	movq	%rax, 40(%rbp)
	je	.L3446
	cmpb	$32, (%r12)
	je	.L3446
	movb	$32, (%rax)
	incq	40(%rbp)
.L3446:
	movq	%r13, %r14
	movq	40(%rbp), %rsi
	xorl	%eax, %eax
	subq	%r12, %r14
	movq	%r12, %rdi
	movq	%r14, %rdx
	call	bcopy
	movl	traditional(%rip), %eax
	addq	%r14, 40(%rbp)
	testl	%eax, %eax
	je	.L3472
.L3448:
	movl	objc(%rip), %eax
	testl	%eax, %eax
	jne	.L3473
.L3400:
	addq	$2072, %rsp
	popq	%rbx
	popq	%rbp
	popq	%r12
	popq	%r13
	popq	%r14
	popq	%r15
	ret
.L3473:
	movq	%r12, %rdi
	movl	$.LC225, %esi
	xorl	%eax, %eax
	call	sprintf
	xorl	%eax, %eax
	xorl	%ecx, %ecx
	movq	%rbp, %rsi
	movq	%r15, %rdi
	xorl	%edx, %edx
	call	output_line_command
	movq	%r12, %rsi
	.p2align 4,,7
.L3456:
	movl	(%rsi), %eax
	addq	$4, %rsi
	leal	-16843009(%rax), %edx
	notl	%eax
	andl	%eax, %edx
	movl	%edx, %ecx
	andl	$-2139062144, %ecx
	je	.L3456
	movl	%ecx, %ebx
	movq	40(%rbp), %rdi
	leaq	2(%rsi), %r8
	shrl	$16, %ebx
	movl	directive_table(%rip), %r13d
	movslq	28(%rbp),%r15
	andl	$32896, %edx
	cmove	%ebx, %ecx
	movq	%rdi, %rdx
	movq	%rsi, %rbx
	movl	%ecx, %r14d
	cmove	%r8, %rbx
	leal	1(%r13), %r11d
	addb	%cl, %r14b
	sbbq	$3, %rbx
	subq	32(%rbp), %rdx
	movq	%rbx, %rcx
	subq	%r12, %rcx
	leaq	(%rcx,%r11), %rsi
	subq	%rdx, %r15
	cmpq	%rsi, %r15
	jle	.L3474
.L3459:
	movb	$35, (%rdi)
	xorl	%eax, %eax
	movl	%r13d, %edx
	movq	40(%rbp), %rsi
	movq	directive_table+16(%rip), %rdi
	incq	%rsi
	movq	%rsi, 40(%rbp)
	call	bcopy
	mov	%r13d, %eax
	addq	40(%rbp), %rax
	cmpq	%r12, %rbx
	movq	%rax, 40(%rbp)
	je	.L3460
	cmpb	$32, (%r12)
	je	.L3460
	movb	$32, (%rax)
	incq	40(%rbp)
.L3460:
	movq	40(%rbp), %rsi
	subq	%r12, %rbx
	movq	%r12, %rdi
	movq	%rbx, %rdx
	xorl	%eax, %eax
	call	bcopy
	addq	%rbx, 40(%rbp)
	jmp	.L3400
.L3474:
	movq	%rbp, %rdi
	xorl	%eax, %eax
	call	grow_outbuf
	movq	40(%rbp), %rdi
	jmp	.L3459
.L3472:
	movq	%r12, %rdi
	movl	$.LC224, %esi
	xorl	%eax, %eax
	call	sprintf
	xorl	%eax, %eax
	xorl	%ecx, %ecx
	movq	%rbp, %rsi
	movq	%r15, %rdi
	xorl	%edx, %edx
	call	output_line_command
	movq	%r12, %rsi
	.p2align 4,,7
.L3449:
	movl	(%rsi), %eax
	addq	$4, %rsi
	leal	-16843009(%rax), %edx
	notl	%eax
	andl	%eax, %edx
	movl	%edx, %ecx
	andl	$-2139062144, %ecx
	je	.L3449
	movl	%ecx, %edi
	leaq	2(%rsi), %r10
	movq	%rsi, %rbx
	shrl	$16, %edi
	movslq	28(%rbp),%r8
	andl	$32896, %edx
	cmove	%edi, %ecx
	cmove	%r10, %rbx
	movq	40(%rbp), %rdi
	movl	%ecx, %r13d
	addb	%cl, %r13b
	movl	directive_table(%rip), %r13d
	sbbq	$3, %rbx
	movq	%rdi, %rsi
	subq	32(%rbp), %rsi
	movq	%rbx, %r9
	subq	%r12, %r9
	leal	1(%r13), %eax
	subq	%rsi, %r8
	leaq	(%r9,%rax), %rsi
	cmpq	%rsi, %r8
	jle	.L3475
.L3452:
	movb	$35, (%rdi)
	xorl	%eax, %eax
	movl	%r13d, %edx
	movq	40(%rbp), %rsi
	movq	directive_table+16(%rip), %rdi
	incq	%rsi
	movq	%rsi, 40(%rbp)
	call	bcopy
	mov	%r13d, %eax
	addq	40(%rbp), %rax
	cmpq	%r12, %rbx
	movq	%rax, 40(%rbp)
	je	.L3453
	cmpb	$32, (%r12)
	je	.L3453
	movb	$32, (%rax)
	incq	40(%rbp)
.L3453:
	movq	40(%rbp), %rsi
	subq	%r12, %rbx
	movq	%r12, %rdi
	movq	%rbx, %rdx
	xorl	%eax, %eax
	call	bcopy
	addq	%rbx, 40(%rbp)
	jmp	.L3448
.L3475:
	movq	%rbp, %rdi
	xorl	%eax, %eax
	call	grow_outbuf
	movq	40(%rbp), %rdi
	jmp	.L3452
.L3471:
	movq	%rbp, %rdi
	xorl	%eax, %eax
	call	grow_outbuf
	movq	40(%rbp), %rdi
	jmp	.L3445
.L3470:
	movq	%rbp, %rdi
	xorl	%eax, %eax
	call	grow_outbuf
	movq	40(%rbp), %rdi
	jmp	.L3439
.L3469:
	movq	%rbp, %rdi
	xorl	%eax, %eax
	call	grow_outbuf
	movq	40(%rbp), %rdi
	jmp	.L3433
.L3468:
	movq	%rbp, %rdi
	xorl	%eax, %eax
	call	grow_outbuf
	movq	40(%rbp), %rdi
	jmp	.L3427
.L3467:
	movq	%rbp, %rdi
	xorl	%eax, %eax
	call	grow_outbuf
	movq	40(%rbp), %rdi
	jmp	.L3421
.L3466:
	movq	%rbp, %rdi
	xorl	%eax, %eax
	call	grow_outbuf
	movq	40(%rbp), %rdi
	jmp	.L3415
.L3465:
	movq	%rbp, %rdi
	xorl	%eax, %eax
	call	grow_outbuf
	movq	40(%rbp), %rdi
	jmp	.L3409
.L3464:
	xorl	%edi, %edi
	xorl	%eax, %eax
	call	time
	leaq	12(%rsp), %rdi
	movl	%eax, 12(%rsp)
	xorl	%eax, %eax
	call	localtime
	movq	%rax, %r14
	movq	%rax, timebuf.2(%rip)
	jmp	.L3404
.L3463:
	movl	$-1, %esi
	movl	$.LC216, %edi
	movl	$30, %edx
	movl	$1, %ecx
	xorl	%r8d, %r8d
	movl	%esi, %r9d
	xorl	%eax, %eax
	call	install
	jmp	.L3402
.L3462:
	movl	$-1, %esi
	movl	$.LC215, %edi
	movl	$30, %edx
	movl	$1, %ecx
	xorl	%r8d, %r8d
	movl	%esi, %r9d
	xorl	%eax, %eax
	call	install
	jmp	.L3401
.LFE50:
.Lfe50:
	.size	initialize_builtins,.Lfe50-initialize_builtins
	.section	.rodata.str1.1
.LC226:
	.string	"malformed option `-D %s'"
.LC227:
	.string	"*Initialization*"
	.section	.rodata.str1.32
	.align 32
.LC228:
	.string	"this is the location of the previous definition"
	.text
	.align 2
	.p2align 4,,15
	.type	make_definition,@function
make_definition:
.LFB51:
	pushq	%rbp
.LCFI239:
	movq	%rsp, %rbp
.LCFI240:
	pushq	%r15
.LCFI241:
	pushq	%r14
.LCFI242:
	movq	%rsi, %r14
	pushq	%r13
.LCFI243:
	movq	%rdi, %r13
	pushq	%r12
.LCFI244:
	movq	%rdi, %r12
	pushq	%rbx
.LCFI245:
	subq	$88, %rsp
.LCFI246:
	movzbq	(%rdi), %rdx
	cmpb	$0, is_idstart(%rdx)
	je	.L3538
	.p2align 4,,7
.L3478:
	incq	%r12
	movzbl	(%r12), %edx
	movzbl	%dl, %ecx 
	cmpb	$0, is_idchar(%rcx)
	jne	.L3478
	testb	%dl, %dl
	je	.L3539
	cmpb	$61, %dl
	je	.L3483
	movl	$.LC226, %edi
	movq	%r13, %rsi
.L3537:
	xorl	%eax, %eax
	call	error
.L3476:
	leaq	-40(%rbp), %rsp
	popq	%rbx
	popq	%r12
	popq	%r13
	popq	%r14
	popq	%r15
	leave
	ret
.L3483:
	movq	%r13, %rdi
	movq	%r12, %rbx
	call	strlen
	subq	%r13, %rbx
	leaq	16(%rax,%rax), %rsi
	movq	%rbx, %rdx
	andq	$-16, %rsi
	subq	%rsi, %rsp
	movq	%r13, %rsi
	movq	%rsp, %rdi
	movq	%rsp, %r15
	call	strncpy
	leaq	1(%r12), %rdx
	movb	$32, (%rsp,%rbx)
	movzbl	1(%r12), %eax
	movq	%rdx, %rbx
	subq	%r13, %rbx
	leaq	(%rsp,%rbx), %rcx
	testb	%al, %al
	je	.L3532
	.p2align 4,,7
.L3492:
	cmpb	$92, %al
	je	.L3540
.L3488:
	cmpb	$10, %al
	je	.L3541
	movb	%al, (%rcx)
	incq	%rdx
	incq	%rcx
.L3485:
	movzbl	(%rdx), %eax
	testb	%al, %al
	jne	.L3492
.L3532:
	movb	$0, (%rcx)
.L3482:
	movl	indepth(%rip), %r8d
	movq	%r15, %rdi
	incl	%r8d
	movslq	%r8d,%rax
	movl	%r8d, indepth(%rip)
	leaq	(%rax,%rax,4), %r12
	salq	$4, %r12
	movq	$.LC227, instack(%r12)
	movq	$.LC227, instack+8(%r12)
	movq	%r15, instack+40(%r12)
	movq	%r15, instack+32(%r12)
	call	strlen
	cmpl	$1, directive_table+24(%rip)
	movq	if_stack(%rip), %rdi
	movl	%eax, instack+28(%r12)
	movl	$1, instack+24(%r12)
	movq	$0, instack+48(%r12)
	movq	$0, instack+64(%r12)
	movb	$0, instack+72(%r12)
	movq	%rdi, instack+56(%r12)
	movl	$directive_table, %r12d
	je	.L3534
	.p2align 4,,7
.L3497:
	addq	$32, %r12
	cmpl	$1, 24(%r12)
	jne	.L3497
.L3534:
	movq	%r15, %rdi
	call	strlen
	cmpq	$0, pcp_outfile(%rip)
	leaq	(%rax,%r15), %r13
	je	.L3498
	testq	%r14, %r14
	je	.L3498
	movq	40(%r14), %rdi
	movl	(%r12), %ebx
	movq	%r13, %r10
	movslq	28(%r14),%r9
	subq	%r15, %r10
	movq	%rdi, %rcx
	leal	1(%rbx), %r11d
	subq	32(%r14), %rcx
	leaq	(%r10,%r11), %rsi
	subq	%rcx, %r9
	cmpq	%rsi, %r9
	jle	.L3542
.L3500:
	movb	$35, (%rdi)
	xorl	%eax, %eax
	movl	%ebx, %edx
	movq	40(%r14), %rsi
	movq	16(%r12), %rdi
	incq	%rsi
	movq	%rsi, 40(%r14)
	call	bcopy
	mov	%ebx, %eax
	addq	40(%r14), %rax
	cmpq	%r15, %r13
	movq	%rax, 40(%r14)
	je	.L3501
	cmpb	$32, (%r15)
	je	.L3501
	movb	$32, (%rax)
	incq	40(%r14)
.L3501:
	movq	%r13, %rbx
	movq	40(%r14), %rsi
	movq	%r15, %rdi
	subq	%r15, %rbx
	xorl	%eax, %eax
	movq	%rbx, %rdx
	call	bcopy
	addq	%rbx, 40(%r14)
.L3498:
	xorl	%eax, %eax
	leaq	-80(%rbp), %rdi
	movq	%r15, %rsi
	movq	%r13, %rdx
	movq	%r14, %rcx
	call	create_definition
	cmpq	$0, -80(%rbp)
	jne	.L3543
.L3504:
.L3530:
	decl	indepth(%rip)
	jmp	.L3476
.L3543:
	movq	-72(%rbp), %rdi
	movl	-64(%rbp), %esi
	movl	$1403, %edx
	xorl	%eax, %eax
	call	hashf
	movl	-64(%rbp), %esi
	movq	-72(%rbp), %rdi
	movl	%eax, -84(%rbp)
	movl	%eax, %edx
	xorl	%eax, %eax
	call	lookup
	testq	%rax, %rax
	movq	%rax, -96(%rbp)
	je	.L3505
	movq	-96(%rbp), %rbx
	xorl	%eax, %eax
	movl	24(%rbx), %edx
	cmpl	$34, %edx
	je	.L3544
	cmpl	$31, %edx
	je	.L3545
	cmpl	$30, %edx
	je	.L3546
.L3507:
	testl	%eax, %eax
	jne	.L3511
	movl	debug_output(%rip), %eax
	testl	%eax, %eax
	je	.L3512
	testq	%r14, %r14
	je	.L3512
	movq	40(%r14), %rdi
	movl	(%r12), %ebx
	movq	%r13, %r9
	movslq	28(%r14),%r8
	subq	%r15, %r9
	movq	%rdi, %r11
	leal	1(%rbx), %r10d
	subq	32(%r14), %r11
	leaq	(%r9,%r10), %rsi
	subq	%r11, %r8
	cmpq	%rsi, %r8
	jle	.L3547
.L3514:
	movb	$35, (%rdi)
	xorl	%eax, %eax
	movl	%ebx, %edx
	movq	40(%r14), %rsi
	movq	16(%r12), %rdi
	incq	%rsi
	movq	%rsi, 40(%r14)
	call	bcopy
	mov	%ebx, %eax
	addq	40(%r14), %rax
	cmpq	%r15, %r13
	movq	%rax, 40(%r14)
	je	.L3515
	cmpb	$32, (%r15)
	je	.L3515
	movb	$32, (%rax)
	incq	40(%r14)
.L3515:
	movq	%r13, %r12
	movq	40(%r14), %rsi
	movq	%r15, %rdi
	subq	%r15, %r12
	xorl	%eax, %eax
	movq	%r12, %rdx
	call	bcopy
	addq	%r12, 40(%r14)
.L3512:
	movl	-64(%rbp), %edx
	movq	-72(%rbp), %rdi
	xorl	%eax, %eax
	movabsq	$7594869303480033319, %r14
	movslq	%edx,%r15
	addq	$37, %r15
	andq	$-16, %r15
	subq	%r15, %rsp
	leaq	1(%rsp), %rsi
	movb	$96, (%rsp)
	call	bcopy
	xorl	%eax, %eax
	movq	%rsp, %rdi
	movslq	-64(%rbp),%r13
	movq	%r14, 1(%rsp,%r13)
	movl	$6579566, 9(%rsp,%r13)
	call	pedwarn
	movq	-96(%rbp), %rdx
	cmpl	$31, 24(%rdx)
	je	.L3548
.L3511:
	movq	-96(%rbp), %rdx
	movq	-80(%rbp), %rdi
	movl	$31, 24(%rdx)
	movq	%rdi, 40(%rdx)
	jmp	.L3530
.L3548:
	movl	pedantic_errors(%rip), %eax
	movq	40(%rdx), %rbx
	testl	%eax, %eax
	movq	32(%rbx), %rdx
	movl	24(%rbx), %ecx
	jne	.L3518
	movl	inhibit_warnings(%rip), %esi
	testl	%esi, %esi
	jne	.L3511
.L3518:
	testq	%rdx, %rdx
	je	.L3535
	movq	$_iob+112, %rbx
	movl	$.LC191, %esi
	xorl	%eax, %eax
	movq	%rbx, %rdi
	call	fprintf
	movl	pedantic_errors(%rip), %eax
.L3520:
	testl	%eax, %eax
	jne	.L3522
	movl	warnings_are_errors(%rip), %ecx
	testl	%ecx, %ecx
	je	.L3521
.L3522:
	incl	errors(%rip)
.L3521:
	testl	%eax, %eax
	je	.L3549
.L3523:
	movq	-104(%rbp), %rdx
	movq	-112(%rbp), %rcx
	movq	%rbx, %rdi
	movq	-120(%rbp), %r8
	movl	$.LC228, %esi
	xorl	%eax, %eax
	call	fprintf
	xorl	%eax, %eax
	movl	$.LC66, %esi
	movq	%rbx, %rdi
	call	fprintf
	jmp	.L3511
.L3549:
	movq	%rbx, %rdi
	movl	$.LC194, %esi
	xorl	%eax, %eax
	call	fprintf
	jmp	.L3523
.L3535:
	movq	$_iob+112, %rbx
	jmp	.L3520
.L3547:
	movq	%r14, %rdi
	xorl	%eax, %eax
	call	grow_outbuf
	movq	40(%r14), %rdi
	jmp	.L3514
.L3546:
	movl	done_initializing(%rip), %esi
	testl	%esi, %esi
.L3536:
	sete	%dil
	movzbl	%dil, %eax
	jmp	.L3507
.L3545:
	movq	-96(%rbp), %rdx
	movq	-80(%rbp), %rdi
	xorl	%eax, %eax
	movq	40(%rdx), %rsi
	call	compare_defs
	testl	%eax, %eax
	jmp	.L3536
.L3544:
	movl	$1, %eax
	jmp	.L3507
.L3505:
	movl	debug_output(%rip), %eax
	testl	%eax, %eax
	je	.L3525
	testq	%r14, %r14
	je	.L3525
	movq	40(%r14), %rdi
	movl	(%r12), %ebx
	movq	%r13, %r9
	movslq	28(%r14),%r8
	subq	%r15, %r9
	movq	%rdi, %r11
	leal	1(%rbx), %r10d
	subq	32(%r14), %r11
	leaq	(%r9,%r10), %rsi
	subq	%r11, %r8
	cmpq	%rsi, %r8
	jle	.L3550
.L3527:
	movb	$35, (%rdi)
	xorl	%eax, %eax
	movl	%ebx, %edx
	movq	40(%r14), %rsi
	movq	16(%r12), %rdi
	incq	%rsi
	movq	%rsi, 40(%r14)
	call	bcopy
	mov	%ebx, %eax
	addq	40(%r14), %rax
	cmpq	%r15, %r13
	movq	%rax, 40(%r14)
	je	.L3528
	cmpb	$32, (%r15)
	je	.L3528
	movb	$32, (%rax)
	incq	40(%r14)
.L3528:
	movq	%r13, %r12
	movq	40(%r14), %rsi
	movq	%r15, %rdi
	subq	%r15, %r12
	xorl	%eax, %eax
	movq	%r12, %rdx
	call	bcopy
	addq	%r12, 40(%r14)
.L3525:
	movq	-72(%rbp), %rdi
	movl	-64(%rbp), %esi
	movl	$31, %edx
	movq	-80(%rbp), %r8
	movl	-84(%rbp), %r9d
	xorl	%ecx, %ecx
	xorl	%eax, %eax
	call	install
	jmp	.L3530
.L3550:
	movq	%r14, %rdi
	xorl	%eax, %eax
	call	grow_outbuf
	movq	40(%r14), %rdi
	jmp	.L3527
	.p2align 6,,7
.L3542:
	movq	%r14, %rdi
	xorl	%eax, %eax
	call	grow_outbuf
	movq	40(%r14), %rdi
	jmp	.L3500
.L3541:
	movb	$10, (%rcx)
	movb	$10, 1(%rcx)
	incq	%rdx
	addq	$2, %rcx
	jmp	.L3485
.L3540:
	cmpb	$10, 1(%rdx)
	jne	.L3488
	addq	$2, %rdx
	jmp	.L3485
.L3539:
	subq	%r13, %r12
	movq	%r13, %rsi
	leaq	19(%r12), %rdx
	andq	$-16, %rdx
	subq	%rdx, %rsp
	movq	%rsp, %rdi
	movq	%rsp, %r15
	call	strcpy
	movl	$.LC163, %esi
	movq	%rsp, %rdi
	call	strcat
	jmp	.L3482
.L3538:
	movl	$.LC226, %edi
	movq	%r13, %rsi
	jmp	.L3537
.LFE51:
.Lfe51:
	.size	make_definition,.Lfe51-make_definition
	.section	.rodata.str1.1
.LC229:
	.string	"*undef*"
.LC230:
	.string	"undefining `%s'"
	.section	.rodata.str1.32
	.align 32
.LC231:
	.string	"garbage after `#undef' directive"
	.text
	.align 2
	.p2align 4,,15
	.type	make_undef,@function
make_undef:
.LFB52:
	pushq	%r15
.LCFI247:
	pushq	%r14
.LCFI248:
	movl	$directive_table, %r14d
	pushq	%r13
.LCFI249:
	pushq	%r12
.LCFI250:
	movq	%rdi, %r12
	pushq	%rbp
.LCFI251:
	movq	%rsi, %rbp
	pushq	%rbx
.LCFI252:
	subq	$24, %rsp
.LCFI253:
	movl	indepth(%rip), %ecx
	incl	%ecx
	movslq	%ecx,%rax
	movl	%ecx, indepth(%rip)
	leaq	(%rax,%rax,4), %r13
	salq	$4, %r13
	movq	$.LC229, instack(%r13)
	movq	$.LC229, instack+8(%r13)
	movq	%rdi, instack+40(%r13)
	movq	%rdi, instack+32(%r13)
	call	strlen
	cmpl	$11, directive_table+24(%rip)
	movq	if_stack(%rip), %rdx
	movl	%eax, instack+28(%r13)
	movl	$1, instack+24(%r13)
	movq	$0, instack+48(%r13)
	movq	$0, instack+64(%r13)
	movb	$0, instack+72(%r13)
	movq	%rdx, instack+56(%r13)
	je	.L3586
	.p2align 4,,7
.L3556:
	addq	$32, %r14
	cmpl	$11, 24(%r14)
	jne	.L3556
.L3586:
	movq	%r12, %rdi
	movq	%r12, %r13
	movq	%r12, %r15
	call	strlen
	cmpq	$0, pcp_outfile(%rip)
	leaq	(%rax,%r12), %rbx
	movq	%rbx, 16(%rsp)
	je	.L3557
	testq	%rbp, %rbp
	je	.L3557
	movq	40(%rbp), %rdi
	movl	(%r14), %ebx
	movslq	28(%rbp),%r8
	movq	16(%rsp), %r9
	movq	%rdi, %rsi
	leal	1(%rbx), %r10d
	subq	32(%rbp), %rsi
	subq	%r12, %r9
	subq	%rsi, %r8
	leaq	(%r9,%r10), %rsi
	cmpq	%rsi, %r8
	jle	.L3591
.L3559:
	movb	$35, (%rdi)
	xorl	%eax, %eax
	movl	%ebx, %edx
	movq	40(%rbp), %rsi
	movq	16(%r14), %rdi
	incq	%rsi
	movq	%rsi, 40(%rbp)
	call	bcopy
	mov	%ebx, %eax
	addq	40(%rbp), %rax
	cmpq	%r13, 16(%rsp)
	movq	%rax, 40(%rbp)
	je	.L3560
	cmpb	$32, (%r13)
	je	.L3560
	movb	$32, (%rax)
	incq	40(%rbp)
.L3560:
	movq	16(%rsp), %rbx
	movq	40(%rbp), %rsi
	movq	%r12, %rdi
	xorl	%eax, %eax
	subq	%r12, %rbx
	movq	%rbx, %rdx
	call	bcopy
	addq	%rbx, 40(%rbp)
.L3557:
	movzbq	(%r12), %rdi
	cmpb	$0, is_hor_space(%rdi)
	je	.L3588
	.p2align 4,,7
.L3566:
	incq	%r13
	movzbq	(%r13), %r11
	cmpb	$0, is_hor_space(%r11)
	jne	.L3566
.L3588:
	movq	%r13, %rdi
	movl	$.LC142, %esi
	xorl	%eax, %eax
	call	check_macro_name
	movq	16(%rsp), %r12
	movl	%eax, 12(%rsp)
	subq	%r15, %r12
	movq	%r12, (%rsp)
	.p2align 4,,7
.L3567:
	movl	12(%rsp), %esi
	xorl	%eax, %eax
	movq	%r13, %rdi
	movl	$-1, %edx
	call	lookup
	testq	%rax, %rax
	movq	%rax, %rbx
	je	.L3592
	movl	debug_output(%rip), %edx
	testl	%edx, %edx
	je	.L3570
	testq	%rbp, %rbp
	je	.L3570
	movq	40(%rbp), %rdi
	movl	(%r14), %r12d
	movslq	28(%rbp),%r8
	movq	16(%rsp), %rcx
	movq	%rdi, %r9
	leal	1(%r12), %eax
	subq	32(%rbp), %r9
	subq	%r15, %rcx
	leaq	(%rcx,%rax), %rsi
	subq	%r9, %r8
	cmpq	%rsi, %r8
	jle	.L3593
.L3572:
	movb	$35, (%rdi)
	xorl	%eax, %eax
	movl	%r12d, %edx
	movq	40(%rbp), %rsi
	movq	16(%r14), %rdi
	incq	%rsi
	movq	%rsi, 40(%rbp)
	call	bcopy
	mov	%r12d, %eax
	addq	40(%rbp), %rax
	cmpq	%r15, 16(%rsp)
	movq	%rax, 40(%rbp)
	je	.L3573
	cmpb	$32, (%r15)
	je	.L3573
	movb	$32, (%rax)
	incq	40(%rbp)
.L3573:
	movq	40(%rbp), %rsi
	movq	(%rsp), %rdx
	movq	%r15, %rdi
	xorl	%eax, %eax
	call	bcopy
	movq	(%rsp), %r10
	addq	%r10, 40(%rbp)
.L3570:
	cmpl	$31, 24(%rbx)
	je	.L3575
	movq	32(%rbx), %rsi
	movl	$.LC230, %edi
	xorl	%eax, %eax
	call	warning
.L3575:
	movq	%rbx, %rdi
	xorl	%eax, %eax
	call	delete_macro
	jmp	.L3567
	.p2align 6,,7
.L3593:
	movq	%rbp, %rdi
	xorl	%eax, %eax
	call	grow_outbuf
	movq	40(%rbp), %rdi
	jmp	.L3572
.L3592:
	movl	pedantic(%rip), %ebp
	testl	%ebp, %ebp
	je	.L3577
	movslq	12(%rsp),%r14
	leaq	(%r14,%r13), %rdx
	movzbq	(%rdx), %r13
	cmpb	$0, is_hor_space(%r13)
	je	.L3590
	.p2align 4,,7
.L3582:
	incq	%rdx
	movzbq	(%rdx), %r15
	cmpb	$0, is_hor_space(%r15)
	jne	.L3582
.L3590:
	cmpq	16(%rsp), %rdx
	je	.L3577
	movl	$.LC231, %edi
	xorl	%eax, %eax
	call	pedwarn
.L3577:
	decl	indepth(%rip)
	addq	$24, %rsp
	popq	%rbx
	popq	%rbp
	popq	%r12
	popq	%r13
	popq	%r14
	popq	%r15
	ret
.L3591:
	movq	%rbp, %rdi
	xorl	%eax, %eax
	call	grow_outbuf
	movq	40(%rbp), %rdi
	jmp	.L3559
.LFE52:
.Lfe52:
	.size	make_undef,.Lfe52-make_undef
	.section	.rodata.str1.1
.LC232:
	.string	"malformed option `%s %s'"
.LC234:
	.string	"assertion"
	.section	.rodata.str1.32
	.align 32
.LC235:
	.string	"missing token-sequence in `#assert'"
	.align 32
.LC238:
	.string	"`defined' redefined as assertion"
	.align 32
.LC237:
	.string	"empty token-sequence in `#assert'"
	.align 32
.LC236:
	.string	"unterminated token sequence in `#assert' or `#unassert'"
	.align 32
.LC233:
	.string	"ANSI C does not allow `#assert'"
	.text
	.align 2
	.p2align 4,,15
	.type	make_assertion,@function
make_assertion:
.LFB53:
	pushq	%rbp
.LCFI254:
	movq	%rsp, %rbp
.LCFI255:
	pushq	%r15
.LCFI256:
	pushq	%r14
.LCFI257:
	pushq	%r13
.LCFI258:
	movq	%rdi, %r13
	movq	%rsi, %rdi
	pushq	%r12
.LCFI259:
	pushq	%rbx
.LCFI260:
	movq	%rsi, %rbx
	subq	$56, %rsp
.LCFI261:
	call	strlen
	movq	%rbx, %rsi
	addq	$16, %rax
	andq	$-16, %rax
	subq	%rax, %rsp
	movq	%rsp, %rdi
	movq	%rsp, %r12
	call	strcpy
	movzbl	(%rsp), %eax
	movq	%rsp, %rdx
	movq	%rsp, %rcx
	testb	%al, %al
	je	.L3685
	.p2align 4,,7
.L3600:
	cmpb	$92, %al
	je	.L3711
.L3598:
	movb	%al, (%rcx)
	incq	%rdx
	incq	%rcx
.L3595:
	movzbl	(%rdx), %eax
	testb	%al, %al
	jne	.L3600
.L3685:
	movb	$0, (%rcx)
	movzbq	(%r12), %rdx
	movq	%r12, %rcx
	cmpb	$0, is_idstart(%rdx)
	je	.L3710
	.p2align 4,,7
.L3602:
	incq	%rcx
	movzbl	(%rcx), %edx
	movzbl	%dl, %esi 
	cmpb	$0, is_idchar(%rsi)
	jne	.L3602
	cmpb	$32, %dl
	je	.L3608
	cmpb	$9, %dl
	je	.L3608
.L3687:
	testb	%dl, %dl
	je	.L3609
	cmpb	$40, %dl
	je	.L3609
.L3710:
	movl	$.LC232, %edi
	movq	%r13, %rsi
	movq	%rbx, %rdx
	xorl	%eax, %eax
	call	error
.L3594:
	leaq	-40(%rbp), %rsp
	popq	%rbx
	popq	%r12
	popq	%r13
	popq	%r14
	popq	%r15
	leave
	ret
.L3609:
	movl	indepth(%rip), %ecx
	movq	%r12, %rdi
	incl	%ecx
	movslq	%ecx,%rax
	movl	%ecx, indepth(%rip)
	leaq	(%rax,%rax,4), %r13
	salq	$4, %r13
	movq	$.LC227, instack(%r13)
	movq	$.LC227, instack+8(%r13)
	movq	%r12, instack+40(%r13)
	movq	%r12, instack+32(%r13)
	call	strlen
	movb	$0, instack+72(%r13)
	movq	if_stack(%rip), %rdx
	movl	%eax, instack+28(%r13)
	movl	$1, instack+24(%r13)
	movq	$0, instack+48(%r13)
	movq	$0, instack+64(%r13)
	movq	%rdx, instack+56(%r13)
	movq	%r12, %rdi
	call	strlen
	leaq	(%rax,%r12), %r15
	movl	pedantic(%rip), %eax
	testl	%eax, %eax
	je	.L3615
	movl	done_initializing(%rip), %eax
	testl	%eax, %eax
	je	.L3615
	movslq	indepth(%rip),%rdi
	leaq	(%rdi,%rdi,4), %rbx
	salq	$4, %rbx
	cmpb	$0, instack+72(%rbx)
	je	.L3712
.L3615:
	movq	%r12, -48(%rbp)
	movq	%r12, %rdi
	movq	%r12, %rcx
	movzbq	(%r12), %r8
	cmpb	$0, is_hor_space(%r8)
	je	.L3691
	leaq	1(%r12), %rdx
.L3619:
	movq	%rdx, %rdi
	movq	%rdx, -48(%rbp)
	leaq	2(%rcx), %rdx
	movzbq	-1(%rdx), %r9
	movq	%rdi, %rcx
	cmpb	$0, is_hor_space(%r9)
	jne	.L3619
.L3691:
	xorl	%eax, %eax
	movl	$.LC234, %esi
	movq	%rdi, -96(%rbp)
	call	check_macro_name
	movl	%eax, -60(%rbp)
	cltq
	movq	%rax, %rdi
	movq	%rax, -72(%rbp)
	addq	-48(%rbp), %rdi
	movq	%rdi, -48(%rbp)
	movq	%rdi, %rcx
	movzbq	(%rdi), %r10
	cmpb	$0, is_hor_space(%r10)
	je	.L3693
	leaq	1(%rdi), %rdx
.L3624:
	movq	%rdx, %rdi
	movq	%rdx, -48(%rbp)
	leaq	2(%rcx), %rdx
	movzbq	-1(%rdx), %r11
	movq	%rdi, %rcx
	cmpb	$0, is_hor_space(%r11)
	jne	.L3624
.L3693:
	cmpb	$40, (%rdi)
	movq	%rdi, %rdx
	je	.L3625
	movl	$.LC235, %edi
.L3709:
	xorl	%eax, %eax
	call	error
.L3626:
	decl	indepth(%rip)
	jmp	.L3594
.L3625:
	incq	%rdi
	movl	$0, -52(%rbp)
	movq	%rdi, -48(%rbp)
	movq	%rdi, %rcx
	movzbq	1(%rdx), %r12
	cmpb	$0, is_hor_space(%r12)
	je	.L3695
	addq	$2, %rdx
.L3631:
	movq	%rdx, %rdi
	movq	%rdx, -48(%rbp)
	leaq	2(%rcx), %rdx
	movzbq	-1(%rdx), %r14
	movq	%rdi, %rcx
	cmpb	$0, is_hor_space(%r14)
	jne	.L3631
.L3695:
	movq	$0, -88(%rbp)
	movq	%rdi, %r13
	movl	$1, -76(%rbp)
	movl	$0, -52(%rbp)
.L3655:
	movl	$0, -56(%rbp)
	movq	%r13, %r14
	movzbl	(%r13), %edx
	cmpb	$40, %dl
	je	.L3713
	cmpb	$41, %dl
	je	.L3714
	cmpb	$34, %dl
	je	.L3641
	cmpb	$39, %dl
	je	.L3641
	.p2align 4,,7
.L3643:
	movzbl	%dl, %esi 
	cmpb	$0, is_hor_space(%rsi)
	jne	.L3636
	cmpb	$40, %dl
	je	.L3636
	cmpb	$41, %dl
	je	.L3636
	cmpb	$34, %dl
	je	.L3636
	cmpb	$39, %dl
	je	.L3636
	cmpq	%r15, %r13
	je	.L3636
	incq	%r13
	movzbl	(%r13), %edx
	jmp	.L3643
.L3636:
	movl	$32, %edi
	xorl	%eax, %eax
	movq	%r13, %rbx
	call	xmalloc
	subq	%r14, %rbx
	movq	%rax, %r12
	leaq	1(%rbx), %rdi
	xorl	%eax, %eax
	call	xmalloc
	movq	%rbx, %rdx
	movq	%r14, %rdi
	movq	%rax, %rsi
	movq	%rax, 8(%r12)
	xorl	%eax, %eax
	call	bcopy
	movl	%r13d, %ecx
	addq	8(%r12), %rbx
	subl	%r14d, %ecx
	movb	$0, (%rbx)
	movl	%ecx, 16(%r12)
	movq	-88(%rbp), %rax
	movq	%r12, -88(%rbp)
	movq	%rax, (%r12)
	movzbq	(%r13), %rdx
	cmpb	$0, is_hor_space(%rdx)
	je	.L3698
	.p2align 4,,7
.L3652:
	incq	%r13
	movzbq	(%r13), %rbx
	cmpb	$0, is_hor_space(%rbx)
	jne	.L3652
.L3698:
	cmpq	%r15, %r13
	jae	.L3708
	movl	-76(%rbp), %edi
	testl	%edi, %edi
	jg	.L3655
.L3633:
	xorl	%edx, %edx
	movq	%r13, -48(%rbp)
	cmpq	$0, -88(%rbp)
	je	.L3700
	movq	-88(%rbp), %rdx
	xorl	%ecx, %ecx
.L3660:
	movq	(%rdx), %rax
	movq	%rcx, (%rdx)
	testq	%rax, %rax
	je	.L3700
	movq	%rdx, %rcx
	movq	%rax, %rdx
	jmp	.L3660
.L3700:
	movq	%rdx, %r14
.L3654:
	movl	-52(%rbp), %r15d
	testl	%r15d, %r15d
	jne	.L3626
	testq	%r14, %r14
	je	.L3715
	movq	-48(%rbp), %rdx
	leaq	1(%rdx), %r8
	movq	%r8, -48(%rbp)
	movq	%r8, %rcx
	movzbq	1(%rdx), %r13
	cmpb	$0, is_hor_space(%r13)
	je	.L3702
	addq	$2, %rdx
.L3667:
	movq	%rdx, %r10
	movq	%rdx, -48(%rbp)
	leaq	2(%rcx), %rdx
	movzbq	-1(%rdx), %r9
	movq	%r10, %rcx
	cmpb	$0, is_hor_space(%r9)
	jne	.L3667
.L3702:
	movq	-96(%rbp), %rdi
	movl	-60(%rbp), %esi
	movl	$37, %edx
	xorl	%eax, %eax
	call	hashf
	movl	$16, %edi
	movl	%eax, %r12d
	xorl	%eax, %eax
	movslq	%r12d,%rbx
	call	xmalloc
	movq	assertion_hashtab(,%rbx,8), %r12
	movq	%rax, %r13
	testq	%r12, %r12
	je	.L3704
.L3673:
	movl	-60(%rbp), %eax
	cmpl	%eax, 24(%r12)
	je	.L3716
.L3671:
	movq	(%r12), %r12
	testq	%r12, %r12
	jne	.L3673
.L3704:
	xorl	%r12d, %r12d
.L3672:
	testq	%r12, %r12
	jne	.L3674
	cmpl	$7, -60(%rbp)
	je	.L3717
.L3675:
	movl	-60(%rbp), %edi
	xorl	%eax, %eax
	addl	$49, %edi
	call	xmalloc
	leaq	0(,%rbx,8), %r11
	movq	assertion_hashtab(%r11), %rdx
	leaq	assertion_hashtab(%r11), %rcx
	movq	%rax, %rsi
	movq	%rcx, 16(%rax)
	movq	%rdx, (%rax)
	movq	%rax, assertion_hashtab(%r11)
	movq	$0, 8(%rax)
	movq	(%rax), %rax
	testq	%rax, %rax
	je	.L3677
	movq	%rsi, 8(%rax)
.L3677:
	movl	-60(%rbp), %edx
	leaq	48(%rsi), %rbx
	movq	$0, 40(%rsi)
	movq	%rbx, 32(%rsi)
	movq	%rbx, %rcx
	testl	%edx, %edx
	movl	%edx, 24(%rsi)
	jle	.L3706
.L3682:
	movq	-96(%rbp), %rdi
	movzbl	(%rdi), %r15d
	incq	%rdi
	movb	%r15b, (%rcx)
	incq	%rcx
	movq	%rdi, -96(%rbp)
	decl	%edx
	jne	.L3682
.L3706:
	movq	32(%rsi), %r8
	movq	%rsi, %r12
	addq	%r8, -72(%rbp)
	movq	-72(%rbp), %rax
	movb	$0, (%rax)
.L3674:
	movq	%r14, 8(%r13)
	movq	40(%r12), %r14
	movq	%r14, (%r13)
	movq	%r13, 40(%r12)
	jmp	.L3626
.L3717:
	movq	-96(%rbp), %rsi
	movl	$7, %ecx
	movl	$.LC150, %edi
	cld
	cmpq	$7, %rcx
	repz
	cmpsb
	jne	.L3675
	movl	$.LC238, %edi
	xorl	%eax, %eax
	call	error
	jmp	.L3675
	.p2align 6,,7
.L3716:
	movq	32(%r12), %rdi
	movq	-96(%rbp), %rsi
	movq	-72(%rbp), %rdx
	call	strncmp
	testl	%eax, %eax
	jne	.L3671
	jmp	.L3672
.L3715:
	movl	$.LC237, %edi
	jmp	.L3709
.L3708:
	movl	$.LC236, %edi
	xorl	%eax, %eax
	xorl	%r14d, %r14d
	call	error
	movl	$-1, -52(%rbp)
	jmp	.L3654
.L3641:
	movq	%r13, %rdi
	movq	%r15, %rsi
	xorl	%edx, %edx
	xorl	%ecx, %ecx
	xorl	%r8d, %r8d
	leaq	-56(%rbp), %r9
	xorl	%eax, %eax
	call	skip_quoted_string
	movq	%rax, %r13
	jmp	.L3636
.L3714:
	decl	-76(%rbp)
	je	.L3633
	incq	%r13
	jmp	.L3636
.L3713:
	incl	-76(%rbp)
	incq	%r13
	jmp	.L3636
.L3712:
	movl	$.LC233, %edi
	xorl	%eax, %eax
	call	pedwarn
	jmp	.L3615
	.p2align 6,,7
.L3608:
	incq	%rcx
	movzbl	(%rcx), %edx
	cmpb	$32, %dl
	je	.L3608
	cmpb	$9, %dl
	je	.L3608
	jmp	.L3687
.L3711:
	cmpb	$10, 1(%rdx)
	jne	.L3598
	addq	$2, %rdx
	jmp	.L3595
.LFE53:
.Lfe53:
	.size	make_assertion,.Lfe53-make_assertion
	.align 2
	.p2align 4,,15
	.type	append_include_chain,@function
append_include_chain:
.LFB54:
	pushq	%rbp
.LCFI262:
	movq	%rsi, %rbp
	pushq	%rbx
.LCFI263:
	subq	$8, %rsp
.LCFI264:
	testq	%rdi, %rdi
	je	.L3718
	testq	%rsi, %rsi
	je	.L3718
	cmpq	$0, include(%rip)
	jne	.L3721
	movq	%rdi, include(%rip)
.L3722:
	cmpq	$0, first_bracket_include(%rip)
	jne	.L3723
	movq	%rdi, first_bracket_include(%rip)
.L3723:
	movq	%rdi, %rbx
	.p2align 4,,7
.L3724:
	movq	8(%rbx), %rdi
	call	strlen
	cmpl	%eax, max_include_len(%rip)
	jge	.L3727
	movl	%eax, max_include_len(%rip)
.L3727:
	cmpq	%rbp, %rbx
	je	.L3725
	movq	(%rbx), %rbx
	jmp	.L3724
.L3725:
	movq	$0, (%rbp)
	movq	%rbp, last_include(%rip)
.L3718:
	addq	$8, %rsp
	popq	%rbx
	popq	%rbp
	ret
.L3721:
	movq	last_include(%rip), %rdx
	movq	%rdi, (%rdx)
	jmp	.L3722
.LFE54:
.Lfe54:
	.size	append_include_chain,.Lfe54-append_include_chain
	.section	.rodata.str1.1
.LC239:
	.string	"\\\n  "
	.text
	.align 2
	.p2align 4,,15
	.type	deps_output,@function
deps_output:
.LFB55:
	subq	$24, %rsp
.LCFI265:
	testl	%esi, %esi
	movq	%rbx, 8(%rsp)
.LCFI266:
	movq	%rbp, 16(%rsp)
.LCFI267:
	movl	%esi, %ebx
	movq	%rdi, %rbp
	je	.L3733
.L3731:
	movl	deps_size(%rip), %edx
	leal	(%rbx,%rdx), %ecx
	leal	1(%rcx), %esi
	cmpl	deps_allocated_size(%rip), %esi
	ja	.L3734
.L3732:
	movslq	%edx,%rsi
	movq	%rbp, %rdi
	xorl	%eax, %eax
	addq	deps_buffer(%rip), %rsi
	movl	%ebx, %edx
	call	bcopy
	addl	%ebx, deps_column(%rip)
	movl	deps_size(%rip), %eax
	addl	%ebx, %eax
	movl	%eax, deps_size(%rip)
	cltq
	addq	deps_buffer(%rip), %rax
	movb	$0, (%rax)
	movq	16(%rsp), %rbp
	movq	8(%rsp), %rbx
	addq	$24, %rsp
	ret
	.p2align 6,,7
.L3734:
	movq	deps_buffer(%rip), %rdi
	leal	100(%rcx,%rcx), %esi
	xorl	%eax, %eax
	movl	%esi, deps_allocated_size(%rip)
	call	xrealloc
	movl	deps_size(%rip), %edx
	movq	%rax, deps_buffer(%rip)
	jmp	.L3732
	.p2align 6,,7
.L3733:
	call	strlen
	testl	%eax, %eax
	movl	%eax, %ebx
	jne	.L3731
	movl	deps_column(%rip), %eax
	testl	%eax, %eax
	je	.L3731
	leal	(%rax,%rbx), %edx
	cmpl	$75, %edx
	jbe	.L3731
	movl	$.LC239, %edi
	xorl	%esi, %esi
	xorl	%eax, %eax
	call	deps_output
	movl	$0, deps_column(%rip)
	jmp	.L3731
.LFE55:
.Lfe55:
	.size	deps_output,.Lfe55-deps_output
	.section	.rodata.str1.1
.LC240:
	.string	"%s: "
	.text
	.align 2
	.p2align 4,,15
	.type	fatal,@function
fatal:
.LFB56:
	subq	$24, %rsp
.LCFI268:
	xorl	%eax, %eax
	movq	progname(%rip), %rdx
	movq	%r12, 8(%rsp)
.LCFI269:
	movq	%rbx, (%rsp)
.LCFI270:
	movq	%r13, 16(%rsp)
.LCFI271:
	movq	$_iob+112, %r12
	movq	%rdi, %rbx
	movq	%rsi, %r13
	movq	%r12, %rdi
	movl	$.LC240, %esi
	call	fprintf
	xorl	%eax, %eax
	movq	%r13, %rdx
	movq	%r12, %rdi
	movq	%rbx, %rsi
	call	fprintf
	xorl	%eax, %eax
	movl	$.LC66, %esi
	movq	%r12, %rdi
	call	fprintf
	xorl	%eax, %eax
	movl	$33, %edi
	call	exit
.LFE56:
.Lfe56:
	.size	fatal,.Lfe56-fatal
	.align 2
	.p2align 4,,15
	.type	perror_with_name,@function
perror_with_name:
.LFB57:
	subq	$24, %rsp
.LCFI272:
	xorl	%eax, %eax
	movl	$.LC240, %esi
	movq	progname(%rip), %rdx
	movq	%rbx, 8(%rsp)
.LCFI273:
	movq	%rbp, 16(%rsp)
.LCFI274:
	movq	$_iob+112, %rbx
	movq	%rdi, %rbp
	movq	%rbx, %rdi
	call	fprintf
	movl	errno(%rip), %eax
	cmpl	sys_nerr(%rip), %eax
	jge	.L3737
	cltq
	movq	%rbx, %rdi
	movl	$.LC192, %esi
	movq	sys_errlist(,%rax,8), %rcx
	movq	%rbp, %rdx
	xorl	%eax, %eax
	call	fprintf
.L3738:
	incl	errors(%rip)
	movq	8(%rsp), %rbx
	movq	16(%rsp), %rbp
	addq	$24, %rsp
	ret
	.p2align 6,,7
.L3737:
	movq	%rbx, %rdi
	movl	$.LC193, %esi
	movq	%rbp, %rdx
	xorl	%eax, %eax
	call	fprintf
	jmp	.L3738
.LFE57:
.Lfe57:
	.size	perror_with_name,.Lfe57-perror_with_name
	.align 2
	.p2align 4,,15
	.type	pfatal_with_name,@function
pfatal_with_name:
.LFB58:
	xorl	%eax, %eax
	subq	$8, %rsp
.LCFI275:
	call	perror_with_name
	movl	$33, %edi
	xorl	%eax, %eax
	call	exit
.LFE58:
.Lfe58:
	.size	pfatal_with_name,.Lfe58-pfatal_with_name
	.section	.rodata.str1.1
.LC241:
	.string	"Memory exhausted."
	.text
	.align 2
	.p2align 4,,15
	.type	memory_full,@function
memory_full:
.LFB59:
	movl	$.LC241, %edi
	xorl	%eax, %eax
	jmp	fatal
.LFE59:
.Lfe59:
	.size	memory_full,.Lfe59-memory_full
	.align 2
	.p2align 4,,15
.globl xmalloc
	.type	xmalloc,@function
xmalloc:
.LFB60:
	pushq	%rbx
.LCFI276:
	xorl	%eax, %eax
	call	malloc
	movslq	%eax,%rbx
	testq	%rbx, %rbx
	je	.L3743
.L3741:
	movq	%rbx, %rax
	popq	%rbx
	ret
	.p2align 6,,7
.L3743:
	xorl	%eax, %eax
	call	memory_full
	jmp	.L3741
.LFE60:
.Lfe60:
	.size	xmalloc,.Lfe60-xmalloc
	.align 2
	.p2align 4,,15
	.type	xrealloc,@function
xrealloc:
.LFB61:
	pushq	%rbx
.LCFI277:
	xorl	%eax, %eax
	call	realloc
	movslq	%eax,%rbx
	testq	%rbx, %rbx
	je	.L3746
.L3744:
	movq	%rbx, %rax
	popq	%rbx
	ret
	.p2align 6,,7
.L3746:
	xorl	%eax, %eax
	call	memory_full
	jmp	.L3744
.LFE61:
.Lfe61:
	.size	xrealloc,.Lfe61-xrealloc
	.align 2
	.p2align 4,,15
	.type	xcalloc,@function
xcalloc:
.LFB62:
	pushq	%rbp
.LCFI278:
	xorl	%eax, %eax
	pushq	%rbx
.LCFI279:
	movl	%edi, %ebx
	imull	%esi, %ebx
	subq	$8, %rsp
.LCFI280:
	movl	%ebx, %edi
	call	malloc
	movslq	%eax,%rbp
	testq	%rbp, %rbp
	je	.L3748
	cmpl	$100, %ebx
	ja	.L3763
	mov	%ebx, %edx
	movq	%rbp, %rcx
	leaq	-4(%rdx,%rbp), %rax
	leal	-4(%rbx), %edx
	cmpq	%rax, %rbp
	jae	.L3761
	.p2align 4,,7
.L3754:
	movq	$0, (%rcx)
	addq	$8, %rcx
	cmpq	%rax, %rcx
	jb	.L3754
.L3761:
	testl	%edx, %edx
	movl	$0, %eax
	cmovs	%eax, %edx
	cmpl	%ebx, %edx
	jae	.L3747
	.p2align 4,,7
.L3759:
	movslq	%edx,%rcx
	incl	%edx
	cmpl	%ebx, %edx
	movb	$0, (%rcx,%rbp)
	jb	.L3759
.L3747:
	addq	$8, %rsp
	movq	%rbp, %rax
	popq	%rbx
	popq	%rbp
	ret
.L3763:
	mov	%ebx, %edx
	movq	%rbp, %rdi
	xorl	%esi, %esi
	xorl	%eax, %eax
	call	memset
	jmp	.L3747
	.p2align 6,,7
.L3748:
	xorl	%eax, %eax
	call	memory_full
	jmp	.L3747
.LFE62:
.Lfe62:
	.size	xcalloc,.Lfe62-xcalloc
	.align 2
	.p2align 4,,15
	.type	savestring,@function
savestring:
.LFB63:
	subq	$24, %rsp
.LCFI281:
	movq	%rbx, 8(%rsp)
.LCFI282:
	movq	%r12, 16(%rsp)
.LCFI283:
	movq	%rdi, %r12
	call	strlen
	leal	1(%rax), %edi
	xorl	%eax, %eax
	call	xmalloc
	movq	%r12, %rsi
	movq	%rax, %rbx
	movq	%rax, %rdi
	call	strcpy
	movq	16(%rsp), %r12
	movq	%rbx, %rax
	movq	8(%rsp), %rbx
	addq	$24, %rsp
	ret
.LFE63:
.Lfe63:
	.size	savestring,.Lfe63-savestring
	.align 2
	.p2align 4,,15
	.type	file_size_and_mode,@function
file_size_and_mode:
.LFB64:
	subq	$104, %rsp
.LCFI284:
	xorl	%eax, %eax
	movq	%rbx, 88(%rsp)
.LCFI285:
	movq	%rbp, 96(%rsp)
.LCFI286:
	movq	%rsi, %rbx
	movq	%rsp, %rsi
	movq	%rdx, %rbp
	call	fstat
	movl	$-1, %edx
	testl	%eax, %eax
	js	.L3765
	testq	%rbx, %rbx
	je	.L3767
	movl	8(%rsp), %eax
	movl	%eax, (%rbx)
.L3767:
	testq	%rbp, %rbp
	je	.L3768
	movq	32(%rsp), %rdx
	movq	%rdx, (%rbp)
.L3768:
	xorl	%edx, %edx
.L3765:
	movq	88(%rsp), %rbx
	movq	96(%rsp), %rbp
	movl	%edx, %eax
	addq	$104, %rsp
	ret
.LFE64:
.Lfe64:
	.size	file_size_and_mode,.Lfe64-file_size_and_mode
	.section	.rodata.str1.32
	.align 32
.LC244:
	.string	"ANSI C does not allow testing assertions"
	.text
	.align 2
	.p2align 4,,15
.globl check_assertion
	.type	check_assertion,@function
check_assertion:
.LFB65:
	pushq	%r14
.LCFI287:
	xorl	%eax, %eax
	movq	%rcx, %r14
	pushq	%r13
.LCFI288:
	movl	%edx, %r13d
	movl	$37, %edx
	pushq	%r12
.LCFI289:
	movq	%rdi, %r12
	pushq	%rbp
.LCFI290:
	movl	%esi, %ebp
	pushq	%rbx
.LCFI291:
	call	hashf
	movl	%eax, %ebx
	movl	pedantic(%rip), %eax
	testl	%eax, %eax
	je	.L4135
	movslq	indepth(%rip),%rcx
	leaq	(%rcx,%rcx,4), %rdx
	salq	$4, %rdx
	cmpb	$0, instack+72(%rdx)
	je	.L4164
.L4135:
	movslq	%ebx,%rdx
	movq	assertion_hashtab(,%rdx,8), %rbx
	testq	%rbx, %rbx
	je	.L4158
	.p2align 4,,7
.L4141:
	cmpl	%ebp, 24(%rbx)
	je	.L4165
.L4139:
	movq	(%rbx), %rbx
	testq	%rbx, %rbx
	jne	.L4141
.L4158:
	xorl	%ebx, %ebx
.L4140:
	xorl	%edx, %edx
	testq	%rbx, %rbx
	je	.L4134
	testl	%r13d, %r13d
	movl	$1, %edx
	je	.L4134
	movq	40(%rbx), %r12
	testq	%r12, %r12
	je	.L4160
	.p2align 4,,7
.L4156:
	movq	8(%r12), %rbp
	movq	%r14, %rbx
	testq	%rbp, %rbp
	je	.L4149
	testq	%r14, %r14
	je	.L4149
.L4155:
	movl	16(%rbp), %eax
	cmpl	16(%rbx), %eax
	jne	.L4162
	movq	8(%rbp), %rdi
	movq	8(%rbx), %rsi
	movslq	%eax,%rdx
	call	strncmp
	testl	%eax, %eax
	jne	.L4162
	movq	(%rbp), %rbp
	movq	(%rbx), %rbx
	testq	%rbp, %rbp
	je	.L4149
	testq	%rbx, %rbx
	jne	.L4155
.L4149:
	xorl	%eax, %eax
	cmpq	%rbx, %rbp
	sete	%al
.L4153:
	testl	%eax, %eax
	movl	$1, %edx
	jne	.L4134
	movq	(%r12), %r12
	testq	%r12, %r12
	jne	.L4156
.L4160:
	xorl	%edx, %edx
.L4134:
	popq	%rbx
	popq	%rbp
	popq	%r12
	popq	%r13
	popq	%r14
	movl	%edx, %eax
	ret
.L4162:
	xorl	%eax, %eax
	jmp	.L4153
	.p2align 6,,7
.L4165:
	movq	32(%rbx), %rdi
	movq	%r12, %rsi
	movslq	%ebp,%rdx
	call	strncmp
	testl	%eax, %eax
	jne	.L4139
	jmp	.L4140
.L4164:
	movl	$.LC244, %edi
	xorl	%eax, %eax
	call	pedwarn
	jmp	.L4135
.LFE65:
.Lfe65:
	.size	check_assertion,.Lfe65-check_assertion
	.local	fname_table.3
	.comm	fname_table.3,296,32
	.section	.rodata.str1.1
.LC268:
	.string	"Internal gcc abort."
	.text
	.align 2
	.p2align 4,,15
.globl fancy_abort
	.type	fancy_abort,@function
fancy_abort:
.LFB66:
	movl	$.LC268, %edi
	xorl	%eax, %eax
	jmp	fatal
.LFE66:
.Lfe66:
	.size	fancy_abort,.Lfe66-fancy_abort
	.align 2
	.p2align 4,,15
	.type	do_define,@function
do_define:
.LFB67:
	pushq	%rbp
.LCFI292:
	movq	%rsp, %rbp
.LCFI293:
	pushq	%r15
.LCFI294:
	pushq	%r14
.LCFI295:
	movq	%rsi, %r14
	pushq	%r13
.LCFI296:
	movq	%rdi, %r13
	pushq	%r12
.LCFI297:
	movq	%rdx, %r12
	pushq	%rbx
.LCFI298:
	subq	$88, %rsp
.LCFI299:
	cmpq	$0, pcp_outfile(%rip)
	movq	%rcx, -88(%rbp)
	je	.L3936
	testq	%rdx, %rdx
	je	.L3936
	movq	40(%rdx), %rdi
	movl	(%rcx), %ebx
	movq	%rsi, %rcx
	movslq	28(%rdx),%r8
	subq	%r13, %rcx
	movq	%rdi, %rdx
	leal	1(%rbx), %eax
	subq	32(%r12), %rdx
	leaq	(%rcx,%rax), %rsi
	subq	%rdx, %r8
	cmpq	%rsi, %r8
	jle	.L4527
.L3938:
	movb	$35, (%rdi)
	xorl	%eax, %eax
	movl	%ebx, %edx
	movq	-88(%rbp), %r8
	movq	40(%r12), %rsi
	movq	16(%r8), %rdi
	incq	%rsi
	movq	%rsi, 40(%r12)
	call	bcopy
	mov	%ebx, %eax
	addq	40(%r12), %rax
	cmpq	%r13, %r14
	movq	%rax, 40(%r12)
	je	.L3939
	cmpb	$32, (%r13)
	je	.L3939
	movb	$32, (%rax)
	incq	40(%r12)
.L3939:
	movq	%r14, %r15
	movq	40(%r12), %rsi
	movq	%r13, %rdi
	subq	%r13, %r15
	xorl	%eax, %eax
	movq	%r15, %rdx
	call	bcopy
	addq	%r15, 40(%r12)
.L3936:
	xorl	%eax, %eax
	leaq	-80(%rbp), %rdi
	movq	%r13, %rsi
	movq	%r14, %rdx
	movq	%r12, %rcx
	call	create_definition
	cmpq	$0, -80(%rbp)
	jne	.L4528
.L3942:
	movl	$1, %eax
.L3935:
	leaq	-40(%rbp), %rsp
	popq	%rbx
	popq	%r12
	popq	%r13
	popq	%r14
	popq	%r15
	leave
	ret
	.p2align 6,,7
.L4528:
	movq	-72(%rbp), %rdi
	movl	-64(%rbp), %esi
	movl	$1403, %edx
	xorl	%eax, %eax
	call	hashf
	movl	-64(%rbp), %esi
	movq	-72(%rbp), %rdi
	movl	%eax, -92(%rbp)
	movl	%eax, %edx
	xorl	%eax, %eax
	call	lookup
	testq	%rax, %rax
	movq	%rax, %r15
	je	.L3943
	movl	24(%r15), %edx
	xorl	%eax, %eax
	cmpl	$34, %edx
	je	.L4529
	cmpl	$31, %edx
	je	.L4530
	cmpl	$30, %edx
	je	.L4531
.L3945:
	testl	%eax, %eax
	jne	.L3949
	movl	debug_output(%rip), %edi
	testl	%edi, %edi
	je	.L3950
	testq	%r12, %r12
	je	.L3950
	movq	-88(%rbp), %rdx
	movq	40(%r12), %rdi
	movq	%r14, %r10
	movslq	28(%r12),%r9
	subq	%r13, %r10
	movl	(%rdx), %ebx
	movq	%rdi, %rcx
	subq	32(%r12), %rcx
	leal	1(%rbx), %r11d
	subq	%rcx, %r9
	leaq	(%r10,%r11), %rsi
	cmpq	%rsi, %r9
	jle	.L4532
.L3952:
	movb	$35, (%rdi)
	xorl	%eax, %eax
	movl	%ebx, %edx
	movq	-88(%rbp), %r8
	movq	40(%r12), %rsi
	movq	16(%r8), %rdi
	incq	%rsi
	movq	%rsi, 40(%r12)
	call	bcopy
	mov	%ebx, %eax
	addq	40(%r12), %rax
	cmpq	%r13, %r14
	movq	%rax, 40(%r12)
	je	.L3953
	cmpb	$32, (%r13)
	je	.L3953
	movb	$32, (%rax)
	incq	40(%r12)
.L3953:
	movq	%r14, %rbx
	movq	40(%r12), %rsi
	movq	%r13, %rdi
	subq	%r13, %rbx
	xorl	%eax, %eax
	movq	%rbx, %rdx
	call	bcopy
	addq	%rbx, 40(%r12)
.L3950:
	movl	-64(%rbp), %edx
	movq	-72(%rbp), %rdi
	xorl	%eax, %eax
	movabsq	$7594869303480033319, %r13
	movslq	%edx,%r14
	addq	$37, %r14
	andq	$-16, %r14
	subq	%r14, %rsp
	leaq	1(%rsp), %rsi
	movb	$96, (%rsp)
	call	bcopy
	xorl	%eax, %eax
	movq	%rsp, %rdi
	movslq	-64(%rbp),%r12
	movq	%r13, 1(%rsp,%r12)
	movl	$6579566, 9(%rsp,%r12)
	call	pedwarn
	cmpl	$31, 24(%r15)
	je	.L4533
.L3949:
	movq	-80(%rbp), %r9
	movl	$31, 24(%r15)
	movq	%r9, 40(%r15)
.L3962:
	xorl	%eax, %eax
	jmp	.L3935
.L4533:
	movl	pedantic_errors(%rip), %eax
	movq	40(%r15), %rbx
	testl	%eax, %eax
	movq	32(%rbx), %rdx
	movl	24(%rbx), %ecx
	jne	.L3956
	movl	inhibit_warnings(%rip), %edi
	testl	%edi, %edi
	jne	.L3949
.L3956:
	testq	%rdx, %rdx
	je	.L4525
	movq	$_iob+112, %rbx
	movl	$.LC191, %esi
	xorl	%eax, %eax
	movq	%rbx, %rdi
	call	fprintf
	movl	pedantic_errors(%rip), %eax
.L3958:
	testl	%eax, %eax
	jne	.L3960
	movl	warnings_are_errors(%rip), %esi
	testl	%esi, %esi
	je	.L3959
.L3960:
	incl	errors(%rip)
.L3959:
	testl	%eax, %eax
	je	.L4534
.L3961:
	movq	-104(%rbp), %rdx
	movq	-112(%rbp), %rcx
	movq	%rbx, %rdi
	movq	-120(%rbp), %r8
	movl	$.LC228, %esi
	xorl	%eax, %eax
	call	fprintf
	xorl	%eax, %eax
	movl	$.LC66, %esi
	movq	%rbx, %rdi
	call	fprintf
	jmp	.L3949
.L4534:
	movq	%rbx, %rdi
	movl	$.LC194, %esi
	xorl	%eax, %eax
	call	fprintf
	jmp	.L3961
.L4525:
	movq	$_iob+112, %rbx
	jmp	.L3958
.L4532:
	movq	%r12, %rdi
	xorl	%eax, %eax
	call	grow_outbuf
	movq	40(%r12), %rdi
	jmp	.L3952
.L4531:
	movl	done_initializing(%rip), %ebx
	testl	%ebx, %ebx
.L4526:
	sete	%sil
	movzbl	%sil, %eax
	jmp	.L3945
.L4530:
	movq	-80(%rbp), %rdi
	movq	40(%r15), %rsi
	xorl	%eax, %eax
	call	compare_defs
	testl	%eax, %eax
	jmp	.L4526
.L4529:
	movl	$1, %eax
	jmp	.L3945
.L3943:
	movl	debug_output(%rip), %eax
	testl	%eax, %eax
	je	.L3963
	testq	%r12, %r12
	je	.L3963
	movq	-88(%rbp), %rcx
	movq	40(%r12), %rdi
	movq	%r14, %r10
	movslq	28(%r12),%r15
	subq	%r13, %r10
	movl	(%rcx), %ebx
	movq	%rdi, %r11
	subq	32(%r12), %r11
	leal	1(%rbx), %eax
	subq	%r11, %r15
	leaq	(%r10,%rax), %rsi
	cmpq	%rsi, %r15
	jle	.L4535
.L3965:
	movb	$35, (%rdi)
	xorl	%eax, %eax
	movq	-88(%rbp), %rdx
	movq	40(%r12), %rsi
	movq	16(%rdx), %rdi
	movl	%ebx, %edx
	incq	%rsi
	movq	%rsi, 40(%r12)
	call	bcopy
	mov	%ebx, %eax
	addq	40(%r12), %rax
	cmpq	%r13, %r14
	movq	%rax, 40(%r12)
	je	.L3966
	cmpb	$32, (%r13)
	je	.L3966
	movb	$32, (%rax)
	incq	40(%r12)
.L3966:
	movq	%r14, %r15
	movq	40(%r12), %rsi
	movq	%r13, %rdi
	subq	%r13, %r15
	xorl	%eax, %eax
	movq	%r15, %rdx
	call	bcopy
	addq	%r15, 40(%r12)
.L3963:
	movq	-72(%rbp), %rdi
	movl	-64(%rbp), %esi
	movl	$31, %edx
	movq	-80(%rbp), %r8
	movl	-92(%rbp), %r9d
	xorl	%ecx, %ecx
	xorl	%eax, %eax
	call	install
	jmp	.L3962
.L4535:
	movq	%r12, %rdi
	xorl	%eax, %eax
	call	grow_outbuf
	movq	40(%r12), %rdi
	jmp	.L3965
	.p2align 6,,7
.L4527:
	movq	%r12, %rdi
	xorl	%eax, %eax
	call	grow_outbuf
	movq	40(%r12), %rdi
	jmp	.L3938
.LFE67:
.Lfe67:
	.size	do_define,.Lfe67-do_define
	.section	.rodata.str1.32
	.align 32
.LC245:
	.string	"invalid format `#line' command"
	.text
	.align 2
	.p2align 4,,15
	.type	do_line,@function
do_line:
.LFB68:
	pushq	%rbp
.LCFI300:
	movq	%rsp, %rbp
.LCFI301:
	pushq	%r15
.LCFI302:
	pushq	%r14
.LCFI303:
	pushq	%r13
.LCFI304:
	pushq	%r12
.LCFI305:
	pushq	%rbx
.LCFI306:
	movl	%esi, %ebx
	subq	$280, %rsp
.LCFI307:
	subl	%edi, %ebx
	movl	assertions_flag(%rip), %r15d
	movl	indepth(%rip), %r13d
	movq	%rdx, -296(%rbp)
	movl	$0, -316(%rbp)
	movl	$0, assertions_flag(%rip)
	movslq	%r13d,%rcx
	leaq	(%rcx,%rcx,4), %rdx
	salq	$4, %rdx
	testl	%ebx, %ebx
	leaq	instack(%rdx), %r14
	js	.L4560
	movslq	%ebx,%rdx
	addq	$16, %rdx
	andq	$-16, %rdx
	subq	%rdx, %rsp
	cmpq	%rsi, %rdi
	movq	%rsp, %r12
	movq	%rsp, %rdx
	je	.L4537
	.p2align 4,,7
.L4230:
	movzbl	(%rdi), %r8d
	incq	%rdi
	movb	%r8b, (%rdx)
	incq	%rdx
	cmpq	%rsi, %rdi
	jne	.L4230
.L4537:
	movslq	%ebx,%rsi
	leal	100(%rbx,%rbx), %edi
	xorl	%eax, %eax
	movb	$0, (%rsi,%r12)
	movl	%edi, -260(%rbp)
	call	xmalloc
	movq	$0, -224(%rbp)
	movq	$0, -240(%rbp)
	movq	%rax, -256(%rbp)
	movq	%rax, -248(%rbp)
	movq	$0, -288(%rbp)
	movl	indepth(%rip), %eax
	cmpl	$198, %eax
	jle	.L4231
	cltq
	leaq	(%rax,%rax,4), %rbx
	xorl	%eax, %eax
	salq	$4, %rbx
	movl	instack+24(%rbx), %edi
	call	line_for_error
	movl	$.LC135, %esi
	movl	%eax, %edi
	xorl	%eax, %eax
	call	error_with_line
.L4557:
	movq	-288(%rbp), %rsi
	movq	-280(%rbp), %r8
	movq	-272(%rbp), %rdx
	movq	-264(%rbp), %rcx
	movq	-256(%rbp), %r15
	movq	-248(%rbp), %r13
	movq	-240(%rbp), %r12
	movq	-232(%rbp), %r11
	movq	%rsi, -208(%rbp)
	movq	%r8, -200(%rbp)
	movq	%rdx, -192(%rbp)
	movq	%rcx, -184(%rbp)
	movq	%r15, -176(%rbp)
	movq	%r13, -168(%rbp)
	movq	-224(%rbp), %r10
	movq	%r12, -160(%rbp)
	movq	-200(%rbp), %rbx
	movq	%r11, -152(%rbp)
	movq	-216(%rbp), %r9
	movq	-208(%rbp), %rdi
	movq	-176(%rbp), %r11
	movq	-192(%rbp), %rsi
	movq	%r10, -144(%rbp)
	movq	-184(%rbp), %r8
	movq	-168(%rbp), %rdx
	movq	%rbx, -120(%rbp)
	movq	-160(%rbp), %rcx
	movq	%r9, -136(%rbp)
	movq	%rdi, -128(%rbp)
	movq	%rsi, -112(%rbp)
	movq	%r11, -96(%rbp)
	movq	%r11, %rbx
	movq	%r8, -104(%rbp)
	movq	%rdx, -88(%rbp)
	movq	%rcx, -80(%rbp)
	movq	-136(%rbp), %r12
	movq	-144(%rbp), %r13
	movq	-152(%rbp), %r15
	movq	%r13, -64(%rbp)
	movq	%r12, -56(%rbp)
	movq	%r15, -72(%rbp)
	movzbl	(%r11), %ecx
	movzbl	%cl, %r10d 
	cmpb	$0, is_hor_space(%r10)
	je	.L4539
	.p2align 4,,7
.L4238:
	incq	%rbx
	movzbl	(%rbx), %ecx
	movzbl	%cl, %edi 
	cmpb	$0, is_hor_space(%rdi)
	jne	.L4238
.L4539:
	movq	__lc_ctype(%rip), %rdx
	movq	48(%rdx), %r8
	testq	%r8, %r8
	jne	.L4240
	movzbl	%cl, %r9d 
	salq	$2, %r9
	addq	104(%rdx), %r9
	testb	$16, (%r9)
.L4558:
	je	.L4559
	movq	%rbx, %rdi
	xorl	%eax, %eax
	call	atoi
	movq	__lc_ctype(%rip), %rdx
	decl	%eax
	movl	%eax, -300(%rbp)
	.p2align 4,,7
.L4242:
	movq	48(%rdx), %rcx
	testq	%rcx, %rcx
	jne	.L4245
	movzbl	(%rbx), %ecx
	movzbl	%cl, %r10d 
	salq	$2, %r10
	addq	104(%rdx), %r10
	testb	$16, (%r10)
	je	.L4243
.L4247:
	incq	%rbx
	jmp	.L4242
.L4243:
	movzbl	%cl, %r11d 
	cmpb	$0, is_hor_space(%r11)
	je	.L4541
	.p2align 4,,7
.L4252:
	incq	%rbx
	movzbl	(%rbx), %ecx
	movzbl	%cl, %r12d 
	cmpb	$0, is_hor_space(%r12)
	jne	.L4252
.L4541:
	cmpb	$34, %cl
	je	.L4562
	testb	%cl, %cl
	jne	.L4559
.L4291:
	movl	-300(%rbp), %eax
	movq	-296(%rbp), %rsi
	xorl	%edx, %edx
	movl	-316(%rbp), %ecx
	movq	%r14, %rdi
	movl	%eax, 24(%r14)
	xorl	%eax, %eax
	call	output_line_command
	movq	-296(%rbp), %r8
	movslq	28(%r14),%rsi
	movq	40(%r14), %rax
	subq	32(%r14), %rax
	movslq	28(%r8),%r13
	movq	40(%r8), %r15
	subq	32(%r8), %r15
	subq	%rax, %rsi
	subq	%r15, %r13
	cmpq	%rsi, %r13
	jle	.L4563
.L4225:
	leaq	-40(%rbp), %rsp
	xorl	%eax, %eax
	popq	%rbx
	popq	%r12
	popq	%r13
	popq	%r14
	popq	%r15
	leave
	ret
.L4563:
	movq	%r8, %rdi
	xorl	%eax, %eax
	call	grow_outbuf
	jmp	.L4225
.L4559:
	movl	$.LC245, %edi
	xorl	%eax, %eax
	call	error
	jmp	.L4225
.L4562:
	movzbl	1(%rbx), %eax
	leaq	1(%rbx), %rcx
	movq	%rcx, %r15
	testb	%al, %al
	je	.L4552
	cmpb	$34, %al
	je	.L4553
.L4258:
	incq	%rcx
	movzbl	(%rcx), %eax
	testb	%al, %al
	je	.L4255
	cmpb	$34, %al
	jne	.L4258
.L4259:
	movzbq	1(%rcx), %rbx
	movl	%ecx, %r13d
	leaq	1(%rcx), %rsi
	subl	%r15d, %r13d
	cmpb	$0, is_hor_space(%rbx)
	je	.L4554
.L4264:
	incq	%rsi
	movzbl	(%rsi), %edx
	movzbl	%dl, %ecx 
	cmpb	$0, is_hor_space(%rcx)
	jne	.L4264
.L4544:
	testb	%dl, %dl
	je	.L4265
	cmpb	$49, %dl
	je	.L4564
	cmpb	$50, %dl
	je	.L4565
	cmpb	$51, %dl
	jne	.L4559
	movb	$1, 72(%r14)
.L4267:
	movzbq	1(%rsi), %rdx
	leaq	1(%rsi), %rcx
	cmpb	$0, is_hor_space(%rdx)
	je	.L4555
.L4276:
	incq	%rcx
	movzbl	(%rcx), %edx
	movzbl	%dl, %r8d 
	cmpb	$0, is_hor_space(%r8)
	jne	.L4276
.L4546:
	cmpb	$51, %dl
	je	.L4566
.L4277:
	testb	%dl, %dl
	jne	.L4559
.L4265:
	xorl	%eax, %eax
	movq	%r15, %rdi
	movl	%r13d, %esi
	movl	$37, %edx
	call	hashf
	cltq
	salq	$3, %rax
	movq	fname_table.3(%rax), %rbx
	leaq	fname_table.3(%rax), %r9
	movq	%r9, -312(%rbp)
	testq	%rbx, %rbx
	je	.L4556
	movslq	%r13d,%r12
.L4289:
	cmpl	%r13d, 28(%rbx)
	je	.L4567
.L4286:
	movq	(%rbx), %rbx
	testq	%rbx, %rbx
	jne	.L4289
.L4549:
	leaq	49(%r12), %rsi
	movl	$1, %edi
	xorl	%eax, %eax
	call	xcalloc
	movl	%r13d, %edx
	movq	%r15, %rdi
	movq	-312(%rbp), %r12
	leaq	48(%rax), %r11
	movl	%r13d, 28(%rax)
	movq	(%r12), %rbx
	movq	%rbx, (%rax)
	movq	%rax, (%r12)
	movq	%r11, 40(%rax)
	movq	%r11, 8(%r14)
	movq	40(%rax), %rsi
	xorl	%eax, %eax
	call	bcopy
	jmp	.L4291
.L4567:
	movq	40(%rbx), %rdi
	movq	%r15, %rsi
	movq	%r12, %rdx
	call	strncmp
	testl	%eax, %eax
	jne	.L4286
	movq	40(%rbx), %r10
	testq	%rbx, %rbx
	movq	%r10, 8(%r14)
	jne	.L4291
	jmp	.L4549
	.p2align 6,,7
.L4556:
	movslq	%r13d,%r12
	jmp	.L4549
.L4566:
	incq	%rcx
	movb	$1, 72(%r14)
	movzbl	(%rcx), %edx
	movzbl	%dl, %esi 
	cmpb	$0, is_hor_space(%rsi)
	je	.L4277
.L4282:
	incq	%rcx
	movzbl	(%rcx), %edx
	movzbl	%dl, %edi 
	cmpb	$0, is_hor_space(%rdi)
	jne	.L4282
	jmp	.L4277
.L4555:
	movzbl	(%rcx), %edx
	jmp	.L4546
.L4565:
	movl	$2, -316(%rbp)
	jmp	.L4267
.L4564:
	movl	$1, -316(%rbp)
	jmp	.L4267
.L4554:
	movzbl	(%rsi), %edx
	jmp	.L4544
.L4255:
	cmpb	$34, %al
	jne	.L4559
	jmp	.L4259
.L4553:
	movl	$34, %eax
	jmp	.L4255
.L4552:
	movzbl	(%rcx), %eax
	jmp	.L4255
	.p2align 6,,7
.L4245:
	movzbl	(%rbx), %edi
	xorl	%eax, %eax
	movl	$16, %esi
	call	*%rcx
	testl	%eax, %eax
	je	.L4568
	movq	__lc_ctype(%rip), %rdx
	jmp	.L4247
.L4568:
	movzbl	(%rbx), %ecx
	jmp	.L4243
.L4240:
	xorl	%eax, %eax
	movzbl	%cl, %edi
	movl	$16, %esi
	call	*%r8
	testl	%eax, %eax
	jmp	.L4558
.L4231:
	incl	%eax
	movq	if_stack(%rip), %r9
	xorl	%esi, %esi
	movl	%eax, indepth(%rip)
	movl	$1, -264(%rbp)
	cltq
	leaq	(%rax,%rax,4), %rdi
	xorl	%eax, %eax
	salq	$4, %rdi
	movq	$0, instack(%rdi)
	movq	$0, instack+8(%rdi)
	movb	$0, instack+72(%rdi)
	movq	$0, instack+48(%rdi)
	movq	$0, instack+64(%rdi)
	movl	%ebx, instack+28(%rdi)
	movq	%r12, instack+40(%rdi)
	movq	%r12, instack+32(%rdi)
	movq	%r9, instack+56(%rdi)
	movl	$1, instack+24(%rdi)
	leaq	-288(%rbp), %rdi
	call	rescan
	movl	indepth(%rip), %eax
	decl	%eax
	cmpl	%r13d, %eax
	movl	%eax, indepth(%rip)
	jne	.L4560
	movl	-248(%rbp), %eax
	movl	%r15d, assertions_flag(%rip)
	subl	-256(%rbp), %eax
	movl	%eax, -260(%rbp)
	jmp	.L4557
.L4560:
	xorl	%eax, %eax
	call	abort
.LFE68:
.Lfe68:
	.size	do_line,.Lfe68-do_line
	.align 2
	.p2align 4,,15
	.type	do_undef,@function
do_undef:
.LFB69:
	pushq	%r15
.LCFI308:
	movq	%rsi, %r15
	pushq	%r14
.LCFI309:
	movq	%rdi, %r14
	pushq	%r13
.LCFI310:
	movq	%rdi, %r13
	pushq	%r12
.LCFI311:
	pushq	%rbp
.LCFI312:
	movq	%rdx, %rbp
	pushq	%rbx
.LCFI313:
	subq	$24, %rsp
.LCFI314:
	cmpq	$0, pcp_outfile(%rip)
	movq	%rcx, 16(%rsp)
	je	.L4296
	testq	%rdx, %rdx
	je	.L4296
	movq	40(%rdx), %rdi
	movl	(%rcx), %ebx
	movq	%rsi, %rcx
	movslq	28(%rdx),%r8
	subq	%r13, %rcx
	movq	%rdi, %rdx
	leal	1(%rbx), %eax
	subq	32(%rbp), %rdx
	leaq	(%rcx,%rax), %rsi
	subq	%rdx, %r8
	cmpq	%rsi, %r8
	jle	.L4573
.L4298:
	movb	$35, (%rdi)
	xorl	%eax, %eax
	movl	%ebx, %edx
	movq	16(%rsp), %r8
	movq	40(%rbp), %rsi
	movq	16(%r8), %rdi
	incq	%rsi
	movq	%rsi, 40(%rbp)
	call	bcopy
	mov	%ebx, %eax
	addq	40(%rbp), %rax
	cmpq	%r13, %r15
	movq	%rax, 40(%rbp)
	je	.L4299
	cmpb	$32, (%r13)
	je	.L4299
	movb	$32, (%rax)
	incq	40(%rbp)
.L4299:
	movq	%r15, %r12
	movq	40(%rbp), %rsi
	movq	%r13, %rdi
	subq	%r13, %r12
	xorl	%eax, %eax
	movq	%r12, %rdx
	call	bcopy
	addq	%r12, 40(%rbp)
.L4296:
	movzbq	(%r13), %rbx
	cmpb	$0, is_hor_space(%rbx)
	je	.L4570
	.p2align 4,,7
.L4305:
	incq	%r13
	movzbq	(%r13), %rsi
	cmpb	$0, is_hor_space(%rsi)
	jne	.L4305
.L4570:
	movq	%r13, %rdi
	movl	$.LC142, %esi
	xorl	%eax, %eax
	call	check_macro_name
	movq	%r15, %rdi
	subq	%r14, %rdi
	movl	%eax, 12(%rsp)
	movq	%rdi, (%rsp)
	.p2align 4,,7
.L4306:
	movl	12(%rsp), %esi
	xorl	%eax, %eax
	movq	%r13, %rdi
	movl	$-1, %edx
	call	lookup
	testq	%rax, %rax
	movq	%rax, %rbx
	je	.L4574
	movl	debug_output(%rip), %r9d
	testl	%r9d, %r9d
	je	.L4309
	testq	%rbp, %rbp
	je	.L4309
	movq	16(%rsp), %r8
	movq	40(%rbp), %rdi
	movq	%r15, %r11
	movslq	28(%rbp),%r10
	subq	%r14, %r11
	movl	(%r8), %r12d
	movq	%rdi, %rdx
	subq	32(%rbp), %rdx
	leal	1(%r12), %ecx
	subq	%rdx, %r10
	leaq	(%r11,%rcx), %rsi
	cmpq	%rsi, %r10
	jle	.L4575
.L4311:
	movb	$35, (%rdi)
	xorl	%eax, %eax
	movl	%r12d, %edx
	movq	16(%rsp), %r9
	movq	40(%rbp), %rsi
	movq	16(%r9), %rdi
	incq	%rsi
	movq	%rsi, 40(%rbp)
	call	bcopy
	mov	%r12d, %eax
	addq	40(%rbp), %rax
	cmpq	%r14, %r15
	movq	%rax, 40(%rbp)
	je	.L4312
	cmpb	$32, (%r14)
	je	.L4312
	movb	$32, (%rax)
	incq	40(%rbp)
.L4312:
	movq	40(%rbp), %rsi
	movq	(%rsp), %rdx
	movq	%r14, %rdi
	xorl	%eax, %eax
	call	bcopy
	movq	(%rsp), %r12
	addq	%r12, 40(%rbp)
.L4309:
	cmpl	$31, 24(%rbx)
	je	.L4314
	movq	32(%rbx), %rsi
	movl	$.LC230, %edi
	xorl	%eax, %eax
	call	warning
.L4314:
	movq	%rbx, %rdi
	xorl	%eax, %eax
	call	delete_macro
	jmp	.L4306
	.p2align 6,,7
.L4575:
	movq	%rbp, %rdi
	xorl	%eax, %eax
	call	grow_outbuf
	movq	40(%rbp), %rdi
	jmp	.L4311
.L4574:
	movl	pedantic(%rip), %ebp
	testl	%ebp, %ebp
	je	.L4316
	movslq	12(%rsp),%r14
	leaq	(%r14,%r13), %rdx
	movzbq	(%rdx), %r13
	cmpb	$0, is_hor_space(%r13)
	je	.L4572
	.p2align 4,,7
.L4321:
	incq	%rdx
	movzbq	(%rdx), %rbx
	cmpb	$0, is_hor_space(%rbx)
	jne	.L4321
.L4572:
	cmpq	%r15, %rdx
	je	.L4316
	movl	$.LC231, %edi
	xorl	%eax, %eax
	call	pedwarn
.L4316:
	addq	$24, %rsp
	xorl	%eax, %eax
	popq	%rbx
	popq	%rbp
	popq	%r12
	popq	%r13
	popq	%r14
	popq	%r15
	ret
.L4573:
	movq	%rbp, %rdi
	xorl	%eax, %eax
	call	grow_outbuf
	movq	40(%rbp), %rdi
	jmp	.L4298
.LFE69:
.Lfe69:
	.size	do_undef,.Lfe69-do_undef
	.section	.rodata.str1.1
.LC246:
	.string	"#error %s"
	.text
	.align 2
	.p2align 4,,15
	.type	do_error,@function
do_error:
.LFB70:
	pushq	%r12
.LCFI315:
	xorl	%eax, %eax
	movl	%esi, %r12d
	pushq	%rbp
.LCFI316:
	subl	%edi, %r12d
	pushq	%rbx
.LCFI317:
	movq	%rdi, %rbx
	leal	1(%r12), %edi
	call	xmalloc
	movl	%r12d, %edx
	movq	%rbx, %rdi
	movq	%rax, %rbp
	movq	%rax, %rsi
	xorl	%eax, %eax
	call	bcopy
	movslq	%r12d,%rdx
	movb	$0, (%rdx,%rbp)
	movsbq	(%rbp),%rdx
	cmpb	$0, is_hor_space(%rdx)
	je	.L4577
	.p2align 4,,7
.L4328:
	incq	%rbp
	movsbq	(%rbp),%rcx
	cmpb	$0, is_hor_space(%rcx)
	jne	.L4328
.L4577:
	movl	$.LC246, %edi
	xorl	%eax, %eax
	movq	%rbp, %rsi
	call	error
	movl	$33, %edi
	xorl	%eax, %eax
	call	exit
.LFE70:
.Lfe70:
	.size	do_error,.Lfe70-do_error
	.section	.rodata.str1.1
.LC249:
	.string	"once"
.LC251:
	.string	"implementation"
	.section	.rodata.str1.32
	.align 32
.LC252:
	.string	"`#pragma implementation' for `%s' appears after file is included"
	.section	.rodata.str1.1
.LC250:
	.string	"`#pragma once' is obsolete"
	.text
	.align 2
	.p2align 4,,15
	.type	do_pragma,@function
do_pragma:
.LFB71:
	pushq	%r12
.LCFI318:
	pushq	%rbp
.LCFI319:
	movq	%rdi, %rbp
	pushq	%rbx
.LCFI320:
	movzbl	(%rdi), %eax
	cmpb	$32, %al
	je	.L4349
	cmpb	$9, %al
	je	.L4349
.L4579:
	movl	$.LC249, %edi
	movq	%rbp, %rsi
	movl	$4, %ecx
	cld
	repz
	cmpsb
	jne	.L4350
	movl	indepth(%rip), %edx
	movslq	%edx,%rbx
	leaq	(%rbx,%rbx,4), %rcx
	salq	$4, %rcx
	cmpb	$0, instack+72(%rcx)
	je	.L4585
.L4351:
	xorl	%r12d, %r12d
	testl	%edx, %edx
	js	.L4353
.L4357:
	movslq	%edx,%rcx
	leaq	(%rcx,%rcx,4), %rsi
	salq	$4, %rsi
	cmpq	$0, instack(%rsi)
	leaq	instack(%rsi), %rcx
	jne	.L4586
	decl	%edx
	jns	.L4357
.L4353:
	testq	%r12, %r12
	jne	.L4587
.L4350:
	movl	$.LC251, %edi
	movq	%rbp, %rsi
	movl	$14, %ecx
	cld
	repz
	cmpsb
	jne	.L4345
	movzbq	14(%rbp), %rdi
	leaq	14(%rbp), %rcx
	cmpb	$0, is_hor_space(%rdi)
	je	.L4584
.L4365:
	incq	%rcx
	movzbl	(%rcx), %edx
	movzbl	%dl, %ebp 
	cmpb	$0, is_hor_space(%rbp)
	jne	.L4365
.L4582:
	cmpb	$34, %dl
	je	.L4588
.L4345:
	popq	%rbx
	popq	%rbp
	popq	%r12
	xorl	%eax, %eax
	ret
.L4588:
	leaq	1(%rcx), %rbp
	movl	$34, %esi
	movq	%rbp, %rdi
	call	index
	testq	%rax, %rax
	je	.L4367
	movb	$0, (%rax)
.L4367:
	movq	all_include_files(%rip), %rbx
	testq	%rbx, %rbx
	je	.L4345
.L4375:
	movq	8(%rbx), %rdi
	movl	$47, %esi
	call	rindex
	testq	%rax, %rax
	leaq	1(%rax), %rdi
	jne	.L4373
	movq	8(%rbx), %rdi
.L4373:
	testq	%rdi, %rdi
	jne	.L4589
.L4370:
	movq	(%rbx), %rbx
	testq	%rbx, %rbx
	jne	.L4375
	jmp	.L4345
.L4589:
	movq	%rbp, %rsi
	call	strcmp
	testl	%eax, %eax
	jne	.L4370
	movl	$.LC252, %edi
	movq	%rbp, %rsi
	xorl	%eax, %eax
	call	warning
	jmp	.L4370
.L4584:
	movzbl	(%rcx), %edx
	jmp	.L4582
.L4587:
	movl	$24, %edi
	xorl	%eax, %eax
	call	xmalloc
	movq	(%r12), %rdi
	movq	dont_repeat_files(%rip), %rdx
	movq	%rax, %rbx
	movq	%rdx, (%rax)
	movq	%rax, dont_repeat_files(%rip)
	xorl	%eax, %eax
	call	savestring
	movq	$0, 16(%rbx)
	movq	%rax, 8(%rbx)
	jmp	.L4350
.L4586:
	movq	%rcx, %r12
	jmp	.L4353
.L4585:
	movl	$.LC250, %edi
	xorl	%eax, %eax
	call	warning
	movl	indepth(%rip), %edx
	jmp	.L4351
	.p2align 6,,7
.L4349:
	incq	%rbp
	movzbl	(%rbp), %eax
	cmpb	$32, %al
	je	.L4349
	cmpb	$9, %al
	je	.L4349
	jmp	.L4579
.LFE71:
.Lfe71:
	.size	do_pragma,.Lfe71-do_pragma
	.section	.rodata.str1.32
	.align 32
.LC248:
	.string	"ANSI C does not allow `#ident'"
	.text
	.align 2
	.p2align 4,,15
	.type	do_ident,@function
do_ident:
.LFB72:
	subq	$8, %rsp
.LCFI321:
	movl	pedantic(%rip), %eax
	testl	%eax, %eax
	je	.L4344
	movslq	indepth(%rip),%rcx
	leaq	(%rcx,%rcx,4), %rdx
	salq	$4, %rdx
	cmpb	$0, instack+72(%rdx)
	je	.L4590
.L4344:
	xorl	%eax, %eax
	addq	$8, %rsp
	ret
	.p2align 6,,7
.L4590:
	movl	$.LC248, %edi
	xorl	%eax, %eax
	call	pedwarn
	jmp	.L4344
.LFE72:
.Lfe72:
	.size	do_ident,.Lfe72-do_ident
	.align 2
	.p2align 4,,15
	.type	do_if,@function
do_if:
.LFB73:
	pushq	%rbp
.LCFI322:
	xorl	%r8d, %r8d
	xorl	%eax, %eax
	movq	%rsp, %rbp
.LCFI323:
	pushq	%r15
.LCFI324:
	pushq	%r14
.LCFI325:
	movl	%esi, %r14d
	movl	$-1, %esi
	pushq	%r13
.LCFI326:
	subl	%edi, %r14d
	movl	%esi, %r9d
	pushq	%r12
.LCFI327:
	movq	%rdi, %r12
	movl	$.LC150, %edi
	pushq	%rbx
.LCFI328:
	subq	$264, %rsp
.LCFI329:
	movslq	indepth(%rip),%rcx
	leaq	(%rcx,%rcx,4), %rdx
	xorl	%ecx, %ecx
	salq	$4, %rdx
	leaq	instack(%rdx), %r13
	movl	$33, %edx
	call	install
	movl	assertions_flag(%rip), %r15d
	movslq	%r14d,%rdx
	leaq	(%rdx,%r12), %rcx
	movq	%rax, -296(%rbp)
	movl	$1, pcp_inside_if(%rip)
	movl	%ecx, %ebx
	movq	%r12, %rdi
	movl	indepth(%rip), %r14d
	subl	%r12d, %ebx
	movl	$1, assertions_flag(%rip)
	testl	%ebx, %ebx
	js	.L4594
	movslq	%ebx,%rsi
	addq	$16, %rsi
	andq	$-16, %rsi
	subq	%rsi, %rsp
	cmpq	%rcx, %rdi
	movq	%rsp, %r12
	movq	%rsp, %rdx
	je	.L4592
	.p2align 4,,7
.L4383:
	movzbl	(%rdi), %r8d
	incq	%rdi
	movb	%r8b, (%rdx)
	incq	%rdx
	cmpq	%rcx, %rdi
	jne	.L4383
.L4592:
	movslq	%ebx,%rdi
	xorl	%eax, %eax
	movb	$0, (%rdi,%r12)
	leal	100(%rbx,%rbx), %edi
	movl	%edi, -260(%rbp)
	call	xmalloc
	movq	$0, -224(%rbp)
	movq	%rax, -256(%rbp)
	movq	%rax, -248(%rbp)
	movq	$0, -288(%rbp)
	movl	indepth(%rip), %eax
	movq	$0, -240(%rbp)
	cmpl	$198, %eax
	jle	.L4384
	cltq
	leaq	(%rax,%rax,4), %rbx
	xorl	%eax, %eax
	salq	$4, %rbx
	movl	instack+24(%rbx), %edi
	call	line_for_error
	movl	$.LC135, %esi
	movl	%eax, %edi
	xorl	%eax, %eax
	call	error_with_line
.L4593:
	movq	-288(%rbp), %r10
	movq	-280(%rbp), %r9
	xorl	%eax, %eax
	movq	-272(%rbp), %rbx
	movq	-264(%rbp), %rdi
	movq	-256(%rbp), %r8
	movq	-248(%rbp), %rsi
	movq	-240(%rbp), %rcx
	movq	%r10, -208(%rbp)
	movq	%r9, -200(%rbp)
	movq	-208(%rbp), %r11
	movq	%rbx, -192(%rbp)
	movq	%rdi, -184(%rbp)
	movq	-192(%rbp), %r10
	movq	%r8, -176(%rbp)
	movq	%rsi, -168(%rbp)
	movq	-184(%rbp), %r9
	movq	%rcx, -160(%rbp)
	movq	-232(%rbp), %rdx
	movq	-160(%rbp), %r8
	movq	-224(%rbp), %r12
	movq	%r11, -128(%rbp)
	movq	-216(%rbp), %r14
	movq	-200(%rbp), %r15
	movq	%r10, -112(%rbp)
	movq	-168(%rbp), %rdi
	movq	-176(%rbp), %rbx
	movq	%r9, -104(%rbp)
	movq	%rdx, -152(%rbp)
	movq	%r12, -144(%rbp)
	movq	%r14, -136(%rbp)
	movq	%r15, -120(%rbp)
	movq	%rdi, -88(%rbp)
	movq	%rbx, -96(%rbp)
	movq	%r8, -80(%rbp)
	movq	-136(%rbp), %rdx
	movq	-152(%rbp), %rsi
	movl	$0, pcp_inside_if(%rip)
	movq	-144(%rbp), %rcx
	movq	-296(%rbp), %rdi
	movq	%rdx, -56(%rbp)
	movq	%rsi, -72(%rbp)
	movq	%rcx, -64(%rbp)
	call	delete_macro
	movq	-96(%rbp), %rdi
	xorl	%eax, %eax
	call	parse_c_expression
	movq	-96(%rbp), %rdi
	movl	%eax, %r12d
	xorl	%eax, %eax
	call	free
	movl	$40, %esi
	movl	$1, %edi
	testl	%r12d, %r12d
	sete	%al
	movzbl	%al, %r15d
	xorl	%eax, %eax
	call	xcalloc
	testl	%r15d, %r15d
	movq	if_stack(%rip), %r11
	movq	8(%r13), %r14
	movq	%rax, %rdx
	movq	$0, 24(%rdx)
	movl	$7, 32(%rdx)
	movq	%r11, (%rdx)
	movq	%rdx, if_stack(%rip)
	movq	%r14, 8(%rax)
	movl	24(%r13), %eax
	movl	%eax, 16(%rdx)
	je	.L4388
	movq	%r13, %rdi
	xorl	%esi, %esi
	xorl	%eax, %eax
	call	skip_if_group
.L4389:
	leaq	-40(%rbp), %rsp
	xorl	%eax, %eax
	popq	%rbx
	popq	%r12
	popq	%r13
	popq	%r14
	popq	%r15
	leave
	ret
.L4388:
	incl	20(%rdx)
	movq	%r13, %rdi
	movl	$outbuf, %esi
	movl	$1, %edx
	xorl	%ecx, %ecx
	xorl	%eax, %eax
	call	output_line_command
	jmp	.L4389
.L4384:
	incl	%eax
	movq	if_stack(%rip), %r10
	xorl	%esi, %esi
	movl	%eax, indepth(%rip)
	leaq	-288(%rbp), %rdi
	movl	$1, -264(%rbp)
	cltq
	leaq	(%rax,%rax,4), %r9
	xorl	%eax, %eax
	salq	$4, %r9
	movq	$0, instack(%r9)
	movq	$0, instack+8(%r9)
	movb	$0, instack+72(%r9)
	movq	$0, instack+48(%r9)
	movq	$0, instack+64(%r9)
	movl	%ebx, instack+28(%r9)
	movq	%r12, instack+40(%r9)
	movq	%r12, instack+32(%r9)
	movq	%r10, instack+56(%r9)
	movl	$1, instack+24(%r9)
	call	rescan
	movl	indepth(%rip), %eax
	decl	%eax
	cmpl	%r14d, %eax
	movl	%eax, indepth(%rip)
	jne	.L4594
	movl	-248(%rbp), %eax
	movl	%r15d, assertions_flag(%rip)
	subl	-256(%rbp), %eax
	movl	%eax, -260(%rbp)
	jmp	.L4593
.L4594:
	xorl	%eax, %eax
	call	abort
.LFE73:
.Lfe73:
	.size	do_if,.Lfe73-do_if
	.section	.rodata.str1.32
	.align 32
.LC261:
	.string	"`#%s' argument starts with a digit"
	.align 32
.LC262:
	.string	"garbage at end of `#%s' argument"
	.section	.rodata.str1.1
.LC259:
	.string	"`#%s' with no argument"
	.section	.rodata.str1.32
	.align 32
.LC260:
	.string	"`#%s' argument starts with punctuation"
	.text
	.align 2
	.p2align 4,,15
	.type	do_xifdef,@function
do_xifdef:
.LFB74:
	pushq	%r15
.LCFI330:
	movq	%rcx, %r15
	pushq	%r14
.LCFI331:
	pushq	%r13
.LCFI332:
	pushq	%r12
.LCFI333:
	movq	%rsi, %r12
	pushq	%rbp
.LCFI334:
	movq	%rdi, %rbp
	pushq	%rbx
.LCFI335:
	subq	$24, %rsp
.LCFI336:
	movslq	indepth(%rip),%rdx
	movl	$0, 16(%rsp)
	movq	$0, 8(%rsp)
	leaq	(%rdx,%rdx,4), %rax
	salq	$4, %rax
	cmpq	$0, instack(%rax)
	leaq	instack(%rax), %r14
	je	.L4419
	cmpl	$6, 24(%rcx)
	je	.L4605
.L4427:
.L4419:
	movzbl	(%rbp), %edx
	movzbl	%dl, %esi 
	cmpb	$0, is_hor_space(%rsi)
	je	.L4598
	.p2align 4,,7
.L4433:
	incq	%rbp
	movzbl	(%rbp), %edx
	movzbl	%dl, %edi 
	cmpb	$0, is_hor_space(%rdi)
	jne	.L4433
.L4598:
	cmpq	%rbp, %r12
	je	.L4435
	movzbq	-1(%r12), %r8
	leaq	-1(%r12), %rsi
	cmpb	$0, is_hor_space(%r8)
	je	.L4435
	.p2align 4,,7
.L4438:
	cmpq	%rbp, %rsi
	movq	%rsi, %r12
	je	.L4435
	movzbq	-1(%r12), %r9
	leaq	-1(%rsi), %rsi
	cmpb	$0, is_hor_space(%r9)
	jne	.L4438
.L4435:
	movzbl	%dl, %r10d 
	movq	%rbp, %rbx
	cmpb	$0, is_idchar(%r10)
	je	.L4601
	.p2align 4,,7
.L4443:
	incq	%rbx
	movzbq	(%rbx), %r11
	cmpb	$0, is_idchar(%r11)
	jne	.L4443
.L4601:
	cmpq	%rbp, %rbx
	je	.L4606
	movl	pedantic(%rip), %eax
	testl	%eax, %eax
	je	.L4451
	cmpb	$47, %dl
	jbe	.L4451
	cmpb	$57, %dl
	movl	$.LC261, %edi
	jbe	.L4604
.L4451:
	cmpq	%r12, %rbx
	je	.L4452
	movl	traditional(%rip), %eax
	testl	%eax, %eax
	je	.L4607
.L4452:
	movq	%rbx, %rsi
	movq	%rbp, %rdi
	xorl	%eax, %eax
	subq	%rbp, %rsi
	movl	$-1, %edx
	call	lookup
	movq	pcp_outfile(%rip), %rdi
	movq	%rax, %r13
	testq	%rdi, %rdi
	je	.L4454
	testq	%rax, %rax
	je	.L4455
	movq	40(%rax), %r12
	movl	8(%r12), %eax
	testl	%eax, %eax
	jne	.L4608
.L4455:
	movq	pcp_outfile(%rip), %rdi
	xorl	%eax, %eax
	movl	$.LC181, %esi
	movq	%rbp, %r12
	call	fprintf
	movzbl	(%rbp), %edx
	movzbl	%dl, %ecx 
	cmpb	$0, is_idchar(%rcx)
	je	.L4603
	.p2align 4,,7
.L4460:
	movq	pcp_outfile(%rip), %rsi
	movzbl	%dl, %edi
	incq	%r12
	xorl	%eax, %eax
	call	fputc
	movzbl	(%r12), %edi
	movl	%edi, %edx
	movzbl	%dl, %esi 
	cmpb	$0, is_idchar(%rsi)
	jne	.L4460
.L4603:
	movq	pcp_outfile(%rip), %rsi
	movl	(%rsi), %eax
	decl	%eax
	testl	%eax, %eax
	movl	%eax, (%rsi)
	js	.L4609
	movq	8(%rsi), %r8
	movb	$10, (%r8)
	incq	8(%rsi)
.L4454:
	testq	%r13, %r13
	movl	16(%rsp), %eax
	sete	%r10b
	movzbl	%r10b, %r13d
	movl	%r13d, %r9d
	xorl	$1, %r9d
	cmpl	$6, 24(%r15)
	cmove	%r9d, %r13d
	testl	%eax, %eax
	je	.L4450
	testl	%r13d, %r13d
	je	.L4610
.L4450:
	xorl	%eax, %eax
	movl	$1, %edi
	movl	$40, %esi
	call	xcalloc
	testl	%r13d, %r13d
	movq	8(%rsp), %rbx
	movq	8(%r14), %rbp
	movq	%rax, %rdx
	movq	if_stack(%rip), %r11
	movl	$7, 32(%rdx)
	movq	%rbx, 24(%rdx)
	movq	%rbp, 8(%rax)
	movq	%r11, (%rdx)
	movl	24(%r14), %eax
	movq	%rdx, if_stack(%rip)
	movl	%eax, 16(%rdx)
	je	.L4465
	movq	%r14, %rdi
	xorl	%esi, %esi
	xorl	%eax, %eax
	call	skip_if_group
.L4466:
	addq	$24, %rsp
	xorl	%eax, %eax
	popq	%rbx
	popq	%rbp
	popq	%r12
	popq	%r13
	popq	%r14
	popq	%r15
	ret
.L4465:
	incl	20(%rdx)
	movq	%r14, %rdi
	movl	$outbuf, %esi
	movl	$1, %edx
	xorl	%ecx, %ecx
	xorl	%eax, %eax
	call	output_line_command
	jmp	.L4466
.L4610:
	subq	%rbp, %rbx
	xorl	%eax, %eax
	leaq	1(%rbx), %rdi
	call	xmalloc
	movq	%rbx, %rdx
	movq	%rbp, %rdi
	movq	%rax, 8(%rsp)
	movq	%rax, %rsi
	xorl	%eax, %eax
	call	bcopy
	movq	8(%rsp), %r15
	movb	$0, (%rbx,%r15)
	jmp	.L4450
.L4609:
	movl	$10, %edi
	xorl	%eax, %eax
	call	_flsbuf
	jmp	.L4454
.L4608:
	movq	32(%r13), %rdx
	movl	$.LC179, %esi
	xorl	%eax, %eax
	call	fprintf
	jmp	.L4454
.L4607:
	movl	$.LC262, %edi
.L4604:
	movq	16(%r15), %rsi
	xorl	%eax, %eax
	call	pedwarn
	jmp	.L4452
.L4606:
	cmpl	$5, 24(%r15)
	movl	traditional(%rip), %eax
	sete	%dl
	testl	%eax, %eax
	movzbl	%dl, %r13d
	jne	.L4450
	movq	16(%r15), %rsi
	cmpq	%r12, %rbp
	movl	$.LC259, %edi
	movl	$.LC260, %ebp
	cmovne	%rbp, %rdi
	xorl	%eax, %eax
	call	pedwarn
	jmp	.L4450
.L4605:
	movq	instack+32(%rax), %rdx
	movq	directive_start(%rip), %rsi
	cmpq	%rsi, %rdx
	je	.L4596
	.p2align 4,,7
.L4428:
	movzbl	(%rdx), %ecx
	incq	%rdx
	movsbq	%cl,%rbx
	cmpb	$0, is_space(%rbx)
	jne	.L4420
	cmpb	$47, %cl
	jne	.L4419
	movq	40(%r14), %rbx
	cmpq	%rbx, %rdx
	je	.L4419
	cmpb	$42, (%rdx)
	jne	.L4419
	leaq	1(%rdx), %rcx
	leaq	20(%rsp), %rsi
	movq	%r14, %rdi
	movl	$1, %edx
	xorl	%eax, %eax
	movq	%rcx, 40(%r14)
	call	skip_to_end_of_comment
	movq	directive_start(%rip), %rsi
	movq	%rbx, 40(%r14)
	movq	%rax, %rdx
.L4420:
	cmpq	%rsi, %rdx
	jne	.L4428
.L4596:
	movl	$1, 16(%rsp)
	jmp	.L4419
.LFE74:
.Lfe74:
	.size	do_xifdef,.Lfe74-do_xifdef
	.section	.rodata.str1.32
	.align 32
.LC263:
	.string	"text following `#else' violates ANSI standard"
	.section	.rodata.str1.1
.LC265:
	.string	"`#else' after `#else'"
.LC256:
	.string	" (matches line %d"
.LC258:
	.string	")\n"
.LC257:
	.string	", file %s"
	.section	.rodata.str1.32
	.align 32
.LC264:
	.string	"`#else' not within a conditional"
	.text
	.align 2
	.p2align 4,,15
	.type	do_else,@function
do_else:
.LFB75:
	pushq	%r12
.LCFI337:
	movl	pedantic(%rip), %eax
	movq	%rdx, %r12
	movl	indepth(%rip), %edx
	pushq	%rbp
.LCFI338:
	pushq	%rbx
.LCFI339:
	movslq	%edx,%rbx
	leaq	(%rbx,%rbx,4), %rcx
	salq	$4, %rcx
	testl	%eax, %eax
	leaq	instack(%rcx), %rbx
	je	.L4472
	movzbq	(%rdi), %rbp
	cmpb	$0, is_hor_space(%rbp)
	je	.L4612
	.p2align 4,,7
.L4477:
	incq	%rdi
	movzbq	(%rdi), %r8
	cmpb	$0, is_hor_space(%r8)
	jne	.L4477
.L4612:
	cmpq	%rsi, %rdi
	je	.L4472
	movl	$.LC263, %edi
	xorl	%eax, %eax
	call	pedwarn
	movl	indepth(%rip), %edx
.L4472:
	movslq	%edx,%rdi
	movq	if_stack(%rip), %rdx
	leaq	(%rdi,%rdi,4), %rsi
	salq	$4, %rsi
	cmpq	instack+56(%rsi), %rdx
	je	.L4613
	movl	32(%rdx), %eax
	movq	$0, 24(%rdx)
	cmpl	$7, %eax
	je	.L4481
	cmpl	$10, %eax
	je	.L4481
	xorl	%eax, %eax
	movl	$.LC265, %edi
	movq	$_iob+112, %rbp
	call	error
	movq	if_stack(%rip), %r9
	movq	%rbp, %rdi
	movl	$.LC256, %esi
	xorl	%eax, %eax
	movl	16(%r9), %edx
	call	fprintf
	movq	8(%rbx), %rsi
	movq	if_stack(%rip), %rdx
	movq	8(%rdx), %rdi
	call	strcmp
	testl	%eax, %eax
	jne	.L4614
.L4482:
	movq	%rbp, %rdi
	movl	$.LC258, %esi
	xorl	%eax, %eax
	call	fprintf
	movq	if_stack(%rip), %rdx
.L4481:
	movl	20(%rdx), %eax
	movl	$8, 32(%rdx)
	testl	%eax, %eax
	je	.L4483
	movq	%rbx, %rdi
	xorl	%esi, %esi
	xorl	%eax, %eax
	call	skip_if_group
.L4471:
	popq	%rbx
	popq	%rbp
	popq	%r12
	xorl	%eax, %eax
	ret
	.p2align 6,,7
.L4483:
	movl	$1, 20(%rdx)
	movq	%rbx, %rdi
	movq	%r12, %rsi
	movl	$1, %edx
	xorl	%ecx, %ecx
	xorl	%eax, %eax
	call	output_line_command
	jmp	.L4471
.L4614:
	movq	if_stack(%rip), %r10
	movq	%rbp, %rdi
	movl	$.LC257, %esi
	xorl	%eax, %eax
	movq	8(%r10), %rdx
	call	fprintf
	jmp	.L4482
.L4613:
	movl	$.LC264, %edi
	xorl	%eax, %eax
	call	error
	jmp	.L4471
.LFE75:
.Lfe75:
	.size	do_else,.Lfe75-do_else
	.section	.rodata.str1.1
.LC255:
	.string	"`#elif' after `#else'"
	.section	.rodata.str1.32
	.align 32
.LC254:
	.string	"`#elif' not within a conditional"
	.text
	.align 2
	.p2align 4,,15
	.type	do_elif,@function
do_elif:
.LFB76:
	pushq	%rbp
.LCFI340:
	movq	%rsp, %rbp
.LCFI341:
	pushq	%r15
.LCFI342:
	pushq	%r14
.LCFI343:
	pushq	%r13
.LCFI344:
	movq	%rsi, %r13
	pushq	%r12
.LCFI345:
	movq	%rdi, %r12
	pushq	%rbx
.LCFI346:
	subq	$264, %rsp
.LCFI347:
	movq	if_stack(%rip), %rax
	movq	%rdx, -296(%rbp)
	movslq	indepth(%rip),%rdx
	leaq	(%rdx,%rdx,4), %rbx
	salq	$4, %rbx
	cmpq	instack+56(%rbx), %rax
	leaq	instack(%rbx), %r14
	je	.L4620
	movl	32(%rax), %edx
	cmpl	$7, %edx
	je	.L4394
	cmpl	$10, %edx
	je	.L4394
	xorl	%eax, %eax
	movl	$.LC255, %edi
	movq	$_iob+112, %r15
	call	error
	movq	if_stack(%rip), %rcx
	movq	%r15, %rdi
	xorl	%eax, %eax
	movl	$.LC256, %esi
	movl	16(%rcx), %edx
	call	fprintf
	movq	if_stack(%rip), %rdx
	movq	8(%rdx), %rdi
	testq	%rdi, %rdi
	je	.L4395
	cmpq	$0, instack(%rbx)
	jne	.L4621
.L4395:
	movq	$_iob+112, %rdi
	movl	$.LC258, %esi
	xorl	%eax, %eax
	call	fprintf
	movq	if_stack(%rip), %rax
.L4394:
	movl	20(%rax), %esi
	movl	$10, 32(%rax)
	testl	%esi, %esi
	jne	.L4618
	movl	$-1, %esi
	xorl	%ecx, %ecx
	movl	%r13d, %r15d
	movl	$.LC150, %edi
	xorl	%r8d, %r8d
	xorl	%eax, %eax
	movl	$33, %edx
	movl	%esi, %r9d
	subl	%r12d, %r15d
	call	install
	movl	indepth(%rip), %r13d
	movq	%r12, %rdi
	movq	%rax, -304(%rbp)
	movl	$1, pcp_inside_if(%rip)
	movslq	%r15d,%rax
	leaq	(%rax,%r12), %rcx
	movl	assertions_flag(%rip), %r15d
	movl	$1, assertions_flag(%rip)
	movl	%ecx, %ebx
	subl	%r12d, %ebx
	testl	%ebx, %ebx
	js	.L4619
	movslq	%ebx,%r8
	addq	$16, %r8
	andq	$-16, %r8
	subq	%r8, %rsp
	cmpq	%rcx, %rdi
	movq	%rsp, %r12
	movq	%rsp, %rdx
	je	.L4616
	.p2align 4,,7
.L4402:
	movzbl	(%rdi), %r9d
	incq	%rdi
	movb	%r9b, (%rdx)
	incq	%rdx
	cmpq	%rcx, %rdi
	jne	.L4402
.L4616:
	movslq	%ebx,%rdi
	xorl	%eax, %eax
	movb	$0, (%rdi,%r12)
	leal	100(%rbx,%rbx), %edi
	movl	%edi, -260(%rbp)
	call	xmalloc
	movq	$0, -224(%rbp)
	movq	%rax, -256(%rbp)
	movq	%rax, -248(%rbp)
	movq	$0, -288(%rbp)
	movl	indepth(%rip), %eax
	movq	$0, -240(%rbp)
	cmpl	$198, %eax
	jle	.L4403
	cltq
	leaq	(%rax,%rax,4), %r10
	xorl	%eax, %eax
	salq	$4, %r10
	movl	instack+24(%r10), %edi
	call	line_for_error
	movl	$.LC135, %esi
	movl	%eax, %edi
	xorl	%eax, %eax
	call	error_with_line
.L4617:
	movq	-288(%rbp), %rdi
	movq	-280(%rbp), %r9
	xorl	%eax, %eax
	movq	-272(%rbp), %r8
	movq	-264(%rbp), %r15
	movq	-256(%rbp), %rsi
	movq	-248(%rbp), %rbx
	movq	-240(%rbp), %rcx
	movq	%rdi, -208(%rbp)
	movq	%r9, -200(%rbp)
	movq	-208(%rbp), %r11
	movq	%r8, -192(%rbp)
	movq	%r15, -184(%rbp)
	movq	-200(%rbp), %r10
	movq	%rsi, -176(%rbp)
	movq	%rbx, -168(%rbp)
	movq	-184(%rbp), %r9
	movq	-176(%rbp), %r8
	movq	%rcx, -160(%rbp)
	movq	-232(%rbp), %rdx
	movq	-224(%rbp), %r13
	movq	%r11, -128(%rbp)
	movq	-160(%rbp), %rsi
	movq	-192(%rbp), %rdi
	movq	%r10, -120(%rbp)
	movq	-216(%rbp), %r12
	movq	-168(%rbp), %r15
	movq	%r9, -104(%rbp)
	movq	%r8, -96(%rbp)
	movq	%rdx, -152(%rbp)
	movq	%r13, -144(%rbp)
	movq	%rdi, -112(%rbp)
	movq	%r12, -136(%rbp)
	movq	%r15, -88(%rbp)
	movq	%rsi, -80(%rbp)
	movq	-144(%rbp), %rcx
	movq	-136(%rbp), %rdx
	movl	$0, pcp_inside_if(%rip)
	movq	-152(%rbp), %rbx
	movq	-304(%rbp), %rdi
	movq	%rcx, -64(%rbp)
	movq	%rdx, -56(%rbp)
	movq	%rbx, -72(%rbp)
	call	delete_macro
	movq	-96(%rbp), %rdi
	xorl	%eax, %eax
	call	parse_c_expression
	movq	-96(%rbp), %rdi
	movl	%eax, %r13d
	xorl	%eax, %eax
	call	free
	testl	%r13d, %r13d
	jne	.L4407
.L4618:
	movq	%r14, %rdi
	xorl	%esi, %esi
	xorl	%eax, %eax
	call	skip_if_group
.L4391:
	leaq	-40(%rbp), %rsp
	xorl	%eax, %eax
	popq	%rbx
	popq	%r12
	popq	%r13
	popq	%r14
	popq	%r15
	leave
	ret
.L4407:
	movq	if_stack(%rip), %r10
	movq	-296(%rbp), %rsi
	movq	%r14, %rdi
	movl	$1, %edx
	xorl	%ecx, %ecx
	xorl	%eax, %eax
	incl	20(%r10)
	call	output_line_command
	jmp	.L4391
.L4403:
	incl	%eax
	xorl	%esi, %esi
	leaq	-288(%rbp), %rdi
	movl	%eax, indepth(%rip)
	movl	$1, -264(%rbp)
	cltq
	leaq	(%rax,%rax,4), %r11
	xorl	%eax, %eax
	salq	$4, %r11
	movq	%r12, instack+40(%r11)
	movq	%r12, instack+32(%r11)
	movq	$0, instack(%r11)
	movq	if_stack(%rip), %r12
	movq	$0, instack+8(%r11)
	movb	$0, instack+72(%r11)
	movq	$0, instack+48(%r11)
	movq	$0, instack+64(%r11)
	movl	%ebx, instack+28(%r11)
	movl	$1, instack+24(%r11)
	movq	%r12, instack+56(%r11)
	call	rescan
	movl	indepth(%rip), %eax
	decl	%eax
	cmpl	%r13d, %eax
	movl	%eax, indepth(%rip)
	jne	.L4619
	movl	-248(%rbp), %eax
	movl	%r15d, assertions_flag(%rip)
	subl	-256(%rbp), %eax
	movl	%eax, -260(%rbp)
	jmp	.L4617
.L4621:
	movq	instack+8(%rbx), %rsi
	call	strcmp
	testl	%eax, %eax
	je	.L4395
	movq	if_stack(%rip), %rbx
	movq	%r15, %rdi
	movl	$.LC257, %esi
	xorl	%eax, %eax
	movq	8(%rbx), %rdx
	call	fprintf
	jmp	.L4395
	.p2align 6,,7
.L4620:
	movl	$.LC254, %edi
	xorl	%eax, %eax
	call	error
	jmp	.L4391
.L4619:
	xorl	%eax, %eax
	call	abort
.LFE76:
.Lfe76:
	.size	do_elif,.Lfe76-do_elif
	.section	.rodata.str1.32
	.align 32
.LC266:
	.string	"text following `#endif' violates ANSI standard"
	.section	.rodata.str1.1
.LC267:
	.string	"unbalanced `#endif'"
	.text
	.align 2
	.p2align 4,,15
	.type	do_endif,@function
do_endif:
.LFB77:
	pushq	%r14
.LCFI348:
	movq	%rdx, %r14
	pushq	%r13
.LCFI349:
	pushq	%r12
.LCFI350:
	pushq	%rbp
.LCFI351:
	pushq	%rbx
.LCFI352:
	subq	$16, %rsp
.LCFI353:
	movl	pedantic(%rip), %eax
	testl	%eax, %eax
	je	.L4486
	movzbq	(%rdi), %rdx
	cmpb	$0, is_hor_space(%rdx)
	je	.L4623
	.p2align 4,,7
.L4491:
	incq	%rdi
	movzbq	(%rdi), %rcx
	cmpb	$0, is_hor_space(%rcx)
	jne	.L4491
.L4623:
	cmpq	%rsi, %rdi
	je	.L4486
	movl	$.LC266, %edi
	xorl	%eax, %eax
	call	pedwarn
.L4486:
	movl	indepth(%rip), %esi
	movq	if_stack(%rip), %r12
	movslq	%esi,%rbx
	leaq	(%rbx,%rbx,4), %rcx
	salq	$4, %rcx
	cmpq	instack+56(%rcx), %r12
	je	.L4630
	cmpq	$0, 24(%r12)
	movq	(%r12), %rdi
	movq	%rdi, if_stack(%rip)
	je	.L4495
	movslq	instack+28(%rcx),%rbp
	movq	instack+40(%rcx), %rdx
	leaq	instack(%rcx), %r13
	addq	instack+32(%rcx), %rbp
	cmpq	%rbp, %rdx
	je	.L4625
	.p2align 4,,7
.L4509:
	movzbl	(%rdx), %esi
	incq	%rdx
	movzbl	%sil, %eax
	cmpl	$32, %eax
	je	.L4496
	cmpl	$32, %eax
	jg	.L4508
	subl	$9, %eax
	cmpl	$1, %eax
	ja	.L4495
.L4496:
	cmpq	%rbp, %rdx
	jne	.L4509
.L4628:
	movl	indepth(%rip), %esi
.L4625:
	testl	%esi, %esi
	je	.L4495
	movq	all_include_files(%rip), %rbx
	movq	(%r13), %rbp
	movq	24(%r12), %r13
	testq	%rbx, %rbx
	je	.L4627
	.p2align 4,,7
.L4517:
	movq	8(%rbx), %rdi
	movq	%rbp, %rsi
	call	strcmp
	testl	%eax, %eax
	je	.L4629
	movq	(%rbx), %rbx
	testq	%rbx, %rbx
	jne	.L4517
	jmp	.L4627
.L4629:
	movq	%r13, 16(%rbx)
.L4506:
.L4495:
	movq	%r12, %rdi
	xorl	%eax, %eax
	call	free
	xorl	%ecx, %ecx
	movl	$1, %edx
	movslq	indepth(%rip),%rax
	movq	%r14, %rsi
	leaq	(%rax,%rax,4), %rdi
	xorl	%eax, %eax
	salq	$4, %rdi
	addq	$instack, %rdi
	call	output_line_command
.L4494:
	addq	$16, %rsp
	xorl	%eax, %eax
	popq	%rbx
	popq	%rbp
	popq	%r12
	popq	%r13
	popq	%r14
	ret
	.p2align 6,,7
.L4508:
	cmpl	$47, %eax
	jne	.L4495
	cmpq	%rbp, %rdx
	je	.L4628
	cmpb	$42, (%rdx)
	jne	.L4496
	movq	40(%r13), %rbx
	leaq	1(%rdx), %r8
	movq	%r13, %rdi
	movl	$1, %edx
	movq	%r8, 40(%r13)
	leaq	12(%rsp), %rsi
	xorl	%eax, %eax
	call	skip_to_end_of_comment
	movq	%rbx, 40(%r13)
	movq	%rax, %rdx
	jmp	.L4496
.L4630:
	movl	$.LC267, %edi
	xorl	%eax, %eax
	call	error
	jmp	.L4494
.L4627:
	xorl	%eax, %eax
	call	abort
.LFE77:
.Lfe77:
	.size	do_endif,.Lfe77-do_endif
	.align 2
	.p2align 4,,15
	.type	do_assert,@function
do_assert:
.LFB78:
	pushq	%r15
.LCFI354:
	pushq	%r14
.LCFI355:
	movq	%rsi, %r14
	pushq	%r13
.LCFI356:
	pushq	%r12
.LCFI357:
	pushq	%rbp
.LCFI358:
	pushq	%rbx
.LCFI359:
	movq	%rdi, %rbx
	subq	$56, %rsp
.LCFI360:
	movl	pedantic(%rip), %eax
	testl	%eax, %eax
	je	.L3969
	movl	done_initializing(%rip), %eax
	testl	%eax, %eax
	je	.L3969
	movslq	indepth(%rip),%rcx
	leaq	(%rcx,%rcx,4), %rdx
	salq	$4, %rdx
	cmpb	$0, instack+72(%rdx)
	je	.L4652
.L3969:
	movq	%rbx, %rdi
	movq	%rbx, 48(%rsp)
	movq	%rbx, %rcx
	movzbq	(%rbx), %rbx
	cmpb	$0, is_hor_space(%rbx)
	je	.L4632
	leaq	1(%rdi), %rdx
	.p2align 4,,7
.L3973:
	movq	%rdx, %rdi
	movq	%rdx, 48(%rsp)
	leaq	2(%rcx), %rdx
	movzbq	-1(%rdx), %rsi
	movq	%rdi, %rcx
	cmpb	$0, is_hor_space(%rsi)
	jne	.L3973
.L4632:
	xorl	%eax, %eax
	movl	$.LC234, %esi
	movq	%rdi, 8(%rsp)
	call	check_macro_name
	movl	%eax, 36(%rsp)
	cltq
	movq	%rax, %rdi
	movq	%rax, 24(%rsp)
	addq	48(%rsp), %rdi
	movq	%rdi, 48(%rsp)
	movq	%rdi, %rcx
	movzbq	(%rdi), %rbp
	cmpb	$0, is_hor_space(%rbp)
	je	.L4634
	leaq	1(%rdi), %rdx
	.p2align 4,,7
.L3978:
	movq	%rdx, %rdi
	movq	%rdx, 48(%rsp)
	leaq	2(%rcx), %rdx
	movzbq	-1(%rdx), %r8
	movq	%rdi, %rcx
	cmpb	$0, is_hor_space(%r8)
	jne	.L3978
.L4634:
	cmpb	$40, (%rdi)
	movq	%rdi, %rdx
	je	.L3979
	movl	$.LC235, %edi
.L4651:
	xorl	%eax, %eax
	call	error
.L4650:
	movl	$1, %eax
.L3968:
	addq	$56, %rsp
	popq	%rbx
	popq	%rbp
	popq	%r12
	popq	%r13
	popq	%r14
	popq	%r15
	ret
.L3979:
	incq	%rdi
	movl	$0, 44(%rsp)
	movq	%rdi, 48(%rsp)
	movq	%rdi, %rcx
	movzbq	1(%rdx), %r9
	cmpb	$0, is_hor_space(%r9)
	je	.L4636
	addq	$2, %rdx
	.p2align 4,,7
.L3984:
	movq	%rdx, %rdi
	movq	%rdx, 48(%rsp)
	leaq	2(%rcx), %rdx
	movzbq	-1(%rdx), %r10
	movq	%rdi, %rcx
	cmpb	$0, is_hor_space(%r10)
	jne	.L3984
.L4636:
	xorl	%r15d, %r15d
	movq	%rdi, %rbp
	movl	$1, 20(%rsp)
	movl	$0, 44(%rsp)
	.p2align 4,,7
.L4008:
	movl	$0, 40(%rsp)
	movq	%rbp, %r13
	movzbl	(%rbp), %edx
	cmpb	$40, %dl
	je	.L4653
	cmpb	$41, %dl
	je	.L4654
	cmpb	$34, %dl
	je	.L3994
	cmpb	$39, %dl
	je	.L3994
	.p2align 4,,7
.L3996:
	movzbl	%dl, %edi 
	cmpb	$0, is_hor_space(%rdi)
	jne	.L3989
	cmpb	$40, %dl
	je	.L3989
	cmpb	$41, %dl
	je	.L3989
	cmpb	$34, %dl
	je	.L3989
	cmpb	$39, %dl
	je	.L3989
	cmpq	%r14, %rbp
	je	.L3989
	incq	%rbp
	movzbl	(%rbp), %edx
	jmp	.L3996
	.p2align 6,,7
.L3989:
	movl	$32, %edi
	xorl	%eax, %eax
	movq	%rbp, %rbx
	call	xmalloc
	subq	%r13, %rbx
	movq	%rax, %r12
	leaq	1(%rbx), %rdi
	xorl	%eax, %eax
	call	xmalloc
	movq	%rbx, %rdx
	movq	%r13, %rdi
	movq	%rax, 8(%r12)
	movq	%rax, %rsi
	xorl	%eax, %eax
	call	bcopy
	addq	8(%r12), %rbx
	movb	$0, (%rbx)
	movq	%r15, (%r12)
	movq	%r12, %r15
	movl	%ebp, %r12d
	subl	%r13d, %r12d
	movl	%r12d, 16(%r15)
	movzbq	(%rbp), %r11
	cmpb	$0, is_hor_space(%r11)
	je	.L4639
	.p2align 4,,7
.L4005:
	incq	%rbp
	movzbq	(%rbp), %r13
	cmpb	$0, is_hor_space(%r13)
	jne	.L4005
.L4639:
	cmpq	%r14, %rbp
	jae	.L4649
	movl	20(%rsp), %eax
	testl	%eax, %eax
	jg	.L4008
.L3986:
	xorl	%edx, %edx
	movq	%rbp, 48(%rsp)
	testq	%r15, %r15
	je	.L4641
	xorl	%ecx, %ecx
	movq	%r15, %rdx
	.p2align 4,,7
.L4013:
	movq	(%rdx), %rax
	movq	%rcx, (%rdx)
	testq	%rax, %rax
	je	.L4641
	movq	%rdx, %rcx
	movq	%rax, %rdx
	jmp	.L4013
.L4641:
	movq	%rdx, %r13
.L4007:
	movl	44(%rsp), %r14d
	testl	%r14d, %r14d
	jne	.L4650
	testq	%r13, %r13
	je	.L4655
	movq	48(%rsp), %rdx
	leaq	1(%rdx), %rbx
	movq	%rbx, 48(%rsp)
	movq	%rbx, %rcx
	movzbq	1(%rdx), %r15
	cmpb	$0, is_hor_space(%r15)
	je	.L4643
	addq	$2, %rdx
.L4020:
	movq	%rdx, %rbp
	movq	%rdx, 48(%rsp)
	leaq	2(%rcx), %rdx
	movzbq	-1(%rdx), %rsi
	movq	%rbp, %rcx
	cmpb	$0, is_hor_space(%rsi)
	jne	.L4020
.L4643:
	movq	8(%rsp), %rdi
	movl	36(%rsp), %esi
	movl	$37, %edx
	xorl	%eax, %eax
	call	hashf
	movl	$16, %edi
	movl	%eax, %r14d
	xorl	%eax, %eax
	movslq	%r14d,%rbx
	call	xmalloc
	movq	assertion_hashtab(,%rbx,8), %rbp
	movq	%rax, %r12
	testq	%rbp, %rbp
	je	.L4645
.L4026:
	movl	36(%rsp), %eax
	cmpl	%eax, 24(%rbp)
	je	.L4656
.L4024:
	movq	(%rbp), %rbp
	testq	%rbp, %rbp
	jne	.L4026
.L4645:
	xorl	%ebp, %ebp
.L4025:
	testq	%rbp, %rbp
	jne	.L4027
	cmpl	$7, 36(%rsp)
	je	.L4657
.L4028:
	movl	36(%rsp), %edi
	xorl	%eax, %eax
	addl	$49, %edi
	call	xmalloc
	leaq	0(,%rbx,8), %rcx
	movq	assertion_hashtab(%rcx), %rdx
	leaq	assertion_hashtab(%rcx), %r8
	movq	%rax, %rsi
	movq	%r8, 16(%rax)
	movq	%rdx, (%rax)
	movq	%rax, assertion_hashtab(%rcx)
	movq	$0, 8(%rax)
	movq	(%rax), %rax
	testq	%rax, %rax
	je	.L4030
	movq	%rsi, 8(%rax)
.L4030:
	movl	36(%rsp), %ebx
	leaq	48(%rsi), %r9
	movq	$0, 40(%rsi)
	movq	%r9, 32(%rsi)
	movq	%r9, %rcx
	testl	%ebx, %ebx
	movl	%ebx, 24(%rsi)
	jle	.L4647
	movl	%ebx, %edx
.L4035:
	movq	8(%rsp), %r10
	movzbl	(%r10), %edi
	incq	%r10
	movb	%dil, (%rcx)
	incq	%rcx
	movq	%r10, 8(%rsp)
	decl	%edx
	jne	.L4035
.L4647:
	movq	32(%rsi), %r15
	movq	%rsi, %rbp
	addq	%r15, 24(%rsp)
	movq	24(%rsp), %r11
	movb	$0, (%r11)
.L4027:
	movq	%r13, 8(%r12)
	xorl	%eax, %eax
	movq	40(%rbp), %r13
	movq	%r13, (%r12)
	movq	%r12, 40(%rbp)
	jmp	.L3968
.L4657:
	movq	8(%rsp), %rsi
	movl	$7, %ecx
	movl	$.LC150, %edi
	cld
	cmpq	$7, %rcx
	repz
	cmpsb
	jne	.L4028
	movl	$.LC238, %edi
	xorl	%eax, %eax
	call	error
	jmp	.L4028
	.p2align 6,,7
.L4656:
	movq	32(%rbp), %rdi
	movq	8(%rsp), %rsi
	movq	24(%rsp), %rdx
	call	strncmp
	testl	%eax, %eax
	jne	.L4024
	jmp	.L4025
.L4655:
	movl	$.LC237, %edi
	jmp	.L4651
.L4649:
	movl	$.LC236, %edi
	xorl	%eax, %eax
	xorl	%r13d, %r13d
	call	error
	movl	$-1, 44(%rsp)
	jmp	.L4007
.L3994:
	movq	%rbp, %rdi
	movq	%r14, %rsi
	xorl	%edx, %edx
	xorl	%ecx, %ecx
	xorl	%r8d, %r8d
	leaq	40(%rsp), %r9
	xorl	%eax, %eax
	call	skip_quoted_string
	movq	%rax, %rbp
	jmp	.L3989
.L4654:
	decl	20(%rsp)
	je	.L3986
	incq	%rbp
	jmp	.L3989
.L4653:
	incl	20(%rsp)
	incq	%rbp
	jmp	.L3989
.L4652:
	movl	$.LC233, %edi
	xorl	%eax, %eax
	call	pedwarn
	jmp	.L3969
.LFE78:
.Lfe78:
	.size	do_assert,.Lfe78-do_assert
	.section	.rodata.str1.32
	.align 32
.LC243:
	.string	"empty token list in `#unassert'"
	.align 32
.LC242:
	.string	"ANSI C does not allow `#unassert'"
	.text
	.align 2
	.p2align 4,,15
	.type	do_unassert,@function
do_unassert:
.LFB79:
	pushq	%r15
.LCFI361:
	pushq	%r14
.LCFI362:
	movq	%rsi, %r14
	pushq	%r13
.LCFI363:
	pushq	%r12
.LCFI364:
	pushq	%rbp
.LCFI365:
	xorl	%ebp, %ebp
	pushq	%rbx
.LCFI366:
	movq	%rdi, %rbx
	subq	$56, %rsp
.LCFI367:
	movl	pedantic(%rip), %eax
	movq	$0, (%rsp)
	testl	%eax, %eax
	je	.L4038
	movl	done_initializing(%rip), %eax
	testl	%eax, %eax
	je	.L4038
	movslq	indepth(%rip),%rcx
	leaq	(%rcx,%rcx,4), %rdx
	salq	$4, %rdx
	cmpb	$0, instack+72(%rdx)
	je	.L4689
.L4038:
	movq	%rbx, 48(%rsp)
	movq	%rbx, %rdi
	movq	%rbx, %rcx
	movzbq	(%rbx), %rdx
	cmpb	$0, is_hor_space(%rdx)
	je	.L4659
	leaq	1(%rbx), %rdx
	.p2align 4,,7
.L4042:
	movq	%rdx, %rdi
	movq	%rdx, 48(%rsp)
	leaq	2(%rcx), %rdx
	movzbq	-1(%rdx), %rbx
	movq	%rdi, %rcx
	cmpb	$0, is_hor_space(%rbx)
	jne	.L4042
.L4659:
	movl	$.LC234, %esi
	xorl	%eax, %eax
	movq	%rdi, 32(%rsp)
	call	check_macro_name
	movl	%eax, 28(%rsp)
	cltq
	movq	%rax, %rdi
	movq	%rax, 16(%rsp)
	addq	48(%rsp), %rdi
	movq	%rdi, 48(%rsp)
	movq	%rdi, %rcx
	movzbq	(%rdi), %rsi
	cmpb	$0, is_hor_space(%rsi)
	je	.L4661
	leaq	1(%rdi), %rdx
	.p2align 4,,7
.L4047:
	movq	%rdx, %rdi
	movq	%rdx, 48(%rsp)
	leaq	2(%rcx), %rdx
	movzbq	-1(%rdx), %r8
	movq	%rdi, %rcx
	cmpb	$0, is_hor_space(%r8)
	jne	.L4047
.L4661:
	cmpb	$40, (%rdi)
	movq	%rdi, %rdx
	je	.L4690
.L4048:
	movq	32(%rsp), %rdi
	movl	28(%rsp), %esi
	xorl	%eax, %eax
	movl	$37, %edx
	call	hashf
	cltq
	movq	assertion_hashtab(,%rax,8), %r12
	testq	%r12, %r12
	je	.L4671
	.p2align 4,,7
.L4095:
	movl	28(%rsp), %eax
	cmpl	%eax, 24(%r12)
	je	.L4691
.L4093:
	movq	(%r12), %r12
	testq	%r12, %r12
	jne	.L4095
.L4671:
	xorl	%r12d, %r12d
.L4094:
	testq	%r12, %r12
	movl	$1, %eax
	je	.L4037
	testl	%ebp, %ebp
	jne	.L4097
	movq	40(%r12), %r13
	testq	%r13, %r13
	je	.L4673
.L4107:
	movq	8(%r13), %rbx
	movq	(%r13), %r14
	testq	%rbx, %rbx
	je	.L4675
	.p2align 4,,7
.L4105:
	movq	8(%rbx), %rdi
	movq	(%rbx), %rbp
	xorl	%eax, %eax
	call	free
	xorl	%eax, %eax
	movq	%rbx, %rdi
	call	free
	testq	%rbp, %rbp
	je	.L4675
	movq	%rbp, %rbx
	jmp	.L4105
.L4675:
	xorl	%eax, %eax
	movq	%r13, %rdi
	call	free
	testq	%r14, %r14
	je	.L4673
	movq	%r14, %r13
	jmp	.L4107
.L4673:
	movq	8(%r12), %rdx
	testq	%rdx, %rdx
	je	.L4108
	movq	(%r12), %rcx
	movq	%rcx, (%rdx)
.L4108:
	movq	(%r12), %rax
	testq	%rax, %rax
	je	.L4109
	movq	%rdx, 8(%rax)
.L4109:
	movq	16(%r12), %rdx
	cmpq	(%rdx), %r12
	je	.L4692
.L4110:
	movq	%r12, %rdi
	xorl	%eax, %eax
	call	free
.L4112:
	xorl	%eax, %eax
.L4037:
	addq	$56, %rsp
	popq	%rbx
	popq	%rbp
	popq	%r12
	popq	%r13
	popq	%r14
	popq	%r15
	ret
.L4692:
	movq	%rax, (%rdx)
	jmp	.L4110
.L4097:
	movq	40(%r12), %r13
	xorl	%r15d, %r15d
	testq	%r13, %r13
	je	.L4112
.L4133:
	movq	8(%r13), %rbp
	movq	(%r13), %r14
	movq	(%rsp), %rbx
	testq	%rbp, %rbp
	je	.L4118
	testq	%rbx, %rbx
	je	.L4118
.L4124:
	movl	16(%rbp), %eax
	cmpl	16(%rbx), %eax
	jne	.L4687
	movq	8(%rbp), %rdi
	movq	8(%rbx), %rsi
	movslq	%eax,%rdx
	call	strncmp
	testl	%eax, %eax
	jne	.L4687
	movq	(%rbp), %rbp
	movq	(%rbx), %rbx
	testq	%rbp, %rbp
	je	.L4118
	testq	%rbx, %rbx
	jne	.L4124
.L4118:
	xorl	%eax, %eax
	cmpq	%rbx, %rbp
	sete	%al
.L4122:
	testl	%eax, %eax
	je	.L4116
	testq	%r15, %r15
	je	.L4125
	movq	%r14, (%r15)
.L4126:
	movq	8(%r13), %rbx
	testq	%rbx, %rbx
	je	.L4679
	.p2align 4,,7
.L4130:
	movq	8(%rbx), %rdi
	movq	(%rbx), %rbp
	xorl	%eax, %eax
	call	free
	xorl	%eax, %eax
	movq	%rbx, %rdi
	call	free
	testq	%rbp, %rbp
	je	.L4679
	movq	%rbp, %rbx
	jmp	.L4130
.L4679:
	movq	%r13, %rdi
	xorl	%eax, %eax
	call	free
.L4132:
	testq	%r14, %r14
	movq	%r14, %r13
	jne	.L4133
	jmp	.L4112
.L4125:
	movq	(%r13), %rdx
	movq	%rdx, 40(%r12)
	jmp	.L4126
.L4116:
	movq	%r13, %r15
	jmp	.L4132
.L4687:
	xorl	%eax, %eax
	jmp	.L4122
.L4691:
	movq	32(%r12), %rdi
	movq	32(%rsp), %rsi
	movq	16(%rsp), %rdx
	call	strncmp
	testl	%eax, %eax
	jne	.L4093
	jmp	.L4094
	.p2align 6,,7
.L4690:
	incq	%rdi
	movl	$0, 44(%rsp)
	movq	%rdi, 48(%rsp)
	movq	%rdi, %rcx
	movzbq	1(%rdx), %rbp
	cmpb	$0, is_hor_space(%rbp)
	je	.L4663
	addq	$2, %rdx
	.p2align 4,,7
.L4053:
	movq	%rdx, %rdi
	movq	%rdx, 48(%rsp)
	leaq	2(%rcx), %rdx
	movzbq	-1(%rdx), %r9
	movq	%rdi, %rcx
	cmpb	$0, is_hor_space(%r9)
	jne	.L4053
.L4663:
	xorl	%r15d, %r15d
	movq	%rdi, %rbp
	movl	$1, 12(%rsp)
	movl	$0, 44(%rsp)
	.p2align 4,,7
.L4077:
	movl	$0, 40(%rsp)
	movq	%rbp, %r13
	movzbl	(%rbp), %edx
	cmpb	$40, %dl
	je	.L4693
	cmpb	$41, %dl
	je	.L4694
	cmpb	$34, %dl
	je	.L4063
	cmpb	$39, %dl
	je	.L4063
	.p2align 4,,7
.L4065:
	movzbl	%dl, %edi 
	cmpb	$0, is_hor_space(%rdi)
	jne	.L4058
	cmpb	$40, %dl
	je	.L4058
	cmpb	$41, %dl
	je	.L4058
	cmpb	$34, %dl
	je	.L4058
	cmpb	$39, %dl
	je	.L4058
	cmpq	%r14, %rbp
	je	.L4058
	incq	%rbp
	movzbl	(%rbp), %edx
	jmp	.L4065
	.p2align 6,,7
.L4058:
	movl	$32, %edi
	xorl	%eax, %eax
	movq	%rbp, %rbx
	call	xmalloc
	subq	%r13, %rbx
	movq	%rax, %r12
	leaq	1(%rbx), %rdi
	xorl	%eax, %eax
	call	xmalloc
	movq	%rbx, %rdx
	movq	%r13, %rdi
	movq	%rax, %rsi
	movq	%rax, 8(%r12)
	xorl	%eax, %eax
	call	bcopy
	movl	%ebp, %r11d
	addq	8(%r12), %rbx
	subl	%r13d, %r11d
	movb	$0, (%rbx)
	movl	%r11d, 16(%r12)
	movq	%r15, (%r12)
	movzbq	(%rbp), %r10
	movq	%r12, %r15
	cmpb	$0, is_hor_space(%r10)
	je	.L4666
	.p2align 4,,7
.L4074:
	incq	%rbp
	movzbq	(%rbp), %r12
	cmpb	$0, is_hor_space(%r12)
	jne	.L4074
.L4666:
	cmpq	%r14, %rbp
	jae	.L4685
	movl	12(%rsp), %eax
	testl	%eax, %eax
	jg	.L4077
.L4055:
	xorl	%edx, %edx
	movq	%rbp, 48(%rsp)
	testq	%r15, %r15
	je	.L4668
	xorl	%ecx, %ecx
	movq	%r15, %rdx
	.p2align 4,,7
.L4082:
	movq	(%rdx), %rax
	movq	%rcx, (%rdx)
	testq	%rax, %rax
	je	.L4668
	movq	%rdx, %rcx
	movq	%rax, %rdx
	jmp	.L4082
.L4668:
	movq	%rdx, (%rsp)
.L4076:
	movl	44(%rsp), %eax
	testl	%eax, %eax
	jne	.L4688
	cmpq	$0, (%rsp)
	je	.L4695
	movq	48(%rsp), %rdx
	movl	$1, %ebp
	leaq	1(%rdx), %r14
	movq	%r14, 48(%rsp)
	movq	%r14, %rcx
	movzbq	1(%rdx), %r13
	cmpb	$0, is_hor_space(%r13)
	je	.L4048
	addq	$2, %rdx
.L4089:
	movq	%rdx, %rbx
	movq	%rdx, 48(%rsp)
	leaq	2(%rcx), %rdx
	movzbq	-1(%rdx), %r15
	movq	%rbx, %rcx
	cmpb	$0, is_hor_space(%r15)
	jne	.L4089
	jmp	.L4048
.L4695:
	movl	$.LC243, %edi
	xorl	%eax, %eax
	call	error
.L4688:
	movl	$1, %eax
	jmp	.L4037
.L4685:
	movl	$.LC236, %edi
	xorl	%eax, %eax
	call	error
	movl	$-1, 44(%rsp)
	movq	$0, (%rsp)
	jmp	.L4076
.L4063:
	movq	%rbp, %rdi
	movq	%r14, %rsi
	xorl	%edx, %edx
	xorl	%ecx, %ecx
	xorl	%r8d, %r8d
	leaq	40(%rsp), %r9
	xorl	%eax, %eax
	call	skip_quoted_string
	movq	%rax, %rbp
	jmp	.L4058
.L4694:
	decl	12(%rsp)
	je	.L4055
	incq	%rbp
	jmp	.L4058
.L4693:
	incl	12(%rsp)
	incq	%rbp
	jmp	.L4058
.L4689:
	movl	$.LC242, %edi
	xorl	%eax, %eax
	call	pedwarn
	jmp	.L4038
.LFE79:
.Lfe79:
	.size	do_unassert,.Lfe79-do_unassert
	.section	.rodata.str1.1
.LC247:
	.string	"#warning %s"
	.text
	.align 2
	.p2align 4,,15
	.type	do_warning,@function
do_warning:
.LFB80:
	pushq	%r12
.LCFI368:
	xorl	%eax, %eax
	movl	%esi, %r12d
	pushq	%rbp
.LCFI369:
	subl	%edi, %r12d
	pushq	%rbx
.LCFI370:
	movq	%rdi, %rbx
	leal	1(%r12), %edi
	call	xmalloc
	movl	%r12d, %edx
	movq	%rbx, %rdi
	movq	%rax, %rbp
	movq	%rax, %rsi
	xorl	%eax, %eax
	call	bcopy
	movslq	%r12d,%rdx
	movb	$0, (%rdx,%rbp)
	movsbq	(%rbp),%rdx
	cmpb	$0, is_hor_space(%rdx)
	je	.L4697
	.p2align 4,,7
.L4334:
	incq	%rbp
	movsbq	(%rbp),%rcx
	cmpb	$0, is_hor_space(%rcx)
	jne	.L4334
.L4697:
	movq	%rbp, %rsi
	xorl	%eax, %eax
	movl	$.LC247, %edi
	call	warning
	popq	%rbx
	popq	%rbp
	popq	%r12
	xorl	%eax, %eax
	ret
.LFE80:
.Lfe80:
	.size	do_warning,.Lfe80-do_warning
	.local	progname
	.comm	progname,8,8
	.local	cplusplus
	.comm	cplusplus,4,4
	.local	cplusplus_comments
	.comm	cplusplus_comments,4,4
	.local	objc
	.comm	objc,4,4
	.local	lang_asm
	.comm	lang_asm,4,4
	.local	max_include_len
	.comm	max_include_len,4,4
	.local	no_line_commands
	.comm	no_line_commands,4,4
	.local	pcp_outfile
	.comm	pcp_outfile,8,8
	.local	pcp_inside_if
	.comm	pcp_inside_if,4,4
	.local	no_precomp
	.comm	no_precomp,4,4
	.comm	pedantic,4,4
	.local	pedantic_errors
	.comm	pedantic_errors,4,4
	.local	warn_comments
	.comm	warn_comments,4,4
	.local	warn_stringify
	.comm	warn_stringify,4,4
	.local	warn_trigraphs
	.comm	warn_trigraphs,4,4
	.local	warnings_are_errors
	.comm	warnings_are_errors,4,4
	.comm	traditional,4,4
	.local	no_output
	.comm	no_output,4,4
	.local	instack
	.comm	instack,16000,32
	.local	last_error_tick
	.comm	last_error_tick,4,4
	.local	input_file_stack_tick
	.comm	input_file_stack_tick,4,4
	.local	outbuf
	.comm	outbuf,80,32
	.local	include_prefix
	.comm	include_prefix,8,8
	.local	stringlist
	.comm	stringlist,8,8
	.local	hashtab
	.comm	hashtab,11224,32
	.local	assertion_hashtab
	.comm	assertion_hashtab,296,32
	.local	assertions_flag
	.comm	assertions_flag,4,4
	.comm	directive_start,8,8
	.comm	is_idchar,256,32
	.comm	is_idstart,256,32
	.comm	is_hor_space,256,32
	.local	is_space
	.comm	is_space,256,32
	.local	dollars_in_ident
	.comm	dollars_in_ident,4,4
	.local	deps_buffer
	.comm	deps_buffer,8,8
	.local	deps_allocated_size
	.comm	deps_allocated_size,4,4
	.local	deps_size
	.comm	deps_size,4,4
	.local	deps_column
	.comm	deps_column,4,4
	.local	ignore_srcdir
	.comm	ignore_srcdir,4,4
	.local	import_hash_table
	.comm	import_hash_table,248,32
	.section	.eh_frame,"aw",@progbits
.Lframe1:
	.long	.LECIE1-.LSCIE1
.LSCIE1:
	.long	0x0
	.byte	0x1
	.string	""
	.uleb128 0x1
	.sleb128 -8
	.byte	0x10
	.byte	0xc
	.uleb128 0x7
	.uleb128 0x8
	.byte	0x90
	.uleb128 0x1
	.align 8
.LECIE1:
.LSFDE1:
	.long	.LEFDE1-.LASFDE1
.LASFDE1:
	.long	.LASFDE1-.Lframe1
	.quad	.LFB1
	.quad	.LFE1-.LFB1
	.byte	0x4
	.long	.LCFI0-.LFB1
	.byte	0xe
	.uleb128 0x10
	.byte	0x86
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI1-.LCFI0
	.byte	0xd
	.uleb128 0x6
	.byte	0x4
	.long	.LCFI3-.LCFI1
	.byte	0x8e
	.uleb128 0x4
	.byte	0x8f
	.uleb128 0x3
	.byte	0x4
	.long	.LCFI4-.LCFI3
	.byte	0x8d
	.uleb128 0x5
	.byte	0x4
	.long	.LCFI5-.LCFI4
	.byte	0x8c
	.uleb128 0x6
	.byte	0x4
	.long	.LCFI6-.LCFI5
	.byte	0x83
	.uleb128 0x7
	.align 8
.LEFDE1:
.LSFDE3:
	.long	.LEFDE3-.LASFDE3
.LASFDE3:
	.long	.LASFDE3-.Lframe1
	.quad	.LFB2
	.quad	.LFE2-.LFB2
	.byte	0x4
	.long	.LCFI8-.LFB2
	.byte	0xe
	.uleb128 0x10
	.byte	0x8d
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI9-.LCFI8
	.byte	0xe
	.uleb128 0x18
	.byte	0x4
	.long	.LCFI10-.LCFI9
	.byte	0xe
	.uleb128 0x20
	.byte	0x4
	.long	.LCFI11-.LCFI10
	.byte	0xe
	.uleb128 0x28
	.byte	0x4
	.long	.LCFI12-.LCFI11
	.byte	0xe
	.uleb128 0x30
	.byte	0x83
	.uleb128 0x5
	.byte	0x86
	.uleb128 0x4
	.byte	0x8c
	.uleb128 0x3
	.align 8
.LEFDE3:
.LSFDE5:
	.long	.LEFDE5-.LASFDE5
.LASFDE5:
	.long	.LASFDE5-.Lframe1
	.quad	.LFB3
	.quad	.LFE3-.LFB3
	.byte	0x4
	.long	.LCFI13-.LFB3
	.byte	0xe
	.uleb128 0x10
	.byte	0x4
	.long	.LCFI14-.LCFI13
	.byte	0xe
	.uleb128 0x18
	.byte	0x4
	.long	.LCFI15-.LCFI14
	.byte	0xe
	.uleb128 0x20
	.byte	0x8d
	.uleb128 0x4
	.byte	0x8e
	.uleb128 0x3
	.byte	0x8f
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI16-.LCFI15
	.byte	0xe
	.uleb128 0x28
	.byte	0x4
	.long	.LCFI17-.LCFI16
	.byte	0xe
	.uleb128 0x30
	.byte	0x4
	.long	.LCFI18-.LCFI17
	.byte	0xe
	.uleb128 0x38
	.byte	0x4
	.long	.LCFI19-.LCFI18
	.byte	0xe
	.uleb128 0x40
	.byte	0x83
	.uleb128 0x7
	.byte	0x86
	.uleb128 0x6
	.byte	0x8c
	.uleb128 0x5
	.align 8
.LEFDE5:
.LSFDE7:
	.long	.LEFDE7-.LASFDE7
.LASFDE7:
	.long	.LASFDE7-.Lframe1
	.quad	.LFB4
	.quad	.LFE4-.LFB4
	.byte	0x4
	.long	.LCFI20-.LFB4
	.byte	0xe
	.uleb128 0x10
	.byte	0x8f
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI21-.LCFI20
	.byte	0xe
	.uleb128 0x18
	.byte	0x4
	.long	.LCFI22-.LCFI21
	.byte	0xe
	.uleb128 0x20
	.byte	0x4
	.long	.LCFI23-.LCFI22
	.byte	0xe
	.uleb128 0x28
	.byte	0x4
	.long	.LCFI24-.LCFI23
	.byte	0xe
	.uleb128 0x30
	.byte	0x4
	.long	.LCFI25-.LCFI24
	.byte	0xe
	.uleb128 0x38
	.byte	0x4
	.long	.LCFI26-.LCFI25
	.byte	0xe
	.uleb128 0xb0
	.byte	0x83
	.uleb128 0x7
	.byte	0x86
	.uleb128 0x6
	.byte	0x8c
	.uleb128 0x5
	.byte	0x8d
	.uleb128 0x4
	.byte	0x8e
	.uleb128 0x3
	.align 8
.LEFDE7:
.LSFDE9:
	.long	.LEFDE9-.LASFDE9
.LASFDE9:
	.long	.LASFDE9-.Lframe1
	.quad	.LFB5
	.quad	.LFE5-.LFB5
	.byte	0x4
	.long	.LCFI27-.LFB5
	.byte	0xe
	.uleb128 0x10
	.byte	0x86
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI28-.LCFI27
	.byte	0xd
	.uleb128 0x6
	.byte	0x4
	.long	.LCFI30-.LCFI28
	.byte	0x8e
	.uleb128 0x4
	.byte	0x8f
	.uleb128 0x3
	.byte	0x4
	.long	.LCFI34-.LCFI30
	.byte	0x83
	.uleb128 0x7
	.byte	0x8c
	.uleb128 0x6
	.byte	0x8d
	.uleb128 0x5
	.align 8
.LEFDE9:
.LSFDE11:
	.long	.LEFDE11-.LASFDE11
.LASFDE11:
	.long	.LASFDE11-.Lframe1
	.quad	.LFB6
	.quad	.LFE6-.LFB6
	.byte	0x4
	.long	.LCFI35-.LFB6
	.byte	0xe
	.uleb128 0x10
	.byte	0x86
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI36-.LCFI35
	.byte	0xd
	.uleb128 0x6
	.byte	0x4
	.long	.LCFI39-.LCFI36
	.byte	0x8d
	.uleb128 0x5
	.byte	0x8e
	.uleb128 0x4
	.byte	0x8f
	.uleb128 0x3
	.byte	0x4
	.long	.LCFI40-.LCFI39
	.byte	0x8c
	.uleb128 0x6
	.byte	0x4
	.long	.LCFI42-.LCFI40
	.byte	0x83
	.uleb128 0x7
	.align 8
.LEFDE11:
.LSFDE13:
	.long	.LEFDE13-.LASFDE13
.LASFDE13:
	.long	.LASFDE13-.Lframe1
	.quad	.LFB7
	.quad	.LFE7-.LFB7
	.byte	0x4
	.long	.LCFI43-.LFB7
	.byte	0xe
	.uleb128 0x10
	.byte	0x86
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI44-.LCFI43
	.byte	0xe
	.uleb128 0x18
	.byte	0x4
	.long	.LCFI45-.LCFI44
	.byte	0xe
	.uleb128 0x20
	.byte	0x83
	.uleb128 0x3
	.align 8
.LEFDE13:
.LSFDE15:
	.long	.LEFDE15-.LASFDE15
.LASFDE15:
	.long	.LASFDE15-.Lframe1
	.quad	.LFB8
	.quad	.LFE8-.LFB8
	.byte	0x4
	.long	.LCFI46-.LFB8
	.byte	0xe
	.uleb128 0x10
	.byte	0x8d
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI47-.LCFI46
	.byte	0xe
	.uleb128 0x18
	.byte	0x4
	.long	.LCFI48-.LCFI47
	.byte	0xe
	.uleb128 0x20
	.byte	0x4
	.long	.LCFI49-.LCFI48
	.byte	0xe
	.uleb128 0x28
	.byte	0x4
	.long	.LCFI50-.LCFI49
	.byte	0xe
	.uleb128 0x30
	.byte	0x83
	.uleb128 0x5
	.byte	0x86
	.uleb128 0x4
	.byte	0x8c
	.uleb128 0x3
	.align 8
.LEFDE15:
.LSFDE17:
	.long	.LEFDE17-.LASFDE17
.LASFDE17:
	.long	.LASFDE17-.Lframe1
	.quad	.LFB9
	.quad	.LFE9-.LFB9
	.byte	0x4
	.long	.LCFI51-.LFB9
	.byte	0xe
	.uleb128 0x10
	.byte	0x4
	.long	.LCFI52-.LCFI51
	.byte	0xe
	.uleb128 0x18
	.byte	0x8e
	.uleb128 0x3
	.byte	0x8f
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI53-.LCFI52
	.byte	0xe
	.uleb128 0x20
	.byte	0x4
	.long	.LCFI54-.LCFI53
	.byte	0xe
	.uleb128 0x28
	.byte	0x4
	.long	.LCFI55-.LCFI54
	.byte	0xe
	.uleb128 0x30
	.byte	0x86
	.uleb128 0x6
	.byte	0x8c
	.uleb128 0x5
	.byte	0x8d
	.uleb128 0x4
	.byte	0x4
	.long	.LCFI56-.LCFI55
	.byte	0xe
	.uleb128 0x38
	.byte	0x83
	.uleb128 0x7
	.byte	0x4
	.long	.LCFI57-.LCFI56
	.byte	0xe
	.uleb128 0x60
	.align 8
.LEFDE17:
.LSFDE19:
	.long	.LEFDE19-.LASFDE19
.LASFDE19:
	.long	.LASFDE19-.Lframe1
	.quad	.LFB10
	.quad	.LFE10-.LFB10
	.byte	0x4
	.long	.LCFI58-.LFB10
	.byte	0xe
	.uleb128 0x10
	.byte	0x4
	.long	.LCFI59-.LCFI58
	.byte	0xe
	.uleb128 0x18
	.byte	0x86
	.uleb128 0x3
	.byte	0x8c
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI60-.LCFI59
	.byte	0xe
	.uleb128 0x20
	.byte	0x4
	.long	.LCFI61-.LCFI60
	.byte	0xe
	.uleb128 0x70
	.byte	0x83
	.uleb128 0x4
	.align 8
.LEFDE19:
.LSFDE21:
	.long	.LEFDE21-.LASFDE21
.LASFDE21:
	.long	.LASFDE21-.Lframe1
	.quad	.LFB11
	.quad	.LFE11-.LFB11
	.byte	0x4
	.long	.LCFI62-.LFB11
	.byte	0xe
	.uleb128 0x10
	.byte	0x4
	.long	.LCFI63-.LCFI62
	.byte	0xe
	.uleb128 0x18
	.byte	0x4
	.long	.LCFI64-.LCFI63
	.byte	0xe
	.uleb128 0x20
	.byte	0x86
	.uleb128 0x4
	.byte	0x8c
	.uleb128 0x3
	.byte	0x8d
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI65-.LCFI64
	.byte	0xe
	.uleb128 0x28
	.byte	0x4
	.long	.LCFI66-.LCFI65
	.byte	0xe
	.uleb128 0x80
	.byte	0x83
	.uleb128 0x5
	.align 8
.LEFDE21:
.LSFDE23:
	.long	.LEFDE23-.LASFDE23
.LASFDE23:
	.long	.LASFDE23-.Lframe1
	.quad	.LFB12
	.quad	.LFE12-.LFB12
	.byte	0x4
	.long	.LCFI67-.LFB12
	.byte	0xe
	.uleb128 0x10
	.byte	0x8e
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI68-.LCFI67
	.byte	0xe
	.uleb128 0x18
	.byte	0x8d
	.uleb128 0x3
	.byte	0x4
	.long	.LCFI69-.LCFI68
	.byte	0xe
	.uleb128 0x20
	.byte	0x8c
	.uleb128 0x4
	.byte	0x4
	.long	.LCFI70-.LCFI69
	.byte	0xe
	.uleb128 0x28
	.byte	0x4
	.long	.LCFI71-.LCFI70
	.byte	0xe
	.uleb128 0x30
	.byte	0x4
	.long	.LCFI72-.LCFI71
	.byte	0xe
	.uleb128 0x40
	.byte	0x83
	.uleb128 0x6
	.byte	0x86
	.uleb128 0x5
	.align 8
.LEFDE23:
.LSFDE25:
	.long	.LEFDE25-.LASFDE25
.LASFDE25:
	.long	.LASFDE25-.Lframe1
	.quad	.LFB13
	.quad	.LFE13-.LFB13
	.byte	0x4
	.long	.LCFI73-.LFB13
	.byte	0xe
	.uleb128 0x10
	.byte	0x4
	.long	.LCFI74-.LCFI73
	.byte	0xe
	.uleb128 0x18
	.byte	0x83
	.uleb128 0x3
	.byte	0x86
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI75-.LCFI74
	.byte	0xe
	.uleb128 0x40
	.align 8
.LEFDE25:
.LSFDE27:
	.long	.LEFDE27-.LASFDE27
.LASFDE27:
	.long	.LASFDE27-.Lframe1
	.quad	.LFB14
	.quad	.LFE14-.LFB14
	.byte	0x4
	.long	.LCFI76-.LFB14
	.byte	0xe
	.uleb128 0x10
	.byte	0x86
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI77-.LCFI76
	.byte	0xd
	.uleb128 0x6
	.byte	0x4
	.long	.LCFI78-.LCFI77
	.byte	0x8f
	.uleb128 0x3
	.byte	0x4
	.long	.LCFI83-.LCFI78
	.byte	0x83
	.uleb128 0x7
	.byte	0x8c
	.uleb128 0x6
	.byte	0x8d
	.uleb128 0x5
	.byte	0x8e
	.uleb128 0x4
	.align 8
.LEFDE27:
.LSFDE29:
	.long	.LEFDE29-.LASFDE29
.LASFDE29:
	.long	.LASFDE29-.Lframe1
	.quad	.LFB15
	.quad	.LFE15-.LFB15
	.align 8
.LEFDE29:
.LSFDE31:
	.long	.LEFDE31-.LASFDE31
.LASFDE31:
	.long	.LASFDE31-.Lframe1
	.quad	.LFB16
	.quad	.LFE16-.LFB16
	.byte	0x4
	.long	.LCFI84-.LFB16
	.byte	0xe
	.uleb128 0x30
	.byte	0x4
	.long	.LCFI89-.LCFI84
	.byte	0x83
	.uleb128 0x6
	.byte	0x8e
	.uleb128 0x2
	.byte	0x8d
	.uleb128 0x3
	.byte	0x8c
	.uleb128 0x4
	.byte	0x86
	.uleb128 0x5
	.align 8
.LEFDE31:
.LSFDE33:
	.long	.LEFDE33-.LASFDE33
.LASFDE33:
	.long	.LASFDE33-.Lframe1
	.quad	.LFB17
	.quad	.LFE17-.LFB17
	.byte	0x4
	.long	.LCFI90-.LFB17
	.byte	0xe
	.uleb128 0x10
	.byte	0x86
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI91-.LCFI90
	.byte	0xd
	.uleb128 0x6
	.byte	0x4
	.long	.LCFI92-.LCFI91
	.byte	0x8f
	.uleb128 0x3
	.byte	0x4
	.long	.LCFI93-.LCFI92
	.byte	0x8e
	.uleb128 0x4
	.byte	0x4
	.long	.LCFI97-.LCFI93
	.byte	0x83
	.uleb128 0x7
	.byte	0x8c
	.uleb128 0x6
	.byte	0x8d
	.uleb128 0x5
	.align 8
.LEFDE33:
.LSFDE35:
	.long	.LEFDE35-.LASFDE35
.LASFDE35:
	.long	.LASFDE35-.Lframe1
	.quad	.LFB18
	.quad	.LFE18-.LFB18
	.byte	0x4
	.long	.LCFI98-.LFB18
	.byte	0xe
	.uleb128 0x10
	.byte	0x86
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI99-.LCFI98
	.byte	0xd
	.uleb128 0x6
	.byte	0x4
	.long	.LCFI100-.LCFI99
	.byte	0x8d
	.uleb128 0x3
	.byte	0x4
	.long	.LCFI103-.LCFI100
	.byte	0x83
	.uleb128 0x5
	.byte	0x8c
	.uleb128 0x4
	.align 8
.LEFDE35:
.LSFDE37:
	.long	.LEFDE37-.LASFDE37
.LASFDE37:
	.long	.LASFDE37-.Lframe1
	.quad	.LFB19
	.quad	.LFE19-.LFB19
	.byte	0x4
	.long	.LCFI104-.LFB19
	.byte	0xe
	.uleb128 0x40
	.byte	0x4
	.long	.LCFI110-.LCFI104
	.byte	0x8f
	.uleb128 0x2
	.byte	0x8e
	.uleb128 0x3
	.byte	0x8c
	.uleb128 0x5
	.byte	0x86
	.uleb128 0x6
	.byte	0x8d
	.uleb128 0x4
	.byte	0x83
	.uleb128 0x7
	.align 8
.LEFDE37:
.LSFDE39:
	.long	.LEFDE39-.LASFDE39
.LASFDE39:
	.long	.LASFDE39-.Lframe1
	.quad	.LFB20
	.quad	.LFE20-.LFB20
	.byte	0x4
	.long	.LCFI111-.LFB20
	.byte	0xe
	.uleb128 0x10
	.byte	0x83
	.uleb128 0x2
	.align 8
.LEFDE39:
.LSFDE41:
	.long	.LEFDE41-.LASFDE41
.LASFDE41:
	.long	.LASFDE41-.Lframe1
	.quad	.LFB21
	.quad	.LFE21-.LFB21
	.byte	0x4
	.long	.LCFI112-.LFB21
	.byte	0xe
	.uleb128 0x10
	.byte	0x4
	.long	.LCFI113-.LCFI112
	.byte	0xe
	.uleb128 0x18
	.byte	0x4
	.long	.LCFI114-.LCFI113
	.byte	0xe
	.uleb128 0x20
	.byte	0x4
	.long	.LCFI115-.LCFI114
	.byte	0xe
	.uleb128 0x28
	.byte	0x4
	.long	.LCFI116-.LCFI115
	.byte	0xe
	.uleb128 0x30
	.byte	0x4
	.long	.LCFI117-.LCFI116
	.byte	0xe
	.uleb128 0x38
	.byte	0x83
	.uleb128 0x7
	.byte	0x86
	.uleb128 0x6
	.byte	0x8c
	.uleb128 0x5
	.byte	0x8d
	.uleb128 0x4
	.byte	0x8e
	.uleb128 0x3
	.byte	0x8f
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI118-.LCFI117
	.byte	0xe
	.uleb128 0x90
	.align 8
.LEFDE41:
.LSFDE43:
	.long	.LEFDE43-.LASFDE43
.LASFDE43:
	.long	.LASFDE43-.Lframe1
	.quad	.LFB22
	.quad	.LFE22-.LFB22
	.byte	0x4
	.long	.LCFI119-.LFB22
	.byte	0xe
	.uleb128 0x10
	.byte	0x4
	.long	.LCFI120-.LCFI119
	.byte	0xe
	.uleb128 0x18
	.byte	0x4
	.long	.LCFI121-.LCFI120
	.byte	0xe
	.uleb128 0x20
	.byte	0x4
	.long	.LCFI122-.LCFI121
	.byte	0xe
	.uleb128 0x28
	.byte	0x4
	.long	.LCFI123-.LCFI122
	.byte	0xe
	.uleb128 0x30
	.byte	0x86
	.uleb128 0x6
	.byte	0x8c
	.uleb128 0x5
	.byte	0x8d
	.uleb128 0x4
	.byte	0x8e
	.uleb128 0x3
	.byte	0x8f
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI124-.LCFI123
	.byte	0xe
	.uleb128 0x38
	.byte	0x4
	.long	.LCFI125-.LCFI124
	.byte	0xe
	.uleb128 0x50
	.byte	0x83
	.uleb128 0x7
	.align 8
.LEFDE43:
.LSFDE45:
	.long	.LEFDE45-.LASFDE45
.LASFDE45:
	.long	.LASFDE45-.Lframe1
	.quad	.LFB23
	.quad	.LFE23-.LFB23
	.align 8
.LEFDE45:
.LSFDE47:
	.long	.LEFDE47-.LASFDE47
.LASFDE47:
	.long	.LASFDE47-.Lframe1
	.quad	.LFB24
	.quad	.LFE24-.LFB24
	.byte	0x4
	.long	.LCFI126-.LFB24
	.byte	0xe
	.uleb128 0x10
	.byte	0x8f
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI127-.LCFI126
	.byte	0xe
	.uleb128 0x18
	.byte	0x8e
	.uleb128 0x3
	.byte	0x4
	.long	.LCFI128-.LCFI127
	.byte	0xe
	.uleb128 0x20
	.byte	0x8d
	.uleb128 0x4
	.byte	0x4
	.long	.LCFI129-.LCFI128
	.byte	0xe
	.uleb128 0x28
	.byte	0x8c
	.uleb128 0x5
	.byte	0x4
	.long	.LCFI130-.LCFI129
	.byte	0xe
	.uleb128 0x30
	.byte	0x4
	.long	.LCFI131-.LCFI130
	.byte	0xe
	.uleb128 0x38
	.byte	0x4
	.long	.LCFI132-.LCFI131
	.byte	0xe
	.uleb128 0x40
	.byte	0x83
	.uleb128 0x7
	.byte	0x86
	.uleb128 0x6
	.align 8
.LEFDE47:
.LSFDE49:
	.long	.LEFDE49-.LASFDE49
.LASFDE49:
	.long	.LASFDE49-.Lframe1
	.quad	.LFB25
	.quad	.LFE25-.LFB25
	.byte	0x4
	.long	.LCFI133-.LFB25
	.byte	0xe
	.uleb128 0x10
	.byte	0x86
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI134-.LCFI133
	.byte	0xe
	.uleb128 0x18
	.byte	0x83
	.uleb128 0x3
	.byte	0x4
	.long	.LCFI135-.LCFI134
	.byte	0xe
	.uleb128 0x20
	.align 8
.LEFDE49:
.LSFDE51:
	.long	.LEFDE51-.LASFDE51
.LASFDE51:
	.long	.LASFDE51-.Lframe1
	.quad	.LFB26
	.quad	.LFE26-.LFB26
	.byte	0x4
	.long	.LCFI136-.LFB26
	.byte	0xe
	.uleb128 0x10
	.byte	0x8c
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI137-.LCFI136
	.byte	0xe
	.uleb128 0x18
	.byte	0x86
	.uleb128 0x3
	.byte	0x4
	.long	.LCFI138-.LCFI137
	.byte	0xe
	.uleb128 0x20
	.byte	0x4
	.long	.LCFI139-.LCFI138
	.byte	0xe
	.uleb128 0x30
	.byte	0x83
	.uleb128 0x4
	.align 8
.LEFDE51:
.LSFDE53:
	.long	.LEFDE53-.LASFDE53
.LASFDE53:
	.long	.LASFDE53-.Lframe1
	.quad	.LFB27
	.quad	.LFE27-.LFB27
	.byte	0x4
	.long	.LCFI140-.LFB27
	.byte	0xe
	.uleb128 0x10
	.byte	0x86
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI141-.LCFI140
	.byte	0xd
	.uleb128 0x6
	.byte	0x4
	.long	.LCFI146-.LCFI141
	.byte	0x8e
	.uleb128 0x3
	.byte	0x8d
	.uleb128 0x4
	.byte	0x8c
	.uleb128 0x5
	.byte	0x83
	.uleb128 0x6
	.align 8
.LEFDE53:
.LSFDE55:
	.long	.LEFDE55-.LASFDE55
.LASFDE55:
	.long	.LASFDE55-.Lframe1
	.quad	.LFB28
	.quad	.LFE28-.LFB28
	.byte	0x4
	.long	.LCFI147-.LFB28
	.byte	0xe
	.uleb128 0x10
	.byte	0x86
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI148-.LCFI147
	.byte	0xd
	.uleb128 0x6
	.byte	0x4
	.long	.LCFI151-.LCFI148
	.byte	0x8d
	.uleb128 0x5
	.byte	0x8e
	.uleb128 0x4
	.byte	0x8f
	.uleb128 0x3
	.byte	0x4
	.long	.LCFI154-.LCFI151
	.byte	0x83
	.uleb128 0x7
	.byte	0x8c
	.uleb128 0x6
	.align 8
.LEFDE55:
.LSFDE57:
	.long	.LEFDE57-.LASFDE57
.LASFDE57:
	.long	.LASFDE57-.Lframe1
	.quad	.LFB29
	.quad	.LFE29-.LFB29
	.byte	0x4
	.long	.LCFI155-.LFB29
	.byte	0xe
	.uleb128 0x10
	.byte	0x86
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI156-.LCFI155
	.byte	0xd
	.uleb128 0x6
	.byte	0x4
	.long	.LCFI162-.LCFI156
	.byte	0x83
	.uleb128 0x7
	.byte	0x8c
	.uleb128 0x6
	.byte	0x8d
	.uleb128 0x5
	.byte	0x8e
	.uleb128 0x4
	.byte	0x8f
	.uleb128 0x3
	.align 8
.LEFDE57:
.LSFDE59:
	.long	.LEFDE59-.LASFDE59
.LASFDE59:
	.long	.LASFDE59-.Lframe1
	.quad	.LFB30
	.quad	.LFE30-.LFB30
	.byte	0x4
	.long	.LCFI163-.LFB30
	.byte	0xe
	.uleb128 0x10
	.byte	0x4
	.long	.LCFI164-.LCFI163
	.byte	0xe
	.uleb128 0x18
	.byte	0x8e
	.uleb128 0x3
	.byte	0x8f
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI165-.LCFI164
	.byte	0xe
	.uleb128 0x20
	.byte	0x4
	.long	.LCFI166-.LCFI165
	.byte	0xe
	.uleb128 0x28
	.byte	0x8c
	.uleb128 0x5
	.byte	0x8d
	.uleb128 0x4
	.byte	0x4
	.long	.LCFI167-.LCFI166
	.byte	0xe
	.uleb128 0x30
	.byte	0x86
	.uleb128 0x6
	.byte	0x4
	.long	.LCFI168-.LCFI167
	.byte	0xe
	.uleb128 0x38
	.byte	0x83
	.uleb128 0x7
	.align 8
.LEFDE59:
.LSFDE61:
	.long	.LEFDE61-.LASFDE61
.LASFDE61:
	.long	.LASFDE61-.Lframe1
	.quad	.LFB31
	.quad	.LFE31-.LFB31
	.byte	0x4
	.long	.LCFI169-.LFB31
	.byte	0xe
	.uleb128 0x10
	.byte	0x4
	.long	.LCFI170-.LCFI169
	.byte	0xe
	.uleb128 0x18
	.byte	0x83
	.uleb128 0x3
	.byte	0x86
	.uleb128 0x2
	.align 8
.LEFDE61:
.LSFDE63:
	.long	.LEFDE63-.LASFDE63
.LASFDE63:
	.long	.LASFDE63-.Lframe1
	.quad	.LFB32
	.quad	.LFE32-.LFB32
	.align 8
.LEFDE63:
.LSFDE65:
	.long	.LEFDE65-.LASFDE65
.LASFDE65:
	.long	.LASFDE65-.Lframe1
	.quad	.LFB33
	.quad	.LFE33-.LFB33
	.byte	0x4
	.long	.LCFI171-.LFB33
	.byte	0xe
	.uleb128 0x10
	.byte	0x8f
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI172-.LCFI171
	.byte	0xe
	.uleb128 0x18
	.byte	0x8e
	.uleb128 0x3
	.byte	0x4
	.long	.LCFI173-.LCFI172
	.byte	0xe
	.uleb128 0x20
	.byte	0x8d
	.uleb128 0x4
	.byte	0x4
	.long	.LCFI174-.LCFI173
	.byte	0xe
	.uleb128 0x28
	.byte	0x8c
	.uleb128 0x5
	.byte	0x4
	.long	.LCFI175-.LCFI174
	.byte	0xe
	.uleb128 0x30
	.byte	0x4
	.long	.LCFI176-.LCFI175
	.byte	0xe
	.uleb128 0x38
	.byte	0x83
	.uleb128 0x7
	.byte	0x86
	.uleb128 0x6
	.byte	0x4
	.long	.LCFI177-.LCFI176
	.byte	0xe
	.uleb128 0x40
	.align 8
.LEFDE65:
.LSFDE67:
	.long	.LEFDE67-.LASFDE67
.LASFDE67:
	.long	.LASFDE67-.Lframe1
	.quad	.LFB34
	.quad	.LFE34-.LFB34
	.byte	0x4
	.long	.LCFI178-.LFB34
	.byte	0xe
	.uleb128 0x10
	.byte	0x8c
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI179-.LCFI178
	.byte	0xe
	.uleb128 0x18
	.byte	0x4
	.long	.LCFI180-.LCFI179
	.byte	0xe
	.uleb128 0x20
	.byte	0x83
	.uleb128 0x4
	.byte	0x86
	.uleb128 0x3
	.align 8
.LEFDE67:
.LSFDE69:
	.long	.LEFDE69-.LASFDE69
.LASFDE69:
	.long	.LASFDE69-.Lframe1
	.quad	.LFB35
	.quad	.LFE35-.LFB35
	.byte	0x4
	.long	.LCFI181-.LFB35
	.byte	0xe
	.uleb128 0x10
	.byte	0x8f
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI182-.LCFI181
	.byte	0xe
	.uleb128 0x18
	.byte	0x8e
	.uleb128 0x3
	.byte	0x4
	.long	.LCFI183-.LCFI182
	.byte	0xe
	.uleb128 0x20
	.byte	0x8d
	.uleb128 0x4
	.byte	0x4
	.long	.LCFI184-.LCFI183
	.byte	0xe
	.uleb128 0x28
	.byte	0x8c
	.uleb128 0x5
	.byte	0x4
	.long	.LCFI185-.LCFI184
	.byte	0xe
	.uleb128 0x30
	.byte	0x4
	.long	.LCFI186-.LCFI185
	.byte	0xe
	.uleb128 0x38
	.byte	0x83
	.uleb128 0x7
	.byte	0x86
	.uleb128 0x6
	.byte	0x4
	.long	.LCFI187-.LCFI186
	.byte	0xe
	.uleb128 0x40
	.align 8
.LEFDE69:
.LSFDE71:
	.long	.LEFDE71-.LASFDE71
.LASFDE71:
	.long	.LASFDE71-.Lframe1
	.quad	.LFB36
	.quad	.LFE36-.LFB36
	.byte	0x4
	.long	.LCFI188-.LFB36
	.byte	0xe
	.uleb128 0x10
	.byte	0x8f
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI189-.LCFI188
	.byte	0xe
	.uleb128 0x18
	.byte	0x8e
	.uleb128 0x3
	.byte	0x4
	.long	.LCFI190-.LCFI189
	.byte	0xe
	.uleb128 0x20
	.byte	0x8d
	.uleb128 0x4
	.byte	0x4
	.long	.LCFI191-.LCFI190
	.byte	0xe
	.uleb128 0x28
	.byte	0x8c
	.uleb128 0x5
	.byte	0x4
	.long	.LCFI192-.LCFI191
	.byte	0xe
	.uleb128 0x30
	.byte	0x4
	.long	.LCFI193-.LCFI192
	.byte	0xe
	.uleb128 0x38
	.byte	0x83
	.uleb128 0x7
	.byte	0x86
	.uleb128 0x6
	.byte	0x4
	.long	.LCFI194-.LCFI193
	.byte	0xe
	.uleb128 0x40
	.align 8
.LEFDE71:
.LSFDE73:
	.long	.LEFDE73-.LASFDE73
.LASFDE73:
	.long	.LASFDE73-.Lframe1
	.quad	.LFB37
	.quad	.LFE37-.LFB37
	.align 8
.LEFDE73:
.LSFDE75:
	.long	.LEFDE75-.LASFDE75
.LASFDE75:
	.long	.LASFDE75-.Lframe1
	.quad	.LFB38
	.quad	.LFE38-.LFB38
	.byte	0x4
	.long	.LCFI195-.LFB38
	.byte	0xe
	.uleb128 0x10
	.byte	0x8d
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI196-.LCFI195
	.byte	0xe
	.uleb128 0x18
	.byte	0x4
	.long	.LCFI197-.LCFI196
	.byte	0xe
	.uleb128 0x20
	.byte	0x4
	.long	.LCFI198-.LCFI197
	.byte	0xe
	.uleb128 0x28
	.byte	0x4
	.long	.LCFI199-.LCFI198
	.byte	0xe
	.uleb128 0x30
	.byte	0x83
	.uleb128 0x5
	.byte	0x86
	.uleb128 0x4
	.byte	0x8c
	.uleb128 0x3
	.align 8
.LEFDE75:
.LSFDE77:
	.long	.LEFDE77-.LASFDE77
.LASFDE77:
	.long	.LASFDE77-.Lframe1
	.quad	.LFB39
	.quad	.LFE39-.LFB39
	.byte	0x4
	.long	.LCFI200-.LFB39
	.byte	0xe
	.uleb128 0x10
	.align 8
.LEFDE77:
.LSFDE79:
	.long	.LEFDE79-.LASFDE79
.LASFDE79:
	.long	.LASFDE79-.Lframe1
	.quad	.LFB40
	.quad	.LFE40-.LFB40
	.byte	0x4
	.long	.LCFI201-.LFB40
	.byte	0xe
	.uleb128 0x20
	.byte	0x4
	.long	.LCFI203-.LCFI201
	.byte	0x86
	.uleb128 0x2
	.byte	0x83
	.uleb128 0x3
	.align 8
.LEFDE79:
.LSFDE81:
	.long	.LEFDE81-.LASFDE81
.LASFDE81:
	.long	.LASFDE81-.Lframe1
	.quad	.LFB41
	.quad	.LFE41-.LFB41
	.byte	0x4
	.long	.LCFI204-.LFB41
	.byte	0xe
	.uleb128 0x10
	.byte	0x8f
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI205-.LCFI204
	.byte	0xe
	.uleb128 0x18
	.byte	0x8e
	.uleb128 0x3
	.byte	0x4
	.long	.LCFI206-.LCFI205
	.byte	0xe
	.uleb128 0x20
	.byte	0x8d
	.uleb128 0x4
	.byte	0x4
	.long	.LCFI207-.LCFI206
	.byte	0xe
	.uleb128 0x28
	.byte	0x8c
	.uleb128 0x5
	.byte	0x4
	.long	.LCFI208-.LCFI207
	.byte	0xe
	.uleb128 0x30
	.byte	0x86
	.uleb128 0x6
	.byte	0x4
	.long	.LCFI209-.LCFI208
	.byte	0xe
	.uleb128 0x38
	.byte	0x83
	.uleb128 0x7
	.byte	0x4
	.long	.LCFI210-.LCFI209
	.byte	0xe
	.uleb128 0x40
	.align 8
.LEFDE81:
.LSFDE83:
	.long	.LEFDE83-.LASFDE83
.LASFDE83:
	.long	.LASFDE83-.Lframe1
	.quad	.LFB42
	.quad	.LFE42-.LFB42
	.byte	0x4
	.long	.LCFI211-.LFB42
	.byte	0xe
	.uleb128 0x10
	.byte	0x4
	.long	.LCFI212-.LCFI211
	.byte	0xe
	.uleb128 0x18
	.byte	0x86
	.uleb128 0x3
	.byte	0x8c
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI213-.LCFI212
	.byte	0xe
	.uleb128 0x20
	.byte	0x83
	.uleb128 0x4
	.align 8
.LEFDE83:
.LSFDE85:
	.long	.LEFDE85-.LASFDE85
.LASFDE85:
	.long	.LASFDE85-.Lframe1
	.quad	.LFB43
	.quad	.LFE43-.LFB43
	.align 8
.LEFDE85:
.LSFDE87:
	.long	.LEFDE87-.LASFDE87
.LASFDE87:
	.long	.LASFDE87-.Lframe1
	.quad	.LFB44
	.quad	.LFE44-.LFB44
	.align 8
.LEFDE87:
.LSFDE89:
	.long	.LEFDE89-.LASFDE89
.LASFDE89:
	.long	.LASFDE89-.Lframe1
	.quad	.LFB45
	.quad	.LFE45-.LFB45
	.byte	0x4
	.long	.LCFI214-.LFB45
	.byte	0xe
	.uleb128 0x10
	.byte	0x4
	.long	.LCFI215-.LCFI214
	.byte	0xe
	.uleb128 0x18
	.byte	0x4
	.long	.LCFI216-.LCFI215
	.byte	0xe
	.uleb128 0x20
	.byte	0x4
	.long	.LCFI217-.LCFI216
	.byte	0xe
	.uleb128 0x28
	.byte	0x4
	.long	.LCFI218-.LCFI217
	.byte	0xe
	.uleb128 0x30
	.byte	0x86
	.uleb128 0x6
	.byte	0x8c
	.uleb128 0x5
	.byte	0x8d
	.uleb128 0x4
	.byte	0x8e
	.uleb128 0x3
	.byte	0x8f
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI219-.LCFI218
	.byte	0xe
	.uleb128 0x38
	.byte	0x4
	.long	.LCFI220-.LCFI219
	.byte	0xe
	.uleb128 0x40
	.byte	0x83
	.uleb128 0x7
	.align 8
.LEFDE89:
.LSFDE91:
	.long	.LEFDE91-.LASFDE91
.LASFDE91:
	.long	.LASFDE91-.Lframe1
	.quad	.LFB46
	.quad	.LFE46-.LFB46
	.byte	0x4
	.long	.LCFI221-.LFB46
	.byte	0xe
	.uleb128 0x10
	.byte	0x8c
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI222-.LCFI221
	.byte	0xe
	.uleb128 0x18
	.byte	0x86
	.uleb128 0x3
	.byte	0x4
	.long	.LCFI223-.LCFI222
	.byte	0xe
	.uleb128 0x20
	.byte	0x83
	.uleb128 0x4
	.align 8
.LEFDE91:
.LSFDE93:
	.long	.LEFDE93-.LASFDE93
.LASFDE93:
	.long	.LASFDE93-.Lframe1
	.quad	.LFB47
	.quad	.LFE47-.LFB47
	.byte	0x4
	.long	.LCFI224-.LFB47
	.byte	0xe
	.uleb128 0x10
	.byte	0x4
	.long	.LCFI225-.LCFI224
	.byte	0xe
	.uleb128 0x18
	.byte	0x86
	.uleb128 0x3
	.byte	0x8c
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI226-.LCFI225
	.byte	0xe
	.uleb128 0x20
	.byte	0x83
	.uleb128 0x4
	.align 8
.LEFDE93:
.LSFDE95:
	.long	.LEFDE95-.LASFDE95
.LASFDE95:
	.long	.LASFDE95-.Lframe1
	.quad	.LFB48
	.quad	.LFE48-.LFB48
	.byte	0x4
	.long	.LCFI227-.LFB48
	.byte	0xe
	.uleb128 0x10
	.byte	0x8d
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI228-.LCFI227
	.byte	0xe
	.uleb128 0x18
	.byte	0x8c
	.uleb128 0x3
	.byte	0x4
	.long	.LCFI229-.LCFI228
	.byte	0xe
	.uleb128 0x20
	.byte	0x86
	.uleb128 0x4
	.byte	0x4
	.long	.LCFI230-.LCFI229
	.byte	0xe
	.uleb128 0x28
	.byte	0x4
	.long	.LCFI231-.LCFI230
	.byte	0xe
	.uleb128 0x30
	.byte	0x83
	.uleb128 0x5
	.align 8
.LEFDE95:
.LSFDE97:
	.long	.LEFDE97-.LASFDE97
.LASFDE97:
	.long	.LASFDE97-.Lframe1
	.quad	.LFB49
	.quad	.LFE49-.LFB49
	.align 8
.LEFDE97:
.LSFDE99:
	.long	.LEFDE99-.LASFDE99
.LASFDE99:
	.long	.LASFDE99-.Lframe1
	.quad	.LFB50
	.quad	.LFE50-.LFB50
	.byte	0x4
	.long	.LCFI232-.LFB50
	.byte	0xe
	.uleb128 0x10
	.byte	0x4
	.long	.LCFI233-.LCFI232
	.byte	0xe
	.uleb128 0x18
	.byte	0x4
	.long	.LCFI234-.LCFI233
	.byte	0xe
	.uleb128 0x20
	.byte	0x8d
	.uleb128 0x4
	.byte	0x8e
	.uleb128 0x3
	.byte	0x8f
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI235-.LCFI234
	.byte	0xe
	.uleb128 0x28
	.byte	0x4
	.long	.LCFI236-.LCFI235
	.byte	0xe
	.uleb128 0x30
	.byte	0x86
	.uleb128 0x6
	.byte	0x8c
	.uleb128 0x5
	.byte	0x4
	.long	.LCFI237-.LCFI236
	.byte	0xe
	.uleb128 0x38
	.byte	0x4
	.long	.LCFI238-.LCFI237
	.byte	0xe
	.uleb128 0x850
	.byte	0x83
	.uleb128 0x7
	.align 8
.LEFDE99:
.LSFDE101:
	.long	.LEFDE101-.LASFDE101
.LASFDE101:
	.long	.LASFDE101-.Lframe1
	.quad	.LFB51
	.quad	.LFE51-.LFB51
	.byte	0x4
	.long	.LCFI239-.LFB51
	.byte	0xe
	.uleb128 0x10
	.byte	0x86
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI240-.LCFI239
	.byte	0xd
	.uleb128 0x6
	.byte	0x4
	.long	.LCFI242-.LCFI240
	.byte	0x8e
	.uleb128 0x4
	.byte	0x8f
	.uleb128 0x3
	.byte	0x4
	.long	.LCFI243-.LCFI242
	.byte	0x8d
	.uleb128 0x5
	.byte	0x4
	.long	.LCFI244-.LCFI243
	.byte	0x8c
	.uleb128 0x6
	.byte	0x4
	.long	.LCFI246-.LCFI244
	.byte	0x83
	.uleb128 0x7
	.align 8
.LEFDE101:
.LSFDE103:
	.long	.LEFDE103-.LASFDE103
.LASFDE103:
	.long	.LASFDE103-.Lframe1
	.quad	.LFB52
	.quad	.LFE52-.LFB52
	.byte	0x4
	.long	.LCFI247-.LFB52
	.byte	0xe
	.uleb128 0x10
	.byte	0x4
	.long	.LCFI248-.LCFI247
	.byte	0xe
	.uleb128 0x18
	.byte	0x8e
	.uleb128 0x3
	.byte	0x8f
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI249-.LCFI248
	.byte	0xe
	.uleb128 0x20
	.byte	0x4
	.long	.LCFI250-.LCFI249
	.byte	0xe
	.uleb128 0x28
	.byte	0x8c
	.uleb128 0x5
	.byte	0x8d
	.uleb128 0x4
	.byte	0x4
	.long	.LCFI251-.LCFI250
	.byte	0xe
	.uleb128 0x30
	.byte	0x86
	.uleb128 0x6
	.byte	0x4
	.long	.LCFI252-.LCFI251
	.byte	0xe
	.uleb128 0x38
	.byte	0x4
	.long	.LCFI253-.LCFI252
	.byte	0xe
	.uleb128 0x50
	.byte	0x83
	.uleb128 0x7
	.align 8
.LEFDE103:
.LSFDE105:
	.long	.LEFDE105-.LASFDE105
.LASFDE105:
	.long	.LASFDE105-.Lframe1
	.quad	.LFB53
	.quad	.LFE53-.LFB53
	.byte	0x4
	.long	.LCFI254-.LFB53
	.byte	0xe
	.uleb128 0x10
	.byte	0x86
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI255-.LCFI254
	.byte	0xd
	.uleb128 0x6
	.byte	0x4
	.long	.LCFI258-.LCFI255
	.byte	0x8d
	.uleb128 0x5
	.byte	0x8e
	.uleb128 0x4
	.byte	0x8f
	.uleb128 0x3
	.byte	0x4
	.long	.LCFI260-.LCFI258
	.byte	0x83
	.uleb128 0x7
	.byte	0x8c
	.uleb128 0x6
	.align 8
.LEFDE105:
.LSFDE107:
	.long	.LEFDE107-.LASFDE107
.LASFDE107:
	.long	.LASFDE107-.Lframe1
	.quad	.LFB54
	.quad	.LFE54-.LFB54
	.byte	0x4
	.long	.LCFI262-.LFB54
	.byte	0xe
	.uleb128 0x10
	.byte	0x86
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI263-.LCFI262
	.byte	0xe
	.uleb128 0x18
	.byte	0x4
	.long	.LCFI264-.LCFI263
	.byte	0xe
	.uleb128 0x20
	.byte	0x83
	.uleb128 0x3
	.align 8
.LEFDE107:
.LSFDE109:
	.long	.LEFDE109-.LASFDE109
.LASFDE109:
	.long	.LASFDE109-.Lframe1
	.quad	.LFB55
	.quad	.LFE55-.LFB55
	.byte	0x4
	.long	.LCFI265-.LFB55
	.byte	0xe
	.uleb128 0x20
	.byte	0x4
	.long	.LCFI267-.LCFI265
	.byte	0x86
	.uleb128 0x2
	.byte	0x83
	.uleb128 0x3
	.align 8
.LEFDE109:
.LSFDE111:
	.long	.LEFDE111-.LASFDE111
.LASFDE111:
	.long	.LASFDE111-.Lframe1
	.quad	.LFB56
	.quad	.LFE56-.LFB56
	.byte	0x4
	.long	.LCFI268-.LFB56
	.byte	0xe
	.uleb128 0x20
	.byte	0x4
	.long	.LCFI271-.LCFI268
	.byte	0x8d
	.uleb128 0x2
	.byte	0x83
	.uleb128 0x4
	.byte	0x8c
	.uleb128 0x3
	.align 8
.LEFDE111:
.LSFDE113:
	.long	.LEFDE113-.LASFDE113
.LASFDE113:
	.long	.LASFDE113-.Lframe1
	.quad	.LFB57
	.quad	.LFE57-.LFB57
	.byte	0x4
	.long	.LCFI272-.LFB57
	.byte	0xe
	.uleb128 0x20
	.byte	0x4
	.long	.LCFI274-.LCFI272
	.byte	0x86
	.uleb128 0x2
	.byte	0x83
	.uleb128 0x3
	.align 8
.LEFDE113:
.LSFDE115:
	.long	.LEFDE115-.LASFDE115
.LASFDE115:
	.long	.LASFDE115-.Lframe1
	.quad	.LFB58
	.quad	.LFE58-.LFB58
	.byte	0x4
	.long	.LCFI275-.LFB58
	.byte	0xe
	.uleb128 0x10
	.align 8
.LEFDE115:
.LSFDE117:
	.long	.LEFDE117-.LASFDE117
.LASFDE117:
	.long	.LASFDE117-.Lframe1
	.quad	.LFB59
	.quad	.LFE59-.LFB59
	.align 8
.LEFDE117:
.LSFDE119:
	.long	.LEFDE119-.LASFDE119
.LASFDE119:
	.long	.LASFDE119-.Lframe1
	.quad	.LFB60
	.quad	.LFE60-.LFB60
	.byte	0x4
	.long	.LCFI276-.LFB60
	.byte	0xe
	.uleb128 0x10
	.byte	0x83
	.uleb128 0x2
	.align 8
.LEFDE119:
.LSFDE121:
	.long	.LEFDE121-.LASFDE121
.LASFDE121:
	.long	.LASFDE121-.Lframe1
	.quad	.LFB61
	.quad	.LFE61-.LFB61
	.byte	0x4
	.long	.LCFI277-.LFB61
	.byte	0xe
	.uleb128 0x10
	.byte	0x83
	.uleb128 0x2
	.align 8
.LEFDE121:
.LSFDE123:
	.long	.LEFDE123-.LASFDE123
.LASFDE123:
	.long	.LASFDE123-.Lframe1
	.quad	.LFB62
	.quad	.LFE62-.LFB62
	.byte	0x4
	.long	.LCFI278-.LFB62
	.byte	0xe
	.uleb128 0x10
	.byte	0x4
	.long	.LCFI279-.LCFI278
	.byte	0xe
	.uleb128 0x18
	.byte	0x83
	.uleb128 0x3
	.byte	0x86
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI280-.LCFI279
	.byte	0xe
	.uleb128 0x20
	.align 8
.LEFDE123:
.LSFDE125:
	.long	.LEFDE125-.LASFDE125
.LASFDE125:
	.long	.LASFDE125-.Lframe1
	.quad	.LFB63
	.quad	.LFE63-.LFB63
	.byte	0x4
	.long	.LCFI281-.LFB63
	.byte	0xe
	.uleb128 0x20
	.byte	0x4
	.long	.LCFI283-.LCFI281
	.byte	0x8c
	.uleb128 0x2
	.byte	0x83
	.uleb128 0x3
	.align 8
.LEFDE125:
.LSFDE127:
	.long	.LEFDE127-.LASFDE127
.LASFDE127:
	.long	.LASFDE127-.Lframe1
	.quad	.LFB64
	.quad	.LFE64-.LFB64
	.byte	0x4
	.long	.LCFI284-.LFB64
	.byte	0xe
	.uleb128 0x70
	.byte	0x4
	.long	.LCFI286-.LCFI284
	.byte	0x86
	.uleb128 0x2
	.byte	0x83
	.uleb128 0x3
	.align 8
.LEFDE127:
.LSFDE129:
	.long	.LEFDE129-.LASFDE129
.LASFDE129:
	.long	.LASFDE129-.Lframe1
	.quad	.LFB65
	.quad	.LFE65-.LFB65
	.byte	0x4
	.long	.LCFI287-.LFB65
	.byte	0xe
	.uleb128 0x10
	.byte	0x8e
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI288-.LCFI287
	.byte	0xe
	.uleb128 0x18
	.byte	0x8d
	.uleb128 0x3
	.byte	0x4
	.long	.LCFI289-.LCFI288
	.byte	0xe
	.uleb128 0x20
	.byte	0x8c
	.uleb128 0x4
	.byte	0x4
	.long	.LCFI290-.LCFI289
	.byte	0xe
	.uleb128 0x28
	.byte	0x86
	.uleb128 0x5
	.byte	0x4
	.long	.LCFI291-.LCFI290
	.byte	0xe
	.uleb128 0x30
	.byte	0x83
	.uleb128 0x6
	.align 8
.LEFDE129:
.LSFDE131:
	.long	.LEFDE131-.LASFDE131
.LASFDE131:
	.long	.LASFDE131-.Lframe1
	.quad	.LFB66
	.quad	.LFE66-.LFB66
	.align 8
.LEFDE131:
.LSFDE133:
	.long	.LEFDE133-.LASFDE133
.LASFDE133:
	.long	.LASFDE133-.Lframe1
	.quad	.LFB67
	.quad	.LFE67-.LFB67
	.byte	0x4
	.long	.LCFI292-.LFB67
	.byte	0xe
	.uleb128 0x10
	.byte	0x86
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI293-.LCFI292
	.byte	0xd
	.uleb128 0x6
	.byte	0x4
	.long	.LCFI295-.LCFI293
	.byte	0x8e
	.uleb128 0x4
	.byte	0x8f
	.uleb128 0x3
	.byte	0x4
	.long	.LCFI296-.LCFI295
	.byte	0x8d
	.uleb128 0x5
	.byte	0x4
	.long	.LCFI297-.LCFI296
	.byte	0x8c
	.uleb128 0x6
	.byte	0x4
	.long	.LCFI299-.LCFI297
	.byte	0x83
	.uleb128 0x7
	.align 8
.LEFDE133:
.LSFDE135:
	.long	.LEFDE135-.LASFDE135
.LASFDE135:
	.long	.LASFDE135-.Lframe1
	.quad	.LFB68
	.quad	.LFE68-.LFB68
	.byte	0x4
	.long	.LCFI300-.LFB68
	.byte	0xe
	.uleb128 0x10
	.byte	0x86
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI301-.LCFI300
	.byte	0xd
	.uleb128 0x6
	.byte	0x4
	.long	.LCFI306-.LCFI301
	.byte	0x83
	.uleb128 0x7
	.byte	0x8c
	.uleb128 0x6
	.byte	0x8d
	.uleb128 0x5
	.byte	0x8e
	.uleb128 0x4
	.byte	0x8f
	.uleb128 0x3
	.align 8
.LEFDE135:
.LSFDE137:
	.long	.LEFDE137-.LASFDE137
.LASFDE137:
	.long	.LASFDE137-.Lframe1
	.quad	.LFB69
	.quad	.LFE69-.LFB69
	.byte	0x4
	.long	.LCFI308-.LFB69
	.byte	0xe
	.uleb128 0x10
	.byte	0x8f
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI309-.LCFI308
	.byte	0xe
	.uleb128 0x18
	.byte	0x8e
	.uleb128 0x3
	.byte	0x4
	.long	.LCFI310-.LCFI309
	.byte	0xe
	.uleb128 0x20
	.byte	0x8d
	.uleb128 0x4
	.byte	0x4
	.long	.LCFI311-.LCFI310
	.byte	0xe
	.uleb128 0x28
	.byte	0x4
	.long	.LCFI312-.LCFI311
	.byte	0xe
	.uleb128 0x30
	.byte	0x86
	.uleb128 0x6
	.byte	0x8c
	.uleb128 0x5
	.byte	0x4
	.long	.LCFI313-.LCFI312
	.byte	0xe
	.uleb128 0x38
	.byte	0x4
	.long	.LCFI314-.LCFI313
	.byte	0xe
	.uleb128 0x50
	.byte	0x83
	.uleb128 0x7
	.align 8
.LEFDE137:
.LSFDE139:
	.long	.LEFDE139-.LASFDE139
.LASFDE139:
	.long	.LASFDE139-.Lframe1
	.quad	.LFB70
	.quad	.LFE70-.LFB70
	.byte	0x4
	.long	.LCFI315-.LFB70
	.byte	0xe
	.uleb128 0x10
	.byte	0x8c
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI316-.LCFI315
	.byte	0xe
	.uleb128 0x18
	.byte	0x4
	.long	.LCFI317-.LCFI316
	.byte	0xe
	.uleb128 0x20
	.byte	0x83
	.uleb128 0x4
	.byte	0x86
	.uleb128 0x3
	.align 8
.LEFDE139:
.LSFDE141:
	.long	.LEFDE141-.LASFDE141
.LASFDE141:
	.long	.LASFDE141-.Lframe1
	.quad	.LFB71
	.quad	.LFE71-.LFB71
	.byte	0x4
	.long	.LCFI318-.LFB71
	.byte	0xe
	.uleb128 0x10
	.byte	0x4
	.long	.LCFI319-.LCFI318
	.byte	0xe
	.uleb128 0x18
	.byte	0x86
	.uleb128 0x3
	.byte	0x8c
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI320-.LCFI319
	.byte	0xe
	.uleb128 0x20
	.byte	0x83
	.uleb128 0x4
	.align 8
.LEFDE141:
.LSFDE143:
	.long	.LEFDE143-.LASFDE143
.LASFDE143:
	.long	.LASFDE143-.Lframe1
	.quad	.LFB72
	.quad	.LFE72-.LFB72
	.byte	0x4
	.long	.LCFI321-.LFB72
	.byte	0xe
	.uleb128 0x10
	.align 8
.LEFDE143:
.LSFDE145:
	.long	.LEFDE145-.LASFDE145
.LASFDE145:
	.long	.LASFDE145-.Lframe1
	.quad	.LFB73
	.quad	.LFE73-.LFB73
	.byte	0x4
	.long	.LCFI322-.LFB73
	.byte	0xe
	.uleb128 0x10
	.byte	0x86
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI323-.LCFI322
	.byte	0xd
	.uleb128 0x6
	.byte	0x4
	.long	.LCFI325-.LCFI323
	.byte	0x8e
	.uleb128 0x4
	.byte	0x8f
	.uleb128 0x3
	.byte	0x4
	.long	.LCFI327-.LCFI325
	.byte	0x8c
	.uleb128 0x6
	.byte	0x8d
	.uleb128 0x5
	.byte	0x4
	.long	.LCFI329-.LCFI327
	.byte	0x83
	.uleb128 0x7
	.align 8
.LEFDE145:
.LSFDE147:
	.long	.LEFDE147-.LASFDE147
.LASFDE147:
	.long	.LASFDE147-.Lframe1
	.quad	.LFB74
	.quad	.LFE74-.LFB74
	.byte	0x4
	.long	.LCFI330-.LFB74
	.byte	0xe
	.uleb128 0x10
	.byte	0x8f
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI331-.LCFI330
	.byte	0xe
	.uleb128 0x18
	.byte	0x4
	.long	.LCFI332-.LCFI331
	.byte	0xe
	.uleb128 0x20
	.byte	0x4
	.long	.LCFI333-.LCFI332
	.byte	0xe
	.uleb128 0x28
	.byte	0x8c
	.uleb128 0x5
	.byte	0x8d
	.uleb128 0x4
	.byte	0x8e
	.uleb128 0x3
	.byte	0x4
	.long	.LCFI334-.LCFI333
	.byte	0xe
	.uleb128 0x30
	.byte	0x86
	.uleb128 0x6
	.byte	0x4
	.long	.LCFI335-.LCFI334
	.byte	0xe
	.uleb128 0x38
	.byte	0x4
	.long	.LCFI336-.LCFI335
	.byte	0xe
	.uleb128 0x50
	.byte	0x83
	.uleb128 0x7
	.align 8
.LEFDE147:
.LSFDE149:
	.long	.LEFDE149-.LASFDE149
.LASFDE149:
	.long	.LASFDE149-.Lframe1
	.quad	.LFB75
	.quad	.LFE75-.LFB75
	.byte	0x4
	.long	.LCFI337-.LFB75
	.byte	0xe
	.uleb128 0x10
	.byte	0x8c
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI338-.LCFI337
	.byte	0xe
	.uleb128 0x18
	.byte	0x4
	.long	.LCFI339-.LCFI338
	.byte	0xe
	.uleb128 0x20
	.byte	0x83
	.uleb128 0x4
	.byte	0x86
	.uleb128 0x3
	.align 8
.LEFDE149:
.LSFDE151:
	.long	.LEFDE151-.LASFDE151
.LASFDE151:
	.long	.LASFDE151-.Lframe1
	.quad	.LFB76
	.quad	.LFE76-.LFB76
	.byte	0x4
	.long	.LCFI340-.LFB76
	.byte	0xe
	.uleb128 0x10
	.byte	0x86
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI341-.LCFI340
	.byte	0xd
	.uleb128 0x6
	.byte	0x4
	.long	.LCFI344-.LCFI341
	.byte	0x8d
	.uleb128 0x5
	.byte	0x8e
	.uleb128 0x4
	.byte	0x8f
	.uleb128 0x3
	.byte	0x4
	.long	.LCFI345-.LCFI344
	.byte	0x8c
	.uleb128 0x6
	.byte	0x4
	.long	.LCFI347-.LCFI345
	.byte	0x83
	.uleb128 0x7
	.align 8
.LEFDE151:
.LSFDE153:
	.long	.LEFDE153-.LASFDE153
.LASFDE153:
	.long	.LASFDE153-.Lframe1
	.quad	.LFB77
	.quad	.LFE77-.LFB77
	.byte	0x4
	.long	.LCFI348-.LFB77
	.byte	0xe
	.uleb128 0x10
	.byte	0x8e
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI349-.LCFI348
	.byte	0xe
	.uleb128 0x18
	.byte	0x4
	.long	.LCFI350-.LCFI349
	.byte	0xe
	.uleb128 0x20
	.byte	0x4
	.long	.LCFI351-.LCFI350
	.byte	0xe
	.uleb128 0x28
	.byte	0x4
	.long	.LCFI352-.LCFI351
	.byte	0xe
	.uleb128 0x30
	.byte	0x4
	.long	.LCFI353-.LCFI352
	.byte	0xe
	.uleb128 0x40
	.byte	0x83
	.uleb128 0x6
	.byte	0x86
	.uleb128 0x5
	.byte	0x8c
	.uleb128 0x4
	.byte	0x8d
	.uleb128 0x3
	.align 8
.LEFDE153:
.LSFDE155:
	.long	.LEFDE155-.LASFDE155
.LASFDE155:
	.long	.LASFDE155-.Lframe1
	.quad	.LFB78
	.quad	.LFE78-.LFB78
	.byte	0x4
	.long	.LCFI354-.LFB78
	.byte	0xe
	.uleb128 0x10
	.byte	0x4
	.long	.LCFI355-.LCFI354
	.byte	0xe
	.uleb128 0x18
	.byte	0x8e
	.uleb128 0x3
	.byte	0x8f
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI356-.LCFI355
	.byte	0xe
	.uleb128 0x20
	.byte	0x4
	.long	.LCFI357-.LCFI356
	.byte	0xe
	.uleb128 0x28
	.byte	0x4
	.long	.LCFI358-.LCFI357
	.byte	0xe
	.uleb128 0x30
	.byte	0x4
	.long	.LCFI359-.LCFI358
	.byte	0xe
	.uleb128 0x38
	.byte	0x83
	.uleb128 0x7
	.byte	0x86
	.uleb128 0x6
	.byte	0x8c
	.uleb128 0x5
	.byte	0x8d
	.uleb128 0x4
	.byte	0x4
	.long	.LCFI360-.LCFI359
	.byte	0xe
	.uleb128 0x70
	.align 8
.LEFDE155:
.LSFDE157:
	.long	.LEFDE157-.LASFDE157
.LASFDE157:
	.long	.LASFDE157-.Lframe1
	.quad	.LFB79
	.quad	.LFE79-.LFB79
	.byte	0x4
	.long	.LCFI361-.LFB79
	.byte	0xe
	.uleb128 0x10
	.byte	0x4
	.long	.LCFI362-.LCFI361
	.byte	0xe
	.uleb128 0x18
	.byte	0x8e
	.uleb128 0x3
	.byte	0x8f
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI363-.LCFI362
	.byte	0xe
	.uleb128 0x20
	.byte	0x4
	.long	.LCFI364-.LCFI363
	.byte	0xe
	.uleb128 0x28
	.byte	0x4
	.long	.LCFI365-.LCFI364
	.byte	0xe
	.uleb128 0x30
	.byte	0x86
	.uleb128 0x6
	.byte	0x8c
	.uleb128 0x5
	.byte	0x8d
	.uleb128 0x4
	.byte	0x4
	.long	.LCFI366-.LCFI365
	.byte	0xe
	.uleb128 0x38
	.byte	0x83
	.uleb128 0x7
	.byte	0x4
	.long	.LCFI367-.LCFI366
	.byte	0xe
	.uleb128 0x70
	.align 8
.LEFDE157:
.LSFDE159:
	.long	.LEFDE159-.LASFDE159
.LASFDE159:
	.long	.LASFDE159-.Lframe1
	.quad	.LFB80
	.quad	.LFE80-.LFB80
	.byte	0x4
	.long	.LCFI368-.LFB80
	.byte	0xe
	.uleb128 0x10
	.byte	0x8c
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI369-.LCFI368
	.byte	0xe
	.uleb128 0x18
	.byte	0x4
	.long	.LCFI370-.LCFI369
	.byte	0xe
	.uleb128 0x20
	.byte	0x83
	.uleb128 0x4
	.byte	0x86
	.uleb128 0x3
	.align 8
.LEFDE159:
	.ident	"GCC: (GNU) 3.2"
