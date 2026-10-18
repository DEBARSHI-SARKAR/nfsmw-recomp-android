005eeca0  PUSH ESI
005eeca1  MOV ESI,ECX
005eeca3  MOV ECX,dword ptr [ESI + 0x38]
005eeca6  TEST ECX,ECX
005eeca8  JZ 0x005eecb6
005eecaa  CALL 0x005ee0f0
005eecaf  MOV dword ptr [ESI + 0x38],0x0
005eecb6  XOR EAX,EAX
005eecb8  POP ESI
005eecb9  RET
