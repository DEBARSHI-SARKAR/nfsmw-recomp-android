0076a5c0  MOV EDX,dword ptr [ESP + 0x4]
0076a5c4  MOV EAX,dword ptr [EDX]
0076a5c6  PUSH EBX
0076a5c7  PUSH ESI
0076a5c8  MOV ESI,dword ptr [EAX + 0x8]
0076a5cb  MOV dword ptr [EDX],ESI
0076a5cd  MOV ESI,dword ptr [EAX + 0x8]
0076a5d0  MOV BL,byte ptr [ESI + 0x15]
0076a5d3  TEST BL,BL
0076a5d5  JNZ 0x0076a5da
0076a5d7  MOV dword ptr [ESI + 0x4],EDX
0076a5da  MOV ESI,dword ptr [EDX + 0x4]
0076a5dd  MOV dword ptr [EAX + 0x4],ESI
0076a5e0  MOV ECX,dword ptr [ECX + 0x4]
0076a5e3  CMP EDX,dword ptr [ECX + 0x4]
0076a5e6  JNZ 0x0076a5f6
0076a5e8  MOV dword ptr [ECX + 0x4],EAX
0076a5eb  POP ESI
0076a5ec  MOV dword ptr [EAX + 0x8],EDX
0076a5ef  MOV dword ptr [EDX + 0x4],EAX
0076a5f2  POP EBX
0076a5f3  RET 0x4
0076a5f6  MOV ECX,dword ptr [EDX + 0x4]
0076a5f9  CMP EDX,dword ptr [ECX + 0x8]
0076a5fc  JNZ 0x0076a60c
0076a5fe  MOV dword ptr [ECX + 0x8],EAX
0076a601  POP ESI
0076a602  MOV dword ptr [EAX + 0x8],EDX
0076a605  MOV dword ptr [EDX + 0x4],EAX
0076a608  POP EBX
0076a609  RET 0x4
0076a60c  MOV dword ptr [ECX],EAX
0076a60e  POP ESI
0076a60f  MOV dword ptr [EAX + 0x8],EDX
0076a612  MOV dword ptr [EDX + 0x4],EAX
0076a615  POP EBX
0076a616  RET 0x4
