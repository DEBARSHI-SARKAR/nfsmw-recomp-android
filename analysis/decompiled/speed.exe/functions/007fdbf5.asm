007fdbf5  PUSH EBP
007fdbf6  MOV EBP,ESP
007fdbf8  MOV EAX,dword ptr [EBP + 0x18]
007fdbfb  TEST EAX,EAX
007fdbfd  JBE 0x007fdc4a
007fdbff  PUSH EBX
007fdc00  PUSH ESI
007fdc01  MOV ESI,dword ptr [EBP + 0x20]
007fdc04  PUSH EDI
007fdc05  MOV EDI,dword ptr [EBP + 0xc]
007fdc08  MOV dword ptr [EBP + 0x18],EAX
007fdc0b  MOV EAX,dword ptr [EBP + 0x8]
007fdc0e  XOR ECX,ECX
007fdc10  CMP dword ptr [EBP + 0x1c],ECX
007fdc13  JBE 0x007fdc37
007fdc15  MOV EDX,dword ptr [EBP + 0x14]
007fdc18  MOVZX EDX,byte ptr [EAX + EDX*0x1]
007fdc1c  MOVZX EBX,byte ptr [EAX]
007fdc1f  IMUL EDX,dword ptr [ESI + 0x4]
007fdc23  IMUL EBX,dword ptr [ESI]
007fdc26  LEA EDX,[EDX + EBX*0x1 + 0x40]
007fdc2a  SAR EDX,0x7
007fdc2d  INC EAX
007fdc2e  MOV byte ptr [ECX + EDI*0x1],DL
007fdc31  INC ECX
007fdc32  CMP ECX,dword ptr [EBP + 0x1c]
007fdc35  JC 0x007fdc15
007fdc37  MOV ECX,dword ptr [EBP + 0x10]
007fdc3a  SUB ECX,dword ptr [EBP + 0x1c]
007fdc3d  ADD EDI,dword ptr [EBP + 0x1c]
007fdc40  ADD EAX,ECX
007fdc42  DEC dword ptr [EBP + 0x18]
007fdc45  JNZ 0x007fdc0e
007fdc47  POP EDI
007fdc48  POP ESI
007fdc49  POP EBX
007fdc4a  POP EBP
007fdc4b  RET
