004ccbb0  PUSH ESI
004ccbb1  MOV ESI,ECX
004ccbb3  CALL 0x004cb770
004ccbb8  MOV EAX,dword ptr [ESI + 0x4]
004ccbbb  TEST EAX,EAX
004ccbbd  JZ 0x004ccbce
004ccbbf  PUSH 0x0
004ccbc1  PUSH 0x2c
004ccbc3  PUSH EAX
004ccbc4  MOV ECX,0x925b30
004ccbc9  CALL 0x005d0370
004ccbce  MOV dword ptr [ESI + 0x4],0x0
004ccbd5  POP ESI
004ccbd6  RET
