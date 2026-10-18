007cfdb0  PUSH EBP
007cfdb1  MOV EBP,ESP
007cfdb3  SUB ESP,0x8
007cfdb6  MOV EAX,dword ptr [EBP + 0x8]
007cfdb9  MOV ECX,dword ptr [EAX]
007cfdbb  MOV dword ptr [EBP + -0x4],ECX
007cfdbe  MOV EDX,dword ptr [EBP + -0x4]
007cfdc1  MOV EAX,dword ptr [EDX]
007cfdc3  MOV dword ptr [EBP + -0x8],EAX
007cfdc6  CMP dword ptr [EBP + -0x8],0xe06d7363
007cfdcd  JZ 0x007cfdd1
007cfdcf  JMP 0x007cfde5
007cfdd1  CALL 0x007cd100
007cfdd6  MOV dword ptr [EAX + 0x84],0x0
007cfde0  CALL 0x007d0a20
007cfde5  XOR EAX,EAX
007cfde7  MOV ESP,EBP
007cfde9  POP EBP
007cfdea  RET
