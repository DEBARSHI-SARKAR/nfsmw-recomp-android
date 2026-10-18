00623a90  MOV EDX,dword ptr [ESP + 0x8]
00623a94  MOV EAX,ECX
00623a96  MOV ECX,dword ptr [ESP + 0x4]
00623a9a  MOV dword ptr [EAX + 0x8],ECX
00623a9d  MOV ECX,dword ptr [ESP + 0xc]
00623aa1  MOV dword ptr [EAX + 0x4],0x20
00623aa8  MOV dword ptr [EAX],0x8a7110
00623aae  MOV dword ptr [EAX + 0xc],EDX
00623ab1  MOV dword ptr [EAX + 0x10],ECX
00623ab4  RET 0xc
