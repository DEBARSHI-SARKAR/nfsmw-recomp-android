006bba70  PUSH ESI
006bba71  MOV ESI,ECX
006bba73  CALL 0x006a63a0
006bba78  MOV dword ptr [ESI + 0x4],EAX
006bba7b  MOV byte ptr [EAX + 0x15],0x1
006bba7f  MOV EAX,dword ptr [ESI + 0x4]
006bba82  MOV dword ptr [EAX + 0x4],EAX
006bba85  MOV EAX,dword ptr [ESI + 0x4]
006bba88  MOV dword ptr [EAX],EAX
006bba8a  MOV EAX,dword ptr [ESI + 0x4]
006bba8d  MOV dword ptr [EAX + 0x8],EAX
006bba90  MOV dword ptr [ESI + 0x8],0x0
006bba97  MOV EAX,ESI
006bba99  POP ESI
006bba9a  RET
