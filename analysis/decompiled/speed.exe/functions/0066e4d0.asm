0066e4d0  MOV EDX,dword ptr [ESP + 0x4]
0066e4d4  MOV EAX,dword ptr [EDX]
0066e4d6  PUSH EBX
0066e4d7  PUSH ESI
0066e4d8  MOV ESI,dword ptr [EAX + 0x8]
0066e4db  MOV dword ptr [EDX],ESI
0066e4dd  MOV ESI,dword ptr [EAX + 0x8]
0066e4e0  MOV BL,byte ptr [ESI + 0x15]
0066e4e3  TEST BL,BL
0066e4e5  JNZ 0x0066e4ea
0066e4e7  MOV dword ptr [ESI + 0x4],EDX
0066e4ea  MOV ESI,dword ptr [EDX + 0x4]
0066e4ed  MOV dword ptr [EAX + 0x4],ESI
0066e4f0  MOV ECX,dword ptr [ECX + 0x4]
0066e4f3  CMP EDX,dword ptr [ECX + 0x4]
0066e4f6  JNZ 0x0066e506
0066e4f8  MOV dword ptr [ECX + 0x4],EAX
0066e4fb  POP ESI
0066e4fc  MOV dword ptr [EAX + 0x8],EDX
0066e4ff  MOV dword ptr [EDX + 0x4],EAX
0066e502  POP EBX
0066e503  RET 0x4
0066e506  MOV ECX,dword ptr [EDX + 0x4]
0066e509  CMP EDX,dword ptr [ECX + 0x8]
0066e50c  JNZ 0x0066e51c
0066e50e  MOV dword ptr [ECX + 0x8],EAX
0066e511  POP ESI
0066e512  MOV dword ptr [EAX + 0x8],EDX
0066e515  MOV dword ptr [EDX + 0x4],EAX
0066e518  POP EBX
0066e519  RET 0x4
0066e51c  MOV dword ptr [ECX],EAX
0066e51e  POP ESI
0066e51f  MOV dword ptr [EAX + 0x8],EDX
0066e522  MOV dword ptr [EDX + 0x4],EAX
0066e525  POP EBX
0066e526  RET 0x4
