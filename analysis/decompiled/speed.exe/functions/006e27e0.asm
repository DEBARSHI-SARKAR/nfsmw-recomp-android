006e27e0  PUSH ESI
006e27e1  MOV ESI,ECX
006e27e3  CALL 0x006dd6f0
006e27e8  MOV dword ptr [ESI + 0x4],EAX
006e27eb  MOV byte ptr [EAX + 0x25],0x1
006e27ef  MOV EAX,dword ptr [ESI + 0x4]
006e27f2  MOV dword ptr [EAX + 0x4],EAX
006e27f5  MOV EAX,dword ptr [ESI + 0x4]
006e27f8  MOV dword ptr [EAX],EAX
006e27fa  MOV EAX,dword ptr [ESI + 0x4]
006e27fd  MOV dword ptr [EAX + 0x8],EAX
006e2800  MOV dword ptr [ESI + 0x8],0x0
006e2807  MOV EAX,ESI
006e2809  POP ESI
006e280a  RET 0x8
