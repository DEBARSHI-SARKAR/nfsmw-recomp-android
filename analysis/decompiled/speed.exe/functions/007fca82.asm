007fca82  PUSH EBP
007fca83  MOV EBP,ESP
007fca85  MOV EAX,dword ptr [EBP + 0x8]
007fca88  XOR ECX,ECX
007fca8a  CMP dword ptr [EAX + 0x8c],ECX
007fca90  PUSH ESI
007fca91  MOV ESI,dword ptr [EAX + 0xc]
007fca94  JBE 0x007fcab8
007fca96  PUSH EDI
007fca97  MOV EDX,dword ptr [EAX + 0x1c]
007fca9a  MOV EDI,dword ptr [EAX + 0x18]
007fca9d  IMUL EDX,ECX
007fcaa0  MOV DL,byte ptr [EDX + EDI*0x1]
007fcaa3  TEST byte ptr [EAX + 0x20],DL
007fcaa6  JZ 0x007fcaae
007fcaa8  MOV EDX,dword ptr [EAX + 0x24]
007fcaab  MOV dword ptr [EDX + ECX*0x4],ESI
007fcaae  INC ECX
007fcaaf  CMP ECX,dword ptr [EAX + 0x8c]
007fcab5  JC 0x007fca97
007fcab7  POP EDI
007fcab8  POP ESI
007fcab9  POP EBP
007fcaba  RET
