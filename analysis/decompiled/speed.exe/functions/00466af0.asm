00466af0  SUB ESP,0x20
00466af3  FLD float ptr [ECX]
00466af5  MOV EAX,dword ptr [ESP + 0x24]
00466af9  FADD ST0,ST0
00466afb  FLD float ptr [ECX + 0x4]
00466afe  FADD ST0,ST0
00466b00  FLD float ptr [ECX + 0x8]
00466b03  FADD ST0,ST0
00466b05  FSTP float ptr [ESP]
00466b08  FLD ST1
00466b0a  FMUL float ptr [ECX]
00466b0c  FSTP float ptr [ESP + 0x1c]
00466b10  FLD ST0
00466b12  FMUL float ptr [ECX]
00466b14  FSTP float ptr [ESP + 0x4]
00466b18  FLD float ptr [ESP]
00466b1b  FMUL float ptr [ECX]
00466b1d  FSTP float ptr [ESP + 0xc]
00466b21  FLD ST0
00466b23  FMUL float ptr [ECX + 0x4]
00466b26  FSTP float ptr [ESP + 0x18]
00466b2a  FLD float ptr [ESP]
00466b2d  FMUL float ptr [ECX + 0x4]
00466b30  FSTP float ptr [ESP + 0x14]
00466b34  FLD float ptr [ESP]
00466b37  FMUL float ptr [ECX + 0x8]
00466b3a  FSTP float ptr [ESP + 0x8]
00466b3e  FXCH
00466b40  FMUL float ptr [ECX + 0xc]
00466b43  FSTP float ptr [ESP + 0x10]
00466b47  FMUL float ptr [ECX + 0xc]
00466b4a  FLD float ptr [ESP]
00466b4d  FMUL float ptr [ECX + 0xc]
00466b50  XOR ECX,ECX
00466b52  FLD float ptr [0x0089096c]
00466b58  MOV dword ptr [EAX + 0x30],ECX
00466b5b  FSUB float ptr [ESP + 0x18]
00466b5f  MOV dword ptr [EAX + 0x34],ECX
00466b62  MOV dword ptr [EAX + 0x38],ECX
00466b65  MOV dword ptr [EAX + 0xc],ECX
00466b68  FSUB float ptr [ESP + 0x8]
00466b6c  MOV dword ptr [EAX + 0x1c],ECX
00466b6f  MOV dword ptr [EAX + 0x2c],ECX
00466b72  MOV dword ptr [EAX + 0x3c],0x3f800000
00466b79  FSTP float ptr [EAX]
00466b7b  FLD float ptr [ESP + 0x4]
00466b7f  FSUB ST0,ST1
00466b81  FSTP float ptr [EAX + 0x10]
00466b84  FLD ST1
00466b86  FADD float ptr [ESP + 0xc]
00466b8a  FSTP float ptr [EAX + 0x20]
00466b8d  FADD float ptr [ESP + 0x4]
00466b91  FSTP float ptr [EAX + 0x4]
00466b94  FLD float ptr [0x0089096c]
00466b9a  FSUB float ptr [ESP + 0x1c]
00466b9e  FLD float ptr [ESP + 0x8]
00466ba2  FSUBR ST0,ST1
00466ba4  FSTP float ptr [EAX + 0x14]
00466ba7  FLD float ptr [ESP + 0x14]
00466bab  FSUB float ptr [ESP + 0x10]
00466baf  FSTP float ptr [EAX + 0x24]
00466bb2  FLD float ptr [ESP + 0xc]
00466bb6  FSUB ST0,ST2
00466bb8  FSTP float ptr [EAX + 0x8]
00466bbb  FLD float ptr [ESP + 0x10]
00466bbf  FADD float ptr [ESP + 0x14]
00466bc3  FSTP float ptr [EAX + 0x18]
00466bc6  FSUB float ptr [ESP + 0x18]
00466bca  FSTP float ptr [EAX + 0x28]
00466bcd  FSTP ST0
00466bcf  ADD ESP,0x20
00466bd2  RET 0x4
