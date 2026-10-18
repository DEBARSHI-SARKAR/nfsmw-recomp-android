005cb210  SUB ESP,0x30
005cb213  PUSH ESI
005cb214  MOV ESI,dword ptr [ESP + 0x38]
005cb218  PUSH EDI
005cb219  MOV EDI,dword ptr [ESP + 0x40]
005cb21d  LEA EAX,[ESP + 0x8]
005cb221  PUSH EAX
005cb222  PUSH EDI
005cb223  PUSH ESI
005cb224  CALL 0x00444dc0
005cb229  FLD float ptr [ESI + 0xc]
005cb22c  FLD ST0
005cb22e  LEA ECX,[ESP + 0x34]
005cb232  FMUL float ptr [EDI]
005cb234  PUSH ECX
005cb235  LEA EDX,[ESP + 0x18]
005cb239  PUSH ESI
005cb23a  FADD float ptr [ESP + 0x1c]
005cb23e  PUSH EDX
005cb23f  FSTP float ptr [ESP + 0x20]
005cb243  FLD ST0
005cb245  FMUL float ptr [EDI + 0x4]
005cb248  FADD float ptr [ESP + 0x24]
005cb24c  FSTP float ptr [ESP + 0x24]
005cb250  FMUL float ptr [EDI + 0x8]
005cb253  FADD float ptr [ESP + 0x28]
005cb257  FSTP float ptr [ESP + 0x28]
005cb25b  CALL 0x00444dc0
005cb260  FLD float ptr [EDI + 0x8]
005cb263  MOV EAX,dword ptr [ESI + 0xc]
005cb266  FMUL float ptr [ESI + 0x8]
005cb269  MOV dword ptr [ESP + 0x58],EAX
005cb26d  FLD float ptr [ESI + 0x4]
005cb270  MOV EAX,dword ptr [ESP + 0x60]
005cb274  FMUL float ptr [EDI + 0x4]
005cb277  MOV ECX,dword ptr [ESP + 0x5c]
005cb27b  ADD ESP,0x18
005cb27e  FADDP
005cb280  FLD float ptr [ESI]
005cb282  FMUL float ptr [EDI]
005cb284  FADDP
005cb286  FLD ST0
005cb288  FMUL float ptr [ESI]
005cb28a  FLD ST1
005cb28c  FMUL float ptr [ESI + 0x4]
005cb28f  FSTP float ptr [ESP + 0x1c]
005cb293  FXCH
005cb295  FMUL float ptr [ESI + 0x8]
005cb298  FSTP float ptr [ESP + 0x20]
005cb29c  FLD float ptr [ESP + 0x8]
005cb2a0  FMUL float ptr [ESP + 0x40]
005cb2a4  FADDP
005cb2a6  FLD float ptr [ESP + 0xc]
005cb2aa  FMUL float ptr [ESP + 0x40]
005cb2ae  FADD float ptr [ESP + 0x1c]
005cb2b2  FLD float ptr [ESP + 0x10]
005cb2b6  FMUL float ptr [ESP + 0x40]
005cb2ba  FADD float ptr [ESP + 0x20]
005cb2be  FSTP float ptr [ESP + 0x20]
005cb2c2  FXCH
005cb2c4  FSUB float ptr [ESP + 0x28]
005cb2c8  FST float ptr [ESP + 0x40]
005cb2cc  FSTP float ptr [EAX]
005cb2ce  FSUB float ptr [ESP + 0x2c]
005cb2d2  FST float ptr [EAX + 0x4]
005cb2d5  FLD float ptr [ESP + 0x20]
005cb2d9  FSUB float ptr [ESP + 0x30]
005cb2dd  FST float ptr [EAX + 0x8]
005cb2e0  FLD float ptr [ESP + 0x40]
005cb2e4  FADD float ptr [ECX]
005cb2e6  FSTP float ptr [EAX]
005cb2e8  FXCH
005cb2ea  FADD float ptr [ECX + 0x4]
005cb2ed  FSTP float ptr [EAX + 0x4]
005cb2f0  POP EDI
005cb2f1  POP ESI
005cb2f2  FADD float ptr [ECX + 0x8]
005cb2f5  FSTP float ptr [EAX + 0x8]
005cb2f8  ADD ESP,0x30
005cb2fb  RET
