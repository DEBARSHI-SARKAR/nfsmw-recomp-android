007faad1  PUSH EBP
007faad2  MOV EBP,ESP
007faad4  CMP dword ptr [EBP + 0x8],0x4d563046
007faadb  JZ 0x007faaea
007faadd  CMP dword ptr [EBP + 0x8],0x4d56304b
007faae4  JZ 0x007faaea
007faae6  XOR AL,AL
007faae8  POP EBP
007faae9  RET
007faaea  MOV AL,0x1
007faaec  POP EBP
007faaed  RET
