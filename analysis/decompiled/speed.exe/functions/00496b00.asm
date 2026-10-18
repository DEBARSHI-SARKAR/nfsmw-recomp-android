00496b00  MOV EAX,ECX
00496b02  XOR ECX,ECX
00496b04  OR EDX,0xffffffff
00496b07  MOV dword ptr [EAX + 0x4],ECX
00496b0a  MOV dword ptr [EAX + 0xc],ECX
00496b0d  MOV dword ptr [EAX],0x895868
00496b13  MOV dword ptr [EAX + 0x10],ECX
00496b16  MOV dword ptr [EAX + 0x14],ECX
00496b19  MOV dword ptr [EAX + 0x18],EDX
00496b1c  MOV dword ptr [EAX + 0x1c],EDX
00496b1f  MOV dword ptr [EAX + 0x20],ECX
00496b22  MOV dword ptr [EAX + 0x24],ECX
00496b25  MOV dword ptr [EAX + 0x28],ECX
00496b28  MOV dword ptr [EAX + 0x2c],ECX
00496b2b  MOV dword ptr [EAX + 0x8],0x11
00496b32  RET
