006e1d30  PUSH ECX
006e1d31  PUSH ESI
006e1d32  MOV EAX,ECX
006e1d34  MOV dword ptr [ESP + 0x4],0x0
006e1d3c  MOV dword ptr [ESP + 0x4],ESP
006e1d40  MOV EDX,dword ptr [ESP + 0x4]
006e1d44  AND EDX,0x3
006e1d47  MOV ECX,dword ptr [EDX*0x4 + 0x9019a4]
006e1d4e  MOV EDX,dword ptr [EDX*0x4 + 0x9019b4]
006e1d55  MOV dword ptr [EAX],EDX
006e1d57  MOV EDX,dword ptr [ESP + 0xc]
006e1d5b  MOV dword ptr [EAX + 0x4],0x18005041
006e1d62  MOV dword ptr [EAX + 0x8],0x4c285ac2
006e1d69  MOV dword ptr [EAX + 0xc],0x44a450d2
006e1d70  MOV EDX,dword ptr [EDX]
006e1d72  MOV dword ptr [EAX + 0x10],EDX
006e1d75  MOV EDX,dword ptr [ESP + 0x10]
006e1d79  MOV EDX,dword ptr [EDX]
006e1d7b  MOV dword ptr [EAX + 0x14],EDX
006e1d7e  MOV EDX,ECX
006e1d80  IMUL EDX,ECX
006e1d83  XOR EDX,0x18005041
006e1d89  MOV dword ptr [EAX + 0x4],EDX
006e1d8c  IMUL EDX,ECX
006e1d8f  XOR EDX,0x4c285ac2
006e1d95  MOV ESI,dword ptr [EAX + 0x10]
006e1d98  MOV dword ptr [EAX + 0x8],EDX
006e1d9b  IMUL EDX,ECX
006e1d9e  XOR EDX,0x44a450d2
006e1da4  MOV dword ptr [EAX + 0xc],EDX
006e1da7  IMUL EDX,ECX
006e1daa  XOR ESI,EDX
006e1dac  MOV EDX,ESI
006e1dae  IMUL EDX,ECX
006e1db1  MOV dword ptr [EAX + 0x10],ESI
006e1db4  MOV ESI,dword ptr [EAX + 0x14]
006e1db7  XOR ESI,EDX
006e1db9  MOV EDX,ESI
006e1dbb  IMUL EDX,ECX
006e1dbe  MOV dword ptr [EAX + 0x14],ESI
006e1dc1  MOV ESI,dword ptr [EAX + 0x18]
006e1dc4  XOR ESI,EDX
006e1dc6  MOV EDX,ESI
006e1dc8  IMUL EDX,ECX
006e1dcb  MOV ECX,dword ptr [EAX + 0x1c]
006e1dce  XOR ECX,EDX
006e1dd0  MOV dword ptr [EAX + 0x18],ESI
006e1dd3  MOV dword ptr [EAX + 0x1c],ECX
006e1dd6  POP ESI
006e1dd7  POP ECX
006e1dd8  RET 0x8
