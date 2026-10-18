0060cbf0  MOV EDX,dword ptr [ESP + 0x4]
0060cbf4  MOV EAX,dword ptr [EDX]
0060cbf6  PUSH EBX
0060cbf7  PUSH ESI
0060cbf8  MOV ESI,dword ptr [EAX + 0x8]
0060cbfb  MOV dword ptr [EDX],ESI
0060cbfd  MOV ESI,dword ptr [EAX + 0x8]
0060cc00  MOV BL,byte ptr [ESI + 0x21]
0060cc03  TEST BL,BL
0060cc05  JNZ 0x0060cc0a
0060cc07  MOV dword ptr [ESI + 0x4],EDX
0060cc0a  MOV ESI,dword ptr [EDX + 0x4]
0060cc0d  MOV dword ptr [EAX + 0x4],ESI
0060cc10  MOV ECX,dword ptr [ECX + 0x4]
0060cc13  CMP EDX,dword ptr [ECX + 0x4]
0060cc16  JNZ 0x0060cc26
0060cc18  MOV dword ptr [ECX + 0x4],EAX
0060cc1b  POP ESI
0060cc1c  MOV dword ptr [EAX + 0x8],EDX
0060cc1f  MOV dword ptr [EDX + 0x4],EAX
0060cc22  POP EBX
0060cc23  RET 0x4
0060cc26  MOV ECX,dword ptr [EDX + 0x4]
0060cc29  CMP EDX,dword ptr [ECX + 0x8]
0060cc2c  JNZ 0x0060cc3c
0060cc2e  MOV dword ptr [ECX + 0x8],EAX
0060cc31  POP ESI
0060cc32  MOV dword ptr [EAX + 0x8],EDX
0060cc35  MOV dword ptr [EDX + 0x4],EAX
0060cc38  POP EBX
0060cc39  RET 0x4
0060cc3c  MOV dword ptr [ECX],EAX
0060cc3e  POP ESI
0060cc3f  MOV dword ptr [EAX + 0x8],EDX
0060cc42  MOV dword ptr [EDX + 0x4],EAX
0060cc45  POP EBX
0060cc46  RET 0x4
