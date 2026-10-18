00737440  MOV EDX,dword ptr [ESP + 0x8]
00737444  MOV EAX,ECX
00737446  MOV ECX,dword ptr [ESP + 0x4]
0073744a  MOV dword ptr [EAX + 0x4],ECX
0073744d  MOV ECX,dword ptr [ESP + 0xc]
00737451  MOV dword ptr [EAX + 0x10],0x0
00737458  MOV dword ptr [EAX + 0x8],EDX
0073745b  MOV dword ptr [EAX + 0xc],ECX
0073745e  RET 0xc
