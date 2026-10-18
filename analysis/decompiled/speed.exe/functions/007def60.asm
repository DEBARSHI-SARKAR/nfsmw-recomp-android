007def60  PUSH EBP
007def61  MOV EBP,ESP
007def63  PUSH ECX
007def64  MOV dword ptr [EBP + -0x4],0x1
007def6b  MOV EAX,dword ptr [EBP + 0xc]
007def6e  PUSH EAX
007def6f  MOV ECX,dword ptr [EBP + 0x8]
007def72  PUSH ECX
007def73  CALL dword ptr [0x0089018c]
007def79  TEST EAX,EAX
007def7b  JZ 0x007def84
007def7d  MOV dword ptr [EBP + -0x4],0x0
007def84  MOV EAX,dword ptr [EBP + -0x4]
007def87  MOV ESP,EBP
007def89  POP EBP
007def8a  RET
