005ca7b0  PUSH ECX
005ca7b1  MOV EAX,dword ptr [ESP + 0x8]
005ca7b5  FLD float ptr [EAX]
005ca7b7  FLD ST0
005ca7b9  FMULP
005ca7bb  FADD ST0,ST0
005ca7bd  FLD float ptr [EAX + 0x8]
005ca7c0  FLD ST0
005ca7c2  FMULP
005ca7c4  FADD ST0,ST0
005ca7c6  FLD float ptr [EAX + 0xc]
005ca7c9  FMUL float ptr [EAX]
005ca7cb  FADD ST0,ST0
005ca7cd  FSTP float ptr [ESP]
005ca7d0  FLD float ptr [EAX + 0x8]
005ca7d3  FMUL float ptr [EAX + 0x4]
005ca7d6  FADD ST0,ST0
005ca7d8  FSTP float ptr [ESP + 0x8]
005ca7dc  FLD float ptr [EAX + 0x4]
005ca7df  FMUL float ptr [EAX]
005ca7e1  FADD ST0,ST0
005ca7e3  FLD float ptr [EAX + 0xc]
005ca7e6  FMUL float ptr [EAX + 0x8]
005ca7e9  MOV EAX,dword ptr [ESP + 0xc]
005ca7ed  FADD ST0,ST0
005ca7ef  FSUBP
005ca7f1  FSTP float ptr [EAX]
005ca7f3  FADD ST0,ST1
005ca7f5  FSUBR float ptr [0x0089096c]
005ca7fb  FSTP float ptr [EAX + 0x4]
005ca7fe  FSTP ST0
005ca800  FLD float ptr [ESP + 0x8]
005ca804  FADD float ptr [ESP]
005ca807  FSTP float ptr [EAX + 0x8]
005ca80a  POP ECX
005ca80b  RET
