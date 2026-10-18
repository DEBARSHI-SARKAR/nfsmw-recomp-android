006100a0  PUSH ESI
006100a1  MOV ESI,ECX
006100a3  CALL 0x0060cd30
006100a8  MOV dword ptr [ESI + 0x4],EAX
006100ab  MOV byte ptr [EAX + 0x19],0x1
006100af  MOV EAX,dword ptr [ESI + 0x4]
006100b2  MOV dword ptr [EAX + 0x4],EAX
006100b5  MOV EAX,dword ptr [ESI + 0x4]
006100b8  MOV dword ptr [EAX],EAX
006100ba  MOV EAX,dword ptr [ESI + 0x4]
006100bd  MOV dword ptr [EAX + 0x8],EAX
006100c0  MOV dword ptr [ESI + 0x8],0x0
006100c7  POP ESI
006100c8  RET
