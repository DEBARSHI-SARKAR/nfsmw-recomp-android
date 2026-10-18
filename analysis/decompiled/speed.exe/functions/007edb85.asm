007edb85  PUSH EBP
007edb86  MOV EBP,ESP
007edb88  PUSH 0x40
007edb8a  CALL 0x007ed475
007edb8f  TEST EAX,EAX
007edb91  POP ECX
007edb92  JZ 0x007edbb3
007edb94  MOV EDX,dword ptr [EBP + 0x8]
007edb97  PUSH dword ptr [EDX + 0xc]
007edb9a  MOV ECX,EAX
007edb9c  PUSH dword ptr [EBP + 0x1c]
007edb9f  PUSH dword ptr [EBP + 0x18]
007edba2  PUSH dword ptr [EBP + 0x10]
007edba5  PUSH dword ptr [EBP + 0xc]
007edba8  PUSH dword ptr [EBP + 0x14]
007edbab  PUSH EDX
007edbac  CALL 0x007ee912
007edbb1  JMP 0x007edbb5
007edbb3  XOR EAX,EAX
007edbb5  MOV EAX,dword ptr [EAX + 0xc]
007edbb8  POP EBP
007edbb9  RET
