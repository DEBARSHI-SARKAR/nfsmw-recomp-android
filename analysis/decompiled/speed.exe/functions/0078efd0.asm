0078efd0  MOV EDX,dword ptr [ESP + 0x4]
0078efd4  XOR EAX,EAX
0078efd6  MOV ECX,0x9b4254
0078efdb  JMP 0x0078efe0
0078efe0  CMP dword ptr [ECX],EDX
0078efe2  JZ 0x0078eff1
0078efe4  ADD ECX,0x1c
0078efe7  INC EAX
0078efe8  CMP ECX,0x9b42a8
0078efee  JL 0x0078efe0
0078eff0  RET
0078eff1  IMUL EAX,EAX,0x1c
0078eff4  ADD EAX,0x9b4250
0078eff9  MOV dword ptr [EAX + 0x4],0xffffffff
0078f000  MOV dword ptr [EAX],0xffffffff
0078f006  MOV word ptr [EAX + 0x8],0x0
0078f00c  MOV dword ptr [EAX + 0x10],0x0
0078f013  MOV dword ptr [EAX + 0x14],0x0
0078f01a  MOV dword ptr [EAX + 0x18],0xbf800000
0078f021  DEC dword ptr [0x009b4230]
0078f027  RET
