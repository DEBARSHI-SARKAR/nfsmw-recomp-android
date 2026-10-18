00495cf0  MOV EAX,ECX
00495cf2  XOR ECX,ECX
00495cf4  OR EDX,0xffffffff
00495cf7  MOV dword ptr [EAX + 0x4],ECX
00495cfa  MOV dword ptr [EAX + 0xc],ECX
00495cfd  MOV dword ptr [EAX],0x895818
00495d03  MOV dword ptr [EAX + 0x10],EDX
00495d06  MOV dword ptr [EAX + 0x14],ECX
00495d09  MOV dword ptr [EAX + 0x18],ECX
00495d0c  MOV dword ptr [EAX + 0x1c],EDX
00495d0f  MOV dword ptr [EAX + 0x20],ECX
00495d12  MOV dword ptr [EAX + 0x24],ECX
00495d15  MOV dword ptr [EAX + 0x8],0x14
00495d1c  RET
