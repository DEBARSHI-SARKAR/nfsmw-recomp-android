006b1080  PUSH ESI
006b1081  MOV ESI,ECX
006b1083  CALL 0x006a63a0
006b1088  MOV dword ptr [ESI + 0x4],EAX
006b108b  MOV byte ptr [EAX + 0x15],0x1
006b108f  MOV EAX,dword ptr [ESI + 0x4]
006b1092  MOV dword ptr [EAX + 0x4],EAX
006b1095  MOV EAX,dword ptr [ESI + 0x4]
006b1098  MOV dword ptr [EAX],EAX
006b109a  MOV EAX,dword ptr [ESI + 0x4]
006b109d  MOV dword ptr [EAX + 0x8],EAX
006b10a0  MOV dword ptr [ESI + 0x8],0x0
006b10a7  POP ESI
006b10a8  RET
