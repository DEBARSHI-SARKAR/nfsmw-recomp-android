007d9fa0  PUSH EBP
007d9fa1  MOV EBP,ESP
007d9fa3  CMP dword ptr [0x00907390],0x0
007d9faa  JNZ 0x007d9fde
007d9fac  MOV EAX,dword ptr [EBP + 0x14]
007d9faf  PUSH EAX
007d9fb0  FLD double ptr [EBP + 0xc]
007d9fb3  SUB ESP,0x8
007d9fb6  FSTP double ptr [ESP]
007d9fb9  FLD double ptr [0x008942e0]
007d9fbf  SUB ESP,0x8
007d9fc2  FSTP double ptr [ESP]
007d9fc5  FLD double ptr [EBP + 0xc]
007d9fc8  SUB ESP,0x8
007d9fcb  FSTP double ptr [ESP]
007d9fce  MOV ECX,dword ptr [EBP + 0x8]
007d9fd1  PUSH ECX
007d9fd2  PUSH 0x1
007d9fd4  CALL 0x007daa50
007d9fd9  ADD ESP,0x24
007d9fdc  JMP 0x007d9ffd
007d9fde  CALL 0x007cb270
007d9fe3  MOV dword ptr [EAX],0x21
007d9fe9  PUSH 0xffff
007d9fee  MOV EDX,dword ptr [EBP + 0x14]
007d9ff1  PUSH EDX
007d9ff2  CALL 0x007dac10
007d9ff7  ADD ESP,0x8
007d9ffa  FLD double ptr [EBP + 0xc]
007d9ffd  POP EBP
007d9ffe  RET
