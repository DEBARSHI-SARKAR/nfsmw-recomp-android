0048d7d0  MOV ECX,dword ptr [ESP + 0x8]
0048d7d4  MOV EDX,dword ptr [ESP + 0xc]
0048d7d8  FLD float ptr [ECX]
0048d7da  FMUL float ptr [EDX]
0048d7dc  FLD float ptr [ECX + 0x8]
0048d7df  FMUL float ptr [EDX + 0x8]
0048d7e2  FADDP
0048d7e4  FLD float ptr [ECX + 0x4]
0048d7e7  FMUL float ptr [EDX + 0x4]
0048d7ea  FADDP
0048d7ec  FLD float ptr [EDX + 0xc]
0048d7ef  FMUL float ptr [ECX + 0xc]
0048d7f2  FADDP
0048d7f4  FCOMP float ptr [0x00890968]
0048d7fa  FNSTSW AX
0048d7fc  TEST AH,0x41
0048d7ff  MOV EAX,dword ptr [ESP + 0x10]
0048d803  JNZ 0x0048d840
0048d805  FLD float ptr [EDX]
0048d807  FSUB float ptr [ECX]
0048d809  FMUL float ptr [ESP + 0x4]
0048d80d  FADD float ptr [ECX]
0048d80f  FSTP float ptr [EAX]
0048d811  FLD float ptr [EDX + 0x4]
0048d814  FSUB float ptr [ECX + 0x4]
0048d817  FMUL float ptr [ESP + 0x4]
0048d81b  FADD float ptr [ECX + 0x4]
0048d81e  FSTP float ptr [EAX + 0x4]
0048d821  FLD float ptr [EDX + 0x8]
0048d824  FSUB float ptr [ECX + 0x8]
0048d827  FMUL float ptr [ESP + 0x4]
0048d82b  FADD float ptr [ECX + 0x8]
0048d82e  FSTP float ptr [EAX + 0x8]
0048d831  FLD float ptr [EDX + 0xc]
0048d834  FSUB float ptr [ECX + 0xc]
0048d837  FMUL float ptr [ESP + 0x4]
0048d83b  FADD float ptr [ECX + 0xc]
0048d83e  JMP 0x0048d879
0048d840  FLD float ptr [ECX]
0048d842  FADD float ptr [EDX]
0048d844  FMUL float ptr [ESP + 0x4]
0048d848  FSUBR float ptr [ECX]
0048d84a  FSTP float ptr [EAX]
0048d84c  FLD float ptr [ECX + 0x4]
0048d84f  FADD float ptr [EDX + 0x4]
0048d852  FMUL float ptr [ESP + 0x4]
0048d856  FSUBR float ptr [ECX + 0x4]
0048d859  FSTP float ptr [EAX + 0x4]
0048d85c  FLD float ptr [ECX + 0x8]
0048d85f  FADD float ptr [EDX + 0x8]
0048d862  FMUL float ptr [ESP + 0x4]
0048d866  FSUBR float ptr [ECX + 0x8]
0048d869  FSTP float ptr [EAX + 0x8]
0048d86c  FLD float ptr [EDX + 0xc]
0048d86f  FADD float ptr [ECX + 0xc]
0048d872  FMUL float ptr [ESP + 0x4]
0048d876  FSUBR float ptr [ECX + 0xc]
0048d879  FSTP float ptr [EAX + 0xc]
0048d87c  FLD float ptr [EAX + 0xc]
0048d87f  FLD float ptr [EAX + 0x8]
0048d882  FLD float ptr [EAX + 0x4]
0048d885  FLD float ptr [EAX]
0048d887  FLD ST2
0048d889  FMUL ST3
0048d88b  FLD ST4
0048d88d  FMUL ST5
0048d88f  FADDP
0048d891  FLD ST1
0048d893  FMUL ST2
0048d895  FADDP
0048d897  FLD ST2
0048d899  FMUL ST3
0048d89b  FADDP
0048d89d  FSQRT
0048d89f  FSTP ST4
0048d8a1  FSTP ST0
0048d8a3  FSTP ST0
0048d8a5  FSTP ST0
0048d8a7  FDIVR float ptr [0x0089096c]
0048d8ad  FLD ST0
0048d8af  FMUL float ptr [EAX]
0048d8b1  FSTP float ptr [EAX]
0048d8b3  FLD ST0
0048d8b5  FMUL float ptr [EAX + 0x4]
0048d8b8  FSTP float ptr [EAX + 0x4]
0048d8bb  FLD ST0
0048d8bd  FMUL float ptr [EAX + 0x8]
0048d8c0  FSTP float ptr [EAX + 0x8]
0048d8c3  FMUL float ptr [EAX + 0xc]
0048d8c6  FSTP float ptr [EAX + 0xc]
0048d8c9  RET
