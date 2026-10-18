006bd980  SUB ESP,0xc
006bd983  PUSH ESI
006bd984  MOV ESI,dword ptr [ESP + 0x1c]
006bd988  PUSH ESI
006bd989  CALL 0x0045dbf0
006bd98e  FSTP float ptr [ESP + 0x8]
006bd992  PUSH ESI
006bd993  CALL 0x0045db30
006bd998  FLD float ptr [0x0089096c]
006bd99e  FSUB float ptr [ESP + 0xc]
006bd9a2  MOV EAX,dword ptr [ESP + 0x20]
006bd9a6  FLD float ptr [EAX]
006bd9a8  ADD ESP,0x8
006bd9ab  FLD float ptr [EAX + 0x4]
006bd9ae  MOV EAX,dword ptr [EAX + 0x8]
006bd9b1  FLD ST1
006bd9b3  MOV dword ptr [ESP + 0x18],EAX
006bd9b7  FMUL ST3
006bd9b9  MOV EAX,dword ptr [ESP + 0x14]
006bd9bd  FLD ST1
006bd9bf  XOR ECX,ECX
006bd9c1  FMUL ST4
006bd9c3  MOV dword ptr [EAX + 0xc],ECX
006bd9c6  MOV dword ptr [EAX + 0x1c],ECX
006bd9c9  MOV dword ptr [EAX + 0x2c],ECX
006bd9cc  FSTP float ptr [ESP + 0x8]
006bd9d0  MOV dword ptr [EAX + 0x30],ECX
006bd9d3  MOV dword ptr [EAX + 0x34],ECX
006bd9d6  FLD ST0
006bd9d8  MOV dword ptr [EAX + 0x38],ECX
006bd9db  FMUL ST3
006bd9dd  MOV dword ptr [EAX + 0x3c],0x3f800000
006bd9e4  POP ESI
006bd9e5  FADD float ptr [ESP]
006bd9e8  FSTP float ptr [EAX]
006bd9ea  FLD ST0
006bd9ec  FMUL ST2
006bd9ee  FLD float ptr [ESP + 0x14]
006bd9f2  FMUL ST6
006bd9f4  FLD ST1
006bd9f6  FSUB ST0,ST1
006bd9f8  FSTP float ptr [EAX + 0x4]
006bd9fb  FXCH ST2
006bd9fd  FMUL float ptr [ESP + 0x14]
006bda01  FSTP float ptr [ESP + 0x10]
006bda05  FLD ST2
006bda07  FMUL ST6
006bda09  FST float ptr [ESP + 0x8]
006bda0d  FADD float ptr [ESP + 0x10]
006bda11  FSTP float ptr [EAX + 0x8]
006bda14  FXCH
006bda16  FADD ST0,ST1
006bda18  FSTP float ptr [EAX + 0x10]
006bda1b  FSTP ST0
006bda1d  FLD float ptr [ESP + 0x4]
006bda21  FMUL ST1
006bda23  FADD float ptr [ESP]
006bda26  FSTP float ptr [EAX + 0x14]
006bda29  FSTP ST0
006bda2b  FLD float ptr [ESP + 0x4]
006bda2f  FMUL float ptr [ESP + 0x14]
006bda33  FXCH
006bda35  FMUL ST3
006bda37  FLD ST1
006bda39  FSUB ST0,ST1
006bda3b  FSTP float ptr [EAX + 0x18]
006bda3e  FLD float ptr [ESP + 0x10]
006bda42  FSUB float ptr [ESP + 0x8]
006bda46  FSTP float ptr [EAX + 0x20]
006bda49  FADD ST0,ST1
006bda4b  FSTP float ptr [EAX + 0x24]
006bda4e  FSTP ST0
006bda50  FLD float ptr [ESP + 0x14]
006bda54  FMUL float ptr [ESP + 0x14]
006bda58  FMUL ST1
006bda5a  FADD float ptr [ESP]
006bda5d  FSTP float ptr [EAX + 0x28]
006bda60  FSTP ST0
006bda62  FSTP ST0
006bda64  ADD ESP,0xc
006bda67  RET
