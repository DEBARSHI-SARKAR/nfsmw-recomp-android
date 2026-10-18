00501570  MOV EAX,dword ptr [ECX + 0xc]
00501573  XOR ECX,ECX
00501575  SUB ESP,0xc
00501578  CMP EAX,ECX
0050157a  JZ 0x005015c9
0050157c  MOV ECX,dword ptr [EAX + 0x30]
0050157f  FLD float ptr [EAX + 0x24]
00501582  MOV EDX,dword ptr [EAX + 0x34]
00501585  FLD float ptr [EAX + 0x28]
00501588  MOV dword ptr [ESP],ECX
0050158b  FXCH
0050158d  MOV ECX,dword ptr [EAX + 0x38]
00501590  MOV dword ptr [ESP + 0x4],EDX
00501594  MOV EDX,dword ptr [EAX + 0x20]
00501597  MOV EAX,dword ptr [ESP + 0x10]
0050159b  FSTP float ptr [EAX + 0x4]
0050159e  MOV dword ptr [EAX],EDX
005015a0  MOV dword ptr [ESP + 0x8],ECX
005015a4  MOV ECX,dword ptr [ESP + 0x4]
005015a8  FSTP float ptr [EAX + 0x8]
005015ab  MOV EAX,dword ptr [ESP + 0x14]
005015af  FLD float ptr [ESP]
005015b2  MOV EDX,dword ptr [ESP + 0x8]
005015b6  FSTP float ptr [EAX]
005015b8  MOV dword ptr [EAX + 0x4],ECX
005015bb  MOV dword ptr [EAX + 0x8],EDX
005015be  MOV EAX,0x1
005015c3  ADD ESP,0xc
005015c6  RET 0x8
005015c9  MOV EAX,dword ptr [ESP + 0x10]
005015cd  MOV dword ptr [EAX],ECX
005015cf  MOV dword ptr [EAX + 0x4],ECX
005015d2  MOV dword ptr [EAX + 0x8],ECX
005015d5  MOV EAX,dword ptr [ESP + 0x14]
005015d9  MOV dword ptr [EAX],ECX
005015db  MOV dword ptr [EAX + 0x4],ECX
005015de  MOV dword ptr [EAX + 0x8],ECX
005015e1  XOR EAX,EAX
005015e3  ADD ESP,0xc
005015e6  RET 0x8
