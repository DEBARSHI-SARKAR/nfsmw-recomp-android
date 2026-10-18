0065cc10  MOV EDX,dword ptr [ESP + 0x4]
0065cc14  MOV EAX,dword ptr [EDX + 0x8]
0065cc17  PUSH EBX
0065cc18  PUSH ESI
0065cc19  MOV ESI,dword ptr [EAX]
0065cc1b  MOV dword ptr [EDX + 0x8],ESI
0065cc1e  MOV ESI,dword ptr [EAX]
0065cc20  MOV BL,byte ptr [ESI + 0x1d]
0065cc23  TEST BL,BL
0065cc25  JNZ 0x0065cc2a
0065cc27  MOV dword ptr [ESI + 0x4],EDX
0065cc2a  MOV ESI,dword ptr [EDX + 0x4]
0065cc2d  MOV dword ptr [EAX + 0x4],ESI
0065cc30  MOV ECX,dword ptr [ECX + 0x4]
0065cc33  CMP EDX,dword ptr [ECX + 0x4]
0065cc36  JNZ 0x0065cc45
0065cc38  MOV dword ptr [ECX + 0x4],EAX
0065cc3b  POP ESI
0065cc3c  MOV dword ptr [EAX],EDX
0065cc3e  MOV dword ptr [EDX + 0x4],EAX
0065cc41  POP EBX
0065cc42  RET 0x4
0065cc45  MOV ECX,dword ptr [EDX + 0x4]
0065cc48  CMP EDX,dword ptr [ECX]
0065cc4a  JNZ 0x0065cc58
0065cc4c  MOV dword ptr [ECX],EAX
0065cc4e  POP ESI
0065cc4f  MOV dword ptr [EAX],EDX
0065cc51  MOV dword ptr [EDX + 0x4],EAX
0065cc54  POP EBX
0065cc55  RET 0x4
0065cc58  MOV dword ptr [ECX + 0x8],EAX
0065cc5b  POP ESI
0065cc5c  MOV dword ptr [EAX],EDX
0065cc5e  MOV dword ptr [EDX + 0x4],EAX
0065cc61  POP EBX
0065cc62  RET 0x4
