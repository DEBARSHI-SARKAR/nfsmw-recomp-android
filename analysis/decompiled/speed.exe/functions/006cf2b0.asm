006cf2b0  PUSH EBP
006cf2b1  MOV EBP,ESP
006cf2b3  AND ESP,0xfffffff0
006cf2b6  SUB ESP,0x3c
006cf2b9  MOV EAX,dword ptr [EBP + 0x8]
006cf2bc  MOV EDX,dword ptr [EAX + 0x4]
006cf2bf  PUSH ESI
006cf2c0  MOV ESI,ECX
006cf2c2  MOV ECX,dword ptr [EAX]
006cf2c4  MOV EAX,dword ptr [EAX + 0x8]
006cf2c7  MOV dword ptr [ESP + 0x38],EAX
006cf2cb  MOV EAX,dword ptr [EBP + 0xc]
006cf2ce  MOV dword ptr [ESP + 0x30],ECX
006cf2d2  MOV ECX,dword ptr [EAX]
006cf2d4  MOV dword ptr [ESP + 0x34],EDX
006cf2d8  MOV EDX,dword ptr [EAX + 0x4]
006cf2db  MOV EAX,dword ptr [EAX + 0x8]
006cf2de  MOV dword ptr [ESP + 0x18],EAX
006cf2e2  MOV EAX,dword ptr [EBP + 0x10]
006cf2e5  TEST EAX,EAX
006cf2e7  MOV dword ptr [ESP + 0x10],ECX
006cf2eb  MOV dword ptr [ESP + 0x14],EDX
006cf2ef  JZ 0x006cf304
006cf2f1  LEA ECX,[ESP + 0x10]
006cf2f5  PUSH ECX
006cf2f6  LEA EDX,[ESP + 0x34]
006cf2fa  PUSH EDX
006cf2fb  PUSH EAX
006cf2fc  CALL 0x006be800
006cf301  ADD ESP,0xc
006cf304  FLD float ptr [ESP + 0x10]
006cf308  MOV EAX,dword ptr [ESI]
006cf30a  FADD float ptr [ESP + 0x30]
006cf30e  XOR ESI,ESI
006cf310  MOV EDX,0x1
006cf315  LEA ECX,[EAX + 0x144]
006cf31b  FMUL float ptr [0x008933d4]
006cf321  FSTP float ptr [ESP + 0x20]
006cf325  FLD float ptr [ESP + 0x14]
006cf329  FADD float ptr [ESP + 0x34]
006cf32d  FMUL float ptr [0x008933d4]
006cf333  FSTP float ptr [ESP + 0x24]
006cf337  FLD float ptr [ESP + 0x18]
006cf33b  FADD float ptr [ESP + 0x38]
006cf33f  FMUL float ptr [0x008933d4]
006cf345  FSTP float ptr [ESP + 0x28]
006cf349  FLD float ptr [ESP + 0x10]
006cf34d  FSUB float ptr [ESP + 0x20]
006cf351  FSTP float ptr [ESP + 0x30]
006cf355  FLD float ptr [ESP + 0x14]
006cf359  FSUB float ptr [ESP + 0x24]
006cf35d  FSTP float ptr [ESP + 0x34]
006cf361  FLD float ptr [ESP + 0x18]
006cf365  FSUB float ptr [ESP + 0x28]
006cf369  FSTP float ptr [ESP + 0x38]
006cf36d  LEA ECX,[ECX]
006cf370  FLD float ptr [ECX]
006cf372  FABS
006cf374  FMUL float ptr [ESP + 0x34]
006cf378  FLD float ptr [ECX + 0x4]
006cf37b  FABS
006cf37d  FXCH
006cf37f  FXCH
006cf381  FMUL float ptr [ESP + 0x38]
006cf385  FADDP
006cf387  FLD float ptr [ECX + -0x4]
006cf38a  FABS
006cf38c  FST float ptr [ESP + 0xc]
006cf390  FMUL float ptr [ESP + 0x30]
006cf394  FADDP
006cf396  FLD float ptr [ESP + 0x24]
006cf39a  FMUL float ptr [ECX]
006cf39c  FLD float ptr [ESP + 0x28]
006cf3a0  FMUL float ptr [ECX + 0x4]
006cf3a3  FADDP
006cf3a5  FLD float ptr [ESP + 0x20]
006cf3a9  FMUL float ptr [ECX + -0x4]
006cf3ac  FADDP
006cf3ae  FADD float ptr [ECX + 0x8]
006cf3b1  FLD ST0
006cf3b3  FADD ST0,ST2
006cf3b5  FCOMP float ptr [0x00890968]
006cf3bb  FNSTSW AX
006cf3bd  TEST AH,0x5
006cf3c0  JNP 0x006cf3f0
006cf3c2  FSUB ST0,ST1
006cf3c4  FCOMP float ptr [0x00890968]
006cf3ca  FNSTSW AX
006cf3cc  FSTP ST0
006cf3ce  TEST AH,0x5
006cf3d1  JP 0x006cf3d8
006cf3d3  MOV ESI,0x1
006cf3d8  INC EDX
006cf3d9  ADD ECX,0x10
006cf3dc  CMP EDX,0x6
006cf3df  JLE 0x006cf370
006cf3e1  XOR EAX,EAX
006cf3e3  TEST ESI,ESI
006cf3e5  SETZ AL
006cf3e8  INC EAX
006cf3e9  POP ESI
006cf3ea  MOV ESP,EBP
006cf3ec  POP EBP
006cf3ed  RET 0xc
006cf3f0  FSTP ST0
006cf3f2  XOR EAX,EAX
006cf3f4  FSTP ST0
006cf3f6  POP ESI
006cf3f7  MOV ESP,EBP
006cf3f9  POP EBP
006cf3fa  RET 0xc
