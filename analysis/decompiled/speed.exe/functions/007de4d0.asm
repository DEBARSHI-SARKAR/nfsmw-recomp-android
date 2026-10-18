007de4d0  PUSH EBP
007de4d1  MOV EBP,ESP
007de4d3  SUB ESP,0xc
007de4d6  MOV EAX,dword ptr [EBP + 0xc]
007de4d9  MOV dword ptr [EBP + -0x4],EAX
007de4dc  MOV ECX,dword ptr [EBP + 0x8]
007de4df  MOV dword ptr [EBP + -0xc],ECX
007de4e2  MOV dword ptr [EBP + -0x8],0x0
007de4e9  JMP 0x007de4f4
007de4eb  MOV EDX,dword ptr [EBP + -0x8]
007de4ee  ADD EDX,0x1
007de4f1  MOV dword ptr [EBP + -0x8],EDX
007de4f4  CMP dword ptr [EBP + -0x8],0x3
007de4f8  JGE 0x007de518
007de4fa  MOV EAX,dword ptr [EBP + -0xc]
007de4fd  MOV ECX,dword ptr [EBP + -0x4]
007de500  MOV EDX,dword ptr [ECX]
007de502  MOV dword ptr [EAX],EDX
007de504  MOV EAX,dword ptr [EBP + -0xc]
007de507  ADD EAX,0x4
007de50a  MOV dword ptr [EBP + -0xc],EAX
007de50d  MOV ECX,dword ptr [EBP + -0x4]
007de510  ADD ECX,0x4
007de513  MOV dword ptr [EBP + -0x4],ECX
007de516  JMP 0x007de4eb
007de518  MOV ESP,EBP
007de51a  POP EBP
007de51b  RET
