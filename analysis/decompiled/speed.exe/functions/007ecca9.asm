007ecca9  PUSH EBP
007eccaa  MOV EBP,ESP
007eccac  CALL 0x007ecdbc
007eccb1  MOV ECX,EAX
007eccb3  MOV EAX,dword ptr [EBP + 0xc]
007eccb6  IMUL EAX,EAX,0x3e8
007eccbc  CDQ
007eccbd  IDIV ECX
007eccbf  PUSH EAX
007eccc0  MOV EAX,dword ptr [EBP + 0x8]
007eccc3  PUSH dword ptr [EAX + 0x4]
007eccc6  CALL dword ptr [0x008902d0]
007ecccc  NEG EAX
007eccce  SBB EAX,EAX
007eccd0  INC EAX
007eccd1  POP EBP
007eccd2  RET
