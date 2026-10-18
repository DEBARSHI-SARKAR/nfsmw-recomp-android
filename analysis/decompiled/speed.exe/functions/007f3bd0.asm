007f3bd0  PUSH EBP
007f3bd1  MOV EBP,ESP
007f3bd3  CMP dword ptr [EBP + 0x18],0x0
007f3bd7  JZ 0x007f3be1
007f3bd9  MOV ECX,dword ptr [ECX]
007f3bdb  POP EBP
007f3bdc  JMP 0x007f5d42
007f3be1  MOV ECX,dword ptr [ECX]
007f3be3  PUSH 0x0
007f3be5  PUSH dword ptr [EBP + 0x14]
007f3be8  PUSH dword ptr [EBP + 0x10]
007f3beb  PUSH dword ptr [EBP + 0xc]
007f3bee  PUSH dword ptr [EBP + 0x8]
007f3bf1  CALL 0x007f5d42
007f3bf6  POP EBP
007f3bf7  RET 0x14
