006e1ab0  PUSH ESI
006e1ab1  MOV ESI,ECX
006e1ab3  CALL 0x006dd6f0
006e1ab8  MOV dword ptr [ESI + 0x4],EAX
006e1abb  MOV byte ptr [EAX + 0x25],0x1
006e1abf  MOV EAX,dword ptr [ESI + 0x4]
006e1ac2  MOV dword ptr [EAX + 0x4],EAX
006e1ac5  MOV EAX,dword ptr [ESI + 0x4]
006e1ac8  MOV dword ptr [EAX],EAX
006e1aca  MOV EAX,dword ptr [ESI + 0x4]
006e1acd  MOV dword ptr [EAX + 0x8],EAX
006e1ad0  MOV dword ptr [ESI + 0x8],0x0
006e1ad7  POP ESI
006e1ad8  RET
