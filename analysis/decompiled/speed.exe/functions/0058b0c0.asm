0058b0c0  PUSH ESI
0058b0c1  MOV ESI,ECX
0058b0c3  CALL 0x00466410
0058b0c8  TEST EAX,EAX
0058b0ca  JZ 0x0058b0e4
0058b0cc  MOV ECX,dword ptr [ESP + 0x8]
0058b0d0  MOV dword ptr [EAX + 0x8],ECX
0058b0d3  MOV ECX,dword ptr [ESI + 0x4]
0058b0d6  MOV dword ptr [ECX],EAX
0058b0d8  MOV dword ptr [ESI + 0x4],EAX
0058b0db  MOV dword ptr [EAX],ESI
0058b0dd  MOV dword ptr [EAX + 0x4],ECX
0058b0e0  POP ESI
0058b0e1  RET 0x4
0058b0e4  MOV ECX,dword ptr [ESI + 0x4]
0058b0e7  XOR EAX,EAX
0058b0e9  MOV dword ptr [ECX],EAX
0058b0eb  MOV dword ptr [ESI + 0x4],EAX
0058b0ee  MOV dword ptr [EAX],ESI
0058b0f0  MOV dword ptr [EAX + 0x4],ECX
0058b0f3  POP ESI
0058b0f4  RET 0x4
