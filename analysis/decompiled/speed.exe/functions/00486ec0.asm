00486ec0  SUB ESP,0x24
00486ec3  PUSH ESI
00486ec4  MOV ESI,ECX
00486ec6  LEA EAX,[ESI + 0x80]
00486ecc  MOV ECX,dword ptr [EAX]
00486ece  MOV EDX,dword ptr [EAX + 0x4]
00486ed1  MOV EAX,dword ptr [EAX + 0x8]
00486ed4  MOV dword ptr [ESP + 0xc],EAX
00486ed8  MOV EAX,dword ptr [ESP + 0x2c]
00486edc  MOV dword ptr [ESP + 0x4],ECX
00486ee0  MOV ECX,dword ptr [EAX]
00486ee2  MOV dword ptr [ESP + 0x8],EDX
00486ee6  MOV EDX,dword ptr [EAX + 0x4]
00486ee9  MOV EAX,dword ptr [EAX + 0x8]
00486eec  MOV dword ptr [ESP + 0x1c],ECX
00486ef0  LEA ECX,[ESP + 0x10]
00486ef4  MOV dword ptr [ESP + 0x20],EDX
00486ef8  PUSH ECX
00486ef9  LEA EDX,[ESI + 0x40]
00486efc  MOV dword ptr [ESP + 0x28],EAX
00486f00  PUSH EDX
00486f01  LEA EAX,[ESP + 0x24]
00486f05  PUSH EAX
00486f06  CALL 0x00401670
00486f0b  FLD float ptr [ESI + 0xd0]
00486f11  FLD float ptr [ESP + 0x1c]
00486f15  MOV ECX,dword ptr [ESP + 0x3c]
00486f19  FMUL float ptr [ESP + 0x1c]
00486f1d  ADD ESP,0xc
00486f20  FLD float ptr [ESP + 0x14]
00486f24  PUSH ECX
00486f25  FMUL float ptr [ESP + 0x18]
00486f29  PUSH ESI
00486f2a  FLD float ptr [ESP + 0x20]
00486f2e  LEA ECX,[ESP + 0xc]
00486f32  FMUL float ptr [ESP + 0x20]
00486f36  FLD ST0
00486f38  FADD ST0,ST2
00486f3a  FSTP float ptr [ESP + 0x18]
00486f3e  FADD ST0,ST2
00486f40  FSTP float ptr [ESP + 0x1c]
00486f44  FADDP
00486f46  FLD float ptr [ESP + 0x18]
00486f4a  FMUL ST2
00486f4c  FSTP float ptr [ESP + 0x18]
00486f50  FLD float ptr [ESP + 0x1c]
00486f54  FMUL ST2
00486f56  FSTP float ptr [ESP + 0x1c]
00486f5a  FMULP
00486f5c  FLD float ptr [ESP + 0xc]
00486f60  FADD float ptr [ESP + 0x18]
00486f64  FLD float ptr [ESP + 0x10]
00486f68  FADD float ptr [ESP + 0x1c]
00486f6c  FSTP float ptr [ESP + 0x10]
00486f70  FLD float ptr [ESP + 0x14]
00486f74  FADD ST0,ST2
00486f76  FSTP float ptr [ESP + 0x14]
00486f7a  FMUL float ptr [ESI + 0xbc]
00486f80  FSTP float ptr [ESP + 0xc]
00486f84  FSTP ST0
00486f86  FLD float ptr [ESP + 0x10]
00486f8a  FMUL float ptr [ESI + 0xc0]
00486f90  FSTP float ptr [ESP + 0x10]
00486f94  FLD float ptr [ESP + 0x14]
00486f98  FMUL float ptr [ESI + 0xc4]
00486f9e  FSTP float ptr [ESP + 0x14]
00486fa2  CALL 0x00486bd0
00486fa7  POP ESI
00486fa8  ADD ESP,0x24
00486fab  RET 0x8
