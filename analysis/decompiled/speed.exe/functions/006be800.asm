006be800  SUB ESP,0xc
006be803  MOV EAX,dword ptr [ESP + 0x10]
006be807  FLD float ptr [EAX + 0x30]
006be80a  MOV EDX,dword ptr [EAX + 0x34]
006be80d  FLD float ptr [EAX + 0x34]
006be810  MOV ECX,dword ptr [EAX + 0x30]
006be813  FLD float ptr [EAX + 0x38]
006be816  PUSH EBX
006be817  MOV EBX,dword ptr [ESP + 0x18]
006be81b  FLD float ptr [EAX + 0x38]
006be81e  PUSH EBP
006be81f  MOV EBP,dword ptr [ESP + 0x20]
006be823  PUSH ESI
006be824  MOV dword ptr [ESP + 0x10],EDX
006be828  FLD float ptr [ESP + 0x10]
006be82c  MOV dword ptr [ESP + 0xc],ECX
006be830  FLD float ptr [ESP + 0xc]
006be834  MOV ESI,EBP
006be836  PUSH EDI
006be837  MOV ECX,EBX
006be839  LEA EDX,[EAX + 0x8]
006be83c  SUB ESI,EBX
006be83e  MOV EDI,0x3
006be843  FLD float ptr [ECX]
006be845  FMUL float ptr [EDX + -0x8]
006be848  FLD float ptr [ESI + ECX*0x1]
006be84b  FMUL float ptr [EDX + -0x8]
006be84e  FSTP float ptr [ESP + 0x20]
006be852  FCOM float ptr [ESP + 0x20]
006be856  FNSTSW AX
006be858  TEST AH,0x5
006be85b  JP 0x006be865
006be85d  FADDP ST6,ST0
006be85f  FADD float ptr [ESP + 0x20]
006be863  JMP 0x006be86d
006be865  FLD float ptr [ESP + 0x20]
006be869  FADDP ST7,ST0
006be86b  FADDP
006be86d  FLD float ptr [ECX]
006be86f  FMUL float ptr [EDX + -0x4]
006be872  FLD float ptr [ESI + ECX*0x1]
006be875  FMUL float ptr [EDX + -0x4]
006be878  FSTP float ptr [ESP + 0x20]
006be87c  FCOM float ptr [ESP + 0x20]
006be880  FNSTSW AX
006be882  TEST AH,0x5
006be885  JP 0x006be88f
006be887  FADDP ST5,ST0
006be889  FLD float ptr [ESP + 0x20]
006be88d  JMP 0x006be895
006be88f  FLD float ptr [ESP + 0x20]
006be893  FADDP ST6,ST0
006be895  FADDP ST2,ST0
006be897  FLD float ptr [ECX]
006be899  FMUL float ptr [EDX]
006be89b  FLD float ptr [ESI + ECX*0x1]
006be89e  FMUL float ptr [EDX]
006be8a0  FSTP float ptr [ESP + 0x20]
006be8a4  FCOM float ptr [ESP + 0x20]
006be8a8  FNSTSW AX
006be8aa  TEST AH,0x5
006be8ad  JP 0x006be8b7
006be8af  FADDP ST4,ST0
006be8b1  FLD float ptr [ESP + 0x20]
006be8b5  JMP 0x006be8bd
006be8b7  FLD float ptr [ESP + 0x20]
006be8bb  FADDP ST5,ST0
006be8bd  ADD ECX,0x4
006be8c0  FADDP ST3,ST0
006be8c2  ADD EDX,0x10
006be8c5  DEC EDI
006be8c6  JNZ 0x006be843
006be8cc  FXCH ST5
006be8ce  POP EDI
006be8cf  FSTP float ptr [EBX]
006be8d1  POP ESI
006be8d2  FXCH ST3
006be8d4  FSTP float ptr [EBX + 0x4]
006be8d7  FXCH
006be8d9  FSTP float ptr [EBX + 0x8]
006be8dc  FXCH ST2
006be8de  FSTP float ptr [EBP]
006be8e1  FSTP float ptr [EBP + 0x4]
006be8e4  FSTP float ptr [EBP + 0x8]
006be8e7  POP EBP
006be8e8  POP EBX
006be8e9  ADD ESP,0xc
006be8ec  RET
