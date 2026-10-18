004dd9f0  PUSH ESI
004dd9f1  MOV ESI,ECX
004dd9f3  MOV ECX,dword ptr [ESI + 0x44]
004dd9f6  TEST ECX,ECX
004dd9f8  JZ 0x004dda00
004dd9fa  MOV EAX,dword ptr [ECX]
004dd9fc  PUSH 0x1
004dd9fe  CALL dword ptr [EAX]
004dda00  MOV dword ptr [ESI + 0x44],0x0
004dda07  POP ESI
004dda08  RET
