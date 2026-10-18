0072b4a0  MOV EDX,dword ptr [ESP + 0x4]
0072b4a4  MOV EAX,dword ptr [EDX + 0x8]
0072b4a7  PUSH EBX
0072b4a8  PUSH ESI
0072b4a9  MOV ESI,dword ptr [EAX]
0072b4ab  MOV dword ptr [EDX + 0x8],ESI
0072b4ae  MOV ESI,dword ptr [EAX]
0072b4b0  MOV BL,byte ptr [ESI + 0x15]
0072b4b3  TEST BL,BL
0072b4b5  JNZ 0x0072b4ba
0072b4b7  MOV dword ptr [ESI + 0x4],EDX
0072b4ba  MOV ESI,dword ptr [EDX + 0x4]
0072b4bd  MOV dword ptr [EAX + 0x4],ESI
0072b4c0  MOV ECX,dword ptr [ECX + 0x4]
0072b4c3  CMP EDX,dword ptr [ECX + 0x4]
0072b4c6  JNZ 0x0072b4d5
0072b4c8  MOV dword ptr [ECX + 0x4],EAX
0072b4cb  POP ESI
0072b4cc  MOV dword ptr [EAX],EDX
0072b4ce  MOV dword ptr [EDX + 0x4],EAX
0072b4d1  POP EBX
0072b4d2  RET 0x4
0072b4d5  MOV ECX,dword ptr [EDX + 0x4]
0072b4d8  CMP EDX,dword ptr [ECX]
0072b4da  JNZ 0x0072b4e8
0072b4dc  MOV dword ptr [ECX],EAX
0072b4de  POP ESI
0072b4df  MOV dword ptr [EAX],EDX
0072b4e1  MOV dword ptr [EDX + 0x4],EAX
0072b4e4  POP EBX
0072b4e5  RET 0x4
0072b4e8  MOV dword ptr [ECX + 0x8],EAX
0072b4eb  POP ESI
0072b4ec  MOV dword ptr [EAX],EDX
0072b4ee  MOV dword ptr [EDX + 0x4],EAX
0072b4f1  POP EBX
0072b4f2  RET 0x4
