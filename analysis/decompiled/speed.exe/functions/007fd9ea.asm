007fd9ea  PUSH EBP
007fd9eb  MOV EBP,ESP
007fd9ed  MOV EAX,dword ptr [EBP + 0x18]
007fd9f0  TEST EAX,EAX
007fd9f2  JBE 0x007fda44
007fd9f4  MOV EDX,dword ptr [EBP + 0x20]
007fd9f7  PUSH EBX
007fd9f8  PUSH ESI
007fd9f9  MOV ESI,dword ptr [EBP + 0x1c]
007fd9fc  MOV dword ptr [EBP + 0x18],EAX
007fd9ff  MOV EAX,dword ptr [EBP + 0x8]
007fda02  PUSH EDI
007fda03  XOR ECX,ECX
007fda05  TEST ESI,ESI
007fda07  JBE 0x007fda2d
007fda09  MOV EDI,dword ptr [EBP + 0x14]
007fda0c  MOVZX EDI,byte ptr [EAX + EDI*0x1]
007fda10  MOVZX EBX,byte ptr [EAX]
007fda13  IMUL EDI,dword ptr [EDX + 0x4]
007fda17  IMUL EBX,dword ptr [EDX]
007fda1a  LEA EDI,[EDI + EBX*0x1 + 0x40]
007fda1e  MOV EBX,dword ptr [EBP + 0xc]
007fda21  SAR EDI,0x7
007fda24  INC EAX
007fda25  MOV dword ptr [EBX + ECX*0x4],EDI
007fda28  INC ECX
007fda29  CMP ECX,ESI
007fda2b  JC 0x007fda09
007fda2d  MOV ECX,dword ptr [EBP + 0x10]
007fda30  SUB ECX,ESI
007fda32  ADD EAX,ECX
007fda34  MOV ECX,ESI
007fda36  SHL ECX,0x2
007fda39  ADD dword ptr [EBP + 0xc],ECX
007fda3c  DEC dword ptr [EBP + 0x18]
007fda3f  JNZ 0x007fda03
007fda41  POP EDI
007fda42  POP ESI
007fda43  POP EBX
007fda44  POP EBP
007fda45  RET
