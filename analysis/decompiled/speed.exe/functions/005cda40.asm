005cda40  MOV EAX,dword ptr [ESP + 0x4]
005cda44  MOV EDX,dword ptr [ESP + 0x8]
005cda48  CMP EAX,EDX
005cda4a  JZ 0x005cda63
005cda4c  MOV ECX,dword ptr [ESP + 0xc]
005cda50  PUSH ESI
005cda51  MOV ESI,dword ptr [ECX]
005cda53  MOV dword ptr [EAX],ESI
005cda55  MOV ESI,dword ptr [ECX + 0x4]
005cda58  MOV dword ptr [EAX + 0x4],ESI
005cda5b  ADD EAX,0x8
005cda5e  CMP EAX,EDX
005cda60  JNZ 0x005cda51
005cda62  POP ESI
005cda63  RET
