005af9c0  MOV EAX,dword ptr [ECX + 0x78]
005af9c3  FLD float ptr [0x00890968]
005af9c9  PUSH ESI
005af9ca  MOV ESI,dword ptr [ECX + 0x60]
005af9cd  XOR EDX,EDX
005af9cf  TEST ESI,ESI
005af9d1  JBE 0x005af9e3
005af9d3  FST float ptr [EAX + 0x4]
005af9d6  MOV ESI,dword ptr [ECX + 0x60]
005af9d9  FADD float ptr [EAX]
005af9db  ADD EAX,0xc
005af9de  INC EDX
005af9df  CMP EDX,ESI
005af9e1  JC 0x005af9d3
005af9e3  MOV ESI,dword ptr [ECX + 0x64]
005af9e6  FSTP ST0
005af9e8  MOV EAX,dword ptr [ECX + 0x7c]
005af9eb  FLD float ptr [0x00890968]
005af9f1  XOR EDX,EDX
005af9f3  TEST ESI,ESI
005af9f5  JBE 0x005afa07
005af9f7  FST float ptr [EAX + 0x4]
005af9fa  MOV ESI,dword ptr [ECX + 0x64]
005af9fd  FADD float ptr [EAX]
005af9ff  ADD EAX,0xc
005afa02  INC EDX
005afa03  CMP EDX,ESI
005afa05  JC 0x005af9f7
005afa07  FSTP ST0
005afa09  POP ESI
005afa0a  RET
