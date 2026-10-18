007f3bac  PUSH EBP
007f3bad  MOV EBP,ESP
007f3baf  CMP dword ptr [EBP + 0x10],0x0
007f3bb3  JZ 0x007f3bbd
007f3bb5  MOV ECX,dword ptr [ECX]
007f3bb7  POP EBP
007f3bb8  JMP 0x007f5d36
007f3bbd  MOV ECX,dword ptr [ECX]
007f3bbf  PUSH 0x0
007f3bc1  PUSH dword ptr [EBP + 0xc]
007f3bc4  PUSH dword ptr [EBP + 0x8]
007f3bc7  CALL 0x007f5d36
007f3bcc  POP EBP
007f3bcd  RET 0xc
