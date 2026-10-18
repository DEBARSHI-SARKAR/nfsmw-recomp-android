00765e40  MOV EDX,dword ptr [ESP + 0x8]
00765e44  PUSH EBX
00765e45  PUSH ESI
00765e46  XOR ESI,ESI
00765e48  CMP EDX,0x4
00765e4b  PUSH EDI
00765e4c  MOV EDI,dword ptr [ESP + 0x10]
00765e50  MOV BL,0x1
00765e52  JL 0x00765f72
00765e58  LEA ECX,[EDX + -0x4]
00765e5b  SHR ECX,0x2
00765e5e  INC ECX
00765e5f  LEA EAX,[EDI + 0x48]
00765e62  LEA ESI,[ECX*0x4 + 0x0]
00765e69  LEA ESP,[ESP]
00765e70  TEST byte ptr [EAX + -0x20],BL
00765e73  JZ 0x00765ea7
00765e75  FLD float ptr [EAX + -0x48]
00765e78  FADD float ptr [EAX + -0x40]
00765e7b  FMUL float ptr [0x008933d4]
00765e81  FSTP float ptr [EAX + -0x18]
00765e84  FLD float ptr [EAX + -0x44]
00765e87  FADD float ptr [EAX + -0x3c]
00765e8a  FMUL float ptr [0x008933d4]
00765e90  FSTP float ptr [EAX + -0x10]
00765e93  FLD float ptr [EAX + -0x24]
00765e96  FSUB float ptr [EAX + -0x28]
00765e99  FMUL float ptr [0x008933d4]
00765e9f  FST float ptr [EAX + -0x24]
00765ea2  FCHS
00765ea4  FSTP float ptr [EAX + -0x28]
00765ea7  TEST byte ptr [EAX + 0x20],BL
00765eaa  JZ 0x00765edd
00765eac  FLD float ptr [EAX + -0x8]
00765eaf  FADD float ptr [EAX]
00765eb1  FMUL float ptr [0x008933d4]
00765eb7  FSTP float ptr [EAX + 0x28]
00765eba  FLD float ptr [EAX + -0x4]
00765ebd  FADD float ptr [EAX + 0x4]
00765ec0  FMUL float ptr [0x008933d4]
00765ec6  FSTP float ptr [EAX + 0x30]
00765ec9  FLD float ptr [EAX + 0x1c]
00765ecc  FSUB float ptr [EAX + 0x18]
00765ecf  FMUL float ptr [0x008933d4]
00765ed5  FST float ptr [EAX + 0x1c]
00765ed8  FCHS
00765eda  FSTP float ptr [EAX + 0x18]
00765edd  TEST byte ptr [EAX + 0x60],BL
00765ee0  JZ 0x00765f14
00765ee2  FLD float ptr [EAX + 0x40]
00765ee5  FADD float ptr [EAX + 0x38]
00765ee8  FMUL float ptr [0x008933d4]
00765eee  FSTP float ptr [EAX + 0x68]
00765ef1  FLD float ptr [EAX + 0x44]
00765ef4  FADD float ptr [EAX + 0x3c]
00765ef7  FMUL float ptr [0x008933d4]
00765efd  FSTP float ptr [EAX + 0x70]
00765f00  FLD float ptr [EAX + 0x5c]
00765f03  FSUB float ptr [EAX + 0x58]
00765f06  FMUL float ptr [0x008933d4]
00765f0c  FST float ptr [EAX + 0x5c]
00765f0f  FCHS
00765f11  FSTP float ptr [EAX + 0x58]
00765f14  TEST byte ptr [EAX + 0xa0],BL
00765f1a  JZ 0x00765f66
00765f1c  FLD float ptr [EAX + 0x80]
00765f22  FADD float ptr [EAX + 0x78]
00765f25  FMUL float ptr [0x008933d4]
00765f2b  FSTP float ptr [EAX + 0xa8]
00765f31  FLD float ptr [EAX + 0x84]
00765f37  FADD float ptr [EAX + 0x7c]
00765f3a  FMUL float ptr [0x008933d4]
00765f40  FSTP float ptr [EAX + 0xb0]
00765f46  FLD float ptr [EAX + 0x9c]
00765f4c  FSUB float ptr [EAX + 0x98]
00765f52  FMUL float ptr [0x008933d4]
00765f58  FST float ptr [EAX + 0x9c]
00765f5e  FCHS
00765f60  FSTP float ptr [EAX + 0x98]
00765f66  ADD EAX,0x100
00765f6b  DEC ECX
00765f6c  JNZ 0x00765e70
00765f72  CMP ESI,EDX
00765f74  JGE 0x00765fbd
00765f76  MOV EAX,ESI
00765f78  SHL EAX,0x6
00765f7b  LEA EAX,[EAX + EDI*0x1 + 0x8]
00765f7f  SUB EDX,ESI
00765f81  TEST byte ptr [EAX + 0x20],BL
00765f84  JZ 0x00765fb7
00765f86  FLD float ptr [EAX + -0x8]
00765f89  FADD float ptr [EAX]
00765f8b  FMUL float ptr [0x008933d4]
00765f91  FSTP float ptr [EAX + 0x28]
00765f94  FLD float ptr [EAX + -0x4]
00765f97  FADD float ptr [EAX + 0x4]
00765f9a  FMUL float ptr [0x008933d4]
00765fa0  FSTP float ptr [EAX + 0x30]
00765fa3  FLD float ptr [EAX + 0x1c]
00765fa6  FSUB float ptr [EAX + 0x18]
00765fa9  FMUL float ptr [0x008933d4]
00765faf  FST float ptr [EAX + 0x1c]
00765fb2  FCHS
00765fb4  FSTP float ptr [EAX + 0x18]
00765fb7  ADD EAX,0x40
00765fba  DEC EDX
00765fbb  JNZ 0x00765f81
00765fbd  POP EDI
00765fbe  POP ESI
00765fbf  POP EBX
00765fc0  RET 0x8
