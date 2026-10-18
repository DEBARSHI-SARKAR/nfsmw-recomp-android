0070d1a0  PUSH -0x1
0070d1a2  PUSH 0x87fbd8
0070d1a7  MOV EAX,FS:[0x0]
0070d1ad  PUSH EAX
0070d1ae  MOV dword ptr FS:[0x0],ESP
0070d1b5  PUSH ECX
0070d1b6  MOV EAX,ECX
0070d1b8  XOR ECX,ECX
0070d1ba  MOV dword ptr [EAX + 0x4],ECX
0070d1bd  MOV dword ptr [EAX + 0x8],ECX
0070d1c0  MOV dword ptr [EAX + 0xc],ECX
0070d1c3  MOV dword ptr [EAX + 0x10],ECX
0070d1c6  MOV dword ptr [EAX],0x8b2274
0070d1cc  MOV dword ptr [EAX + 0x1c],ECX
0070d1cf  MOV dword ptr [EAX + 0x20],ECX
0070d1d2  MOV dword ptr [EAX + 0x24],ECX
0070d1d5  MOV dword ptr [EAX + 0x28],ECX
0070d1d8  MOV ECX,dword ptr [ESP + 0x4]
0070d1dc  MOV dword ptr [EAX + 0x18],0x8b2224
0070d1e3  MOV dword ptr FS:[0x0],ECX
0070d1ea  ADD ESP,0x10
0070d1ed  RET
