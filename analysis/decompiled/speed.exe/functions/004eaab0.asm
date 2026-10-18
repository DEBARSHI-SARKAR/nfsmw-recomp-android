004eaab0  PUSH ESI
004eaab1  MOV ESI,ECX
004eaab3  CALL 0x004ea770
004eaab8  MOV EAX,dword ptr [ESI + 0x4]
004eaabb  TEST EAX,EAX
004eaabd  JZ 0x004eaace
004eaabf  PUSH 0x0
004eaac1  PUSH 0xc
004eaac3  PUSH EAX
004eaac4  MOV ECX,0x925b30
004eaac9  CALL 0x005d0370
004eaace  MOV dword ptr [ESI + 0x4],0x0
004eaad5  POP ESI
004eaad6  RET
