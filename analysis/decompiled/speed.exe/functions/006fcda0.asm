006fcda0  PUSH ESI
006fcda1  MOV ESI,ECX
006fcda3  CALL 0x006efef0
006fcda8  MOV dword ptr [ESI + 0x4],EAX
006fcdab  MOV byte ptr [EAX + 0x15],0x1
006fcdaf  MOV EAX,dword ptr [ESI + 0x4]
006fcdb2  MOV dword ptr [EAX + 0x4],EAX
006fcdb5  MOV EAX,dword ptr [ESI + 0x4]
006fcdb8  MOV dword ptr [EAX],EAX
006fcdba  MOV EAX,dword ptr [ESI + 0x4]
006fcdbd  MOV dword ptr [EAX + 0x8],EAX
006fcdc0  MOV dword ptr [ESI + 0x8],0x0
006fcdc7  MOV EAX,ESI
006fcdc9  POP ESI
006fcdca  RET
