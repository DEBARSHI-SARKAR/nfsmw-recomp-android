0067c570  SUB ESP,0x40
0067c573  PUSH EBP
0067c574  MOV EBP,dword ptr [ESP + 0x48]
0067c578  LEA EAX,[ESP + 0x14]
0067c57c  PUSH EAX
0067c57d  PUSH EBP
0067c57e  MOV dword ptr [ESP + 0x1c],0x0
0067c586  MOV dword ptr [ESP + 0x20],0x0
0067c58e  MOV dword ptr [ESP + 0x24],0x0
0067c596  MOV dword ptr [ESP + 0x10],0x0
0067c59e  MOV dword ptr [ESP + 0x14],0x0
0067c5a6  MOV dword ptr [ESP + 0x18],0x0
0067c5ae  CALL 0x00679660
0067c5b3  ADD ESP,0x8
0067c5b6  TEST AL,AL
0067c5b8  JZ 0x0067c5cc
0067c5ba  LEA ECX,[ESP + 0x8]
0067c5be  PUSH ECX
0067c5bf  PUSH EBP
0067c5c0  CALL 0x006796c0
0067c5c5  ADD ESP,0x8
0067c5c8  TEST AL,AL
0067c5ca  JNZ 0x0067c5d3
0067c5cc  XOR AL,AL
0067c5ce  POP EBP
0067c5cf  ADD ESP,0x40
0067c5d2  RET
0067c5d3  PUSH EBX
0067c5d4  XOR EBX,EBX
0067c5d6  PUSH ESI
0067c5d7  PUSH EDI
0067c5d8  MOV EDI,dword ptr [ESP + 0x58]
0067c5dc  MOV dword ptr [EDI + 0x8],EBX
0067c5df  MOV dword ptr [EDI + 0x4],EBX
0067c5e2  MOV dword ptr [EDI],EBX
0067c5e4  MOV dword ptr [ESP + 0x2c],EBX
0067c5e8  MOV dword ptr [ESP + 0x30],EBX
0067c5ec  MOV dword ptr [ESP + 0x34],EBX
0067c5f0  MOV dword ptr [ESP + 0x44],EBX
0067c5f4  MOV dword ptr [ESP + 0x48],EBX
0067c5f8  MOV dword ptr [ESP + 0x4c],EBX
0067c5fc  MOV dword ptr [ESP + 0x38],EBX
0067c600  MOV dword ptr [ESP + 0x3c],EBX
0067c604  MOV dword ptr [ESP + 0x40],EBX
0067c608  MOV ESI,0x8f8930
0067c60d  LEA ECX,[ECX]
0067c610  PUSH EBX
0067c611  PUSH EBP
0067c612  CALL 0x00677f80
0067c617  FSTP float ptr [ESP + 0x18]
0067c61b  FLD float ptr [ESP + 0x44]
0067c61f  ADD ESP,0x8
0067c622  FADD float ptr [ESI + -0x4]
0067c625  PUSH 0x0
0067c627  PUSH 0xcdc136e8
0067c62c  MOV ECX,EBP
0067c62e  FSTP float ptr [ESP + 0x44]
0067c632  FLD float ptr [ESP + 0x48]
0067c636  FADD float ptr [ESI]
0067c638  FSTP float ptr [ESP + 0x48]
0067c63c  FLD float ptr [ESP + 0x40]
0067c640  FADD float ptr [ESI + -0x8]
0067c643  FSTP float ptr [ESP + 0x40]
0067c647  CALL 0x00454810
0067c64c  TEST EAX,EAX
0067c64e  JNZ 0x0067c65a
0067c650  PUSH 0x4
0067c652  CALL 0x006269b0
0067c657  ADD ESP,0x4
0067c65a  MOV ECX,EBX
0067c65c  MOV EDX,0x1
0067c661  SHL EDX,CL
0067c663  TEST dword ptr [EAX],EDX
0067c665  JZ 0x0067c687
0067c667  FLD float ptr [ESP + 0x48]
0067c66b  FADD float ptr [ESI + -0x4]
0067c66e  FSTP float ptr [ESP + 0x48]
0067c672  FLD float ptr [ESP + 0x4c]
0067c676  FADD float ptr [ESI]
0067c678  FSTP float ptr [ESP + 0x4c]
0067c67c  FLD float ptr [ESP + 0x44]
0067c680  FADD float ptr [ESI + -0x8]
0067c683  FSTP float ptr [ESP + 0x44]
0067c687  FLD float ptr [ESP + 0x30]
0067c68b  ADD ESI,0xc
0067c68e  FADD float ptr [ESI + -0x10]
0067c691  INC EBX
0067c692  CMP ESI,0x8f8984
0067c698  FSTP float ptr [ESP + 0x30]
0067c69c  FLD float ptr [ESP + 0x10]
0067c6a0  FMUL float ptr [ESI + -0x10]
0067c6a3  FADD float ptr [EDI + 0x4]
0067c6a6  FSTP float ptr [EDI + 0x4]
0067c6a9  FLD float ptr [ESP + 0x34]
0067c6ad  FADD float ptr [ESI + -0xc]
0067c6b0  FSTP float ptr [ESP + 0x34]
0067c6b4  FLD float ptr [ESP + 0x10]
0067c6b8  FMUL float ptr [ESI + -0xc]
0067c6bb  FADD float ptr [EDI + 0x8]
0067c6be  FSTP float ptr [EDI + 0x8]
0067c6c1  FLD float ptr [ESP + 0x2c]
0067c6c5  FADD float ptr [ESI + -0x14]
0067c6c8  FSTP float ptr [ESP + 0x2c]
0067c6cc  FLD float ptr [ESP + 0x10]
0067c6d0  FMUL float ptr [ESI + -0x14]
0067c6d3  FADD float ptr [EDI]
0067c6d5  FSTP float ptr [EDI]
0067c6d7  JL 0x0067c610
0067c6dd  FLD float ptr [ESP + 0x30]
0067c6e1  FCOMP float ptr [0x008a92d4]
0067c6e7  FNSTSW AX
0067c6e9  TEST AH,0x41
0067c6ec  JNZ 0x0067c6f8
0067c6ee  FLD float ptr [EDI + 0x4]
0067c6f1  FDIV float ptr [ESP + 0x30]
0067c6f5  FSTP float ptr [EDI + 0x4]
0067c6f8  FLD float ptr [ESP + 0x34]
0067c6fc  FCOMP float ptr [0x008a92d4]
0067c702  FNSTSW AX
0067c704  TEST AH,0x41
0067c707  JNZ 0x0067c713
0067c709  FLD float ptr [EDI + 0x8]
0067c70c  FDIV float ptr [ESP + 0x34]
0067c710  FSTP float ptr [EDI + 0x8]
0067c713  FLD float ptr [ESP + 0x2c]
0067c717  FCOMP float ptr [0x008a92d4]
0067c71d  FNSTSW AX
0067c71f  TEST AH,0x41
0067c722  JNZ 0x0067c72c
0067c724  FLD float ptr [EDI]
0067c726  FDIV float ptr [ESP + 0x2c]
0067c72a  FSTP float ptr [EDI]
0067c72c  FLD float ptr [ESP + 0x3c]
0067c730  FCOMP float ptr [0x008a92d4]
0067c736  FNSTSW AX
0067c738  TEST AH,0x41
0067c73b  JNZ 0x0067c797
0067c73d  FLD float ptr [ESP + 0x48]
0067c741  FDIV float ptr [ESP + 0x3c]
0067c745  FLD float ptr [0x0089096c]
0067c74b  FSUB float ptr [ESP + 0x18]
0067c74f  FMUL ST1
0067c751  FADD float ptr [ESP + 0x18]
0067c755  FST float ptr [ESP + 0x18]
0067c759  FSUB float ptr [ESP + 0x24]
0067c75d  FMUL ST1
0067c75f  FMUL float ptr [0x008a934c]
0067c765  FADD float ptr [ESP + 0x24]
0067c769  FSTP float ptr [ESP + 0x24]
0067c76d  FMUL float ptr [0x008a934c]
0067c773  FADD float ptr [0x0089096c]
0067c779  FMUL float ptr [EDI + 0x4]
0067c77c  FCOM float ptr [0x0089096c]
0067c782  FST float ptr [EDI + 0x4]
0067c785  FNSTSW AX
0067c787  TEST AH,0x5
0067c78a  JNP 0x0067c794
0067c78c  FSTP ST0
0067c78e  FLD float ptr [0x0089096c]
0067c794  FSTP float ptr [EDI + 0x4]
0067c797  FLD float ptr [ESP + 0x40]
0067c79b  FCOMP float ptr [0x008a92d4]
0067c7a1  FNSTSW AX
0067c7a3  TEST AH,0x41
0067c7a6  JNZ 0x0067c802
0067c7a8  FLD float ptr [ESP + 0x4c]
0067c7ac  FDIV float ptr [ESP + 0x40]
0067c7b0  FLD float ptr [0x0089096c]
0067c7b6  FSUB float ptr [ESP + 0x1c]
0067c7ba  FMUL ST1
0067c7bc  FADD float ptr [ESP + 0x1c]
0067c7c0  FST float ptr [ESP + 0x1c]
0067c7c4  FSUB float ptr [ESP + 0x28]
0067c7c8  FMUL ST1
0067c7ca  FMUL float ptr [0x008a934c]
0067c7d0  FADD float ptr [ESP + 0x28]
0067c7d4  FSTP float ptr [ESP + 0x28]
0067c7d8  FMUL float ptr [0x008a934c]
0067c7de  FADD float ptr [0x0089096c]
0067c7e4  FMUL float ptr [EDI + 0x8]
0067c7e7  FCOM float ptr [0x0089096c]
0067c7ed  FST float ptr [EDI + 0x8]
0067c7f0  FNSTSW AX
0067c7f2  TEST AH,0x5
0067c7f5  JNP 0x0067c7ff
0067c7f7  FSTP ST0
0067c7f9  FLD float ptr [0x0089096c]
0067c7ff  FSTP float ptr [EDI + 0x8]
0067c802  FLD float ptr [ESP + 0x38]
0067c806  FCOMP float ptr [0x008a92d4]
0067c80c  FNSTSW AX
0067c80e  TEST AH,0x41
0067c811  JNZ 0x0067c86a
0067c813  FLD float ptr [ESP + 0x44]
0067c817  FDIV float ptr [ESP + 0x38]
0067c81b  FLD float ptr [0x0089096c]
0067c821  FSUB float ptr [ESP + 0x14]
0067c825  FMUL ST1
0067c827  FADD float ptr [ESP + 0x14]
0067c82b  FST float ptr [ESP + 0x14]
0067c82f  FSUB float ptr [ESP + 0x20]
0067c833  FMUL ST1
0067c835  FMUL float ptr [0x008a934c]
0067c83b  FADD float ptr [ESP + 0x20]
0067c83f  FSTP float ptr [ESP + 0x20]
0067c843  FMUL float ptr [0x008a934c]
0067c849  FADD float ptr [0x0089096c]
0067c84f  FMUL float ptr [EDI]
0067c851  FCOM float ptr [0x0089096c]
0067c857  FST float ptr [EDI]
0067c859  FNSTSW AX
0067c85b  TEST AH,0x5
0067c85e  JNP 0x0067c868
0067c860  FSTP ST0
0067c862  FLD float ptr [0x0089096c]
0067c868  FSTP float ptr [EDI]
0067c86a  FLD float ptr [ESP + 0x18]
0067c86e  MOV AL,0x1
0067c870  FSUB float ptr [ESP + 0x24]
0067c874  FMUL float ptr [EDI + 0x4]
0067c877  FADD float ptr [ESP + 0x24]
0067c87b  FSTP float ptr [EDI + 0x4]
0067c87e  FLD float ptr [ESP + 0x1c]
0067c882  FSUB float ptr [ESP + 0x28]
0067c886  FMUL float ptr [EDI + 0x8]
0067c889  FADD float ptr [ESP + 0x28]
0067c88d  FSTP float ptr [EDI + 0x8]
0067c890  FLD float ptr [ESP + 0x14]
0067c894  FSUB float ptr [ESP + 0x20]
0067c898  FMUL float ptr [EDI]
0067c89a  FADD float ptr [ESP + 0x20]
0067c89e  FSTP float ptr [EDI]
0067c8a0  POP EDI
0067c8a1  POP ESI
0067c8a2  POP EBX
0067c8a3  POP EBP
0067c8a4  ADD ESP,0x40
0067c8a7  RET
