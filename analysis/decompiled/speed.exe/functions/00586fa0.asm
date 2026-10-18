00586fa0  MOV EDX,dword ptr [ESP + 0x4]
00586fa4  MOV EAX,ECX
00586fa6  PUSH EBX
00586fa7  PUSH ESI
00586fa8  MOV ESI,dword ptr [ESP + 0x10]
00586fac  XOR ECX,ECX
00586fae  CMP EDX,0xaaab31e9
00586fb4  MOV dword ptr [EAX + 0x2c],ESI
00586fb7  MOV ESI,dword ptr [ESP + 0x14]
00586fbb  MOV BL,0x1
00586fbd  MOV dword ptr [EAX + 0x30],ESI
00586fc0  MOV ESI,0x3f800000
00586fc5  MOV dword ptr [EAX],0x89b8c8
00586fcb  MOV dword ptr [EAX + 0xc],EDX
00586fce  MOV dword ptr [EAX + 0x10],ECX
00586fd1  MOV dword ptr [EAX + 0x14],ECX
00586fd4  MOV dword ptr [EAX + 0x18],ECX
00586fd7  MOV byte ptr [EAX + 0x20],CL
00586fda  MOV byte ptr [EAX + 0x21],BL
00586fdd  MOV dword ptr [EAX + 0x34],ESI
00586fe0  MOV dword ptr [EAX + 0x38],ESI
00586fe3  MOV dword ptr [EAX + 0x3c],ESI
00586fe6  MOV dword ptr [EAX + 0x40],ESI
00586fe9  MOV byte ptr [EAX + 0x44],BL
00586fec  MOV byte ptr [EAX + 0x45],CL
00586fef  MOV byte ptr [EAX + 0x46],CL
00586ff2  MOV dword ptr [EAX + 0x48],ECX
00586ff5  JNZ 0x00587008
00586ff7  MOV ECX,dword ptr [0x008f50fc]
00586ffd  POP ESI
00586ffe  MOV byte ptr [EAX + 0x46],BL
00587001  MOV dword ptr [EAX + 0x48],ECX
00587004  POP EBX
00587005  RET 0xc
00587008  CMP EDX,0x66c9a7b6
0058700e  JNZ 0x0058701c
00587010  MOV EDX,dword ptr [0x008f5100]
00587016  MOV dword ptr [EAX + 0x48],EDX
00587019  MOV byte ptr [EAX + 0x46],BL
0058701c  POP ESI
0058701d  POP EBX
0058701e  RET 0xc
