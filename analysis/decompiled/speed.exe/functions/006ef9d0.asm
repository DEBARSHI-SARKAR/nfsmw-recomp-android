006ef9d0  MOV EAX,dword ptr [ESP + 0x4]
006ef9d4  PUSH EBX
006ef9d5  MOV EBX,dword ptr [ESP + 0xc]
006ef9d9  CMP EAX,EBX
006ef9db  JZ 0x006efa63
006ef9e1  MOV EDX,EAX
006ef9e3  SUB EBX,EAX
006ef9e5  MOV EAX,dword ptr [ECX + 0xc]
006ef9e8  PUSH EBP
006ef9e9  MOV EBP,dword ptr [ECX + 0x4]
006ef9ec  SAR EBX,0x3
006ef9ef  SUB EDX,EBP
006ef9f1  PUSH EDI
006ef9f2  SAR EDX,0x3
006ef9f5  SUB EAX,EBX
006ef9f7  XOR EDI,EDI
006ef9f9  SUB EAX,EDX
006ef9fb  MOV dword ptr [ESP + 0x14],EBX
006ef9ff  JZ 0x006efa43
006efa01  PUSH ESI
006efa02  LEA ESI,[EDX*0x8 + 0x0]
006efa09  MOV dword ptr [ESP + 0x14],ESI
006efa0d  LEA ECX,[ECX]
006efa10  MOV EAX,dword ptr [ECX + 0x4]
006efa13  ADD ESI,EAX
006efa15  JZ 0x006efa2b
006efa17  ADD EBX,EDI
006efa19  ADD EBX,EDX
006efa1b  MOV EBP,dword ptr [EAX + EBX*0x8]
006efa1e  MOV dword ptr [ESI],EBP
006efa20  MOV EAX,dword ptr [EAX + EBX*0x8 + 0x4]
006efa24  MOV EBX,dword ptr [ESP + 0x18]
006efa28  MOV dword ptr [ESI + 0x4],EAX
006efa2b  MOV EAX,dword ptr [ECX + 0xc]
006efa2e  MOV ESI,dword ptr [ESP + 0x14]
006efa32  SUB EAX,EBX
006efa34  INC EDI
006efa35  ADD ESI,0x8
006efa38  SUB EAX,EDX
006efa3a  CMP EDI,EAX
006efa3c  MOV dword ptr [ESP + 0x14],ESI
006efa40  JC 0x006efa10
006efa42  POP ESI
006efa43  MOV EDI,dword ptr [ECX + 0xc]
006efa46  SUB EDI,EBX
006efa48  MOV EAX,EDI
006efa4a  CMP EDX,EAX
006efa4c  MOV dword ptr [ECX + 0xc],EDI
006efa4f  POP EDI
006efa50  POP EBP
006efa51  JNC 0x006efa5d
006efa53  MOV ECX,dword ptr [ECX + 0x4]
006efa56  LEA EAX,[ECX + EDX*0x8]
006efa59  POP EBX
006efa5a  RET 0x8
006efa5d  MOV EDX,dword ptr [ECX + 0x4]
006efa60  LEA EAX,[EDX + EAX*0x8]
006efa63  POP EBX
006efa64  RET 0x8
