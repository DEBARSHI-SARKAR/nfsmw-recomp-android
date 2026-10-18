00623e70  MOV EDX,dword ptr [ESP + 0x8]
00623e74  MOV EAX,ECX
00623e76  MOV ECX,dword ptr [ESP + 0x4]
00623e7a  MOV dword ptr [EAX + 0x4],0x30
00623e81  MOV dword ptr [EAX],0x8a71e4
00623e87  MOV dword ptr [EAX + 0x8],ECX
00623e8a  MOV ECX,dword ptr [ESP + 0xc]
00623e8e  MOV dword ptr [EAX + 0xc],EDX
00623e91  MOV EDX,dword ptr [ESP + 0x10]
00623e95  MOV dword ptr [EAX + 0x10],ECX
00623e98  MOV dword ptr [EAX + 0x14],EDX
00623e9b  MOV EDX,dword ptr [ESP + 0x14]
00623e9f  LEA ECX,[EAX + 0x18]
00623ea2  MOV dword ptr [ECX],EDX
00623ea4  MOV EDX,dword ptr [ESP + 0x18]
00623ea8  MOV dword ptr [ECX + 0x4],EDX
00623eab  MOV EDX,dword ptr [ESP + 0x1c]
00623eaf  MOV dword ptr [ECX + 0x8],EDX
00623eb2  MOV EDX,dword ptr [ESP + 0x20]
00623eb6  MOV dword ptr [ECX + 0xc],EDX
00623eb9  RET 0x20
