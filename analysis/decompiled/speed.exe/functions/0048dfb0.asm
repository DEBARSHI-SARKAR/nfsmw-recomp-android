0048dfb0  SUB ESP,0x18
0048dfb3  MOV EAX,dword ptr [ESP + 0x1c]
0048dfb7  FLD float ptr [EAX]
0048dfb9  MOV ECX,dword ptr [ESP + 0x24]
0048dfbd  FADD ST0,ST0
0048dfbf  FLD float ptr [EAX + 0x4]
0048dfc2  FADD ST0,ST0
0048dfc4  FLD float ptr [EAX + 0x8]
0048dfc7  FADD ST0,ST0
0048dfc9  FSTP float ptr [ESP + 0x1c]
0048dfcd  FLD ST1
0048dfcf  FMUL float ptr [EAX + 0xc]
0048dfd2  FSTP float ptr [ESP + 0x14]
0048dfd6  FLD ST0
0048dfd8  FMUL float ptr [EAX + 0xc]
0048dfdb  FSTP float ptr [ESP + 0x10]
0048dfdf  FLD float ptr [ESP + 0x1c]
0048dfe3  FMUL float ptr [EAX + 0xc]
0048dfe6  FSTP float ptr [ESP + 0x4]
0048dfea  FXCH
0048dfec  FMUL float ptr [EAX]
0048dfee  FSTP float ptr [ESP + 0x8]
0048dff2  FLD ST0
0048dff4  FMUL float ptr [EAX]
0048dff6  FSTP float ptr [ESP]
0048dff9  FLD float ptr [ESP + 0x1c]
0048dffd  FMUL float ptr [EAX]
0048dfff  FSTP float ptr [ESP + 0xc]
0048e003  FMUL float ptr [EAX + 0x4]
0048e006  FLD float ptr [ESP + 0x1c]
0048e00a  FMUL float ptr [EAX + 0x4]
0048e00d  FLD float ptr [ESP + 0x1c]
0048e011  FMUL float ptr [EAX + 0x8]
0048e014  MOV EAX,dword ptr [ESP + 0x20]
0048e018  FLD ST0
0048e01a  FADD ST0,ST3
0048e01c  FSUBR float ptr [0x0089096c]
0048e022  FMUL float ptr [EAX]
0048e024  FLD float ptr [ESP + 0xc]
0048e028  FADD float ptr [ESP + 0x10]
0048e02c  FMUL float ptr [EAX + 0x8]
0048e02f  FADDP
0048e031  FLD float ptr [ESP]
0048e034  FSUB float ptr [ESP + 0x4]
0048e038  FMUL float ptr [EAX + 0x4]
0048e03b  FADDP
0048e03d  FSTP float ptr [ECX]
0048e03f  FADD float ptr [ESP + 0x8]
0048e043  FSUBR float ptr [0x0089096c]
0048e049  FMUL float ptr [EAX + 0x4]
0048e04c  FLD float ptr [ESP]
0048e04f  FADD float ptr [ESP + 0x4]
0048e053  FMUL float ptr [EAX]
0048e055  FADDP
0048e057  FLD ST1
0048e059  FSUB float ptr [ESP + 0x14]
0048e05d  FMUL float ptr [EAX + 0x8]
0048e060  FADDP
0048e062  FSTP float ptr [ECX + 0x4]
0048e065  FXCH
0048e067  FADD float ptr [ESP + 0x8]
0048e06b  FSUBR float ptr [0x0089096c]
0048e071  FMUL float ptr [EAX + 0x8]
0048e074  FLD float ptr [ESP + 0xc]
0048e078  FSUB float ptr [ESP + 0x10]
0048e07c  FMUL float ptr [EAX]
0048e07e  FADDP
0048e080  FXCH
0048e082  FADD float ptr [ESP + 0x14]
0048e086  FMUL float ptr [EAX + 0x4]
0048e089  FADDP
0048e08b  FSTP float ptr [ECX + 0x8]
0048e08e  ADD ESP,0x18
0048e091  RET
