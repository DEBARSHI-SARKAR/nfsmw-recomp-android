007efe98  PUSH EBP
007efe99  MOV EBP,ESP
007efe9b  MOV EDX,dword ptr [ECX + 0x4]
007efe9e  MOV EAX,dword ptr [EBP + 0x8]
007efea1  AND dword ptr [EAX],0x0
007efea4  INC dword ptr [ECX + 0x8]
007efea7  TEST EDX,EDX
007efea9  MOV dword ptr [ECX + 0x4],EAX
007efeac  JNZ 0x007efeb2
007efeae  MOV dword ptr [ECX],EAX
007efeb0  JMP 0x007efeb4
007efeb2  MOV dword ptr [EDX],EAX
007efeb4  POP EBP
007efeb5  RET 0x4
