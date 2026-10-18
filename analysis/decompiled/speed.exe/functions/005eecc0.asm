005eecc0  PUSH ESI
005eecc1  MOV ESI,ECX
005eecc3  MOV ECX,dword ptr [ESI + 0x44]
005eecc6  TEST ECX,ECX
005eecc8  JZ 0x005eecd6
005eecca  CALL 0x005ee0f0
005eeccf  MOV dword ptr [ESI + 0x44],0x0
005eecd6  XOR EAX,EAX
005eecd8  POP ESI
005eecd9  RET
