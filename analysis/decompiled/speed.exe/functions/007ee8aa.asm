007ee8aa  PUSH EBP
007ee8ab  MOV EBP,ESP
007ee8ad  PUSH ESI
007ee8ae  PUSH dword ptr [EBP + 0x14]
007ee8b1  MOV ESI,ECX
007ee8b3  PUSH dword ptr [EBP + 0x10]
007ee8b6  PUSH dword ptr [EBP + 0xc]
007ee8b9  CALL 0x007ed7df
007ee8be  MOV EAX,dword ptr [EBP + 0x8]
007ee8c1  MOV ECX,ESI
007ee8c3  MOV dword ptr [ESI],0x8c2058
007ee8c9  MOV dword ptr [ESI + 0x14],EAX
007ee8cc  CALL 0x007ed884
007ee8d1  MOV EAX,ESI
007ee8d3  POP ESI
007ee8d4  POP EBP
007ee8d5  RET 0x10
