007ee5c3  MOV EAX,dword ptr [ECX]
007ee5c5  XOR EDX,EDX
007ee5c7  CMP EAX,EDX
007ee5c9  JZ 0x007ee5e2
007ee5cb  CMP EAX,dword ptr [ECX + 0x4]
007ee5ce  JNZ 0x007ee5d7
007ee5d0  MOV dword ptr [ECX + 0x4],EDX
007ee5d3  MOV dword ptr [ECX],EDX
007ee5d5  JMP 0x007ee5dd
007ee5d7  PUSH ESI
007ee5d8  MOV ESI,dword ptr [EAX]
007ee5da  MOV dword ptr [ECX],ESI
007ee5dc  POP ESI
007ee5dd  DEC dword ptr [ECX + 0x8]
007ee5e0  MOV dword ptr [EAX],EDX
007ee5e2  RET
