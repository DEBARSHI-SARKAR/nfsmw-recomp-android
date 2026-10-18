007ee5a3  PUSH EBP
007ee5a4  MOV EBP,ESP
007ee5a6  MOV EDX,dword ptr [ECX + 0x4]
007ee5a9  MOV EAX,dword ptr [EBP + 0x8]
007ee5ac  AND dword ptr [EAX],0x0
007ee5af  INC dword ptr [ECX + 0x8]
007ee5b2  TEST EDX,EDX
007ee5b4  MOV dword ptr [ECX + 0x4],EAX
007ee5b7  JNZ 0x007ee5bd
007ee5b9  MOV dword ptr [ECX],EAX
007ee5bb  JMP 0x007ee5bf
007ee5bd  MOV dword ptr [EDX],EAX
007ee5bf  POP EBP
007ee5c0  RET 0x4
