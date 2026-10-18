006c0dc0  MOV EAX,dword ptr [ESP + 0x4]
006c0dc4  FLD float ptr [0x00890968]
006c0dca  MOV EAX,dword ptr [EAX + 0x68]
006c0dcd  FLD float ptr [0x0089096c]
006c0dd3  TEST EAX,EAX
006c0dd5  JZ 0x006c0de9
006c0dd7  FSTP ST0
006c0dd9  FSTP ST0
006c0ddb  FLD float ptr [EAX + 0x290]
006c0de1  FLD float ptr [0x0089096c]
006c0de7  FSUB ST0,ST1
006c0de9  FLD float ptr [0x008fae40]
006c0def  FCOMP float ptr [0x00890968]
006c0df5  FNSTSW AX
006c0df7  TEST AH,0x41
006c0dfa  JNZ 0x006c0e0e
006c0dfc  FSTP ST0
006c0dfe  FSTP ST0
006c0e00  FLD float ptr [0x008fae40]
006c0e06  FLD float ptr [0x0089096c]
006c0e0c  FSUB ST0,ST1
006c0e0e  MOV EAX,dword ptr [ESP + 0x8]
006c0e12  FLD ST0
006c0e14  MOV ECX,dword ptr [ESP + 0xc]
006c0e18  SHL EAX,0x5
006c0e1b  FMUL float ptr [EAX + 0x8f9374]
006c0e21  MOV EDX,dword ptr [ESP + 0x10]
006c0e25  FLD ST2
006c0e27  FMUL float ptr [EAX + 0x8f9370]
006c0e2d  FADDP
006c0e2f  FSTP float ptr [ECX]
006c0e31  MOV ECX,dword ptr [ESP + 0x14]
006c0e35  FLD ST0
006c0e37  FMUL float ptr [EAX + 0x8f937c]
006c0e3d  FLD ST2
006c0e3f  FMUL float ptr [EAX + 0x8f9378]
006c0e45  FADDP
006c0e47  FSTP float ptr [EDX]
006c0e49  MOV EDX,dword ptr [ESP + 0x18]
006c0e4d  FLD ST0
006c0e4f  FMUL float ptr [EAX + 0x8f9384]
006c0e55  FLD ST2
006c0e57  FMUL float ptr [EAX + 0x8f9380]
006c0e5d  FADDP
006c0e5f  FSTP float ptr [ECX]
006c0e61  FMUL float ptr [EAX + 0x8f938c]
006c0e67  FXCH
006c0e69  FMUL float ptr [EAX + 0x8f9388]
006c0e6f  FADDP
006c0e71  FSTP float ptr [EDX]
006c0e73  RET
