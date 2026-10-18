007a4af0  PUSH ESI
007a4af1  MOV ESI,ECX
007a4af3  MOV ECX,dword ptr [ESI + 0x1c0]
007a4af9  TEST ECX,ECX
007a4afb  JZ 0x007a4b03
007a4afd  MOV EAX,dword ptr [ECX]
007a4aff  PUSH 0x1
007a4b01  CALL dword ptr [EAX]
007a4b03  MOV dword ptr [ESI + 0x1c0],0x0
007a4b0d  POP ESI
007a4b0e  RET
