007defc0  PUSH EBP
007defc1  MOV EBP,ESP
007defc3  PUSH ECX
007defc4  MOV dword ptr [EBP + -0x4],0x1
007defcb  MOV EAX,dword ptr [EBP + 0x8]
007defce  PUSH EAX
007defcf  CALL dword ptr [0x0089026c]
007defd5  TEST EAX,EAX
007defd7  JZ 0x007defe0
007defd9  MOV dword ptr [EBP + -0x4],0x0
007defe0  MOV EAX,dword ptr [EBP + -0x4]
007defe3  MOV ESP,EBP
007defe5  POP EBP
007defe6  RET
