00623bc0  MOV EDX,dword ptr [ESP + 0x8]
00623bc4  MOV EAX,ECX
00623bc6  MOV ECX,dword ptr [ESP + 0x4]
00623bca  MOV dword ptr [EAX + 0x8],ECX
00623bcd  MOV CL,byte ptr [ESP + 0xc]
00623bd1  MOV dword ptr [EAX + 0xc],EDX
00623bd4  MOV EDX,dword ptr [ESP + 0x10]
00623bd8  MOV byte ptr [EAX + 0x10],CL
00623bdb  MOV ECX,dword ptr [ESP + 0x14]
00623bdf  MOV dword ptr [EAX + 0x4],0x20
00623be6  MOV dword ptr [EAX],0x8a7174
00623bec  MOV dword ptr [EAX + 0x14],EDX
00623bef  MOV dword ptr [EAX + 0x18],ECX
00623bf2  RET 0x14
