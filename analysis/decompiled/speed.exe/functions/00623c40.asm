00623c40  MOV EDX,dword ptr [ESP + 0x8]
00623c44  MOV EAX,ECX
00623c46  MOV ECX,dword ptr [ESP + 0x4]
00623c4a  MOV dword ptr [EAX + 0x8],ECX
00623c4d  MOV ECX,dword ptr [ESP + 0xc]
00623c51  MOV dword ptr [EAX + 0x4],0x40
00623c58  MOV dword ptr [EAX],0x8a71a8
00623c5e  MOV dword ptr [EAX + 0xc],EDX
00623c61  MOV EDX,dword ptr [ESP + 0x10]
00623c65  MOV dword ptr [EAX + 0x10],ECX
00623c68  MOV ECX,dword ptr [ESP + 0x14]
00623c6c  MOV dword ptr [EAX + 0x14],EDX
00623c6f  MOV EDX,dword ptr [ESP + 0x18]
00623c73  MOV dword ptr [EAX + 0x18],ECX
00623c76  MOV ECX,dword ptr [ESP + 0x1c]
00623c7a  MOV dword ptr [EAX + 0x1c],EDX
00623c7d  MOV dword ptr [EAX + 0x20],ECX
00623c80  MOV ECX,dword ptr [ESP + 0x20]
00623c84  LEA EDX,[EAX + 0x24]
00623c87  MOV dword ptr [EDX],ECX
00623c89  MOV ECX,dword ptr [ESP + 0x24]
00623c8d  MOV dword ptr [EDX + 0x4],ECX
00623c90  MOV ECX,dword ptr [ESP + 0x28]
00623c94  MOV dword ptr [EDX + 0x8],ECX
00623c97  MOV ECX,dword ptr [ESP + 0x2c]
00623c9b  MOV dword ptr [EDX + 0xc],ECX
00623c9e  RET 0x2c
