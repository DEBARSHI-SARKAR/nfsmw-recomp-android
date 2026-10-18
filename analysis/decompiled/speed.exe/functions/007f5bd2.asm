007f5bd2  PUSH EBP
007f5bd3  MOV EBP,ESP
007f5bd5  CMP dword ptr [EBP + 0x8],0x1
007f5bd9  MOV EAX,dword ptr [EBP + 0xc]
007f5bdc  JNZ 0x007f5be5
007f5bde  OR dword ptr [ECX + 0x7c],EAX
007f5be1  NOT EAX
007f5be3  JMP 0x007f5bfd
007f5be5  CMP dword ptr [EBP + 0x8],0x2
007f5be9  JNZ 0x007f5bf8
007f5beb  OR dword ptr [ECX + 0x80],EAX
007f5bf1  NOT EAX
007f5bf3  AND dword ptr [ECX + 0x7c],EAX
007f5bf6  JMP 0x007f5c03
007f5bf8  NOT EAX
007f5bfa  AND dword ptr [ECX + 0x7c],EAX
007f5bfd  AND dword ptr [ECX + 0x80],EAX
007f5c03  POP EBP
007f5c04  RET 0x8
