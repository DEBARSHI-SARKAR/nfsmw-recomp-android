007de520  PUSH EBP
007de521  MOV EBP,ESP
007de523  PUSH ECX
007de524  MOV dword ptr [EBP + -0x4],0x0
007de52b  JMP 0x007de536
007de52d  MOV EAX,dword ptr [EBP + -0x4]
007de530  ADD EAX,0x1
007de533  MOV dword ptr [EBP + -0x4],EAX
007de536  CMP dword ptr [EBP + -0x4],0x3
007de53a  JGE 0x007de54b
007de53c  MOV ECX,dword ptr [EBP + -0x4]
007de53f  MOV EDX,dword ptr [EBP + 0x8]
007de542  MOV dword ptr [EDX + ECX*0x4],0x0
007de549  JMP 0x007de52d
007de54b  MOV ESP,EBP
007de54d  POP EBP
007de54e  RET
