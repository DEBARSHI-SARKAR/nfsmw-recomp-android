007edc2a  PUSH EBP
007edc2b  MOV EBP,ESP
007edc2d  PUSH 0x40
007edc2f  CALL 0x007ed475
007edc34  TEST EAX,EAX
007edc36  POP ECX
007edc37  JZ 0x007edc4f
007edc39  MOV EDX,dword ptr [EBP + 0x8]
007edc3c  PUSH dword ptr [EDX + 0xc]
007edc3f  MOV ECX,EAX
007edc41  PUSH dword ptr [EBP + 0x10]
007edc44  PUSH dword ptr [EBP + 0xc]
007edc47  PUSH EDX
007edc48  CALL 0x007eec70
007edc4d  JMP 0x007edc51
007edc4f  XOR EAX,EAX
007edc51  MOV EAX,dword ptr [EAX + 0xc]
007edc54  POP EBP
007edc55  RET
