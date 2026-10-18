006d99c0  PUSH ESI
006d99c1  MOV ESI,ECX
006d99c3  CALL 0x00466410
006d99c8  TEST EAX,EAX
006d99ca  JZ 0x006d99e4
006d99cc  MOV ECX,dword ptr [ESP + 0x8]
006d99d0  MOV dword ptr [EAX + 0x8],ECX
006d99d3  MOV ECX,dword ptr [ESI + 0x4]
006d99d6  MOV dword ptr [ECX],EAX
006d99d8  MOV dword ptr [ESI + 0x4],EAX
006d99db  MOV dword ptr [EAX],ESI
006d99dd  MOV dword ptr [EAX + 0x4],ECX
006d99e0  POP ESI
006d99e1  RET 0x4
006d99e4  MOV ECX,dword ptr [ESI + 0x4]
006d99e7  XOR EAX,EAX
006d99e9  MOV dword ptr [ECX],EAX
006d99eb  MOV dword ptr [ESI + 0x4],EAX
006d99ee  MOV dword ptr [EAX],ESI
006d99f0  MOV dword ptr [EAX + 0x4],ECX
006d99f3  POP ESI
006d99f4  RET 0x4
