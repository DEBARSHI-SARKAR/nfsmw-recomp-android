005e6890  MOV EDX,dword ptr [ESP + 0x4]
005e6894  MOV EAX,dword ptr [EDX]
005e6896  PUSH EBX
005e6897  PUSH ESI
005e6898  MOV ESI,dword ptr [EAX + 0x8]
005e689b  MOV dword ptr [EDX],ESI
005e689d  MOV ESI,dword ptr [EAX + 0x8]
005e68a0  MOV BL,byte ptr [ESI + 0x1d]
005e68a3  TEST BL,BL
005e68a5  JNZ 0x005e68aa
005e68a7  MOV dword ptr [ESI + 0x4],EDX
005e68aa  MOV ESI,dword ptr [EDX + 0x4]
005e68ad  MOV dword ptr [EAX + 0x4],ESI
005e68b0  MOV ECX,dword ptr [ECX + 0x4]
005e68b3  CMP EDX,dword ptr [ECX + 0x4]
005e68b6  JNZ 0x005e68c6
005e68b8  MOV dword ptr [ECX + 0x4],EAX
005e68bb  POP ESI
005e68bc  MOV dword ptr [EAX + 0x8],EDX
005e68bf  MOV dword ptr [EDX + 0x4],EAX
005e68c2  POP EBX
005e68c3  RET 0x4
005e68c6  MOV ECX,dword ptr [EDX + 0x4]
005e68c9  CMP EDX,dword ptr [ECX + 0x8]
005e68cc  JNZ 0x005e68dc
005e68ce  MOV dword ptr [ECX + 0x8],EAX
005e68d1  POP ESI
005e68d2  MOV dword ptr [EAX + 0x8],EDX
005e68d5  MOV dword ptr [EDX + 0x4],EAX
005e68d8  POP EBX
005e68d9  RET 0x4
005e68dc  MOV dword ptr [ECX],EAX
005e68de  POP ESI
005e68df  MOV dword ptr [EAX + 0x8],EDX
005e68e2  MOV dword ptr [EDX + 0x4],EAX
005e68e5  POP EBX
005e68e6  RET 0x4
