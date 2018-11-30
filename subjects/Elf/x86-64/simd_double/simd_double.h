// simd_double.h
// Generated by decompiling simd_double
// using Reko decompiler version 0.8.0.2.

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (898 (fn int32 (int32, (ptr64 (ptr64 char)), (ptr64 (ptr64 char)))) t0898) (A70 (fn void ()) t0A70) (AE0 (fn void ()) t0AE0) (B00 uint64 qw0B00) (200DE8 (arr (ptr64 code)) a200DE8) (200FD8 (ptr64 code) ptr200FD8) (200FE8 word64 qw200FE8) (200FF0 (ptr64 code) ptr200FF0) (200FF8 word64 qw200FF8) (201048 byte b201048))
	globals_t (in globals : (ptr64 (struct "Globals")))
Eq_10: (fn void ())
	T_10 (in rdx : (ptr64 Eq_10))
	T_26 (in rtld_fini : (ptr64 (fn void ())))
Eq_11: (union "Eq_11" (int32 u0) (word64 u1))
	T_11 (in qwArg00 : Eq_11)
	T_22 (in argc : int32)
Eq_12: (fn void (ptr64))
	T_12 (in __align : ptr64)
	T_13 (in signature of __align : void)
	T_122 (in __align : ptr64)
Eq_19: (fn int32 ((ptr64 Eq_21), Eq_11, (ptr64 (ptr64 char)), (ptr64 Eq_24), (ptr64 Eq_25), (ptr64 Eq_10), (ptr64 void)))
	T_19 (in __libc_start_main : ptr64)
	T_20 (in signature of __libc_start_main : void)
Eq_21: (fn int32 (int32, (ptr64 (ptr64 char)), (ptr64 (ptr64 char))))
	T_21 (in main : (ptr64 (fn int32 (int32, (ptr64 (ptr64 char)), (ptr64 (ptr64 char))))))
	T_28 (in 0000000000000898 : ptr64)
Eq_24: (fn void ())
	T_24 (in init : (ptr64 (fn void ())))
	T_30 (in 0000000000000A70 : ptr64)
Eq_25: (fn void ())
	T_25 (in fini : (ptr64 (fn void ())))
	T_31 (in 0000000000000AE0 : ptr64)
Eq_33: (fn void ())
	T_33 (in __hlt : ptr64)
	T_34 (in signature of __hlt : void)
Eq_47: (union "Eq_47" (int64 u0) (ptr64 u1))
	T_47 (in 0000000000201048 : ptr64)
Eq_48: (union "Eq_48" (int64 u0) (ptr64 u1))
	T_48 (in 0000000000201048 : ptr64)
Eq_50: (union "Eq_50" (int64 u0) (uint64 u1))
	T_50 (in rsi_13 : Eq_50)
	T_56 (in (rsi_8 >> 0x0000000000000003) + ((rsi_8 >> 0x0000000000000003) >> 0x000000000000003F) : word64)
Eq_53: (union "Eq_53" (int64 u0) (uint64 u1))
	T_53 (in rsi_8 >> 0x0000000000000003 : word64)
Eq_76: (fn void (ptr64))
	T_76 (in deregister_tm_clones : ptr64)
	T_77 (in signature of deregister_tm_clones : void)
Eq_88: (fn void (word64))
	T_88 (in register_tm_clones : ptr64)
	T_89 (in signature of register_tm_clones : void)
Eq_94: (union "Eq_94" (ui64 u0) (size_t u1))
	T_94 (in rdi : Eq_94)
	T_103 (in size : size_t)
	T_142 (in 0x0000000000002000 : ui64)
	T_148 (in 0x0000000000002000 : ui64)
	T_154 (in 0x0000000000002000 : ui64)
Eq_101: (fn (ptr64 void) (Eq_94))
	T_101 (in malloc : ptr64)
	T_102 (in signature of malloc : void)
Eq_117: (fn void ((ptr64 (arr real64))))
	T_117 (in free : ptr64)
	T_118 (in signature of free : void)
Eq_134: (union "Eq_134" (word128 u0) ((arr word64 2) u1))
	T_134 (in xmm0 : Eq_134)
	T_181 (in DPB(xmm0, v26_66 + v26_66, 0) : word128)
	T_183 (in DPB(xmm0, (real64) qwLoc10_199, 0) : word128)
	T_214 (in DPB(xmm0, v19_102 + v19_102, 0) : word128)
	T_217 (in DPB(xmm0, (real64) (qwLoc18_205 + 0x0000000000000001), 0) : word128)
	T_226 (in  : (arr word64 2))
	T_227 (in  : (arr word64 2))
	T_228 (in __xorpd(xmm0, xmm0) : (arr word64 2))
Eq_136: (fn (ptr64 (arr real64)) (ptr64, uint64, Eq_94))
	T_136 (in _mm_malloc : ptr64)
	T_137 (in signature of _mm_malloc : void)
	T_145 (in _mm_malloc : ptr64)
	T_151 (in _mm_malloc : ptr64)
Eq_156: (union "Eq_156" (int64 u0) (uint64 u1))
	T_156 (in qwLoc10_199 : Eq_156)
	T_157 (in 0x0000000000000000 : word64)
	T_158 (in 0x0000000000000400 : word64)
	T_166 (in 0x0000000000000000 : word64)
	T_189 (in qwLoc10_199 + 0x0000000000000001 : word64)
Eq_168: (union "Eq_168" (int64 u0) (uint64 u1))
	T_168 (in qwLoc18_205 : Eq_168)
	T_169 (in 0x0000000000000000 : word64)
	T_170 (in 0x0000000000000400 : word64)
	T_198 (in 0x0000000000000001 : word64)
	T_223 (in qwLoc18_205 + 0x0000000000000001 : word64)
Eq_188: (union "Eq_188" (int64 u0) (uint64 u1))
	T_188 (in 0x0000000000000001 : word64)
Eq_191: (union "Eq_191" (int64 u0) (uint64 u1))
	T_191 (in 0x0000000000000001 : word64)
Eq_205: (union "Eq_205" (int64 u0) (uint64 u1))
	T_205 (in qwLoc18_205 + 0x0000000000000001 : word64)
Eq_215: (union "Eq_215" (int64 u0) (uint64 u1))
	T_215 (in qwLoc18_205 + 0x0000000000000001 : word64)
Eq_222: (union "Eq_222" (int64 u0) (uint64 u1))
	T_222 (in 0x0000000000000001 : word64)
Eq_224: (fn Eq_134 (Eq_134, Eq_134))
	T_224 (in __xorpd : ptr64)
	T_225 (in signature of __xorpd : void)
Eq_235: (fn void (word64))
	T_235 (in vec_add : ptr64)
	T_236 (in signature of vec_add : void)
Eq_243: (fn int32 ((ptr64 char), word32))
	T_243 (in printf : ptr64)
	T_244 (in signature of printf : void)
Eq_252: (fn void ((ptr64 (arr real64))))
	T_252 (in _mm_free : ptr64)
	T_253 (in signature of _mm_free : void)
	T_255 (in _mm_free : ptr64)
	T_257 (in _mm_free : ptr64)
Eq_275: (union "Eq_275" (int64 u0) (ptr64 u1))
	T_275 (in 0000000000200DF0 : ptr64)
Eq_276: (union "Eq_276" (int64 u0) (ptr64 u1))
	T_276 (in 0000000000200DE8 : ptr64)
Eq_279: (fn word64 ())
	T_279 (in _init : ptr64)
	T_280 (in signature of _init : void)
Eq_286: (union "Eq_286" (int64 u0) (uint64 u1))
	T_286 (in rbx_41 : Eq_286)
	T_287 (in 0x0000000000000000 : uint64)
	T_294 (in rbx_41 + 0x0000000000000001 : word64)
	T_295 (in rbp_29 >> 0x0000000000000003 : word64)
// Type Variables ////////////
globals_t: (in globals : (ptr64 (struct "Globals")))
  Class: Eq_1
  DataType: (ptr64 Eq_1)
  OrigDataType: (ptr64 (struct "Globals"))
T_2: (in rax : word64)
  Class: Eq_2
  DataType: word64
  OrigDataType: word64
T_3: (in rax_16 : word64)
  Class: Eq_2
  DataType: word64
  OrigDataType: word64
T_4: (in 0000000000200FE8 : ptr64)
  Class: Eq_4
  DataType: (ptr64 word64)
  OrigDataType: (ptr64 (struct (0 T_5 t0000)))
T_5: (in Mem0[0x0000000000200FE8:word64] : word64)
  Class: Eq_2
  DataType: word64
  OrigDataType: word64
T_6: (in 0x0000000000000000 : word64)
  Class: Eq_2
  DataType: word64
  OrigDataType: word64
T_7: (in rax_16 == 0x0000000000000000 : bool)
  Class: Eq_7
  DataType: bool
  OrigDataType: bool
T_8: (in __gmon_start__ : ptr64)
  Class: Eq_8
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_9: (in signature of __gmon_start__ : void)
  Class: Eq_9
  DataType: Eq_9
  OrigDataType: 
T_10: (in rdx : (ptr64 Eq_10))
  Class: Eq_10
  DataType: (ptr64 Eq_10)
  OrigDataType: (ptr64 (fn void ()))
T_11: (in qwArg00 : Eq_11)
  Class: Eq_11
  DataType: Eq_11
  OrigDataType: (union (int32 u1) (word64 u0))
T_12: (in __align : ptr64)
  Class: Eq_12
  DataType: (ptr64 Eq_12)
  OrigDataType: (ptr64 (fn T_18 (T_17)))
T_13: (in signature of __align : void)
  Class: Eq_12
  DataType: (ptr64 Eq_12)
  OrigDataType: 
T_14: (in  : word64)
  Class: Eq_14
  DataType: ptr64
  OrigDataType: 
T_15: (in fp : ptr64)
  Class: Eq_15
  DataType: (ptr64 void)
  OrigDataType: (ptr64 void)
T_16: (in 8 : int64)
  Class: Eq_16
  DataType: int64
  OrigDataType: int64
T_17: (in fp + 8 : word64)
  Class: Eq_14
  DataType: ptr64
  OrigDataType: ptr64
T_18: (in __align((char *) fp + 8) : void)
  Class: Eq_18
  DataType: void
  OrigDataType: void
T_19: (in __libc_start_main : ptr64)
  Class: Eq_19
  DataType: (ptr64 Eq_19)
  OrigDataType: (ptr64 (fn T_32 (T_28, T_11, T_29, T_30, T_31, T_10, T_15)))
T_20: (in signature of __libc_start_main : void)
  Class: Eq_19
  DataType: (ptr64 Eq_19)
  OrigDataType: 
T_21: (in main : (ptr64 (fn int32 (int32, (ptr64 (ptr64 char)), (ptr64 (ptr64 char))))))
  Class: Eq_21
  DataType: (ptr64 Eq_21)
  OrigDataType: 
T_22: (in argc : int32)
  Class: Eq_11
  DataType: Eq_11
  OrigDataType: 
T_23: (in ubp_av : (ptr64 (ptr64 char)))
  Class: Eq_23
  DataType: (ptr64 (ptr64 char))
  OrigDataType: 
T_24: (in init : (ptr64 (fn void ())))
  Class: Eq_24
  DataType: (ptr64 Eq_24)
  OrigDataType: 
T_25: (in fini : (ptr64 (fn void ())))
  Class: Eq_25
  DataType: (ptr64 Eq_25)
  OrigDataType: 
T_26: (in rtld_fini : (ptr64 (fn void ())))
  Class: Eq_10
  DataType: (ptr64 Eq_10)
  OrigDataType: 
T_27: (in stack_end : (ptr64 void))
  Class: Eq_15
  DataType: (ptr64 void)
  OrigDataType: 
T_28: (in 0000000000000898 : ptr64)
  Class: Eq_21
  DataType: (ptr64 Eq_21)
  OrigDataType: (ptr64 (fn int32 (int32, (ptr64 (ptr64 char)), (ptr64 (ptr64 char)))))
T_29: (in fp + 8 : word64)
  Class: Eq_23
  DataType: (ptr64 (ptr64 char))
  OrigDataType: (ptr64 (ptr64 char))
T_30: (in 0000000000000A70 : ptr64)
  Class: Eq_24
  DataType: (ptr64 Eq_24)
  OrigDataType: (ptr64 (fn void ()))
T_31: (in 0000000000000AE0 : ptr64)
  Class: Eq_25
  DataType: (ptr64 Eq_25)
  OrigDataType: (ptr64 (fn void ()))
T_32: (in __libc_start_main(&globals->t0898, qwArg00, (char *) fp + 8, &globals->t0A70, &globals->t0AE0, rdx, fp) : int32)
  Class: Eq_32
  DataType: int32
  OrigDataType: int32
T_33: (in __hlt : ptr64)
  Class: Eq_33
  DataType: (ptr64 Eq_33)
  OrigDataType: (ptr64 (fn T_35 ()))
T_34: (in signature of __hlt : void)
  Class: Eq_33
  DataType: (ptr64 Eq_33)
  OrigDataType: 
T_35: (in __hlt() : void)
  Class: Eq_35
  DataType: void
  OrigDataType: void
T_36: (in rbp : ptr64)
  Class: Eq_36
  DataType: ptr64
  OrigDataType: word64
T_37: (in 0000000000201048 : ptr64)
  Class: Eq_37
  DataType: ptr64
  OrigDataType: ptr64
T_38: (in 0000000000201048 : ptr64)
  Class: Eq_37
  DataType: ptr64
  OrigDataType: ptr64
T_39: (in 0x0000000000201048 == 0x0000000000201048 : bool)
  Class: Eq_39
  DataType: bool
  OrigDataType: bool
T_40: (in rax_11 : (ptr64 code))
  Class: Eq_40
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_41: (in 0000000000200FD8 : ptr64)
  Class: Eq_41
  DataType: (ptr64 (ptr64 code))
  OrigDataType: (ptr64 (struct (0 T_42 t0000)))
T_42: (in Mem6[0x0000000000200FD8:word64] : word64)
  Class: Eq_40
  DataType: (ptr64 code)
  OrigDataType: word64
T_43: (in 0x0000000000000000 : word64)
  Class: Eq_40
  DataType: (ptr64 code)
  OrigDataType: word64
T_44: (in rax_11 == null : bool)
  Class: Eq_44
  DataType: bool
  OrigDataType: bool
T_45: (in rbp : word64)
  Class: Eq_45
  DataType: word64
  OrigDataType: word64
T_46: (in rsi_8 : int64)
  Class: Eq_46
  DataType: int64
  OrigDataType: int64
T_47: (in 0000000000201048 : ptr64)
  Class: Eq_47
  DataType: int64
  OrigDataType: (union (int64 u0) (ptr64 u1))
T_48: (in 0000000000201048 : ptr64)
  Class: Eq_48
  DataType: int64
  OrigDataType: (union (int64 u1) (ptr64 u0))
T_49: (in 0x0000000000201048 - 0x0000000000201048 : word64)
  Class: Eq_46
  DataType: int64
  OrigDataType: int64
T_50: (in rsi_13 : Eq_50)
  Class: Eq_50
  DataType: Eq_50
  OrigDataType: (union (int64 u1) (uint64 u0))
T_51: (in 0x0000000000000003 : word64)
  Class: Eq_51
  DataType: word64
  OrigDataType: word64
T_52: (in rsi_8 >> 0x0000000000000003 : word64)
  Class: Eq_52
  DataType: int64
  OrigDataType: int64
T_53: (in rsi_8 >> 0x0000000000000003 : word64)
  Class: Eq_53
  DataType: Eq_53
  OrigDataType: (union (int64 u0) (uint64 u1))
T_54: (in 0x000000000000003F : word64)
  Class: Eq_54
  DataType: word64
  OrigDataType: word64
T_55: (in rsi_8 >> 0x0000000000000003 >> 0x000000000000003F : word64)
  Class: Eq_55
  DataType: uint64
  OrigDataType: uint64
T_56: (in (rsi_8 >> 0x0000000000000003) + ((rsi_8 >> 0x0000000000000003) >> 0x000000000000003F) : word64)
  Class: Eq_50
  DataType: Eq_50
  OrigDataType: uint64
T_57: (in 0x0000000000000001 : word64)
  Class: Eq_57
  DataType: word64
  OrigDataType: word64
T_58: (in rsi_13 >> 0x0000000000000001 : word64)
  Class: Eq_58
  DataType: int64
  OrigDataType: int64
T_59: (in 0x0000000000000000 : word64)
  Class: Eq_58
  DataType: int64
  OrigDataType: word64
T_60: (in rsi_13 >> 0x0000000000000001 == 0x0000000000000000 : bool)
  Class: Eq_60
  DataType: bool
  OrigDataType: bool
T_61: (in rax_17 : (ptr64 code))
  Class: Eq_61
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_62: (in 0000000000200FF0 : ptr64)
  Class: Eq_62
  DataType: (ptr64 (ptr64 code))
  OrigDataType: (ptr64 (struct (0 T_63 t0000)))
T_63: (in Mem7[0x0000000000200FF0:word64] : word64)
  Class: Eq_61
  DataType: (ptr64 code)
  OrigDataType: word64
T_64: (in 0x0000000000000000 : word64)
  Class: Eq_61
  DataType: (ptr64 code)
  OrigDataType: word64
T_65: (in rax_17 == null : bool)
  Class: Eq_65
  DataType: bool
  OrigDataType: bool
T_66: (in rax : word64)
  Class: Eq_66
  DataType: word64
  OrigDataType: word64
T_67: (in rbp : word64)
  Class: Eq_67
  DataType: word64
  OrigDataType: word64
T_68: (in 0000000000201048 : ptr64)
  Class: Eq_68
  DataType: (ptr64 byte)
  OrigDataType: (ptr64 (struct (0 T_69 t0000)))
T_69: (in Mem0[0x0000000000201048:byte] : byte)
  Class: Eq_69
  DataType: byte
  OrigDataType: byte
T_70: (in 0x00 : byte)
  Class: Eq_69
  DataType: byte
  OrigDataType: byte
T_71: (in globals->b201048 != 0x00 : bool)
  Class: Eq_71
  DataType: bool
  OrigDataType: bool
T_72: (in 0000000000200FF8 : ptr64)
  Class: Eq_72
  DataType: (ptr64 word64)
  OrigDataType: (ptr64 (struct (0 T_73 t0000)))
T_73: (in Mem0[0x0000000000200FF8:word64] : word64)
  Class: Eq_73
  DataType: word64
  OrigDataType: word64
T_74: (in 0x0000000000000000 : word64)
  Class: Eq_73
  DataType: word64
  OrigDataType: word64
T_75: (in globals->qw200FF8 == 0x0000000000000000 : bool)
  Class: Eq_75
  DataType: bool
  OrigDataType: bool
T_76: (in deregister_tm_clones : ptr64)
  Class: Eq_76
  DataType: (ptr64 Eq_76)
  OrigDataType: (ptr64 (fn T_81 (T_80)))
T_77: (in signature of deregister_tm_clones : void)
  Class: Eq_76
  DataType: (ptr64 Eq_76)
  OrigDataType: 
T_78: (in fp : ptr64)
  Class: Eq_78
  DataType: ptr64
  OrigDataType: ptr64
T_79: (in 8 : int64)
  Class: Eq_79
  DataType: int64
  OrigDataType: int64
T_80: (in fp - 8 : word64)
  Class: Eq_36
  DataType: ptr64
  OrigDataType: ptr64
T_81: (in deregister_tm_clones(fp - 8) : void)
  Class: Eq_81
  DataType: void
  OrigDataType: void
T_82: (in 0x01 : byte)
  Class: Eq_69
  DataType: byte
  OrigDataType: byte
T_83: (in 0000000000201048 : ptr64)
  Class: Eq_83
  DataType: (ptr64 byte)
  OrigDataType: (ptr64 (struct (0 T_84 t0000)))
T_84: (in Mem22[0x0000000000201048:byte] : byte)
  Class: Eq_69
  DataType: byte
  OrigDataType: byte
T_85: (in __cxa_finalize : ptr64)
  Class: Eq_85
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_86: (in signature of __cxa_finalize : void)
  Class: Eq_86
  DataType: Eq_86
  OrigDataType: 
T_87: (in rbp : word64)
  Class: Eq_45
  DataType: word64
  OrigDataType: word64
T_88: (in register_tm_clones : ptr64)
  Class: Eq_88
  DataType: (ptr64 Eq_88)
  OrigDataType: (ptr64 (fn T_90 (T_87)))
T_89: (in signature of register_tm_clones : void)
  Class: Eq_88
  DataType: (ptr64 Eq_88)
  OrigDataType: 
T_90: (in register_tm_clones(rbp) : void)
  Class: Eq_90
  DataType: void
  OrigDataType: void
T_91: (in rax : (ptr64 void))
  Class: Eq_91
  DataType: (ptr64 void)
  OrigDataType: word64
T_92: (in rbp : ptr64)
  Class: Eq_92
  DataType: ptr64
  OrigDataType: word64
T_93: (in rsi : uint64)
  Class: Eq_93
  DataType: uint64
  OrigDataType: word64
T_94: (in rdi : Eq_94)
  Class: Eq_94
  DataType: Eq_94
  OrigDataType: (union (word64 u0) (size_t u1))
T_95: (in rax_39 : (ptr64 void))
  Class: Eq_91
  DataType: (ptr64 void)
  OrigDataType: (ptr64 void)
T_96: (in qwLoc28_51 : uint64)
  Class: Eq_93
  DataType: uint64
  OrigDataType: word64
T_97: (in 0x0000000000000001 : word64)
  Class: Eq_93
  DataType: uint64
  OrigDataType: word64
T_98: (in rsi != 0x0000000000000001 : bool)
  Class: Eq_98
  DataType: bool
  OrigDataType: bool
T_99: (in 0x0000000000000002 : word64)
  Class: Eq_93
  DataType: uint64
  OrigDataType: word64
T_100: (in rsi == 0x0000000000000002 : bool)
  Class: Eq_100
  DataType: bool
  OrigDataType: bool
T_101: (in malloc : ptr64)
  Class: Eq_101
  DataType: (ptr64 Eq_101)
  OrigDataType: (ptr64 (fn T_104 (T_94)))
T_102: (in signature of malloc : void)
  Class: Eq_101
  DataType: (ptr64 Eq_101)
  OrigDataType: 
T_103: (in size : size_t)
  Class: Eq_94
  DataType: Eq_94
  OrigDataType: 
T_104: (in malloc(rdi) : (ptr64 void))
  Class: Eq_91
  DataType: (ptr64 void)
  OrigDataType: (ptr64 void)
T_105: (in 0x0000000000000008 : word64)
  Class: Eq_93
  DataType: uint64
  OrigDataType: word64
T_106: (in 0x0000000000000004 : word64)
  Class: Eq_93
  DataType: uint64
  OrigDataType: word64
T_107: (in rsi != 0x0000000000000004 : bool)
  Class: Eq_107
  DataType: bool
  OrigDataType: bool
T_108: (in rax_31 : word64)
  Class: Eq_108
  DataType: word64
  OrigDataType: word64
T_109: (in posix_memalign : ptr64)
  Class: Eq_109
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_110: (in signature of posix_memalign : void)
  Class: Eq_110
  DataType: Eq_110
  OrigDataType: 
T_111: (in (word32) rax_31 : word32)
  Class: Eq_111
  DataType: word32
  OrigDataType: word32
T_112: (in 0x00000000 : word32)
  Class: Eq_111
  DataType: word32
  OrigDataType: word32
T_113: (in (word32) rax_31 != 0x00000000 : bool)
  Class: Eq_113
  DataType: bool
  OrigDataType: bool
T_114: (in 0x0000000000000000 : uint64)
  Class: Eq_91
  DataType: (ptr64 void)
  OrigDataType: uint64
T_115: (in qwLoc10 : word64)
  Class: Eq_91
  DataType: (ptr64 void)
  OrigDataType: word64
T_116: (in rdi : (ptr64 (arr real64)))
  Class: Eq_116
  DataType: (ptr64 (arr real64))
  OrigDataType: (ptr64 void)
T_117: (in free : ptr64)
  Class: Eq_117
  DataType: (ptr64 Eq_117)
  OrigDataType: (ptr64 (fn T_120 (T_116)))
T_118: (in signature of free : void)
  Class: Eq_117
  DataType: (ptr64 Eq_117)
  OrigDataType: 
T_119: (in p : (ptr64 void))
  Class: Eq_116
  DataType: (ptr64 (arr real64))
  OrigDataType: 
T_120: (in free(rdi) : void)
  Class: Eq_120
  DataType: void
  OrigDataType: void
T_121: (in rdi : word64)
  Class: Eq_121
  DataType: word64
  OrigDataType: word64
T_122: (in __align : ptr64)
  Class: Eq_12
  DataType: (ptr64 Eq_12)
  OrigDataType: (ptr64 (fn T_124 (T_123)))
T_123: (in fp : ptr64)
  Class: Eq_14
  DataType: ptr64
  OrigDataType: ptr64
T_124: (in __align(fp) : void)
  Class: Eq_18
  DataType: void
  OrigDataType: void
T_125: (in rax_29 : uint64)
  Class: Eq_125
  DataType: uint64
  OrigDataType: uint64
T_126: (in (uint64) rdi : uint64)
  Class: Eq_126
  DataType: uint64
  OrigDataType: uint64
T_127: (in (uint128) (uint64) rdi : uint128)
  Class: Eq_127
  DataType: uint128
  OrigDataType: uint128
T_128: (in 0000000000000B00 : ptr64)
  Class: Eq_128
  DataType: (ptr64 uint64)
  OrigDataType: (ptr64 (struct (0 T_129 t0000)))
T_129: (in Mem22[0x0000000000000B00:word64] : word64)
  Class: Eq_129
  DataType: uint64
  OrigDataType: uint64
T_130: (in (uint128) (uint64) rdi /u globals->qw0B00 : word64)
  Class: Eq_130
  DataType: uint64
  OrigDataType: uint64
T_131: (in (uint64) ((uint128) (uint64) rdi /u Mem22[0x0000000000000B00:word64]) : uint64)
  Class: Eq_125
  DataType: uint64
  OrigDataType: uint64
T_132: (in 0x0000000000000000 : word64)
  Class: Eq_125
  DataType: uint64
  OrigDataType: up64
T_133: (in rax_29 > 0x0000000000000000 : bool)
  Class: Eq_133
  DataType: bool
  OrigDataType: bool
T_134: (in xmm0 : Eq_134)
  Class: Eq_134
  DataType: Eq_134
  OrigDataType: (union (word128 u0) ((arr word64 2) u1))
T_135: (in rax_14 : (arr real64))
  Class: Eq_116
  DataType: (ptr64 (arr real64))
  OrigDataType: word64
T_136: (in _mm_malloc : ptr64)
  Class: Eq_136
  DataType: (ptr64 Eq_136)
  OrigDataType: (ptr64 (fn T_143 (T_140, T_141, T_142)))
T_137: (in signature of _mm_malloc : void)
  Class: Eq_136
  DataType: (ptr64 Eq_136)
  OrigDataType: 
T_138: (in fp : ptr64)
  Class: Eq_138
  DataType: ptr64
  OrigDataType: ptr64
T_139: (in 8 : int64)
  Class: Eq_139
  DataType: int64
  OrigDataType: int64
T_140: (in fp - 8 : word64)
  Class: Eq_92
  DataType: ptr64
  OrigDataType: ptr64
T_141: (in 0x0000000000000020 : uint64)
  Class: Eq_93
  DataType: uint64
  OrigDataType: uint64
T_142: (in 0x0000000000002000 : ui64)
  Class: Eq_94
  DataType: ui64
  OrigDataType: ui64
T_143: (in _mm_malloc(fp - 8, 0x0000000000000020, 0x0000000000002000) : word64)
  Class: Eq_116
  DataType: (ptr64 (arr real64))
  OrigDataType: word64
T_144: (in rax_26 : (arr real64))
  Class: Eq_116
  DataType: (ptr64 (arr real64))
  OrigDataType: word64
T_145: (in _mm_malloc : ptr64)
  Class: Eq_136
  DataType: (ptr64 Eq_136)
  OrigDataType: (ptr64 (fn T_149 (T_146, T_147, T_148)))
T_146: (in fp - 8 : word64)
  Class: Eq_92
  DataType: ptr64
  OrigDataType: ptr64
T_147: (in 0x0000000000000020 : uint64)
  Class: Eq_93
  DataType: uint64
  OrigDataType: uint64
T_148: (in 0x0000000000002000 : ui64)
  Class: Eq_94
  DataType: ui64
  OrigDataType: ui64
T_149: (in _mm_malloc(fp - 8, 0x0000000000000020, 0x0000000000002000) : word64)
  Class: Eq_116
  DataType: (ptr64 (arr real64))
  OrigDataType: word64
T_150: (in rax_38 : (arr real64))
  Class: Eq_116
  DataType: (ptr64 (arr real64))
  OrigDataType: (ptr64 (struct (0 (arr T_297) a0000)))
T_151: (in _mm_malloc : ptr64)
  Class: Eq_136
  DataType: (ptr64 Eq_136)
  OrigDataType: (ptr64 (fn T_155 (T_152, T_153, T_154)))
T_152: (in fp - 8 : word64)
  Class: Eq_92
  DataType: ptr64
  OrigDataType: ptr64
T_153: (in 0x0000000000000020 : uint64)
  Class: Eq_93
  DataType: uint64
  OrigDataType: uint64
T_154: (in 0x0000000000002000 : ui64)
  Class: Eq_94
  DataType: ui64
  OrigDataType: ui64
T_155: (in _mm_malloc(fp - 8, 0x0000000000000020, 0x0000000000002000) : word64)
  Class: Eq_116
  DataType: (ptr64 (arr real64))
  OrigDataType: word64
T_156: (in qwLoc10_199 : Eq_156)
  Class: Eq_156
  DataType: Eq_156
  OrigDataType: word64
T_157: (in 0x0000000000000000 : word64)
  Class: Eq_156
  DataType: int64
  OrigDataType: word64
T_158: (in 0x0000000000000400 : word64)
  Class: Eq_156
  DataType: int64
  OrigDataType: up64
T_159: (in qwLoc10_199 < 0x0000000000000400 : bool)
  Class: Eq_159
  DataType: bool
  OrigDataType: bool
T_160: (in rcx_54 : (ptr64 real64))
  Class: Eq_160
  DataType: (ptr64 real64)
  OrigDataType: (ptr64 (struct (0 T_187 t0000)))
T_161: (in 0x0000000000000008 : word64)
  Class: Eq_161
  DataType: ui64
  OrigDataType: ui64
T_162: (in qwLoc10_199 * 0x0000000000000008 : word64)
  Class: Eq_162
  DataType: ui64
  OrigDataType: ui64
T_163: (in qwLoc10_199 * 0x0000000000000008 + rax_14 : word64)
  Class: Eq_160
  DataType: (ptr64 real64)
  OrigDataType: ui64
T_164: (in eax_61 : ui32)
  Class: Eq_164
  DataType: ui32
  OrigDataType: ui32
T_165: (in (word32) qwLoc10_199 : word32)
  Class: Eq_164
  DataType: ui32
  OrigDataType: word32
T_166: (in 0x0000000000000000 : word64)
  Class: Eq_156
  DataType: int64
  OrigDataType: int64
T_167: (in qwLoc10_199 < 0x0000000000000000 : bool)
  Class: Eq_167
  DataType: bool
  OrigDataType: bool
T_168: (in qwLoc18_205 : Eq_168)
  Class: Eq_168
  DataType: Eq_168
  OrigDataType: word64
T_169: (in 0x0000000000000000 : word64)
  Class: Eq_168
  DataType: int64
  OrigDataType: word64
T_170: (in 0x0000000000000400 : word64)
  Class: Eq_168
  DataType: int64
  OrigDataType: up64
T_171: (in qwLoc18_205 < 0x0000000000000400 : bool)
  Class: Eq_171
  DataType: bool
  OrigDataType: bool
T_172: (in v26_66 : real64)
  Class: Eq_172
  DataType: real64
  OrigDataType: real64
T_173: (in 0x0000000000000001 : word64)
  Class: Eq_173
  DataType: word64
  OrigDataType: word64
T_174: (in qwLoc10_199 >> 0x0000000000000001 : word64)
  Class: Eq_174
  DataType: uint64
  OrigDataType: uint64
T_175: (in 0x00000001 : word32)
  Class: Eq_175
  DataType: ui32
  OrigDataType: ui32
T_176: (in eax_61 & 0x00000001 : word32)
  Class: Eq_176
  DataType: ui32
  OrigDataType: ui32
T_177: (in (uint64) (eax_61 & 0x00000001) : uint64)
  Class: Eq_177
  DataType: uint64
  OrigDataType: uint64
T_178: (in qwLoc10_199 >> 0x0000000000000001 | (uint64) (eax_61 & 0x00000001) : word64)
  Class: Eq_178
  DataType: ui64
  OrigDataType: ui64
T_179: (in (real64) (qwLoc10_199 >>u 0x0000000000000001 | (uint64) (eax_61 & 0x00000001)) : real64)
  Class: Eq_172
  DataType: real64
  OrigDataType: real64
T_180: (in v26_66 + v26_66 : real64)
  Class: Eq_180
  DataType: real64
  OrigDataType: real64
T_181: (in DPB(xmm0, v26_66 + v26_66, 0) : word128)
  Class: Eq_134
  DataType: Eq_134
  OrigDataType: word128
T_182: (in (real64) qwLoc10_199 : real64)
  Class: Eq_182
  DataType: real64
  OrigDataType: real64
T_183: (in DPB(xmm0, (real64) qwLoc10_199, 0) : word128)
  Class: Eq_134
  DataType: Eq_134
  OrigDataType: word128
T_184: (in (real64) xmm0 : real64)
  Class: Eq_184
  DataType: real64
  OrigDataType: real64
T_185: (in 0x0000000000000000 : word64)
  Class: Eq_185
  DataType: word64
  OrigDataType: word64
T_186: (in rcx_54 + 0x0000000000000000 : word64)
  Class: Eq_186
  DataType: ui64
  OrigDataType: ui64
T_187: (in Mem75[rcx_54 + 0x0000000000000000:real64] : real64)
  Class: Eq_184
  DataType: real64
  OrigDataType: real64
T_188: (in 0x0000000000000001 : word64)
  Class: Eq_188
  DataType: int64
  OrigDataType: (union (int64 u1) (uint64 u0))
T_189: (in qwLoc10_199 + 0x0000000000000001 : word64)
  Class: Eq_156
  DataType: Eq_156
  OrigDataType: (union (int64 u1) (uint64 u0))
T_190: (in eax_97 : ui32)
  Class: Eq_190
  DataType: ui32
  OrigDataType: ui32
T_191: (in 0x0000000000000001 : word64)
  Class: Eq_191
  DataType: int64
  OrigDataType: (union (int64 u1) (uint64 u0))
T_192: (in qwLoc18_205 + 0x0000000000000001 : word64)
  Class: Eq_192
  DataType: up64
  OrigDataType: up64
T_193: (in (word32) (qwLoc18_205 + 0x0000000000000001) : word32)
  Class: Eq_190
  DataType: ui32
  OrigDataType: word32
T_194: (in rcx_91 : (ptr64 real64))
  Class: Eq_194
  DataType: (ptr64 real64)
  OrigDataType: (ptr64 (struct (0 T_221 t0000)))
T_195: (in 0x0000000000000008 : word64)
  Class: Eq_195
  DataType: ui64
  OrigDataType: ui64
T_196: (in qwLoc18_205 * 0x0000000000000008 : word64)
  Class: Eq_196
  DataType: ui64
  OrigDataType: ui64
T_197: (in qwLoc18_205 * 0x0000000000000008 + rax_26 : word64)
  Class: Eq_194
  DataType: (ptr64 real64)
  OrigDataType: ui64
T_198: (in 0x0000000000000001 : word64)
  Class: Eq_168
  DataType: int64
  OrigDataType: int64
T_199: (in qwLoc18_205 < 0x0000000000000001 : bool)
  Class: Eq_199
  DataType: bool
  OrigDataType: bool
T_200: (in qwLoc20_211 : uint64)
  Class: Eq_200
  DataType: uint64
  OrigDataType: uint64
T_201: (in 0x0000000000000000 : word64)
  Class: Eq_200
  DataType: uint64
  OrigDataType: word64
T_202: (in 0x0000000000000400 : word64)
  Class: Eq_200
  DataType: uint64
  OrigDataType: up64
T_203: (in qwLoc20_211 < 0x0000000000000400 : bool)
  Class: Eq_203
  DataType: bool
  OrigDataType: bool
T_204: (in v19_102 : real64)
  Class: Eq_204
  DataType: real64
  OrigDataType: real64
T_205: (in qwLoc18_205 + 0x0000000000000001 : word64)
  Class: Eq_205
  DataType: Eq_205
  OrigDataType: (union (int64 u1) (uint64 u0))
T_206: (in 0x0000000000000001 : word64)
  Class: Eq_206
  DataType: word64
  OrigDataType: word64
T_207: (in (word64) qwLoc18_205 + 1 >> 0x0000000000000001 : word64)
  Class: Eq_207
  DataType: uint64
  OrigDataType: uint64
T_208: (in 0x00000001 : word32)
  Class: Eq_208
  DataType: ui32
  OrigDataType: ui32
T_209: (in eax_97 & 0x00000001 : word32)
  Class: Eq_209
  DataType: ui32
  OrigDataType: ui32
T_210: (in (uint64) (eax_97 & 0x00000001) : uint64)
  Class: Eq_210
  DataType: uint64
  OrigDataType: uint64
T_211: (in (word64) qwLoc18_205 + 1 >> 0x0000000000000001 | (uint64) (eax_97 & 0x00000001) : word64)
  Class: Eq_211
  DataType: ui64
  OrigDataType: ui64
T_212: (in (real64) (qwLoc18_205 + 0x0000000000000001 >>u 0x0000000000000001 | (uint64) (eax_97 & 0x00000001)) : real64)
  Class: Eq_204
  DataType: real64
  OrigDataType: real64
T_213: (in v19_102 + v19_102 : real64)
  Class: Eq_213
  DataType: real64
  OrigDataType: real64
T_214: (in DPB(xmm0, v19_102 + v19_102, 0) : word128)
  Class: Eq_134
  DataType: Eq_134
  OrigDataType: word128
T_215: (in qwLoc18_205 + 0x0000000000000001 : word64)
  Class: Eq_215
  DataType: Eq_215
  OrigDataType: (union (int64 u1) (uint64 u0))
T_216: (in (real64) (qwLoc18_205 + 0x0000000000000001) : real64)
  Class: Eq_216
  DataType: real64
  OrigDataType: real64
T_217: (in DPB(xmm0, (real64) (qwLoc18_205 + 0x0000000000000001), 0) : word128)
  Class: Eq_134
  DataType: Eq_134
  OrigDataType: word128
T_218: (in (real64) xmm0 : real64)
  Class: Eq_218
  DataType: real64
  OrigDataType: real64
T_219: (in 0x0000000000000000 : word64)
  Class: Eq_219
  DataType: word64
  OrigDataType: word64
T_220: (in rcx_91 + 0x0000000000000000 : word64)
  Class: Eq_220
  DataType: ui64
  OrigDataType: ui64
T_221: (in Mem111[rcx_91 + 0x0000000000000000:real64] : real64)
  Class: Eq_218
  DataType: real64
  OrigDataType: real64
T_222: (in 0x0000000000000001 : word64)
  Class: Eq_222
  DataType: int64
  OrigDataType: (union (int64 u1) (uint64 u0))
T_223: (in qwLoc18_205 + 0x0000000000000001 : word64)
  Class: Eq_168
  DataType: Eq_168
  OrigDataType: (union (int64 u1) (uint64 u0))
T_224: (in __xorpd : ptr64)
  Class: Eq_224
  DataType: (ptr64 Eq_224)
  OrigDataType: (ptr64 (fn T_228 (T_134, T_134)))
T_225: (in signature of __xorpd : void)
  Class: Eq_224
  DataType: (ptr64 Eq_224)
  OrigDataType: 
T_226: (in  : (arr word64 2))
  Class: Eq_134
  DataType: Eq_134
  OrigDataType: 
T_227: (in  : (arr word64 2))
  Class: Eq_134
  DataType: Eq_134
  OrigDataType: 
T_228: (in __xorpd(xmm0, xmm0) : (arr word64 2))
  Class: Eq_134
  DataType: Eq_134
  OrigDataType: (arr word64 2)
T_229: (in (real64) xmm0 : real64)
  Class: Eq_229
  DataType: real64
  OrigDataType: real64
T_230: (in 0x0000000000000008 : word64)
  Class: Eq_230
  DataType: ui64
  OrigDataType: ui64
T_231: (in qwLoc20_211 * 0x0000000000000008 : word64)
  Class: Eq_231
  DataType: ui64
  OrigDataType: ui64
T_232: (in rax_38[qwLoc20_211 * 0x0000000000000008] : real64)
  Class: Eq_229
  DataType: real64
  OrigDataType: real64
T_233: (in 0x0000000000000001 : word64)
  Class: Eq_233
  DataType: word64
  OrigDataType: word64
T_234: (in qwLoc20_211 + 0x0000000000000001 : word64)
  Class: Eq_200
  DataType: uint64
  OrigDataType: uint64
T_235: (in vec_add : ptr64)
  Class: Eq_235
  DataType: (ptr64 Eq_235)
  OrigDataType: (ptr64 (fn T_238 (T_237)))
T_236: (in signature of vec_add : void)
  Class: Eq_235
  DataType: (ptr64 Eq_235)
  OrigDataType: 
T_237: (in 0x0000000000000400 : word64)
  Class: Eq_121
  DataType: word64
  OrigDataType: word64
T_238: (in vec_add(0x0000000000000400) : void)
  Class: Eq_238
  DataType: void
  OrigDataType: void
T_239: (in qwLoc28_220 : up64)
  Class: Eq_239
  DataType: up64
  OrigDataType: up64
T_240: (in 0x0000000000000000 : word64)
  Class: Eq_239
  DataType: up64
  OrigDataType: word64
T_241: (in 0x0000000000000400 : word64)
  Class: Eq_239
  DataType: up64
  OrigDataType: up64
T_242: (in qwLoc28_220 < 0x0000000000000400 : bool)
  Class: Eq_242
  DataType: bool
  OrigDataType: bool
T_243: (in printf : ptr64)
  Class: Eq_243
  DataType: (ptr64 Eq_243)
  OrigDataType: (ptr64 (fn T_249 (T_247, T_248)))
T_244: (in signature of printf : void)
  Class: Eq_243
  DataType: (ptr64 Eq_243)
  OrigDataType: 
T_245: (in format : (ptr64 char))
  Class: Eq_245
  DataType: (ptr64 char)
  OrigDataType: 
T_246: (in ... : <unknown>)
  Class: Eq_246
  DataType: word32
  OrigDataType: 
T_247: (in 0000000000000AF8 : ptr64)
  Class: Eq_245
  DataType: (ptr64 char)
  OrigDataType: (ptr64 char)
T_248: (in 0x00000000 : word32)
  Class: Eq_246
  DataType: word32
  OrigDataType: word32
T_249: (in printf("%g\n", 0x00000000) : int32)
  Class: Eq_249
  DataType: int32
  OrigDataType: int32
T_250: (in 0x0000000000000001 : word64)
  Class: Eq_250
  DataType: up64
  OrigDataType: up64
T_251: (in qwLoc28_220 + 0x0000000000000001 : word64)
  Class: Eq_239
  DataType: up64
  OrigDataType: up64
T_252: (in _mm_free : ptr64)
  Class: Eq_252
  DataType: (ptr64 Eq_252)
  OrigDataType: (ptr64 (fn T_254 (T_135)))
T_253: (in signature of _mm_free : void)
  Class: Eq_252
  DataType: (ptr64 Eq_252)
  OrigDataType: 
T_254: (in _mm_free(rax_14) : void)
  Class: Eq_254
  DataType: void
  OrigDataType: void
T_255: (in _mm_free : ptr64)
  Class: Eq_252
  DataType: (ptr64 Eq_252)
  OrigDataType: (ptr64 (fn T_256 (T_144)))
T_256: (in _mm_free(rax_26) : void)
  Class: Eq_254
  DataType: void
  OrigDataType: void
T_257: (in _mm_free : ptr64)
  Class: Eq_252
  DataType: (ptr64 Eq_252)
  OrigDataType: (ptr64 (fn T_258 (T_150)))
T_258: (in _mm_free(rax_38) : void)
  Class: Eq_254
  DataType: void
  OrigDataType: void
T_259: (in rdx : word64)
  Class: Eq_259
  DataType: word64
  OrigDataType: word64
T_260: (in rbx : word64)
  Class: Eq_260
  DataType: word64
  OrigDataType: word64
T_261: (in rbp : word64)
  Class: Eq_261
  DataType: word64
  OrigDataType: word64
T_262: (in rsi : word64)
  Class: Eq_262
  DataType: word64
  OrigDataType: word64
T_263: (in edi : word32)
  Class: Eq_263
  DataType: word32
  OrigDataType: word32
T_264: (in r12 : word64)
  Class: Eq_264
  DataType: word64
  OrigDataType: word64
T_265: (in r13 : word64)
  Class: Eq_265
  DataType: word64
  OrigDataType: word64
T_266: (in r14 : word64)
  Class: Eq_266
  DataType: word64
  OrigDataType: word64
T_267: (in r15 : word64)
  Class: Eq_267
  DataType: word64
  OrigDataType: word64
T_268: (in r15_10 : uint64)
  Class: Eq_268
  DataType: uint64
  OrigDataType: uint64
T_269: (in (uint64) edi : uint64)
  Class: Eq_268
  DataType: uint64
  OrigDataType: uint64
T_270: (in r15d_83 : word32)
  Class: Eq_270
  DataType: word32
  OrigDataType: word32
T_271: (in (word32) r15_10 : word32)
  Class: Eq_270
  DataType: word32
  OrigDataType: word32
T_272: (in r15_55 : uint64)
  Class: Eq_272
  DataType: uint64
  OrigDataType: uint64
T_273: (in DPB(r15_10, r15d_83, 0) : word64)
  Class: Eq_272
  DataType: uint64
  OrigDataType: uint64
T_274: (in rbp_29 : int64)
  Class: Eq_274
  DataType: int64
  OrigDataType: int64
T_275: (in 0000000000200DF0 : ptr64)
  Class: Eq_275
  DataType: int64
  OrigDataType: (union (int64 u0) (ptr64 u1))
T_276: (in 0000000000200DE8 : ptr64)
  Class: Eq_276
  DataType: int64
  OrigDataType: (union (int64 u1) (ptr64 u0))
T_277: (in 0x0000000000200DF0 - 0x0000000000200DE8 : word64)
  Class: Eq_274
  DataType: int64
  OrigDataType: int64
T_278: (in rax_33 : word64)
  Class: Eq_278
  DataType: word64
  OrigDataType: word64
T_279: (in _init : ptr64)
  Class: Eq_279
  DataType: (ptr64 Eq_279)
  OrigDataType: (ptr64 (fn T_281 ()))
T_280: (in signature of _init : void)
  Class: Eq_279
  DataType: (ptr64 Eq_279)
  OrigDataType: 
T_281: (in _init() : word64)
  Class: Eq_278
  DataType: word64
  OrigDataType: word64
T_282: (in 0x0000000000000003 : word64)
  Class: Eq_282
  DataType: word64
  OrigDataType: word64
T_283: (in rbp_29 >> 0x0000000000000003 : word64)
  Class: Eq_283
  DataType: int64
  OrigDataType: int64
T_284: (in 0x0000000000000000 : word64)
  Class: Eq_283
  DataType: int64
  OrigDataType: word64
T_285: (in rbp_29 >> 0x0000000000000003 == 0x0000000000000000 : bool)
  Class: Eq_285
  DataType: bool
  OrigDataType: bool
T_286: (in rbx_41 : Eq_286)
  Class: Eq_286
  DataType: Eq_286
  OrigDataType: word64
T_287: (in 0x0000000000000000 : uint64)
  Class: Eq_286
  DataType: uint64
  OrigDataType: uint64
T_288: (in DPB(r15_55, r15d_83, 0) : word64)
  Class: Eq_272
  DataType: uint64
  OrigDataType: uint64
T_289: (in 0000000000200DE8 : ptr64)
  Class: Eq_289
  DataType: (ptr64 (arr (ptr64 code)))
  OrigDataType: (ptr64 (struct (0 (arr T_298) a0000)))
T_290: (in 0x0000000000000008 : word64)
  Class: Eq_290
  DataType: ui64
  OrigDataType: ui64
T_291: (in rbx_41 * 0x0000000000000008 : word64)
  Class: Eq_291
  DataType: ui64
  OrigDataType: ui64
T_292: (in 0x0000000000200DE8[rbx_41 * 0x0000000000000008] : word64)
  Class: Eq_292
  DataType: (ptr64 code)
  OrigDataType: (ptr64 code)
T_293: (in 0x0000000000000001 : word64)
  Class: Eq_293
  DataType: word64
  OrigDataType: word64
T_294: (in rbx_41 + 0x0000000000000001 : word64)
  Class: Eq_286
  DataType: Eq_286
  OrigDataType: uint64
T_295: (in rbp_29 >> 0x0000000000000003 : word64)
  Class: Eq_286
  DataType: Eq_286
  OrigDataType: int64
T_296: (in rbp_29 >> 0x0000000000000003 != rbx_41 : bool)
  Class: Eq_296
  DataType: bool
  OrigDataType: bool
T_297:
  Class: Eq_297
  DataType: real64
  OrigDataType: (struct 0008 (0 T_232 t0000))
T_298:
  Class: Eq_298
  DataType: (ptr64 code)
  OrigDataType: (struct 0008 (0 T_292 t0000))
*/
typedef Eq_1Eq_1Eq_1struct Globals {
	int32 t0898(int32 rdi, char ** rsi, char ** rdx);	// 898
	void t0A70();	// A70
	void t0AE0();	// AE0
	uint64 qw0B00;	// B00
	<anonymous> * a200DE8[];	// 200DE8
	<anonymous> * ptr200FD8;	// 200FD8
	word64 qw200FE8;	// 200FE8
	<anonymous> * ptr200FF0;	// 200FF0
	word64 qw200FF8;	// 200FF8
	byte b201048;	// 201048
} Eq_1;

typedef void (Eq_10)();

typedef union Eq_11 {
	int32 u0;
	word64 u1;
} Eq_11;

typedef void (Eq_12)(ptr64);

typedef int32 (Eq_19)( *, Eq_11, char * *,  *,  *,  *, void);

typedef int32 (Eq_21)(int32 rdi, char * * rsi, char * * rdx);

typedef void (Eq_24)();

typedef void (Eq_25)();

typedef void (Eq_33)();

typedef union Eq_47 {
	int64 u0;
	ptr64 u1;
} Eq_47;

typedef union Eq_48 {
	int64 u0;
	ptr64 u1;
} Eq_48;

typedef union Eq_50 {
	int64 u0;
	uint64 u1;
} Eq_50;

typedef union Eq_53 {
	int64 u0;
	uint64 u1;
} Eq_53;

typedef void (Eq_76)(ptr64);

typedef void (Eq_88)(word64);

typedef union Eq_94 {
	ui64 u0;
	size_t u1;
} Eq_94;

typedef void (Eq_101)(Eq_94);

typedef void (Eq_117)(real64 *[]);

typedef union Eq_134 {
	word128 u0;
	word64 u1[2];
} Eq_134;

typedef real64 *[] (Eq_136)(ptr64, uint64, Eq_94);

typedef union Eq_156 {
	int64 u0;
	uint64 u1;
} Eq_156;

typedef union Eq_168 {
	int64 u0;
	uint64 u1;
} Eq_168;

typedef union Eq_188 {
	int64 u0;
	uint64 u1;
} Eq_188;

typedef union Eq_191 {
	int64 u0;
	uint64 u1;
} Eq_191;

typedef union Eq_205 {
	int64 u0;
	uint64 u1;
} Eq_205;

typedef union Eq_215 {
	int64 u0;
	uint64 u1;
} Eq_215;

typedef union Eq_222 {
	int64 u0;
	uint64 u1;
} Eq_222;

typedef Eq_134 (Eq_224)(Eq_134, Eq_134);

typedef void (Eq_235)(word64);

typedef int32 (Eq_243)(char *, word32);

typedef void (Eq_252)(real64 *[]);

typedef union Eq_275 {
	int64 u0;
	ptr64 u1;
} Eq_275;

typedef union Eq_276 {
	int64 u0;
	ptr64 u1;
} Eq_276;

typedef word64 (Eq_279)();

typedef union Eq_286 {
	int64 u0;
	uint64 u1;
} Eq_286;

