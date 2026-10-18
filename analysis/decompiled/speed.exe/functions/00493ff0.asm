00493ff0  SUB ESP,0x14
00493ff3  FLD float ptr [ESP + 0x24]
00493ff7  XOR EAX,EAX
00493ff9  FADD ST0,ST0
00493ffb  MOV dword ptr [ECX + 0xc],EAX
00493ffe  FLD float ptr [ESP + 0x28]
00494002  MOV dword ptr [ECX + 0x1c],EAX
00494005  FADD ST0,ST0
00494007  FLD float ptr [ESP + 0x2c]
0049400b  FADD ST0,ST0
0049400d  FSTP float ptr [ESP]
00494010  FLD ST1
00494012  FMUL float ptr [ESP + 0x30]
00494016  FSTP float ptr [ESP + 0xc]
0049401a  FLD float ptr [ESP + 0x30]
0049401e  FMUL ST1
00494020  FSTP float ptr [ESP + 0x8]
00494024  FLD float ptr [ESP]
00494027  FMUL float ptr [ESP + 0x30]
0049402b  FSTP float ptr [ESP + 0x4]
0049402f  FXCH
00494031  FMUL float ptr [ESP + 0x24]
00494035  FSTP float ptr [ESP + 0x10]
00494039  FLD float ptr [ESP + 0x24]
0049403d  FMUL ST1
0049403f  FSTP float ptr [ESP + 0x30]
00494043  FLD float ptr [ESP]
00494046  FMUL float ptr [ESP + 0x24]
0049404a  FSTP float ptr [ESP + 0x24]
0049404e  FMUL float ptr [ESP + 0x28]
00494052  FLD float ptr [ESP]
00494055  FMUL float ptr [ESP + 0x28]
00494059  FLD float ptr [ESP]
0049405c  FMUL float ptr [ESP + 0x2c]
00494060  FLD ST0
00494062  FADD ST0,ST3
00494064  FSUBR float ptr [0x0089096c]
0049406a  FMUL float ptr [ESP + 0x18]
0049406e  FSTP float ptr [ECX]
00494070  FLD float ptr [ESP + 0x30]
00494074  FSUB float ptr [ESP + 0x4]
00494078  FMUL float ptr [ESP + 0x1c]
0049407c  FSTP float ptr [ECX + 0x10]
0049407f  FLD float ptr [ESP + 0x24]
00494083  FADD float ptr [ESP + 0x8]
00494087  FMUL float ptr [ESP + 0x20]
0049408b  FSTP float ptr [ECX + 0x20]
0049408e  FLD float ptr [ESP + 0x30]
00494092  FADD float ptr [ESP + 0x4]
00494096  FMUL float ptr [ESP + 0x18]
0049409a  FSTP float ptr [ECX + 0x4]
0049409d  FADD float ptr [ESP + 0x10]
004940a1  FSUBR float ptr [0x0089096c]
004940a7  FMUL float ptr [ESP + 0x1c]
004940ab  FSTP float ptr [ECX + 0x14]
004940ae  FLD float ptr [ESP + 0xc]
004940b2  FSUBR ST0,ST1
004940b4  FMUL float ptr [ESP + 0x20]
004940b8  FSTP float ptr [ECX + 0x24]
004940bb  FLD float ptr [ESP + 0x24]
004940bf  FSUB float ptr [ESP + 0x8]
004940c3  FMUL float ptr [ESP + 0x18]
004940c7  FSTP float ptr [ECX + 0x8]
004940ca  FADD float ptr [ESP + 0xc]
004940ce  FMUL float ptr [ESP + 0x1c]
004940d2  FSTP float ptr [ECX + 0x18]
004940d5  FADD float ptr [ESP + 0x10]
004940d9  FSUBR float ptr [0x0089096c]
004940df  FMUL float ptr [ESP + 0x20]
004940e3  FSTP float ptr [ECX + 0x28]
004940e6  MOV EDX,dword ptr [ESP + 0x38]
004940ea  MOV dword ptr [ECX + 0x2c],EAX
004940ed  MOV EAX,dword ptr [ESP + 0x34]
004940f1  MOV dword ptr [ECX + 0x30],EAX
004940f4  MOV EAX,dword ptr [ESP + 0x3c]
004940f8  MOV dword ptr [ECX + 0x34],EDX
004940fb  MOV dword ptr [ECX + 0x38],EAX
004940fe  MOV dword ptr [ECX + 0x3c],0x3f800000
00494105  ADD ESP,0x14
00494108  RET 0x28
