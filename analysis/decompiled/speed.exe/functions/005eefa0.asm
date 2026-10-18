005eefa0  PUSH ESI
005eefa1  PUSH EDI
005eefa2  MOV EDI,ECX
005eefa4  MOV ESI,dword ptr [EDI + 0x80]
005eefaa  CMP ESI,dword ptr [EDI + 0x84]
005eefb0  JZ 0x005eefce
005eefb2  PUSH EBX
005eefb3  MOV EBX,dword ptr [ESI]
005eefb5  MOV ECX,EBX
005eefb7  CALL 0x005eb800
005eefbc  TEST AL,AL
005eefbe  JNZ 0x005eefd1
005eefc0  MOV EAX,dword ptr [EDI + 0x84]
005eefc6  ADD ESI,0x4
005eefc9  CMP ESI,EAX
005eefcb  JNZ 0x005eefb3
005eefcd  POP EBX
005eefce  POP EDI
005eefcf  POP ESI
005eefd0  RET
005eefd1  MOV ECX,EBX
005eefd3  POP EBX
005eefd4  POP EDI
005eefd5  POP ESI
005eefd6  JMP 0x005eeb90
