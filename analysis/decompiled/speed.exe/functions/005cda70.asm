005cda70  MOV EAX,dword ptr [ESP + 0x4]
005cda74  MOV ECX,dword ptr [ESP + 0x8]
005cda78  CMP EAX,ECX
005cda7a  JZ 0x005cda8d
005cda7c  MOV EDX,dword ptr [ESP + 0xc]
005cda80  PUSH ESI
005cda81  MOV ESI,dword ptr [EDX]
005cda83  MOV dword ptr [EAX],ESI
005cda85  ADD EAX,0x4
005cda88  CMP EAX,ECX
005cda8a  JNZ 0x005cda81
005cda8c  POP ESI
005cda8d  RET
