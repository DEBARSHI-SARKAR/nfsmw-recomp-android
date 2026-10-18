00494110  SUB ESP,0x14
00494113  FLD float ptr [ESP + 0x18]
00494117  MOV EDX,dword ptr [ESP + 0x2c]
0049411b  FADD ST0,ST0
0049411d  XOR EAX,EAX
0049411f  FLD float ptr [ESP + 0x1c]
00494123  MOV dword ptr [ECX + 0xc],EAX
00494126  FADD ST0,ST0
00494128  MOV dword ptr [ECX + 0x1c],EAX
0049412b  FLD float ptr [ESP + 0x20]
0049412f  MOV dword ptr [ECX + 0x2c],EAX
00494132  FADD ST0,ST0
00494134  MOV EAX,dword ptr [ESP + 0x28]
00494138  MOV dword ptr [ECX + 0x30],EAX
0049413b  MOV EAX,dword ptr [ESP + 0x30]
0049413f  FSTP float ptr [ESP]
00494142  MOV dword ptr [ECX + 0x34],EDX
00494145  FLD ST1
00494147  MOV dword ptr [ECX + 0x38],EAX
0049414a  FMUL float ptr [ESP + 0x24]
0049414e  MOV dword ptr [ECX + 0x3c],0x3f800000
00494155  FSTP float ptr [ESP + 0xc]
00494159  FLD float ptr [ESP + 0x24]
0049415d  FMUL ST1
0049415f  FSTP float ptr [ESP + 0x8]
00494163  FLD float ptr [ESP]
00494166  FMUL float ptr [ESP + 0x24]
0049416a  FSTP float ptr [ESP + 0x4]
0049416e  FXCH
00494170  FMUL float ptr [ESP + 0x18]
00494174  FSTP float ptr [ESP + 0x10]
00494178  FLD float ptr [ESP + 0x18]
0049417c  FMUL ST1
0049417e  FSTP float ptr [ESP + 0x24]
00494182  FLD float ptr [ESP]
00494185  FMUL float ptr [ESP + 0x18]
00494189  FSTP float ptr [ESP + 0x18]
0049418d  FMUL float ptr [ESP + 0x1c]
00494191  FLD float ptr [ESP]
00494194  FMUL float ptr [ESP + 0x1c]
00494198  FLD float ptr [ESP]
0049419b  FMUL float ptr [ESP + 0x20]
0049419f  FLD ST0
004941a1  FADD ST0,ST3
004941a3  FSUBR float ptr [0x0089096c]
004941a9  FSTP float ptr [ECX]
004941ab  FLD float ptr [ESP + 0x24]
004941af  FSUB float ptr [ESP + 0x4]
004941b3  FSTP float ptr [ECX + 0x10]
004941b6  FLD float ptr [ESP + 0x18]
004941ba  FADD float ptr [ESP + 0x8]
004941be  FSTP float ptr [ECX + 0x20]
004941c1  FLD float ptr [ESP + 0x24]
004941c5  FADD float ptr [ESP + 0x4]
004941c9  FSTP float ptr [ECX + 0x4]
004941cc  FADD float ptr [ESP + 0x10]
004941d0  FSUBR float ptr [0x0089096c]
004941d6  FSTP float ptr [ECX + 0x14]
004941d9  FLD float ptr [ESP + 0xc]
004941dd  FSUBR ST0,ST1
004941df  FSTP float ptr [ECX + 0x24]
004941e2  FLD float ptr [ESP + 0x18]
004941e6  FSUB float ptr [ESP + 0x8]
004941ea  FSTP float ptr [ECX + 0x8]
004941ed  FADD float ptr [ESP + 0xc]
004941f1  FSTP float ptr [ECX + 0x18]
004941f4  FADD float ptr [ESP + 0x10]
004941f8  FSUBR float ptr [0x0089096c]
004941fe  FSTP float ptr [ECX + 0x28]
00494201  ADD ESP,0x14
00494204  RET 0x1c
