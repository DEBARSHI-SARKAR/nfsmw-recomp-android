0076afb0  MOV EDX,dword ptr [ESP + 0x4]
0076afb4  MOV EAX,dword ptr [EDX]
0076afb6  PUSH EBX
0076afb7  PUSH ESI
0076afb8  MOV ESI,dword ptr [EAX + 0x8]
0076afbb  MOV dword ptr [EDX],ESI
0076afbd  MOV ESI,dword ptr [EAX + 0x8]
0076afc0  MOV BL,byte ptr [ESI + 0x15]
0076afc3  TEST BL,BL
0076afc5  JNZ 0x0076afca
0076afc7  MOV dword ptr [ESI + 0x4],EDX
0076afca  MOV ESI,dword ptr [EDX + 0x4]
0076afcd  MOV dword ptr [EAX + 0x4],ESI
0076afd0  MOV ECX,dword ptr [ECX + 0x4]
0076afd3  CMP EDX,dword ptr [ECX + 0x4]
0076afd6  JNZ 0x0076afe6
0076afd8  MOV dword ptr [ECX + 0x4],EAX
0076afdb  POP ESI
0076afdc  MOV dword ptr [EAX + 0x8],EDX
0076afdf  MOV dword ptr [EDX + 0x4],EAX
0076afe2  POP EBX
0076afe3  RET 0x4
0076afe6  MOV ECX,dword ptr [EDX + 0x4]
0076afe9  CMP EDX,dword ptr [ECX + 0x8]
0076afec  JNZ 0x0076affc
0076afee  MOV dword ptr [ECX + 0x8],EAX
0076aff1  POP ESI
0076aff2  MOV dword ptr [EAX + 0x8],EDX
0076aff5  MOV dword ptr [EDX + 0x4],EAX
0076aff8  POP EBX
0076aff9  RET 0x4
0076affc  MOV dword ptr [ECX],EAX
0076affe  POP ESI
0076afff  MOV dword ptr [EAX + 0x8],EDX
0076b002  MOV dword ptr [EDX + 0x4],EAX
0076b005  POP EBX
0076b006  RET 0x4
