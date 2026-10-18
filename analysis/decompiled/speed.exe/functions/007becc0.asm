007becc0  PUSH ECX
007becc1  PUSH ESI
007becc2  MOV EAX,ECX
007becc4  MOV dword ptr [ESP + 0x4],0x0
007beccc  MOV dword ptr [ESP + 0x4],ESP
007becd0  MOV EDX,dword ptr [ESP + 0x4]
007becd4  AND EDX,0x3
007becd7  MOV ECX,dword ptr [EDX*0x4 + 0x9061ec]
007becde  MOV EDX,dword ptr [EDX*0x4 + 0x9061fc]
007bece5  MOV dword ptr [EAX],EDX
007bece7  MOV EDX,dword ptr [ESP + 0xc]
007beceb  MOV dword ptr [EAX + 0x4],0x10804201
007becf2  MOV dword ptr [EAX + 0x8],0x10804205
007becf9  MOV dword ptr [EAX + 0xc],0x4804424a
007bed00  MOV EDX,dword ptr [EDX]
007bed02  MOV dword ptr [EAX + 0x10],EDX
007bed05  MOV EDX,dword ptr [ESP + 0x10]
007bed09  MOV EDX,dword ptr [EDX]
007bed0b  MOV dword ptr [EAX + 0x14],EDX
007bed0e  MOV EDX,ECX
007bed10  IMUL EDX,ECX
007bed13  XOR EDX,0x10804201
007bed19  MOV dword ptr [EAX + 0x4],EDX
007bed1c  IMUL EDX,ECX
007bed1f  XOR EDX,0x10804205
007bed25  MOV ESI,dword ptr [EAX + 0x10]
007bed28  MOV dword ptr [EAX + 0x8],EDX
007bed2b  IMUL EDX,ECX
007bed2e  XOR EDX,0x4804424a
007bed34  MOV dword ptr [EAX + 0xc],EDX
007bed37  IMUL EDX,ECX
007bed3a  XOR ESI,EDX
007bed3c  MOV EDX,ESI
007bed3e  IMUL EDX,ECX
007bed41  MOV dword ptr [EAX + 0x10],ESI
007bed44  MOV ESI,dword ptr [EAX + 0x14]
007bed47  XOR ESI,EDX
007bed49  MOV EDX,ESI
007bed4b  IMUL EDX,ECX
007bed4e  MOV dword ptr [EAX + 0x14],ESI
007bed51  MOV ESI,dword ptr [EAX + 0x18]
007bed54  XOR ESI,EDX
007bed56  MOV EDX,ESI
007bed58  IMUL EDX,ECX
007bed5b  MOV ECX,dword ptr [EAX + 0x1c]
007bed5e  XOR ECX,EDX
007bed60  MOV dword ptr [EAX + 0x18],ESI
007bed63  MOV dword ptr [EAX + 0x1c],ECX
007bed66  POP ESI
007bed67  POP ECX
007bed68  RET 0x8
