006fc9e0  PUSH ESI
006fc9e1  MOV ESI,ECX
006fc9e3  CALL 0x006efef0
006fc9e8  MOV dword ptr [ESI + 0x4],EAX
006fc9eb  MOV byte ptr [EAX + 0x15],0x1
006fc9ef  MOV EAX,dword ptr [ESI + 0x4]
006fc9f2  MOV dword ptr [EAX + 0x4],EAX
006fc9f5  MOV EAX,dword ptr [ESI + 0x4]
006fc9f8  MOV dword ptr [EAX],EAX
006fc9fa  MOV EAX,dword ptr [ESI + 0x4]
006fc9fd  MOV dword ptr [EAX + 0x8],EAX
006fca00  MOV dword ptr [ESI + 0x8],0x0
006fca07  MOV EAX,ESI
006fca09  POP ESI
006fca0a  RET
