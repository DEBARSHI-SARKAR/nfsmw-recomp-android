007fdc4c  PUSH EBP
007fdc4d  MOV EBP,ESP
007fdc4f  PUSH ECX
007fdc50  MOV EAX,dword ptr [EBP + 0x18]
007fdc53  TEST EAX,EAX
007fdc55  JBE 0x007fdcb1
007fdc57  PUSH EBX
007fdc58  PUSH ESI
007fdc59  MOV ESI,dword ptr [EBP + 0x10]
007fdc5c  SUB ESI,dword ptr [EBP + 0x1c]
007fdc5f  PUSH EDI
007fdc60  MOV EDI,dword ptr [EBP + 0x20]
007fdc63  MOV dword ptr [EBP + 0x18],EAX
007fdc66  MOV EAX,dword ptr [EBP + 0x8]
007fdc69  SHL ESI,0x2
007fdc6c  XOR ECX,ECX
007fdc6e  CMP dword ptr [EBP + 0x1c],ECX
007fdc71  JBE 0x007fdca1
007fdc73  MOV EDX,dword ptr [EBP + 0x14]
007fdc76  SHL EDX,0x2
007fdc79  MOV dword ptr [EBP + -0x4],EDX
007fdc7c  MOV EDX,dword ptr [EBP + -0x4]
007fdc7f  MOV EDX,dword ptr [EDX + EAX*0x1]
007fdc82  IMUL EDX,dword ptr [EDI + 0x4]
007fdc86  MOV EBX,dword ptr [EAX]
007fdc88  IMUL EBX,dword ptr [EDI]
007fdc8b  LEA EDX,[EDX + EBX*0x1 + 0x40]
007fdc8f  MOV EBX,dword ptr [EBP + 0xc]
007fdc92  SAR EDX,0x7
007fdc95  ADD EAX,0x4
007fdc98  MOV byte ptr [ECX + EBX*0x1],DL
007fdc9b  INC ECX
007fdc9c  CMP ECX,dword ptr [EBP + 0x1c]
007fdc9f  JC 0x007fdc7c
007fdca1  MOV ECX,dword ptr [EBP + 0x1c]
007fdca4  ADD dword ptr [EBP + 0xc],ECX
007fdca7  ADD EAX,ESI
007fdca9  DEC dword ptr [EBP + 0x18]
007fdcac  JNZ 0x007fdc6c
007fdcae  POP EDI
007fdcaf  POP ESI
007fdcb0  POP EBX
007fdcb1  LEAVE
007fdcb2  RET
