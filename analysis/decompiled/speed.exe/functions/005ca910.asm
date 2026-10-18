005ca910  SUB ESP,0xc
005ca913  MOV EAX,dword ptr [ESP + 0x10]
005ca917  FLD float ptr [EAX]
005ca919  XOR ECX,ECX
005ca91b  FLD ST0
005ca91d  FMULP
005ca91f  FADD ST0,ST0
005ca921  FLD float ptr [EAX + 0x4]
005ca924  FLD ST0
005ca926  FMULP
005ca928  FADD ST0,ST0
005ca92a  FLD float ptr [EAX + 0x8]
005ca92d  FLD ST0
005ca92f  FMULP
005ca931  FADD ST0,ST0
005ca933  FLD float ptr [EAX + 0x4]
005ca936  FMUL float ptr [EAX]
005ca938  FADD ST0,ST0
005ca93a  FLD float ptr [EAX + 0x8]
005ca93d  FMUL float ptr [EAX]
005ca93f  FADD ST0,ST0
005ca941  FSTP float ptr [ESP]
005ca944  FLD float ptr [EAX + 0xc]
005ca947  FMUL float ptr [EAX]
005ca949  FADD ST0,ST0
005ca94b  FSTP float ptr [ESP + 0x8]
005ca94f  FLD float ptr [EAX + 0x8]
005ca952  FMUL float ptr [EAX + 0x4]
005ca955  FADD ST0,ST0
005ca957  FSTP float ptr [ESP + 0x4]
005ca95b  FLD float ptr [EAX + 0xc]
005ca95e  FMUL float ptr [EAX + 0x4]
005ca961  FADD ST0,ST0
005ca963  FSTP float ptr [ESP + 0x10]
005ca967  FLD float ptr [EAX + 0xc]
005ca96a  FMUL float ptr [EAX + 0x8]
005ca96d  MOV EAX,dword ptr [ESP + 0x14]
005ca971  FADD ST0,ST0
005ca973  FLD ST2
005ca975  FADD ST0,ST4
005ca977  FSUBR float ptr [0x0089096c]
005ca97d  FSTP float ptr [EAX]
005ca97f  FLD ST0
005ca981  FADD ST0,ST2
005ca983  FSTP float ptr [EAX + 0x4]
005ca986  FLD float ptr [ESP]
005ca989  FSUB float ptr [ESP + 0x10]
005ca98d  FSTP float ptr [EAX + 0x8]
005ca990  FXCH
005ca992  MOV dword ptr [EAX + 0xc],ECX
005ca995  FSUB ST0,ST1
005ca997  FSTP float ptr [EAX + 0x10]
005ca99a  FSTP ST0
005ca99c  FADD ST0,ST2
005ca99e  FSUBR float ptr [0x0089096c]
005ca9a4  FSTP float ptr [EAX + 0x14]
005ca9a7  FLD float ptr [ESP + 0x4]
005ca9ab  FADD float ptr [ESP + 0x8]
005ca9af  FSTP float ptr [EAX + 0x18]
005ca9b2  FLD float ptr [ESP + 0x10]
005ca9b6  MOV dword ptr [EAX + 0x1c],ECX
005ca9b9  FADD float ptr [ESP]
005ca9bc  FSTP float ptr [EAX + 0x20]
005ca9bf  FLD float ptr [ESP + 0x4]
005ca9c3  FSUB float ptr [ESP + 0x8]
005ca9c7  FSTP float ptr [EAX + 0x24]
005ca9ca  FADD ST0,ST1
005ca9cc  FSUBR float ptr [0x0089096c]
005ca9d2  FSTP float ptr [EAX + 0x28]
005ca9d5  MOV dword ptr [EAX + 0x2c],ECX
005ca9d8  MOV dword ptr [EAX + 0x30],ECX
005ca9db  MOV dword ptr [EAX + 0x34],ECX
005ca9de  FSTP ST0
005ca9e0  MOV dword ptr [EAX + 0x38],ECX
005ca9e3  MOV dword ptr [EAX + 0x3c],0x3f800000
005ca9ea  ADD ESP,0xc
005ca9ed  RET
