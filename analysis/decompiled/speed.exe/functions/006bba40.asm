006bba40  PUSH ESI
006bba41  MOV ESI,ECX
006bba43  CALL 0x006a63a0
006bba48  MOV dword ptr [ESI + 0x4],EAX
006bba4b  MOV byte ptr [EAX + 0x15],0x1
006bba4f  MOV EAX,dword ptr [ESI + 0x4]
006bba52  MOV dword ptr [EAX + 0x4],EAX
006bba55  MOV EAX,dword ptr [ESI + 0x4]
006bba58  MOV dword ptr [EAX],EAX
006bba5a  MOV EAX,dword ptr [ESI + 0x4]
006bba5d  MOV dword ptr [EAX + 0x8],EAX
006bba60  MOV dword ptr [ESI + 0x8],0x0
006bba67  MOV EAX,ESI
006bba69  POP ESI
006bba6a  RET
