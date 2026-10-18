007aeb60  PUSH ESI
007aeb61  MOV ESI,ECX
007aeb63  MOV ECX,dword ptr [ESP + 0x8]
007aeb67  TEST ECX,ECX
007aeb69  JZ 0x007aeb88
007aeb6b  MOV EAX,dword ptr [ECX + 0x4]
007aeb6e  MOV EDX,dword ptr [ECX + 0x8]
007aeb71  MOV dword ptr [EDX],EAX
007aeb73  MOV dword ptr [EAX + 0x4],EDX
007aeb76  MOV EAX,dword ptr [ECX]
007aeb78  PUSH 0x1
007aeb7a  CALL dword ptr [EAX]
007aeb7c  DEC dword ptr [ESI + 0x1bc]
007aeb82  MOV AL,0x1
007aeb84  POP ESI
007aeb85  RET 0x4
007aeb88  XOR AL,AL
007aeb8a  POP ESI
007aeb8b  RET 0x4
