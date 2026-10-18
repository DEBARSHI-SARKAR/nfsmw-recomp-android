005068d0  MOV EDX,dword ptr [ESP + 0x8]
005068d4  MOV EAX,ECX
005068d6  LEA ECX,[EAX + 0x18]
005068d9  MOV dword ptr [ECX],ECX
005068db  MOV dword ptr [ECX + 0x4],ECX
005068de  XOR ECX,ECX
005068e0  MOV dword ptr [EAX + 0x20],ECX
005068e3  MOV dword ptr [EAX + 0x2c],ECX
005068e6  MOV dword ptr [EAX + 0x30],ECX
005068e9  MOV dword ptr [EAX + 0x34],ECX
005068ec  MOV ECX,dword ptr [ESP + 0x4]
005068f0  MOV dword ptr [EAX],ECX
005068f2  MOV ECX,dword ptr [ESP + 0xc]
005068f6  MOV dword ptr [EAX + 0x4],EDX
005068f9  MOV EDX,dword ptr [ESP + 0x10]
005068fd  MOV dword ptr [EAX + 0x8],ECX
00506900  MOV ECX,dword ptr [ESP + 0x14]
00506904  MOV dword ptr [EAX + 0xc],EDX
00506907  MOV EDX,dword ptr [ESP + 0x18]
0050690b  MOV dword ptr [EAX + 0x10],ECX
0050690e  MOV dword ptr [EAX + 0x14],EDX
00506911  RET 0x18
