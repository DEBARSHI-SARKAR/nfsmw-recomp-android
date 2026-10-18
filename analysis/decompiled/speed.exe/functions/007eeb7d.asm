007eeb7d  PUSH EBP
007eeb7e  MOV EBP,ESP
007eeb80  PUSH ESI
007eeb81  PUSH dword ptr [EBP + 0x20]
007eeb84  MOV ESI,ECX
007eeb86  PUSH dword ptr [EBP + 0x1c]
007eeb89  PUSH dword ptr [EBP + 0x18]
007eeb8c  CALL 0x007ed7df
007eeb91  MOV EAX,dword ptr [EBP + 0x8]
007eeb94  MOV dword ptr [ESI + 0x14],EAX
007eeb97  MOV EAX,dword ptr [EBP + 0xc]
007eeb9a  CDQ
007eeb9b  MOV dword ptr [ESI + 0x28],EAX
007eeb9e  MOV EAX,dword ptr [EBP + 0x10]
007eeba1  MOV dword ptr [ESI + 0x2c],EDX
007eeba4  CDQ
007eeba5  MOV dword ptr [ESI + 0x20],EAX
007eeba8  MOV EAX,dword ptr [EBP + 0x14]
007eebab  MOV ECX,ESI
007eebad  MOV dword ptr [ESI],0x8c2088
007eebb3  MOV dword ptr [ESI + 0x24],EDX
007eebb6  MOV dword ptr [ESI + 0x30],EAX
007eebb9  CALL 0x007ed884
007eebbe  MOV EAX,ESI
007eebc0  POP ESI
007eebc1  POP EBP
007eebc2  RET 0x1c
