005e7ac0  MOV ECX,dword ptr [ESP + 0x4]
005e7ac4  MOV EDX,dword ptr [ESP + 0x8]
005e7ac8  CMP ECX,EDX
005e7aca  MOV EAX,dword ptr [ESP + 0xc]
005e7ace  JZ 0x005e7ae4
005e7ad0  PUSH ESI
005e7ad1  TEST EAX,EAX
005e7ad3  JZ 0x005e7ad9
005e7ad5  MOV ESI,dword ptr [ECX]
005e7ad7  MOV dword ptr [EAX],ESI
005e7ad9  ADD ECX,0x4
005e7adc  ADD EAX,0x4
005e7adf  CMP ECX,EDX
005e7ae1  JNZ 0x005e7ad1
005e7ae3  POP ESI
005e7ae4  RET
