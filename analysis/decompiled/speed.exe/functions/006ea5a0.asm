006ea5a0  PUSH ESI
006ea5a1  MOV ESI,ECX
006ea5a3  MOV ECX,dword ptr [ESI + 0x3b8]
006ea5a9  TEST ECX,ECX
006ea5ab  JZ 0x006ea5bc
006ea5ad  MOV EAX,dword ptr [ECX]
006ea5af  CALL dword ptr [EAX + 0x4]
006ea5b2  MOV dword ptr [ESI + 0x3b8],0x0
006ea5bc  MOV EAX,dword ptr [ESI + 0x3a0]
006ea5c2  TEST EAX,EAX
006ea5c4  JZ 0x006ea5dd
006ea5c6  PUSH 0x1
006ea5c8  PUSH EAX
006ea5c9  MOV ECX,0x90dac4
006ea5ce  CALL 0x004509e0
006ea5d3  MOV dword ptr [ESI + 0x3a0],0x0
006ea5dd  MOV ESI,dword ptr [ESI + 0x394]
006ea5e3  TEST ESI,ESI
006ea5e5  JZ 0x006ea5f2
006ea5e7  PUSH ESI
006ea5e8  MOV ECX,0x90dac4
006ea5ed  CALL 0x0044cde0
006ea5f2  POP ESI
006ea5f3  RET
