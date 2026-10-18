004da2b0  PUSH ESI
004da2b1  MOV ESI,ECX
004da2b3  MOV EAX,dword ptr [ESI]
004da2b5  CALL dword ptr [EAX + 0x20]
004da2b8  MOV byte ptr [ESI + 0x8],0x0
004da2bc  POP ESI
004da2bd  RET
