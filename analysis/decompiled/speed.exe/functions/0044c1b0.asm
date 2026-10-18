0044c1b0  PUSH ESI
0044c1b1  MOV ESI,ECX
0044c1b3  CALL 0x00466410
0044c1b8  TEST EAX,EAX
0044c1ba  JZ 0x0044c1d4
0044c1bc  MOV ECX,dword ptr [ESP + 0x8]
0044c1c0  MOV dword ptr [EAX + 0x8],ECX
0044c1c3  MOV ECX,dword ptr [ESI + 0x4]
0044c1c6  MOV dword ptr [ECX],EAX
0044c1c8  MOV dword ptr [ESI + 0x4],EAX
0044c1cb  MOV dword ptr [EAX],ESI
0044c1cd  MOV dword ptr [EAX + 0x4],ECX
0044c1d0  POP ESI
0044c1d1  RET 0x4
0044c1d4  MOV ECX,dword ptr [ESI + 0x4]
0044c1d7  XOR EAX,EAX
0044c1d9  MOV dword ptr [ECX],EAX
0044c1db  MOV dword ptr [ESI + 0x4],EAX
0044c1de  MOV dword ptr [EAX],ESI
0044c1e0  MOV dword ptr [EAX + 0x4],ECX
0044c1e3  POP ESI
0044c1e4  RET 0x4
