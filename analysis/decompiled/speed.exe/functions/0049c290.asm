0049c290  PUSH ECX
0049c291  FLD float ptr [ESP + 0x8]
0049c295  PUSH ESI
0049c296  MOV ESI,ECX
0049c298  CALL 0x007c4b80
0049c29d  TEST EAX,EAX
0049c29f  MOV dword ptr [ESP + 0x4],EAX
0049c2a3  JGE 0x0049c2ab
0049c2a5  XOR EAX,EAX
0049c2a7  MOV dword ptr [ESP + 0x4],EAX
0049c2ab  MOV ECX,dword ptr [ESI + 0x1c]
0049c2ae  LEA EDX,[ECX + -0x1]
0049c2b1  CMP EAX,EDX
0049c2b3  JL 0x0049c2bc
0049c2b5  LEA EAX,[ECX + -0x2]
0049c2b8  MOV dword ptr [ESP + 0x4],EAX
0049c2bc  FILD dword ptr [ESP + 0x4]
0049c2c0  MOV ECX,dword ptr [ESI + 0x20]
0049c2c3  CMP EAX,ECX
0049c2c5  FSUBR float ptr [ESP + 0xc]
0049c2c9  FST float ptr [ESP + 0xc]
0049c2cd  FSTP float ptr [ESI + 0x18]
0049c2d0  JZ 0x0049c33d
0049c2d2  LEA EDX,[ECX + 0x1]
0049c2d5  CMP EAX,EDX
0049c2d7  JNZ 0x0049c2e7
0049c2d9  MOV ECX,dword ptr [ESI + 0x14]
0049c2dc  MOV EDX,dword ptr [ESI + 0xc]
0049c2df  MOV dword ptr [ESI + 0x10],ECX
0049c2e2  LEA ECX,[EDX + EAX*0x4]
0049c2e5  JMP 0x0049c30b
0049c2e7  DEC ECX
0049c2e8  CMP EAX,ECX
0049c2ea  JNZ 0x0049c2ff
0049c2ec  MOV ECX,dword ptr [ESI + 0x10]
0049c2ef  MOV EDX,dword ptr [ESI + 0xc]
0049c2f2  MOV dword ptr [ESI + 0x14],ECX
0049c2f5  LEA ECX,[EDX + EAX*0x4]
0049c2f8  MOV EDX,dword ptr [ECX]
0049c2fa  MOV dword ptr [ESI + 0x10],EDX
0049c2fd  JMP 0x0049c311
0049c2ff  MOV ECX,dword ptr [ESI + 0xc]
0049c302  MOV EDX,dword ptr [ECX + EAX*0x4]
0049c305  LEA ECX,[ECX + EAX*0x4]
0049c308  MOV dword ptr [ESI + 0x10],EDX
0049c30b  MOV EDX,dword ptr [ECX + 0x4]
0049c30e  MOV dword ptr [ESI + 0x14],EDX
0049c311  FLD float ptr [0x0089096c]
0049c317  MOV dword ptr [ESI + 0x20],EAX
0049c31a  MOV EAX,dword ptr [ECX]
0049c31c  FDIV float ptr [EAX + 0x48]
0049c31f  FSTP float ptr [ESI + 0x28]
0049c322  FLD float ptr [0x0089096c]
0049c328  MOV EAX,dword ptr [EAX + 0x50]
0049c32b  MOV dword ptr [ESI + 0x30],EAX
0049c32e  MOV ECX,dword ptr [ECX + 0x4]
0049c331  FDIV float ptr [ECX + 0x48]
0049c334  FSTP float ptr [ESI + 0x2c]
0049c337  MOV ECX,dword ptr [ECX + 0x50]
0049c33a  MOV dword ptr [ESI + 0x34],ECX
0049c33d  FLD float ptr [ESI + 0x38]
0049c340  FLD float ptr [0x0089096c]
0049c346  FSUB float ptr [ESP + 0xc]
0049c34a  FDIV float ptr [ESI + 0x28]
0049c34d  FLD float ptr [ESP + 0xc]
0049c351  FDIV float ptr [ESI + 0x2c]
0049c354  FADDP
0049c356  FST float ptr [ESI + 0x38]
0049c359  FLD float ptr [ESI + 0x3c]
0049c35c  FADD float ptr [ESI + 0x40]
0049c35f  FDIV ST0,ST1
0049c361  FMUL ST2
0049c363  FSUB float ptr [ESI + 0x3c]
0049c366  FSTP float ptr [ESI + 0x40]
0049c369  POP ESI
0049c36a  FSTP ST0
0049c36c  FSTP ST0
0049c36e  POP ECX
0049c36f  RET 0x4
