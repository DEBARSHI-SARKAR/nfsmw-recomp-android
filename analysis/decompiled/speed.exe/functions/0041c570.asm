0041c570  MOV EDX,dword ptr [ESP + 0x4]
0041c574  MOV EAX,dword ptr [EDX + 0x8]
0041c577  PUSH EBX
0041c578  PUSH ESI
0041c579  MOV ESI,dword ptr [EAX]
0041c57b  MOV dword ptr [EDX + 0x8],ESI
0041c57e  MOV ESI,dword ptr [EAX]
0041c580  MOV BL,byte ptr [ESI + 0xf]
0041c583  TEST BL,BL
0041c585  JNZ 0x0041c58a
0041c587  MOV dword ptr [ESI + 0x4],EDX
0041c58a  MOV ESI,dword ptr [EDX + 0x4]
0041c58d  MOV dword ptr [EAX + 0x4],ESI
0041c590  MOV ECX,dword ptr [ECX + 0x4]
0041c593  CMP EDX,dword ptr [ECX + 0x4]
0041c596  JNZ 0x0041c5a5
0041c598  MOV dword ptr [ECX + 0x4],EAX
0041c59b  POP ESI
0041c59c  MOV dword ptr [EAX],EDX
0041c59e  MOV dword ptr [EDX + 0x4],EAX
0041c5a1  POP EBX
0041c5a2  RET 0x4
0041c5a5  MOV ECX,dword ptr [EDX + 0x4]
0041c5a8  CMP EDX,dword ptr [ECX]
0041c5aa  JNZ 0x0041c5b8
0041c5ac  MOV dword ptr [ECX],EAX
0041c5ae  POP ESI
0041c5af  MOV dword ptr [EAX],EDX
0041c5b1  MOV dword ptr [EDX + 0x4],EAX
0041c5b4  POP EBX
0041c5b5  RET 0x4
0041c5b8  MOV dword ptr [ECX + 0x8],EAX
0041c5bb  POP ESI
0041c5bc  MOV dword ptr [EAX],EDX
0041c5be  MOV dword ptr [EDX + 0x4],EAX
0041c5c1  POP EBX
0041c5c2  RET 0x4
