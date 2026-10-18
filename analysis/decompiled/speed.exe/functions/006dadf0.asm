006dadf0  PUSH ESI
006dadf1  MOV ESI,dword ptr [ECX]
006dadf3  MOV EAX,dword ptr [ESI + 0x18]
006dadf6  TEST EAX,EAX
006dadf8  JZ 0x006dae16
006dadfa  PUSH EAX
006dadfb  MOV ECX,0x987f08
006dae00  CALL 0x006d99c0
006dae05  MOV EAX,dword ptr [ESI]
006dae07  MOV dword ptr [ESI + 0x18],0x0
006dae0e  MOV ESI,dword ptr [ESI + 0x4]
006dae11  MOV dword ptr [ESI],EAX
006dae13  MOV dword ptr [EAX + 0x4],ESI
006dae16  POP ESI
006dae17  RET
