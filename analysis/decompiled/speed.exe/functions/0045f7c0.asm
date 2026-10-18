0045f7c0  MOV ECX,dword ptr [ESP + 0xc]
0045f7c4  MOV EAX,dword ptr [ESP + 0x8]
0045f7c8  FLD float ptr [ECX]
0045f7ca  FMUL float ptr [EAX + 0x8]
0045f7cd  FLD float ptr [ECX + 0x8]
0045f7d0  FMUL float ptr [EAX]
0045f7d2  FSUBP
0045f7d4  FLD float ptr [ECX + 0x4]
0045f7d7  FMUL float ptr [EAX]
0045f7d9  FLD float ptr [EAX + 0x4]
0045f7dc  FMUL float ptr [ECX]
0045f7de  FSUBP
0045f7e0  FLD float ptr [ECX + 0x8]
0045f7e3  FMUL float ptr [EAX + 0x4]
0045f7e6  FLD float ptr [ECX + 0x4]
0045f7e9  FMUL float ptr [EAX + 0x8]
0045f7ec  MOV EAX,dword ptr [ESP + 0x4]
0045f7f0  FSUBP
0045f7f2  FSTP float ptr [EAX]
0045f7f4  FXCH
0045f7f6  FSTP float ptr [EAX + 0x4]
0045f7f9  FSTP float ptr [EAX + 0x8]
0045f7fc  RET
