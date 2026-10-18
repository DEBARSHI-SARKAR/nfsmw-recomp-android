006b0ed0  PUSH ESI
006b0ed1  MOV ESI,ECX
006b0ed3  MOV EAX,dword ptr [ESI + 0x4]
006b0ed6  MOV ECX,dword ptr [EAX + 0x4]
006b0ed9  PUSH ECX
006b0eda  MOV ECX,ESI
006b0edc  CALL 0x006a6070
006b0ee1  MOV EAX,dword ptr [ESI + 0x4]
006b0ee4  MOV dword ptr [EAX + 0x4],EAX
006b0ee7  MOV EAX,dword ptr [ESI + 0x4]
006b0eea  MOV dword ptr [ESI + 0x8],0x0
006b0ef1  MOV dword ptr [EAX],EAX
006b0ef3  MOV ESI,dword ptr [ESI + 0x4]
006b0ef6  MOV dword ptr [ESI + 0x8],ESI
006b0ef9  POP ESI
006b0efa  RET
