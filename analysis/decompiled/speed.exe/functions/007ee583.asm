007ee583  MOV EAX,dword ptr [ECX]
007ee585  XOR EDX,EDX
007ee587  CMP EAX,EDX
007ee589  JZ 0x007ee5a2
007ee58b  CMP EAX,dword ptr [ECX + 0x4]
007ee58e  JNZ 0x007ee597
007ee590  MOV dword ptr [ECX + 0x4],EDX
007ee593  MOV dword ptr [ECX],EDX
007ee595  JMP 0x007ee59d
007ee597  PUSH ESI
007ee598  MOV ESI,dword ptr [EAX]
007ee59a  MOV dword ptr [ECX],ESI
007ee59c  POP ESI
007ee59d  DEC dword ptr [ECX + 0x8]
007ee5a0  MOV dword ptr [EAX],EDX
007ee5a2  RET
