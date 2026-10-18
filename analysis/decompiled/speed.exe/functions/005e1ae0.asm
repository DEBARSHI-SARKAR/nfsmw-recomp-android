005e1ae0  MOV EAX,dword ptr [ESP + 0x4]
005e1ae4  MOV ECX,dword ptr [ESP + 0x8]
005e1ae8  CMP EAX,ECX
005e1aea  JZ 0x005e1afd
005e1aec  MOV EDX,dword ptr [ESP + 0xc]
005e1af0  PUSH ESI
005e1af1  MOV ESI,dword ptr [EDX]
005e1af3  MOV dword ptr [EAX],ESI
005e1af5  ADD EAX,0x4
005e1af8  CMP EAX,ECX
005e1afa  JNZ 0x005e1af1
005e1afc  POP ESI
005e1afd  RET
