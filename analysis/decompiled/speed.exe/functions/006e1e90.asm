006e1e90  PUSH ECX
006e1e91  PUSH ESI
006e1e92  MOV EAX,ECX
006e1e94  MOV dword ptr [ESP + 0x4],0x0
006e1e9c  MOV dword ptr [ESP + 0x4],EBP
006e1ea0  MOV EDX,dword ptr [ESP + 0x4]
006e1ea4  AND EDX,0x3
006e1ea7  MOV ECX,dword ptr [EDX*0x4 + 0x9019e4]
006e1eae  MOV EDX,dword ptr [EDX*0x4 + 0x9019f4]
006e1eb5  MOV dword ptr [EAX],EDX
006e1eb7  MOV EDX,dword ptr [ESP + 0xc]
006e1ebb  MOV dword ptr [EAX + 0x4],0x10800a41
006e1ec2  MOV dword ptr [EAX + 0x8],0x842c6
006e1ec9  MOV dword ptr [EAX + 0xc],0x1c8c5ad6
006e1ed0  MOV EDX,dword ptr [EDX]
006e1ed2  MOV dword ptr [EAX + 0x10],EDX
006e1ed5  MOV EDX,dword ptr [ESP + 0x10]
006e1ed9  MOV EDX,dword ptr [EDX]
006e1edb  MOV dword ptr [EAX + 0x14],EDX
006e1ede  MOV EDX,ECX
006e1ee0  IMUL EDX,ECX
006e1ee3  XOR EDX,0x10800a41
006e1ee9  MOV dword ptr [EAX + 0x4],EDX
006e1eec  IMUL EDX,ECX
006e1eef  XOR EDX,0x842c6
006e1ef5  MOV ESI,dword ptr [EAX + 0x10]
006e1ef8  MOV dword ptr [EAX + 0x8],EDX
006e1efb  IMUL EDX,ECX
006e1efe  XOR EDX,0x1c8c5ad6
006e1f04  MOV dword ptr [EAX + 0xc],EDX
006e1f07  IMUL EDX,ECX
006e1f0a  XOR ESI,EDX
006e1f0c  MOV EDX,ESI
006e1f0e  IMUL EDX,ECX
006e1f11  MOV dword ptr [EAX + 0x10],ESI
006e1f14  MOV ESI,dword ptr [EAX + 0x14]
006e1f17  XOR ESI,EDX
006e1f19  MOV EDX,ESI
006e1f1b  IMUL EDX,ECX
006e1f1e  MOV dword ptr [EAX + 0x14],ESI
006e1f21  MOV ESI,dword ptr [EAX + 0x18]
006e1f24  XOR ESI,EDX
006e1f26  MOV EDX,ESI
006e1f28  IMUL EDX,ECX
006e1f2b  MOV ECX,dword ptr [EAX + 0x1c]
006e1f2e  XOR ECX,EDX
006e1f30  MOV dword ptr [EAX + 0x18],ESI
006e1f33  MOV dword ptr [EAX + 0x1c],ECX
006e1f36  POP ESI
006e1f37  POP ECX
006e1f38  RET 0x8
