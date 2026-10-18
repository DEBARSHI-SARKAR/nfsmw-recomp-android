007fd98f  PUSH EBP
007fd990  MOV EBP,ESP
007fd992  MOV EAX,dword ptr [EBP + 0x18]
007fd995  TEST EAX,EAX
007fd997  JBE 0x007fd9e8
007fd999  MOV EDX,dword ptr [EBP + 0x20]
007fd99c  PUSH EBX
007fd99d  PUSH ESI
007fd99e  MOV ESI,dword ptr [EBP + 0x1c]
007fd9a1  MOV dword ptr [EBP + 0x18],EAX
007fd9a4  MOV EAX,dword ptr [EBP + 0x8]
007fd9a7  PUSH EDI
007fd9a8  XOR ECX,ECX
007fd9aa  TEST ESI,ESI
007fd9ac  JBE 0x007fd9d3
007fd9ae  MOV EDI,dword ptr [EBP + 0x14]
007fd9b1  MOVZX EDI,byte ptr [EAX + EDI*0x1]
007fd9b5  MOVZX EBX,byte ptr [EAX]
007fd9b8  IMUL EDI,dword ptr [EDX + 0x4]
007fd9bc  IMUL EBX,dword ptr [EDX]
007fd9bf  LEA EDI,[EDI + EBX*0x1 + 0x40]
007fd9c3  MOV EBX,dword ptr [EBP + 0xc]
007fd9c6  SAR EDI,0x7
007fd9c9  INC EAX
007fd9ca  MOV word ptr [EBX + ECX*0x2],DI
007fd9ce  INC ECX
007fd9cf  CMP ECX,ESI
007fd9d1  JC 0x007fd9ae
007fd9d3  MOV ECX,dword ptr [EBP + 0x10]
007fd9d6  SUB ECX,ESI
007fd9d8  ADD EAX,ECX
007fd9da  LEA ECX,[ESI + ESI*0x1]
007fd9dd  ADD dword ptr [EBP + 0xc],ECX
007fd9e0  DEC dword ptr [EBP + 0x18]
007fd9e3  JNZ 0x007fd9a8
007fd9e5  POP EDI
007fd9e6  POP ESI
007fd9e7  POP EBX
007fd9e8  POP EBP
007fd9e9  RET
