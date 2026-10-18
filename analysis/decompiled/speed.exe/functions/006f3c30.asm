006f3c30  PUSH ESI
006f3c31  MOV ESI,ECX
006f3c33  CALL 0x006efef0
006f3c38  MOV dword ptr [ESI + 0x4],EAX
006f3c3b  MOV byte ptr [EAX + 0x15],0x1
006f3c3f  MOV EAX,dword ptr [ESI + 0x4]
006f3c42  MOV dword ptr [EAX + 0x4],EAX
006f3c45  MOV EAX,dword ptr [ESI + 0x4]
006f3c48  MOV dword ptr [EAX],EAX
006f3c4a  MOV EAX,dword ptr [ESI + 0x4]
006f3c4d  MOV dword ptr [EAX + 0x8],EAX
006f3c50  MOV dword ptr [ESI + 0x8],0x0
006f3c57  POP ESI
006f3c58  RET
