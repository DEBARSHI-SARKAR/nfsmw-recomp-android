006e2a90  PUSH ESI
006e2a91  MOV ESI,ECX
006e2a93  MOV EAX,dword ptr [ESI + 0x4]
006e2a96  MOV ECX,dword ptr [EAX + 0x4]
006e2a99  PUSH ECX
006e2a9a  MOV ECX,ESI
006e2a9c  CALL 0x006e2930
006e2aa1  MOV EAX,dword ptr [ESI + 0x4]
006e2aa4  MOV dword ptr [EAX + 0x4],EAX
006e2aa7  MOV EAX,dword ptr [ESI + 0x4]
006e2aaa  MOV dword ptr [ESI + 0x8],0x0
006e2ab1  MOV dword ptr [EAX],EAX
006e2ab3  MOV ESI,dword ptr [ESI + 0x4]
006e2ab6  MOV dword ptr [ESI + 0x8],ESI
006e2ab9  POP ESI
006e2aba  RET
