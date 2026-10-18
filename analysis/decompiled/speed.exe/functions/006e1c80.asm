006e1c80  PUSH ECX
006e1c81  PUSH ESI
006e1c82  MOV EAX,ECX
006e1c84  MOV dword ptr [ESP + 0x4],0x0
006e1c8c  MOV dword ptr [ESP + 0x4],ESP
006e1c90  MOV EDX,dword ptr [ESP + 0x4]
006e1c94  AND EDX,0x3
006e1c97  MOV ECX,dword ptr [EDX*0x4 + 0x901984]
006e1c9e  MOV EDX,dword ptr [EDX*0x4 + 0x901994]
006e1ca5  MOV dword ptr [EAX],EDX
006e1ca7  MOV EDX,dword ptr [ESP + 0xc]
006e1cab  MOV dword ptr [EAX + 0x4],0x40a41004
006e1cb2  MOV dword ptr [EAX + 0x8],0x40004802
006e1cb9  MOV dword ptr [EAX + 0xc],0x40a41004
006e1cc0  MOV EDX,dword ptr [EDX]
006e1cc2  MOV dword ptr [EAX + 0x10],EDX
006e1cc5  MOV EDX,dword ptr [ESP + 0x10]
006e1cc9  MOV EDX,dword ptr [EDX]
006e1ccb  MOV dword ptr [EAX + 0x14],EDX
006e1cce  MOV EDX,ECX
006e1cd0  IMUL EDX,ECX
006e1cd3  XOR EDX,0x40a41004
006e1cd9  MOV dword ptr [EAX + 0x4],EDX
006e1cdc  IMUL EDX,ECX
006e1cdf  XOR EDX,0x40004802
006e1ce5  MOV ESI,dword ptr [EAX + 0x10]
006e1ce8  MOV dword ptr [EAX + 0x8],EDX
006e1ceb  IMUL EDX,ECX
006e1cee  XOR EDX,0x40a41004
006e1cf4  MOV dword ptr [EAX + 0xc],EDX
006e1cf7  IMUL EDX,ECX
006e1cfa  XOR ESI,EDX
006e1cfc  MOV EDX,ESI
006e1cfe  IMUL EDX,ECX
006e1d01  MOV dword ptr [EAX + 0x10],ESI
006e1d04  MOV ESI,dword ptr [EAX + 0x14]
006e1d07  XOR ESI,EDX
006e1d09  MOV EDX,ESI
006e1d0b  IMUL EDX,ECX
006e1d0e  MOV dword ptr [EAX + 0x14],ESI
006e1d11  MOV ESI,dword ptr [EAX + 0x18]
006e1d14  XOR ESI,EDX
006e1d16  MOV EDX,ESI
006e1d18  IMUL EDX,ECX
006e1d1b  MOV ECX,dword ptr [EAX + 0x1c]
006e1d1e  XOR ECX,EDX
006e1d20  MOV dword ptr [EAX + 0x18],ESI
006e1d23  MOV dword ptr [EAX + 0x1c],ECX
006e1d26  POP ESI
006e1d27  POP ECX
006e1d28  RET 0x8
