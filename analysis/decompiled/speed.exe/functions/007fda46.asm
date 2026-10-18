007fda46  PUSH EBP
007fda47  MOV EBP,ESP
007fda49  PUSH ECX
007fda4a  MOV EAX,dword ptr [EBP + 0x18]
007fda4d  TEST EAX,EAX
007fda4f  JBE 0x007fdaae
007fda51  MOV ECX,dword ptr [EBP + 0x10]
007fda54  SUB ECX,dword ptr [EBP + 0x1c]
007fda57  PUSH EBX
007fda58  PUSH ESI
007fda59  MOV ESI,dword ptr [EBP + 0x20]
007fda5c  MOV dword ptr [EBP + 0x18],EAX
007fda5f  MOV EAX,dword ptr [EBP + 0x8]
007fda62  PUSH EDI
007fda63  SHL ECX,0x2
007fda66  XOR EDX,EDX
007fda68  CMP dword ptr [EBP + 0x1c],EDX
007fda6b  JBE 0x007fda9c
007fda6d  MOV EDI,dword ptr [EBP + 0x14]
007fda70  SHL EDI,0x2
007fda73  MOV dword ptr [EBP + -0x4],EDI
007fda76  MOV EDI,dword ptr [EBP + -0x4]
007fda79  MOV EDI,dword ptr [EDI + EAX*0x1]
007fda7c  IMUL EDI,dword ptr [ESI + 0x4]
007fda80  MOV EBX,dword ptr [EAX]
007fda82  IMUL EBX,dword ptr [ESI]
007fda85  LEA EDI,[EDI + EBX*0x1 + 0x40]
007fda89  MOV EBX,dword ptr [EBP + 0xc]
007fda8c  SAR EDI,0x7
007fda8f  ADD EAX,0x4
007fda92  MOV word ptr [EBX + EDX*0x2],DI
007fda96  INC EDX
007fda97  CMP EDX,dword ptr [EBP + 0x1c]
007fda9a  JC 0x007fda76
007fda9c  MOV EDX,dword ptr [EBP + 0x1c]
007fda9f  ADD EDX,EDX
007fdaa1  ADD dword ptr [EBP + 0xc],EDX
007fdaa4  ADD EAX,ECX
007fdaa6  DEC dword ptr [EBP + 0x18]
007fdaa9  JNZ 0x007fda66
007fdaab  POP EDI
007fdaac  POP ESI
007fdaad  POP EBX
007fdaae  LEAVE
007fdaaf  RET
