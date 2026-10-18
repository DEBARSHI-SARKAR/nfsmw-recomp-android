0082d6a0  PUSH EBP
0082d6a1  MOV EBP,ESP
0082d6a3  MOVSX CX,byte ptr [EBP + 0xc]
0082d6a8  MOV EAX,dword ptr [EBP + 0x8]
0082d6ab  MOV word ptr [EAX + 0x2a],CX
0082d6af  MOV ECX,dword ptr [EBP + 0x14]
0082d6b2  TEST ECX,ECX
0082d6b4  JL 0x0082d6ba
0082d6b6  MOV word ptr [EAX + 0x2c],CX
0082d6ba  POP EBP
0082d6bb  RET
