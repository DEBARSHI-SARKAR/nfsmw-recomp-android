005c9d90  PUSH ECX
005c9d91  MOV ECX,dword ptr [ESP + 0x10]
005c9d95  MOV EAX,dword ptr [ESP + 0xc]
005c9d99  FLD float ptr [ECX]
005c9d9b  FSUB float ptr [EAX]
005c9d9d  FLD float ptr [ECX + 0x8]
005c9da0  MOV ECX,dword ptr [ESP + 0x8]
005c9da4  FSUB float ptr [EAX + 0x8]
005c9da7  FLD ST0
005c9da9  FMUL ST1
005c9dab  FLD ST2
005c9dad  FMUL ST3
005c9daf  FADDP
005c9db1  FSTP float ptr [ESP + 0xc]
005c9db5  FLD float ptr [ECX]
005c9db7  FSUB float ptr [EAX]
005c9db9  FLD float ptr [ECX + 0x8]
005c9dbc  FSUB float ptr [EAX + 0x8]
005c9dbf  FST float ptr [ESP + 0x8]
005c9dc3  FMUL ST2
005c9dc5  FLD ST1
005c9dc7  FMUL ST4
005c9dc9  FADDP
005c9dcb  FDIV float ptr [ESP + 0xc]
005c9dcf  FST float ptr [ESP + 0x10]
005c9dd3  FMUL ST3
005c9dd5  FSUBR ST0,ST1
005c9dd7  FSTP float ptr [ESP]
005c9dda  FSTP ST0
005c9ddc  FLD float ptr [ESP + 0x10]
005c9de0  FMUL ST1
005c9de2  FSUBR float ptr [ESP + 0x8]
005c9de6  FSTP ST2
005c9de8  FSTP ST0
005c9dea  FLD float ptr [ESP + 0x10]
005c9dee  FCOMP float ptr [0x00890968]
005c9df4  FLD float ptr [ESP + 0x10]
005c9df8  FNSTSW AX
005c9dfa  TEST AH,0x41
005c9dfd  JP 0x005c9e09
005c9dff  FMUL float ptr [ESP + 0x10]
005c9e03  FMUL float ptr [ESP + 0xc]
005c9e07  JMP 0x005c9e30
005c9e09  FCOMP float ptr [0x0089096c]
005c9e0f  FNSTSW AX
005c9e11  TEST AH,0x1
005c9e14  JNZ 0x005c9e2a
005c9e16  FLD float ptr [ESP + 0x10]
005c9e1a  FSUB float ptr [0x0089096c]
005c9e20  FLD ST0
005c9e22  FMULP
005c9e24  FMUL float ptr [ESP + 0xc]
005c9e28  JMP 0x005c9e30
005c9e2a  FLD float ptr [0x00890968]
005c9e30  FLD ST1
005c9e32  FMULP ST2
005c9e34  FLD float ptr [ESP]
005c9e37  FMUL float ptr [ESP]
005c9e3a  FADDP ST2,ST0
005c9e3c  FXCH
005c9e3e  FADD ST0,ST1
005c9e40  FXCH
005c9e42  FSTP ST0
005c9e44  POP ECX
005c9e45  RET
