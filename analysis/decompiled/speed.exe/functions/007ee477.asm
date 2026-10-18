007ee477  PUSH EBP
007ee478  MOV EBP,ESP
007ee47a  MOV EDX,dword ptr [EBP + 0x8]
007ee47d  TEST EDX,EDX
007ee47f  JNZ 0x007ee48b
007ee481  PUSH dword ptr [EBP + 0xc]
007ee484  CALL 0x007ee3f3
007ee489  JMP 0x007ee4a7
007ee48b  CMP dword ptr [EDX + 0x8],0x0
007ee48f  MOV EAX,dword ptr [EBP + 0xc]
007ee492  JNZ 0x007ee497
007ee494  MOV dword ptr [ECX + 0x4],EAX
007ee497  PUSH ESI
007ee498  MOV ESI,dword ptr [EDX + 0x8]
007ee49b  ADD EAX,0x8
007ee49e  MOV dword ptr [EAX],ESI
007ee4a0  MOV dword ptr [EDX + 0x8],EAX
007ee4a3  INC dword ptr [ECX + 0x8]
007ee4a6  POP ESI
007ee4a7  POP EBP
007ee4a8  RET 0x8
