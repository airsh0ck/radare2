// 64bit host debugging 32bit binary
return strdup (
"=pc	eip\n"
"=sp	esp\n"
"=bp	ebp\n"
"=a0	eax\n"
"=a1	ebx\n"
"=a2	ecx\n"
"=a3	edi\n"
"=zf	zf\n"
"=sf	sf\n"
"=of	of\n"
"=cf	cf\n"
"=sn	oeax\n"
"gpr	eip	.32	128	0\n"
"gpr	ip	.16	128	0\n"
"gpr	oeax	.32	120	0\n"
"gpr	eax	.32	80	0\n"
"gpr	ax	.16	80	0\n"
"gpr	ah	.8	80	0\n"
"gpr	al	.8	81	0\n"
"gpr	ebx	.32	40	0\n"
"gpr	bx	.16	40	0\n"
"gpr	bh	.8	40	0\n"
"gpr	bl	.8	41	0\n"
"gpr	ecx	.32	88	0\n"
"gpr	cx	.16	88	0\n"
"gpr	ch	.8	88	0\n"
"gpr	cl	.8	89	0\n"
"gpr	edx	.32	96	0\n"
"gpr	dx	.16	96	0\n"
"gpr	dh	.8	96	0\n"
"gpr	dl	.8	97	0\n"
"gpr	esp	.32	152	0\n"
"gpr	sp	.16	152	0\n"
"gpr	ebp	.32	32	0\n"
"gpr	bp	.16	32	0\n"
"gpr	esi	.32	104	0\n"
"gpr	si	.16	104	0\n"
"gpr	edi	.32	112	0\n"
"gpr	di	.16	112	0\n"
"seg	xfs	.32	200	0\n"
"seg	xgs	.32	208	0\n"
"seg	xcs	.32	136	0\n"
"seg	cs	.16	136	0\n"
"seg	xss	.32	160	0\n"
"gpr	flags	.16	144	0\n"
"gpr	eflags	.32	144	0	c1p.a.zstido.n.rv\n"
"gpr	rflags	.64	144	0	c1p.a.zstido.n.rv\n"
"gpr	cf	.1	.1152	0	carry\n"
"gpr	pf	.1	.1154	0	parity\n"
"gpr	af	.1	.1156	0	adjust\n"
"gpr	zf	.1	.1158	0	zero\n"
"gpr	sf	.1	.1159	0	sign\n"
"gpr	tf	.1	.1160	0	trap\n"
"gpr	if	.1	.1161	0	interrupt\n"
"gpr	df	.1	.1162	0	direction\n"
"gpr	of	.1	.1163	0	overflow\n"
#if 0
"drx	dr0	.64	0	0\n"
"drx	dr1	.64	8	0\n"
"drx	dr2	.64	16	0\n"
"drx	dr3	.64	24	0\n"
// dr4 32
// dr5 40
"drx	dr6	.64	48	0\n"
"drx	dr7	.64	56	0\n"
#endif
"drx	dr0	.32	0	0\n"
"drx	dr1	.32	4	0\n"
"drx	dr2	.32	8	0\n"
"drx	dr3	.32	12	0\n"
//"drx	dr4	.32	16	0\n"
//"drx	dr5	.32	20	0\n"
"drx	dr6	.32	24	0\n"
"drx	dr7	.32	28	0\n"
);
