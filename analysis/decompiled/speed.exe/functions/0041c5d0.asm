0041c5d0  MOV EDX,dword ptr [ESP + 0x4]
0041c5d4  MOV EAX,dword ptr [EDX]
0041c5d6  PUSH EBX
0041c5d7  PUSH ESI
0041c5d8  MOV ESI,dword ptr [EAX + 0x8]
0041c5db  MOV dword ptr [EDX],ESI
0041c5dd  MOV ESI,dword ptr [EAX + 0x8]
0041c5e0  MOV BL,byte ptr [ESI + 0xf]
0041c5e3  TEST BL,BL
0041c5e5  JNZ 0x0041c5ea
0041c5e7  MOV dword ptr [ESI + 0x4],EDX
0041c5ea  MOV ESI,dword ptr [EDX + 0x4]
0041c5ed  MOV dword ptr [EAX + 0x4],ESI
0041c5f0  MOV ECX,dword ptr [ECX + 0x4]
0041c5f3  CMP EDX,dword ptr [ECX + 0x4]
0041c5f6  JNZ 0x0041c606
0041c5f8  MOV dword ptr [ECX + 0x4],EAX
0041c5fb  POP ESI
0041c5fc  MOV dword ptr [EAX + 0x8],EDX
0041c5ff  MOV dword ptr [EDX + 0x4],EAX
0041c602  POP EBX
0041c603  RET 0x4
0041c606  MOV ECX,dword ptr [EDX + 0x4]
0041c609  CMP EDX,dword ptr [ECX + 0x8]
0041c60c  JNZ 0x0041c61c
0041c60e  MOV dword ptr [ECX + 0x8],EAX
0041c611  POP ESI
0041c612  MOV dword ptr [EAX + 0x8],EDX
0041c615  MOV dword ptr [EDX + 0x4],EAX
0041c618  POP EBX
0041c619  RET 0x4
0041c61c  MOV dword ptr [ECX],EAX
0041c61e  POP ESI
0041c61f  MOV dword ptr [EAX + 0x8],EDX
0041c622  MOV dword ptr [EDX + 0x4],EAX
0041c625  POP EBX
0041c626  RET 0x4
