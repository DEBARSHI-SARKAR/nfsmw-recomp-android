007eea3f  PUSH EBP
007eea40  MOV EBP,ESP
007eea42  PUSH ESI
007eea43  PUSH dword ptr [EBP + 0x28]
007eea46  MOV ESI,ECX
007eea48  PUSH dword ptr [EBP + 0x24]
007eea4b  PUSH dword ptr [EBP + 0x20]
007eea4e  CALL 0x007ed7df
007eea53  MOV EAX,dword ptr [EBP + 0x8]
007eea56  AND dword ptr [ESI + 0x38],0x0
007eea5a  AND dword ptr [ESI + 0x3c],0x0
007eea5e  MOV dword ptr [ESI + 0x14],EAX
007eea61  MOV EAX,dword ptr [EBP + 0xc]
007eea64  MOV dword ptr [ESI + 0x28],EAX
007eea67  MOV EAX,dword ptr [EBP + 0x10]
007eea6a  MOV dword ptr [ESI + 0x2c],EAX
007eea6d  MOV EAX,dword ptr [EBP + 0x14]
007eea70  MOV dword ptr [ESI + 0x20],EAX
007eea73  MOV EAX,dword ptr [EBP + 0x18]
007eea76  MOV dword ptr [ESI + 0x24],EAX
007eea79  MOV EAX,dword ptr [EBP + 0x1c]
007eea7c  MOV ECX,ESI
007eea7e  MOV dword ptr [ESI],0x8c2078
007eea84  MOV dword ptr [ESI + 0x30],EAX
007eea87  CALL 0x007ed884
007eea8c  MOV EAX,ESI
007eea8e  POP ESI
007eea8f  POP EBP
007eea90  RET 0x24
