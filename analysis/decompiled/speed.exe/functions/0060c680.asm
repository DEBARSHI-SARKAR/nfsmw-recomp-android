0060c680  MOV EDX,dword ptr [ESP + 0x4]
0060c684  MOV EAX,dword ptr [EDX + 0x8]
0060c687  PUSH EBX
0060c688  PUSH ESI
0060c689  MOV ESI,dword ptr [EAX]
0060c68b  MOV dword ptr [EDX + 0x8],ESI
0060c68e  MOV ESI,dword ptr [EAX]
0060c690  MOV BL,byte ptr [ESI + 0x15]
0060c693  TEST BL,BL
0060c695  JNZ 0x0060c69a
0060c697  MOV dword ptr [ESI + 0x4],EDX
0060c69a  MOV ESI,dword ptr [EDX + 0x4]
0060c69d  MOV dword ptr [EAX + 0x4],ESI
0060c6a0  MOV ECX,dword ptr [ECX + 0x4]
0060c6a3  CMP EDX,dword ptr [ECX + 0x4]
0060c6a6  JNZ 0x0060c6b5
0060c6a8  MOV dword ptr [ECX + 0x4],EAX
0060c6ab  POP ESI
0060c6ac  MOV dword ptr [EAX],EDX
0060c6ae  MOV dword ptr [EDX + 0x4],EAX
0060c6b1  POP EBX
0060c6b2  RET 0x4
0060c6b5  MOV ECX,dword ptr [EDX + 0x4]
0060c6b8  CMP EDX,dword ptr [ECX]
0060c6ba  JNZ 0x0060c6c8
0060c6bc  MOV dword ptr [ECX],EAX
0060c6be  POP ESI
0060c6bf  MOV dword ptr [EAX],EDX
0060c6c1  MOV dword ptr [EDX + 0x4],EAX
0060c6c4  POP EBX
0060c6c5  RET 0x4
0060c6c8  MOV dword ptr [ECX + 0x8],EAX
0060c6cb  POP ESI
0060c6cc  MOV dword ptr [EAX],EDX
0060c6ce  MOV dword ptr [EDX + 0x4],EAX
0060c6d1  POP EBX
0060c6d2  RET 0x4
