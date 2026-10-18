005c6270  SUB ESP,0xc
005c6273  MOV EAX,dword ptr [ESP + 0x10]
005c6277  FLD float ptr [EAX]
005c6279  FLD ST0
005c627b  FMULP
005c627d  FADD ST0,ST0
005c627f  FLD float ptr [EAX + 0x4]
005c6282  FLD ST0
005c6284  FMULP
005c6286  FADD ST0,ST0
005c6288  FLD float ptr [EAX + 0x8]
005c628b  FLD ST0
005c628d  FMULP
005c628f  FADD ST0,ST0
005c6291  FLD float ptr [EAX + 0x4]
005c6294  FMUL float ptr [EAX]
005c6296  FADD ST0,ST0
005c6298  FLD float ptr [EAX + 0x8]
005c629b  FMUL float ptr [EAX]
005c629d  FADD ST0,ST0
005c629f  FSTP float ptr [ESP + 0x10]
005c62a3  FLD float ptr [EAX + 0xc]
005c62a6  FMUL float ptr [EAX]
005c62a8  FADD ST0,ST0
005c62aa  FSTP float ptr [ESP + 0x8]
005c62ae  FLD float ptr [EAX + 0x8]
005c62b1  FMUL float ptr [EAX + 0x4]
005c62b4  FADD ST0,ST0
005c62b6  FSTP float ptr [ESP + 0x4]
005c62ba  FLD float ptr [EAX + 0xc]
005c62bd  FMUL float ptr [EAX + 0x4]
005c62c0  FADD ST0,ST0
005c62c2  FSTP float ptr [ESP]
005c62c5  FLD float ptr [EAX + 0xc]
005c62c8  FMUL float ptr [EAX + 0x8]
005c62cb  MOV EAX,dword ptr [ESP + 0x14]
005c62cf  FADD ST0,ST0
005c62d1  FLD float ptr [0x0089096c]
005c62d7  FSUB ST0,ST4
005c62d9  FSUB ST0,ST3
005c62db  FSTP float ptr [EAX]
005c62dd  FLD ST1
005c62df  FSUB ST0,ST1
005c62e1  FSTP float ptr [EAX + 0x4]
005c62e4  FLD float ptr [ESP]
005c62e7  FADD float ptr [ESP + 0x10]
005c62eb  FSTP float ptr [EAX + 0x8]
005c62ee  FADD ST0,ST1
005c62f0  FSTP float ptr [EAX + 0xc]
005c62f3  FSTP ST0
005c62f5  FLD float ptr [0x0089096c]
005c62fb  FSUB ST0,ST3
005c62fd  FST float ptr [ESP + 0x14]
005c6301  FSUB ST0,ST1
005c6303  FSTP float ptr [EAX + 0x10]
005c6306  FSTP ST0
005c6308  FLD float ptr [ESP + 0x4]
005c630c  FSUB float ptr [ESP + 0x8]
005c6310  FSTP float ptr [EAX + 0x14]
005c6313  FLD float ptr [ESP + 0x10]
005c6317  FSUB float ptr [ESP]
005c631a  FSTP float ptr [EAX + 0x18]
005c631d  FLD float ptr [ESP + 0x4]
005c6321  FADD float ptr [ESP + 0x8]
005c6325  FSTP float ptr [EAX + 0x1c]
005c6328  FLD float ptr [ESP + 0x14]
005c632c  FSUB ST0,ST1
005c632e  FSTP float ptr [EAX + 0x20]
005c6331  FSTP ST0
005c6333  FSTP ST0
005c6335  ADD ESP,0xc
005c6338  RET
