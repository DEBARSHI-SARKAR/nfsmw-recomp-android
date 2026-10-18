007ecce4  PUSH EBP
007ecce5  MOV EBP,ESP
007ecce7  MOV ECX,dword ptr [EBP + 0x8]
007eccea  MOV EAX,0x9bb10c
007eccef  CMP dword ptr [EAX],ECX
007eccf1  JZ 0x007ecd18
007eccf3  ADD EAX,0x4
007eccf6  CMP EAX,0x9bb12c
007eccfb  JL 0x007eccef
007eccfd  XOR EAX,EAX
007eccff  CMP dword ptr [EAX*0x4 + 0x9bb10c],0x0
007ecd07  JZ 0x007ecd11
007ecd09  INC EAX
007ecd0a  CMP EAX,0x8
007ecd0d  JL 0x007eccff
007ecd0f  POP EBP
007ecd10  RET
007ecd11  MOV dword ptr [EAX*0x4 + 0x9bb10c],ECX
007ecd18  POP EBP
007ecd19  RET
