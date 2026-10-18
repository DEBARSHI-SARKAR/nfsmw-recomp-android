007ee563  PUSH EBP
007ee564  MOV EBP,ESP
007ee566  MOV EDX,dword ptr [ECX + 0x4]
007ee569  MOV EAX,dword ptr [EBP + 0x8]
007ee56c  AND dword ptr [EAX],0x0
007ee56f  INC dword ptr [ECX + 0x8]
007ee572  TEST EDX,EDX
007ee574  MOV dword ptr [ECX + 0x4],EAX
007ee577  JNZ 0x007ee57d
007ee579  MOV dword ptr [ECX],EAX
007ee57b  JMP 0x007ee57f
007ee57d  MOV dword ptr [EDX],EAX
007ee57f  POP EBP
007ee580  RET 0x4
