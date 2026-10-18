007cd950  PUSH EBP
007cd951  MOV EBP,ESP
007cd953  PUSH ECX
007cd954  MOV dword ptr [EBP + -0x4],0x0
007cd95b  JMP 0x007cd966
007cd95d  MOV EAX,dword ptr [EBP + -0x4]
007cd960  ADD EAX,0x1
007cd963  MOV dword ptr [EBP + -0x4],EAX
007cd966  CMP dword ptr [EBP + -0x4],0x13
007cd96a  JNC 0x007cd97f
007cd96c  MOV ECX,dword ptr [EBP + -0x4]
007cd96f  MOV EDX,dword ptr [EBP + 0x8]
007cd972  CMP EDX,dword ptr [ECX*0x8 + 0x906838]
007cd979  JNZ 0x007cd97d
007cd97b  JMP 0x007cd97f
007cd97d  JMP 0x007cd95d
007cd97f  MOV EAX,dword ptr [EBP + -0x4]
007cd982  MOV ECX,dword ptr [EBP + 0x8]
007cd985  CMP ECX,dword ptr [EAX*0x8 + 0x906838]
007cd98c  JNZ 0x007cd99a
007cd98e  MOV EDX,dword ptr [EBP + -0x4]
007cd991  MOV EAX,dword ptr [EDX*0x8 + 0x90683c]
007cd998  JMP 0x007cd99c
007cd99a  XOR EAX,EAX
007cd99c  MOV ESP,EBP
007cd99e  POP EBP
007cd99f  RET
