007fd78e  PUSH EBP
007fd78f  MOV EBP,ESP
007fd791  MOV EAX,dword ptr [EBP + 0x18]
007fd794  TEST EAX,EAX
007fd796  JBE 0x007fd821
007fd79c  PUSH EBX
007fd79d  PUSH ESI
007fd79e  MOV ESI,dword ptr [EBP + 0x20]
007fd7a1  PUSH EDI
007fd7a2  MOV dword ptr [EBP + 0x18],EAX
007fd7a5  XOR EDI,EDI
007fd7a7  CMP dword ptr [EBP + 0x1c],EDI
007fd7aa  JBE 0x007fd808
007fd7ac  MOV ECX,dword ptr [EBP + 0x8]
007fd7af  MOV EAX,dword ptr [EBP + 0x14]
007fd7b2  MOV EDX,ECX
007fd7b4  SUB EDX,EAX
007fd7b6  ADD ECX,EAX
007fd7b8  MOV EAX,dword ptr [EBP + 0x14]
007fd7bb  MOVZX EAX,byte ptr [ECX + EAX*0x1]
007fd7bf  MOV EBX,dword ptr [EBP + 0x8]
007fd7c2  IMUL EAX,dword ptr [ESI + 0xc]
007fd7c6  MOVZX EBX,byte ptr [EBX]
007fd7c9  IMUL EBX,dword ptr [ESI + 0x4]
007fd7cd  ADD EAX,EBX
007fd7cf  MOVZX EBX,byte ptr [ECX]
007fd7d2  IMUL EBX,dword ptr [ESI + 0x8]
007fd7d6  ADD EAX,EBX
007fd7d8  MOVZX EBX,byte ptr [EDX]
007fd7db  IMUL EBX,dword ptr [ESI]
007fd7de  LEA EAX,[EAX + EBX*0x1 + 0x40]
007fd7e2  SAR EAX,0x7
007fd7e5  JNS 0x007fd7eb
007fd7e7  XOR EAX,EAX
007fd7e9  JMP 0x007fd7f6
007fd7eb  MOV EBX,0xff
007fd7f0  CMP EAX,EBX
007fd7f2  JLE 0x007fd7f6
007fd7f4  MOV EAX,EBX
007fd7f6  INC dword ptr [EBP + 0x8]
007fd7f9  MOV EBX,dword ptr [EBP + 0xc]
007fd7fc  INC ECX
007fd7fd  INC EDX
007fd7fe  MOV word ptr [EBX + EDI*0x2],AX
007fd802  INC EDI
007fd803  CMP EDI,dword ptr [EBP + 0x1c]
007fd806  JC 0x007fd7b8
007fd808  MOV EAX,dword ptr [EBP + 0x10]
007fd80b  SUB EAX,dword ptr [EBP + 0x1c]
007fd80e  ADD dword ptr [EBP + 0x8],EAX
007fd811  MOV EAX,dword ptr [EBP + 0x1c]
007fd814  ADD EAX,EAX
007fd816  ADD dword ptr [EBP + 0xc],EAX
007fd819  DEC dword ptr [EBP + 0x18]
007fd81c  JNZ 0x007fd7a5
007fd81e  POP EDI
007fd81f  POP ESI
007fd820  POP EBX
007fd821  POP EBP
007fd822  RET
