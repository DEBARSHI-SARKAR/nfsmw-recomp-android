005c88a0  SUB ESP,0x18
005c88a3  MOV EAX,dword ptr [ESP + 0x1c]
005c88a7  FLD float ptr [EAX]
005c88a9  FADD ST0,ST0
005c88ab  FLD float ptr [EAX + 0x4]
005c88ae  FADD ST0,ST0
005c88b0  FLD float ptr [EAX + 0x8]
005c88b3  FADD ST0,ST0
005c88b5  FSTP float ptr [ESP + 0x1c]
005c88b9  FLD ST1
005c88bb  FMUL float ptr [EAX + 0xc]
005c88be  FSTP float ptr [ESP + 0x10]
005c88c2  FLD ST0
005c88c4  FMUL float ptr [EAX + 0xc]
005c88c7  FSTP float ptr [ESP + 0xc]
005c88cb  FLD float ptr [ESP + 0x1c]
005c88cf  FMUL float ptr [EAX + 0xc]
005c88d2  FSTP float ptr [ESP + 0x4]
005c88d6  FXCH
005c88d8  FMUL float ptr [EAX]
005c88da  FSTP float ptr [ESP + 0x14]
005c88de  FLD ST0
005c88e0  FMUL float ptr [EAX]
005c88e2  FSTP float ptr [ESP]
005c88e5  FLD float ptr [ESP + 0x1c]
005c88e9  FMUL float ptr [EAX]
005c88eb  FSTP float ptr [ESP + 0x8]
005c88ef  FMUL float ptr [EAX + 0x4]
005c88f2  FLD float ptr [ESP + 0x1c]
005c88f6  FMUL float ptr [EAX + 0x4]
005c88f9  FLD float ptr [ESP + 0x1c]
005c88fd  FMUL float ptr [EAX + 0x8]
005c8900  MOV EAX,dword ptr [ESP + 0x20]
005c8904  FLD ST0
005c8906  FADD ST0,ST3
005c8908  FSUBR float ptr [0x0089096c]
005c890e  FSTP float ptr [EAX]
005c8910  FLD float ptr [ESP]
005c8913  FSUB float ptr [ESP + 0x4]
005c8917  FSTP float ptr [EAX + 0xc]
005c891a  FLD float ptr [ESP + 0x8]
005c891e  FADD float ptr [ESP + 0xc]
005c8922  FSTP float ptr [EAX + 0x18]
005c8925  FLD float ptr [ESP]
005c8928  FADD float ptr [ESP + 0x4]
005c892c  FSTP float ptr [EAX + 0x4]
005c892f  FADD float ptr [ESP + 0x14]
005c8933  FSUBR float ptr [0x0089096c]
005c8939  FSTP float ptr [EAX + 0x10]
005c893c  FLD float ptr [ESP + 0x10]
005c8940  FSUBR ST0,ST1
005c8942  FSTP float ptr [EAX + 0x1c]
005c8945  FLD float ptr [ESP + 0x8]
005c8949  FSUB float ptr [ESP + 0xc]
005c894d  FSTP float ptr [EAX + 0x8]
005c8950  FADD float ptr [ESP + 0x10]
005c8954  FSTP float ptr [EAX + 0x14]
005c8957  FADD float ptr [ESP + 0x14]
005c895b  FSUBR float ptr [0x0089096c]
005c8961  FSTP float ptr [EAX + 0x20]
005c8964  ADD ESP,0x18
005c8967  RET
