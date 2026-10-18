007edb59  PUSH EBP
007edb5a  MOV EBP,ESP
007edb5c  PUSH 0x40
007edb5e  CALL 0x007ed475
007edb63  TEST EAX,EAX
007edb65  POP ECX
007edb66  JZ 0x007edb7e
007edb68  MOV EDX,dword ptr [EBP + 0x8]
007edb6b  PUSH dword ptr [EDX + 0xc]
007edb6e  MOV ECX,EAX
007edb70  PUSH dword ptr [EBP + 0x10]
007edb73  PUSH dword ptr [EBP + 0xc]
007edb76  PUSH EDX
007edb77  CALL 0x007ee8aa
007edb7c  JMP 0x007edb80
007edb7e  XOR EAX,EAX
007edb80  MOV EAX,dword ptr [EAX + 0xc]
007edb83  POP EBP
007edb84  RET
