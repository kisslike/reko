#region License
/* 
 * Copyright (C) 1999-2017 John K�ll�n.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; see the file COPYING.  If not, write to
 * the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.
 */
#endregion

namespace Reko.Arch.X86
{
    public enum Opcode : ushort
    {
        illegal,

        aaa,
        aad,
        aam,
        aas,
        adc,
        add,
        addps,
        addpd,
        addss,
        addsd,
        aesimc,
        and,
        arpl,
        bound,
        bsf,
        bsr,
        bswap,
        bt,
        btc,
        btr,
        bts,
        call,
        cbw,
        clc,
        cld,
        clflush,
        cli,
        cmc,
        cmova,
        cmovbe,
        cmovc,
        cmovg,
        cmovge,
        cmovl,
        cmovle,
        cmovnc,
        cmovno,
        cmovns,
        cmovnz,
        cmovo,
        cmovpe,
        cmovpo,
        cmovs,
        cmovz,
        cmp,
        cmps,
        cmpsb,
        cmpxchg,
        cpuid,
        cvttpd2si,
        cvtpi2ps,
        cvtpi2pd,
        cvttps2pi,
        cvttsd2si,
        cvtsi2ss,
        cvtsi2sd,
        cvttss2si,
        cwd,
        daa,
        das,
        dec,
        div,
        divpd,
        divps,
        divsd,
        divss,
        enter,

        f2xm1,
        fabs,
        fadd,
        faddp,
        fbld,
        fbstp,
        fchs,
        fclex,
        fcom,
        fcomp,
        fcompp,
        fcos,
        fdecstp,
        fdiv,
        fdivp,
        fdivr,
        fdivrp,
        ffree,
        fiadd,
        ficom,
        ficomp,
        fidiv,
        fidivr,
        fild,
        fildenv,
        fildcw,
        fimul,
        fincstp,
        fist,
        fistenv,
        fistcw,
        fistp,
        fisub,
        fisubr,
        fld,
        fld1,
        fldcw,
        fldenv,
        fldl2t,
        fldl2e,
        fldlg2,
        fldln2,
        fldpi,
        fldz,
        fnop,
        fmul,
        fmulp,
		fninit,
		fpatan,
        fptan,
        fprem1,
        fprem,
        frndint,
        frstor,
        fsave,
        fscale,
        fsin,
        fsincos,
        fsqrt,
        fst,
        fstcw,
        fstenv,
        fstp,
        fstsw,
        fsub,
        fsubp,
        fsubr,
        fsubrp,
        ftst,
        fucomi,
        fucomip,
        fucompp,
        fxam,
        fxch,
        fxtract,
        fyl2x,
        fyl2xp1,

        hlt,
        idiv,
        imul,
        @in,
        ins,
        insb,
        inc,
        @int,
        into,
        iret,
        ja,
        jbe,
        jc,
        jcxz,
        jg,
        jge,
        jl,
        jle,
        jmp,
        jnc,
        jno,
        jns,
        jnz,
        jo,
        jpe,
        jpo,
        js,
        jz,
        lahf,
        ldmxcsr,
        lds,
        lea,
        leave,
        les,
        lfence,
        lfs,
        lgs,
        lss,
        @lock,
        lods,
        lodsb,
        loop,
        loope,
        loopne,
        mfence,
        mov,
        movapd,
        movaps,
        movd,
        movdqa,
        movhpd, 
        movlhps,
        movq,
        movs,
        movsb,
        movshdup,
        movsd,
        movss,
        movsx,
        movupd,
        movups,
        movzx,
        mul,
        mulpd,
        mulps,
        mulsd,
        mulss,
        neg,
        nop,
        not,
        or,
        @out,
        outs,
        outsb,
        palignr,
        pause,
        pcmpeqb,
        pcmpistri,
        pop,
        popa,
        popf,
        prefetchnta,
        prefetcht0,
        prefetcht1,
        prefetcht2,
        pshufd,
        pshufhw,
        pshuflw,
        pshufw,
        punpcklbw,
        punpcklwd,
        push,
        pusha,
        pushf,
        pxor,
        rcl,
        rcr,
        rdtsc,
        ret,
        retf,
        rol,
        ror,
        sahf,
        sar,
        sbb,
        scas,
        scasb,
        seta,
        setbe,
        setc,
        setg,
        setge,
        setl,
        setle,
        setnc,
        setno,
        setns,
        setnz,
        seto,
        setpe,
        setpo,
        sets,
        setz,
        sfence,
        shl,
        shld,
        shr,
        shrd,
        stc,
        std,
        sti,
        stmxcsr,
        stos,
        stosb,
        sub,
        subpd,
        subps,
        subsd,
        subss,
        syscall,
        sysret,
        test,
        ucomiss,
        ucomisd,
        vmfunc,

        vaddpd,
        vaddsd,
        vcvtsi2sd,
        vcvtsi2ss,
        vmovapd,
        vmovaps,
        vmovsd,
        vmovss,
        vxorpd,
        vxorps,

        wait,
        xadd,
        xchg,
        xend,
        xgetbv,
        xlat,
        xor,
        xorpd,
        xorps,
        xrstor,
        xsaveopt,
        xsetbv,
        xtest,

        // Borland implemented an x87 emulator, and introduced these
        // pseudo-instructions.
        BOR_exp,
        BOR_ln,
    }
}
