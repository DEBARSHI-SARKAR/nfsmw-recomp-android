005cd9a0  MOV EAX,dword ptr [ESP + 0x4]
005cd9a4  MOV EDX,dword ptr [ESP + 0x8]
005cd9a8  CMP EAX,EDX
005cd9aa  JZ 0x005cd9c3
005cd9ac  MOV ECX,dword ptr [ESP + 0xc]
005cd9b0  PUSH ESI
005cd9b1  MOV ESI,dword ptr [ECX]
005cd9b3  MOV dword ptr [EAX],ESI
005cd9b5  MOV ESI,dword ptr [ECX + 0x4]
005cd9b8  MOV dword ptr [EAX + 0x4],ESI
005cd9bb  ADD EAX,0x8
005cd9be  CMP EAX,EDX
005cd9c0  JNZ 0x005cd9b1
005cd9c2  POP ESI
005cd9c3  RET
