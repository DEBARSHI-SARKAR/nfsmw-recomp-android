005b7de0  PUSH ECX
005b7de1  PUSH EBX
005b7de2  MOV EBX,dword ptr [ESP + 0x10]
005b7de6  PUSH EDI
005b7de7  MOV EDI,dword ptr [ECX + 0x4c]
005b7dea  TEST EDI,EDI
005b7dec  MOV dword ptr [ESP + 0x8],ECX
005b7df0  JZ 0x005b7e83
005b7df6  PUSH EBP
005b7df7  PUSH ESI
005b7df8  JMP 0x005b7e00
005b7e00  MOV EAX,dword ptr [ESP + 0x18]
005b7e04  MOV ECX,dword ptr [EAX*0x4 + 0x8a2be8]
005b7e0b  MOV EDX,dword ptr [EDI + 0x1c]
005b7e0e  XOR EAX,EAX
005b7e10  TEST EDX,EDX
005b7e12  MOV dword ptr [ESP + 0x1c],ECX
005b7e16  JBE 0x005b7e76
005b7e18  MOV EBP,dword ptr [EDI + 0x20]
005b7e1b  LEA ESI,[EBP + 0x4]
005b7e1e  MOV EDI,EDI
005b7e20  MOVSX ECX,byte ptr [ESI + 0x3]
005b7e24  CMP ECX,dword ptr [ESP + 0x1c]
005b7e28  JZ 0x005b7e34
005b7e2a  INC EAX
005b7e2b  ADD ESI,0x38
005b7e2e  CMP EAX,EDX
005b7e30  JC 0x005b7e20
005b7e32  JMP 0x005b7e76
005b7e34  IMUL EAX,EAX,0x38
005b7e37  ADD EAX,EBP
005b7e39  TEST EAX,EAX
005b7e3b  JZ 0x005b7e76
005b7e3d  MOV CL,byte ptr [ESP + 0x20]
005b7e41  TEST CL,CL
005b7e43  JZ 0x005b7e61
005b7e45  FLD float ptr [EBX]
005b7e47  FADD float ptr [EAX + 0x18]
005b7e4a  FSTP float ptr [EAX + 0x18]
005b7e4d  FLD float ptr [EBX + 0x4]
005b7e50  FADD float ptr [EAX + 0x1c]
005b7e53  FSTP float ptr [EAX + 0x1c]
005b7e56  FLD float ptr [EBX + 0x8]
005b7e59  FADD float ptr [EAX + 0x20]
005b7e5c  FSTP float ptr [EAX + 0x20]
005b7e5f  JMP 0x005b7e72
005b7e61  MOV EDX,dword ptr [EBX]
005b7e63  MOV dword ptr [EAX + 0x18],EDX
005b7e66  MOV ECX,dword ptr [EBX + 0x4]
005b7e69  MOV dword ptr [EAX + 0x1c],ECX
005b7e6c  MOV EDX,dword ptr [EBX + 0x8]
005b7e6f  MOV dword ptr [EAX + 0x20],EDX
005b7e72  AND byte ptr [EAX + 0x3],0x7f
005b7e76  MOV EDI,dword ptr [EDI + 0x4]
005b7e79  TEST EDI,EDI
005b7e7b  JNZ 0x005b7e00
005b7e7d  MOV ECX,dword ptr [ESP + 0x10]
005b7e81  POP ESI
005b7e82  POP EBP
005b7e83  MOV AL,byte ptr [ESP + 0x18]
005b7e87  TEST AL,AL
005b7e89  JZ 0x005b7eb9
005b7e8b  MOV EAX,dword ptr [ESP + 0x10]
005b7e8f  PUSH EAX
005b7e90  CALL 0x005b13d0
005b7e95  MOV EDX,dword ptr [ECX + 0x2c]
005b7e98  FLD float ptr [EAX + EDX*0x1]
005b7e9b  ADD EAX,EDX
005b7e9d  FADD float ptr [EBX]
005b7e9f  POP EDI
005b7ea0  FSTP float ptr [EAX]
005b7ea2  FLD float ptr [EBX + 0x4]
005b7ea5  FADD float ptr [EAX + 0x4]
005b7ea8  FSTP float ptr [EAX + 0x4]
005b7eab  FLD float ptr [EBX + 0x8]
005b7eae  POP EBX
005b7eaf  FADD float ptr [EAX + 0x8]
005b7eb2  FSTP float ptr [EAX + 0x8]
005b7eb5  POP ECX
005b7eb6  RET 0xc
005b7eb9  MOV EDX,dword ptr [ESP + 0x10]
005b7ebd  PUSH EDX
005b7ebe  CALL 0x005b13d0
005b7ec3  MOV EDX,dword ptr [ECX + 0x2c]
005b7ec6  MOV ECX,dword ptr [EBX]
005b7ec8  ADD EAX,EDX
005b7eca  MOV dword ptr [EAX],ECX
005b7ecc  MOV EDX,dword ptr [EBX + 0x4]
005b7ecf  MOV dword ptr [EAX + 0x4],EDX
005b7ed2  MOV ECX,dword ptr [EBX + 0x8]
005b7ed5  POP EDI
005b7ed6  MOV dword ptr [EAX + 0x8],ECX
005b7ed9  POP EBX
005b7eda  POP ECX
005b7edb  RET 0xc
