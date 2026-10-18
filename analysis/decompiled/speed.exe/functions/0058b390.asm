0058b390  MOV EDX,dword ptr [ESP + 0x4]
0058b394  MOV EAX,dword ptr [EDX + 0x8]
0058b397  PUSH EBX
0058b398  PUSH ESI
0058b399  MOV ESI,dword ptr [EAX]
0058b39b  MOV dword ptr [EDX + 0x8],ESI
0058b39e  MOV ESI,dword ptr [EAX]
0058b3a0  MOV BL,byte ptr [ESI + 0x15]
0058b3a3  TEST BL,BL
0058b3a5  JNZ 0x0058b3aa
0058b3a7  MOV dword ptr [ESI + 0x4],EDX
0058b3aa  MOV ESI,dword ptr [EDX + 0x4]
0058b3ad  MOV dword ptr [EAX + 0x4],ESI
0058b3b0  MOV ECX,dword ptr [ECX + 0x4]
0058b3b3  CMP EDX,dword ptr [ECX + 0x4]
0058b3b6  JNZ 0x0058b3c5
0058b3b8  MOV dword ptr [ECX + 0x4],EAX
0058b3bb  POP ESI
0058b3bc  MOV dword ptr [EAX],EDX
0058b3be  MOV dword ptr [EDX + 0x4],EAX
0058b3c1  POP EBX
0058b3c2  RET 0x4
0058b3c5  MOV ECX,dword ptr [EDX + 0x4]
0058b3c8  CMP EDX,dword ptr [ECX]
0058b3ca  JNZ 0x0058b3d8
0058b3cc  MOV dword ptr [ECX],EAX
0058b3ce  POP ESI
0058b3cf  MOV dword ptr [EAX],EDX
0058b3d1  MOV dword ptr [EDX + 0x4],EAX
0058b3d4  POP EBX
0058b3d5  RET 0x4
0058b3d8  MOV dword ptr [ECX + 0x8],EAX
0058b3db  POP ESI
0058b3dc  MOV dword ptr [EAX],EDX
0058b3de  MOV dword ptr [EDX + 0x4],EAX
0058b3e1  POP EBX
0058b3e2  RET 0x4
