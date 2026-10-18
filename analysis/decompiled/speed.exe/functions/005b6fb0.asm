005b6fb0  PUSH ESI
005b6fb1  MOV ESI,ECX
005b6fb3  MOV EAX,dword ptr [ESI + 0x4]
005b6fb6  CMP dword ptr [ESI + 0x8],EAX
005b6fb9  JNZ 0x005b6fc4
005b6fbb  INC EAX
005b6fbc  PUSH EAX
005b6fbd  MOV ECX,ESI
005b6fbf  CALL 0x005b6f20
005b6fc4  MOV EAX,dword ptr [ESI + 0x8]
005b6fc7  MOV ECX,dword ptr [ESI + 0xc]
005b6fca  MOV EDX,dword ptr [ESP + 0x8]
005b6fce  MOV dword ptr [ECX + EAX*0x4],EDX
005b6fd1  INC dword ptr [ESI + 0x8]
005b6fd4  POP ESI
005b6fd5  RET 0x4
