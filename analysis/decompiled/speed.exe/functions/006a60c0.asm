006a60c0  MOV EDX,dword ptr [ESP + 0x4]
006a60c4  MOV EAX,dword ptr [EDX + 0x8]
006a60c7  PUSH EBX
006a60c8  PUSH ESI
006a60c9  MOV ESI,dword ptr [EAX]
006a60cb  MOV dword ptr [EDX + 0x8],ESI
006a60ce  MOV ESI,dword ptr [EAX]
006a60d0  MOV BL,byte ptr [ESI + 0x15]
006a60d3  TEST BL,BL
006a60d5  JNZ 0x006a60da
006a60d7  MOV dword ptr [ESI + 0x4],EDX
006a60da  MOV ESI,dword ptr [EDX + 0x4]
006a60dd  MOV dword ptr [EAX + 0x4],ESI
006a60e0  MOV ECX,dword ptr [ECX + 0x4]
006a60e3  CMP EDX,dword ptr [ECX + 0x4]
006a60e6  JNZ 0x006a60f5
006a60e8  MOV dword ptr [ECX + 0x4],EAX
006a60eb  POP ESI
006a60ec  MOV dword ptr [EAX],EDX
006a60ee  MOV dword ptr [EDX + 0x4],EAX
006a60f1  POP EBX
006a60f2  RET 0x4
006a60f5  MOV ECX,dword ptr [EDX + 0x4]
006a60f8  CMP EDX,dword ptr [ECX]
006a60fa  JNZ 0x006a6108
006a60fc  MOV dword ptr [ECX],EAX
006a60fe  POP ESI
006a60ff  MOV dword ptr [EAX],EDX
006a6101  MOV dword ptr [EDX + 0x4],EAX
006a6104  POP EBX
006a6105  RET 0x4
006a6108  MOV dword ptr [ECX + 0x8],EAX
006a610b  POP ESI
006a610c  MOV dword ptr [EAX],EDX
006a610e  MOV dword ptr [EDX + 0x4],EAX
006a6111  POP EBX
006a6112  RET 0x4
