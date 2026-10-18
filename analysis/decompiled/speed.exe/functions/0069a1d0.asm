0069a1d0  MOV EAX,dword ptr [ECX + 0x60]
0069a1d3  SUB ESP,0x20
0069a1d6  PUSH ESI
0069a1d7  MOV ESI,dword ptr [EAX]
0069a1d9  CALL 0x0069a170
0069a1de  TEST byte ptr [ESI + 0x1e],0x8
0069a1e2  JZ 0x0069a20b
0069a1e4  FLD float ptr [ESP + 0x28]
0069a1e8  FMUL float ptr [ESI + 0x20]
0069a1eb  FADD float ptr [ESI + 0x10]
0069a1ee  FSTP float ptr [ESI + 0x10]
0069a1f1  FLD float ptr [ESP + 0x28]
0069a1f5  FMUL float ptr [ESI + 0x24]
0069a1f8  FADD float ptr [ESI + 0x14]
0069a1fb  FSTP float ptr [ESI + 0x14]
0069a1fe  FLD float ptr [ESP + 0x28]
0069a202  FMUL float ptr [ESI + 0x28]
0069a205  FADD float ptr [ESI + 0x18]
0069a208  FSTP float ptr [ESI + 0x18]
0069a20b  TEST byte ptr [ESI + 0x1f],0x2
0069a20f  JZ 0x0069a296
0069a215  FLD float ptr [ESP + 0x28]
0069a219  LEA ECX,[ESP + 0x14]
0069a21d  FMUL float ptr [ESI + 0x30]
0069a220  PUSH ECX
0069a221  LEA EDX,[ESP + 0x8]
0069a225  PUSH EDX
0069a226  FSTP float ptr [ESP + 0xc]
0069a22a  PUSH ESI
0069a22b  FLD float ptr [ESP + 0x34]
0069a22f  MOV dword ptr [ESP + 0x1c],0x0
0069a237  FMUL float ptr [ESI + 0x34]
0069a23a  FSTP float ptr [ESP + 0x14]
0069a23e  FLD float ptr [ESP + 0x34]
0069a242  FMUL float ptr [ESI + 0x38]
0069a245  FSTP float ptr [ESP + 0x18]
0069a249  CALL 0x004866c0
0069a24e  FLD float ptr [ESP + 0x20]
0069a252  PUSH ESI
0069a253  FMUL float ptr [0x008933d4]
0069a259  PUSH ESI
0069a25a  FADD float ptr [ESI]
0069a25c  FSTP float ptr [ESI]
0069a25e  FLD float ptr [ESP + 0x2c]
0069a262  FMUL float ptr [0x008933d4]
0069a268  FADD float ptr [ESI + 0x4]
0069a26b  FSTP float ptr [ESI + 0x4]
0069a26e  FLD float ptr [ESP + 0x30]
0069a272  FMUL float ptr [0x008933d4]
0069a278  FADD float ptr [ESI + 0x8]
0069a27b  FSTP float ptr [ESI + 0x8]
0069a27e  FLD float ptr [ESP + 0x34]
0069a282  FMUL float ptr [0x008933d4]
0069a288  FADD float ptr [ESI + 0xc]
0069a28b  FSTP float ptr [ESI + 0xc]
0069a28e  CALL 0x004884a0
0069a293  ADD ESP,0x14
0069a296  POP ESI
0069a297  ADD ESP,0x20
0069a29a  RET 0x4
