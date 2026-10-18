004050a0  FLD float ptr [ESP + 0x4]
004050a4  MOV EAX,dword ptr [ESP + 0x8]
004050a8  FMUL float ptr [0x00890510]
004050ae  MOV ECX,dword ptr [ESP + 0xc]
004050b2  FLD ST0
004050b4  FCOS
004050b6  FSTP float ptr [ESP + 0x4]
004050ba  FSIN
004050bc  FLD float ptr [ESP + 0x4]
004050c0  FMUL float ptr [EAX + 0x8]
004050c3  FLD ST1
004050c5  FMUL float ptr [EAX]
004050c7  FADDP
004050c9  FLD float ptr [ESP + 0x4]
004050cd  FMUL float ptr [EAX]
004050cf  FXCH ST2
004050d1  FMUL float ptr [EAX + 0x8]
004050d4  FSUBP ST2,ST0
004050d6  FXCH
004050d8  FSTP float ptr [ECX]
004050da  FSTP float ptr [ECX + 0x8]
004050dd  MOV EAX,dword ptr [EAX + 0x4]
004050e0  MOV dword ptr [ECX + 0x4],EAX
004050e3  RET
