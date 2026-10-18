0066d5b0  MOV EDX,dword ptr [ESP + 0x4]
0066d5b4  MOV EAX,dword ptr [EDX]
0066d5b6  PUSH EBX
0066d5b7  PUSH ESI
0066d5b8  MOV ESI,dword ptr [EAX + 0x8]
0066d5bb  MOV dword ptr [EDX],ESI
0066d5bd  MOV ESI,dword ptr [EAX + 0x8]
0066d5c0  MOV BL,byte ptr [ESI + 0x15]
0066d5c3  TEST BL,BL
0066d5c5  JNZ 0x0066d5ca
0066d5c7  MOV dword ptr [ESI + 0x4],EDX
0066d5ca  MOV ESI,dword ptr [EDX + 0x4]
0066d5cd  MOV dword ptr [EAX + 0x4],ESI
0066d5d0  MOV ECX,dword ptr [ECX + 0x4]
0066d5d3  CMP EDX,dword ptr [ECX + 0x4]
0066d5d6  JNZ 0x0066d5e6
0066d5d8  MOV dword ptr [ECX + 0x4],EAX
0066d5db  POP ESI
0066d5dc  MOV dword ptr [EAX + 0x8],EDX
0066d5df  MOV dword ptr [EDX + 0x4],EAX
0066d5e2  POP EBX
0066d5e3  RET 0x4
0066d5e6  MOV ECX,dword ptr [EDX + 0x4]
0066d5e9  CMP EDX,dword ptr [ECX + 0x8]
0066d5ec  JNZ 0x0066d5fc
0066d5ee  MOV dword ptr [ECX + 0x8],EAX
0066d5f1  POP ESI
0066d5f2  MOV dword ptr [EAX + 0x8],EDX
0066d5f5  MOV dword ptr [EDX + 0x4],EAX
0066d5f8  POP EBX
0066d5f9  RET 0x4
0066d5fc  MOV dword ptr [ECX],EAX
0066d5fe  POP ESI
0066d5ff  MOV dword ptr [EAX + 0x8],EDX
0066d602  MOV dword ptr [EDX + 0x4],EAX
0066d605  POP EBX
0066d606  RET 0x4
