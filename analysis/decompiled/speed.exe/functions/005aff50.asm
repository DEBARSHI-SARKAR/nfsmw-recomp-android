005aff50  SUB ESP,0x20
005aff53  FLD float ptr [ECX]
005aff55  MOV EAX,dword ptr [ESP + 0x24]
005aff59  FADD ST0,ST0
005aff5b  FLD float ptr [ECX + 0x4]
005aff5e  FADD ST0,ST0
005aff60  FLD float ptr [ECX + 0x8]
005aff63  FADD ST0,ST0
005aff65  FSTP float ptr [ESP]
005aff68  FLD ST1
005aff6a  FMUL float ptr [ECX]
005aff6c  FSTP float ptr [ESP + 0x1c]
005aff70  FLD ST0
005aff72  FMUL float ptr [ECX]
005aff74  FSTP float ptr [ESP + 0x4]
005aff78  FLD float ptr [ESP]
005aff7b  FMUL float ptr [ECX]
005aff7d  FSTP float ptr [ESP + 0xc]
005aff81  FLD ST0
005aff83  FMUL float ptr [ECX + 0x4]
005aff86  FSTP float ptr [ESP + 0x18]
005aff8a  FLD float ptr [ESP]
005aff8d  FMUL float ptr [ECX + 0x4]
005aff90  FSTP float ptr [ESP + 0x14]
005aff94  FLD float ptr [ESP]
005aff97  FMUL float ptr [ECX + 0x8]
005aff9a  FSTP float ptr [ESP + 0x8]
005aff9e  FXCH
005affa0  FMUL float ptr [ECX + 0xc]
005affa3  FSTP float ptr [ESP + 0x10]
005affa7  FMUL float ptr [ECX + 0xc]
005affaa  FLD float ptr [ESP]
005affad  FMUL float ptr [ECX + 0xc]
005affb0  XOR ECX,ECX
005affb2  FLD float ptr [ESP + 0x8]
005affb6  MOV dword ptr [EAX + 0x30],ECX
005affb9  FADD float ptr [ESP + 0x18]
005affbd  MOV dword ptr [EAX + 0x34],ECX
005affc0  MOV dword ptr [EAX + 0x38],ECX
005affc3  MOV dword ptr [EAX + 0xc],ECX
005affc6  FSUBR float ptr [0x0089096c]
005affcc  MOV dword ptr [EAX + 0x1c],ECX
005affcf  MOV dword ptr [EAX + 0x2c],ECX
005affd2  FSTP float ptr [EAX]
005affd4  MOV dword ptr [EAX + 0x3c],0x3f800000
005affdb  FLD float ptr [ESP + 0x4]
005affdf  FSUB ST0,ST1
005affe1  FSTP float ptr [EAX + 0x10]
005affe4  FLD ST1
005affe6  FADD float ptr [ESP + 0xc]
005affea  FSTP float ptr [EAX + 0x20]
005affed  FADD float ptr [ESP + 0x4]
005afff1  FSTP float ptr [EAX + 0x4]
005afff4  FLD float ptr [ESP + 0x8]
005afff8  FADD float ptr [ESP + 0x1c]
005afffc  FSUBR float ptr [0x0089096c]
005b0002  FSTP float ptr [EAX + 0x14]
005b0005  FLD float ptr [ESP + 0x14]
005b0009  FSUB float ptr [ESP + 0x10]
005b000d  FSTP float ptr [EAX + 0x24]
005b0010  FLD float ptr [ESP + 0xc]
005b0014  FSUB ST0,ST1
005b0016  FSTP float ptr [EAX + 0x8]
005b0019  FSTP ST0
005b001b  FLD float ptr [ESP + 0x10]
005b001f  FADD float ptr [ESP + 0x14]
005b0023  FSTP float ptr [EAX + 0x18]
005b0026  FLD float ptr [ESP + 0x18]
005b002a  FADD float ptr [ESP + 0x1c]
005b002e  FSUBR float ptr [0x0089096c]
005b0034  FSTP float ptr [EAX + 0x28]
005b0037  ADD ESP,0x20
005b003a  RET 0x4
