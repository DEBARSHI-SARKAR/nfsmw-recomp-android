007dfbf0  PUSH EBP
007dfbf1  MOV EBP,ESP
007dfbf3  PUSH 0x0
007dfbf5  MOV EAX,dword ptr [EBP + 0x14]
007dfbf8  PUSH EAX
007dfbf9  MOV ECX,dword ptr [EBP + 0x10]
007dfbfc  PUSH ECX
007dfbfd  MOV EDX,dword ptr [EBP + 0xc]
007dfc00  PUSH EDX
007dfc01  MOV EAX,dword ptr [EBP + 0x8]
007dfc04  PUSH EAX
007dfc05  CALL 0x007dfc10
007dfc0a  ADD ESP,0x14
007dfc0d  POP EBP
007dfc0e  RET
