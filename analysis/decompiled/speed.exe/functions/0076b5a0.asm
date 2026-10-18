0076b5a0  MOV EDX,dword ptr [ESP + 0x4]
0076b5a4  MOV EAX,dword ptr [EDX]
0076b5a6  PUSH EBX
0076b5a7  PUSH ESI
0076b5a8  MOV ESI,dword ptr [EAX + 0x8]
0076b5ab  MOV dword ptr [EDX],ESI
0076b5ad  MOV ESI,dword ptr [EAX + 0x8]
0076b5b0  MOV BL,byte ptr [ESI + 0x15]
0076b5b3  TEST BL,BL
0076b5b5  JNZ 0x0076b5ba
0076b5b7  MOV dword ptr [ESI + 0x4],EDX
0076b5ba  MOV ESI,dword ptr [EDX + 0x4]
0076b5bd  MOV dword ptr [EAX + 0x4],ESI
0076b5c0  MOV ECX,dword ptr [ECX + 0x4]
0076b5c3  CMP EDX,dword ptr [ECX + 0x4]
0076b5c6  JNZ 0x0076b5d6
0076b5c8  MOV dword ptr [ECX + 0x4],EAX
0076b5cb  POP ESI
0076b5cc  MOV dword ptr [EAX + 0x8],EDX
0076b5cf  MOV dword ptr [EDX + 0x4],EAX
0076b5d2  POP EBX
0076b5d3  RET 0x4
0076b5d6  MOV ECX,dword ptr [EDX + 0x4]
0076b5d9  CMP EDX,dword ptr [ECX + 0x8]
0076b5dc  JNZ 0x0076b5ec
0076b5de  MOV dword ptr [ECX + 0x8],EAX
0076b5e1  POP ESI
0076b5e2  MOV dword ptr [EAX + 0x8],EDX
0076b5e5  MOV dword ptr [EDX + 0x4],EAX
0076b5e8  POP EBX
0076b5e9  RET 0x4
0076b5ec  MOV dword ptr [ECX],EAX
0076b5ee  POP ESI
0076b5ef  MOV dword ptr [EAX + 0x8],EDX
0076b5f2  MOV dword ptr [EDX + 0x4],EAX
0076b5f5  POP EBX
0076b5f6  RET 0x4
