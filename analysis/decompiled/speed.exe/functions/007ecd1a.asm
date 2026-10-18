007ecd1a  PUSH EBP
007ecd1b  MOV EBP,ESP
007ecd1d  XOR EAX,EAX
007ecd1f  MOV ECX,dword ptr [EAX*0x4 + 0x9bb10c]
007ecd26  CMP ECX,dword ptr [EBP + 0x8]
007ecd29  JZ 0x007ecd33
007ecd2b  INC EAX
007ecd2c  CMP EAX,0x8
007ecd2f  JL 0x007ecd1f
007ecd31  POP EBP
007ecd32  RET
007ecd33  AND dword ptr [EAX*0x4 + 0x9bb10c],0x0
007ecd3b  POP EBP
007ecd3c  RET
