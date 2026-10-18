006259a0  MOV EAX,ECX
006259a2  MOV ECX,dword ptr [ESP + 0x4]
006259a6  MOV dword ptr [EAX + 0x8],ECX
006259a9  MOV ECX,dword ptr [ESP + 0x8]
006259ad  LEA EDX,[EAX + 0xc]
006259b0  MOV dword ptr [EDX],ECX
006259b2  MOV ECX,dword ptr [ESP + 0xc]
006259b6  MOV dword ptr [EDX + 0x4],ECX
006259b9  MOV ECX,dword ptr [ESP + 0x10]
006259bd  MOV dword ptr [EDX + 0x8],ECX
006259c0  MOV ECX,dword ptr [ESP + 0x14]
006259c4  LEA EDX,[EAX + 0x18]
006259c7  MOV dword ptr [EDX],ECX
006259c9  MOV ECX,dword ptr [ESP + 0x18]
006259cd  MOV dword ptr [EDX + 0x4],ECX
006259d0  MOV ECX,dword ptr [ESP + 0x1c]
006259d4  MOV dword ptr [EAX + 0x4],0x30
006259db  MOV dword ptr [EAX],0x8a76ec
006259e1  MOV dword ptr [EDX + 0x8],ECX
006259e4  RET 0x1c
