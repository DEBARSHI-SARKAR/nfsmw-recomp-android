0058b290  MOV EDX,dword ptr [ESP + 0x4]
0058b294  MOV EAX,dword ptr [EDX]
0058b296  PUSH EBX
0058b297  PUSH ESI
0058b298  MOV ESI,dword ptr [EAX + 0x8]
0058b29b  MOV dword ptr [EDX],ESI
0058b29d  MOV ESI,dword ptr [EAX + 0x8]
0058b2a0  MOV BL,byte ptr [ESI + 0x15]
0058b2a3  TEST BL,BL
0058b2a5  JNZ 0x0058b2aa
0058b2a7  MOV dword ptr [ESI + 0x4],EDX
0058b2aa  MOV ESI,dword ptr [EDX + 0x4]
0058b2ad  MOV dword ptr [EAX + 0x4],ESI
0058b2b0  MOV ECX,dword ptr [ECX + 0x4]
0058b2b3  CMP EDX,dword ptr [ECX + 0x4]
0058b2b6  JNZ 0x0058b2c6
0058b2b8  MOV dword ptr [ECX + 0x4],EAX
0058b2bb  POP ESI
0058b2bc  MOV dword ptr [EAX + 0x8],EDX
0058b2bf  MOV dword ptr [EDX + 0x4],EAX
0058b2c2  POP EBX
0058b2c3  RET 0x4
0058b2c6  MOV ECX,dword ptr [EDX + 0x4]
0058b2c9  CMP EDX,dword ptr [ECX + 0x8]
0058b2cc  JNZ 0x0058b2dc
0058b2ce  MOV dword ptr [ECX + 0x8],EAX
0058b2d1  POP ESI
0058b2d2  MOV dword ptr [EAX + 0x8],EDX
0058b2d5  MOV dword ptr [EDX + 0x4],EAX
0058b2d8  POP EBX
0058b2d9  RET 0x4
0058b2dc  MOV dword ptr [ECX],EAX
0058b2de  POP ESI
0058b2df  MOV dword ptr [EAX + 0x8],EDX
0058b2e2  MOV dword ptr [EDX + 0x4],EAX
0058b2e5  POP EBX
0058b2e6  RET 0x4
