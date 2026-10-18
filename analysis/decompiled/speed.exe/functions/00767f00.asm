00767f00  SUB ESP,0x18
00767f03  MOV EAX,dword ptr [ESP + 0x1c]
00767f07  FLD float ptr [EAX]
00767f09  FADD ST0,ST0
00767f0b  FLD float ptr [EAX + 0x4]
00767f0e  FADD ST0,ST0
00767f10  FLD float ptr [EAX + 0x8]
00767f13  FADD ST0,ST0
00767f15  FSTP float ptr [ESP + 0x1c]
00767f19  FLD ST1
00767f1b  FMUL float ptr [EAX + 0xc]
00767f1e  FSTP float ptr [ESP + 0x10]
00767f22  FLD ST0
00767f24  FMUL float ptr [EAX + 0xc]
00767f27  FSTP float ptr [ESP + 0xc]
00767f2b  FLD float ptr [ESP + 0x1c]
00767f2f  FMUL float ptr [EAX + 0xc]
00767f32  FSTP float ptr [ESP + 0x4]
00767f36  FXCH
00767f38  FMUL float ptr [EAX]
00767f3a  FSTP float ptr [ESP + 0x14]
00767f3e  FLD ST0
00767f40  FMUL float ptr [EAX]
00767f42  FSTP float ptr [ESP]
00767f45  FLD float ptr [ESP + 0x1c]
00767f49  FMUL float ptr [EAX]
00767f4b  FSTP float ptr [ESP + 0x8]
00767f4f  FMUL float ptr [EAX + 0x4]
00767f52  FLD float ptr [ESP + 0x1c]
00767f56  FMUL float ptr [EAX + 0x4]
00767f59  FLD float ptr [ESP + 0x1c]
00767f5d  FMUL float ptr [EAX + 0x8]
00767f60  MOV EAX,dword ptr [ESP + 0x20]
00767f64  FLD float ptr [0x0089096c]
00767f6a  FSUB ST0,ST3
00767f6c  FSUB ST0,ST1
00767f6e  FSTP float ptr [EAX]
00767f70  FLD float ptr [ESP]
00767f73  FADD float ptr [ESP + 0x4]
00767f77  FSTP float ptr [EAX + 0x4]
00767f7a  FLD float ptr [ESP + 0x8]
00767f7e  FSUB float ptr [ESP + 0xc]
00767f82  FSTP float ptr [EAX + 0x8]
00767f85  FLD float ptr [ESP]
00767f88  FSUB float ptr [ESP + 0x4]
00767f8c  FSTP float ptr [EAX + 0xc]
00767f8f  FLD float ptr [0x0089096c]
00767f95  FSUB float ptr [ESP + 0x14]
00767f99  FST float ptr [ESP + 0x1c]
00767f9d  FSUB ST0,ST1
00767f9f  FSTP float ptr [EAX + 0x10]
00767fa2  FSTP ST0
00767fa4  FLD float ptr [ESP + 0x10]
00767fa8  FADD ST0,ST1
00767faa  FSTP float ptr [EAX + 0x14]
00767fad  FLD float ptr [ESP + 0x8]
00767fb1  FADD float ptr [ESP + 0xc]
00767fb5  FSTP float ptr [EAX + 0x18]
00767fb8  FSUB float ptr [ESP + 0x10]
00767fbc  FSTP float ptr [EAX + 0x1c]
00767fbf  FLD float ptr [ESP + 0x1c]
00767fc3  FSUB ST0,ST1
00767fc5  FSTP float ptr [EAX + 0x20]
00767fc8  FSTP ST0
00767fca  ADD ESP,0x18
00767fcd  RET
