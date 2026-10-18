007dab30  PUSH EBP
007dab31  MOV EBP,ESP
007dab33  PUSH ECX
007dab34  MOV dword ptr [EBP + -0x4],0x0
007dab3b  JMP 0x007dab46
007dab3d  MOV EAX,dword ptr [EBP + -0x4]
007dab40  ADD EAX,0x1
007dab43  MOV dword ptr [EBP + -0x4],EAX
007dab46  CMP dword ptr [EBP + -0x4],0x1d
007dab4a  JGE 0x007dab69
007dab4c  MOV ECX,dword ptr [EBP + -0x4]
007dab4f  MOV EDX,dword ptr [ECX*0x8 + 0x906ee8]
007dab56  CMP EDX,dword ptr [EBP + 0x8]
007dab59  JNZ 0x007dab67
007dab5b  MOV EAX,dword ptr [EBP + -0x4]
007dab5e  MOV EAX,dword ptr [EAX*0x8 + 0x906eec]
007dab65  JMP 0x007dab6b
007dab67  JMP 0x007dab3d
007dab69  XOR EAX,EAX
007dab6b  MOV ESP,EBP
007dab6d  POP EBP
007dab6e  RET
