005cda10  MOV EAX,dword ptr [ESP + 0x4]
005cda14  MOV EDX,dword ptr [ESP + 0x8]
005cda18  CMP EAX,EDX
005cda1a  JZ 0x005cda33
005cda1c  MOV ECX,dword ptr [ESP + 0xc]
005cda20  PUSH ESI
005cda21  MOV ESI,dword ptr [ECX]
005cda23  MOV dword ptr [EAX],ESI
005cda25  MOV ESI,dword ptr [ECX + 0x4]
005cda28  MOV dword ptr [EAX + 0x4],ESI
005cda2b  ADD EAX,0x8
005cda2e  CMP EAX,EDX
005cda30  JNZ 0x005cda21
005cda32  POP ESI
005cda33  RET
