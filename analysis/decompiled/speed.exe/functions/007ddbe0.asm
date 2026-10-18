007ddbe0  PUSH EBP
007ddbe1  MOV EBP,ESP
007ddbe3  CMP dword ptr [0x009c50a8],0x0
007ddbea  JZ 0x007ddbf3
007ddbec  MOV EAX,[0x009c51c4]
007ddbf1  JMP 0x007ddbf5
007ddbf3  XOR EAX,EAX
007ddbf5  POP EBP
007ddbf6  RET
