0050d4e0  SUB ESP,0x8
0050d4e3  FLD float ptr [ESP + 0x10]
0050d4e7  MOV EAX,dword ptr [ESP + 0xc]
0050d4eb  FMUL float ptr [ECX]
0050d4ed  FSTP float ptr [ESP]
0050d4f0  FLD float ptr [ESP + 0x10]
0050d4f4  FMUL float ptr [ECX + 0x4]
0050d4f7  MOV ECX,dword ptr [ESP]
0050d4fa  MOV dword ptr [EAX],ECX
0050d4fc  FSTP float ptr [ESP + 0x4]
0050d500  MOV EDX,dword ptr [ESP + 0x4]
0050d504  MOV dword ptr [EAX + 0x4],EDX
0050d507  ADD ESP,0x8
0050d50a  RET 0x8
