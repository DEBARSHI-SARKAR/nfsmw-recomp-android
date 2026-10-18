007eec70  PUSH EBP
007eec71  MOV EBP,ESP
007eec73  PUSH ESI
007eec74  PUSH dword ptr [EBP + 0x14]
007eec77  MOV ESI,ECX
007eec79  PUSH dword ptr [EBP + 0x10]
007eec7c  PUSH dword ptr [EBP + 0xc]
007eec7f  CALL 0x007ed7df
007eec84  MOV EAX,dword ptr [EBP + 0x8]
007eec87  MOV ECX,ESI
007eec89  MOV dword ptr [ESI],0x8c2098
007eec8f  MOV dword ptr [ESI + 0x14],EAX
007eec92  CALL 0x007ed884
007eec97  MOV EAX,ESI
007eec99  POP ESI
007eec9a  POP EBP
007eec9b  RET 0x10
