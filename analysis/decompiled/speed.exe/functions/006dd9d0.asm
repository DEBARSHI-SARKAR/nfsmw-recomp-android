006dd9d0  MOV EDX,dword ptr [ESP + 0x8]
006dd9d4  TEST EDX,EDX
006dd9d6  JBE 0x006dda21
006dd9d8  MOV EAX,dword ptr [ESP + 0x4]
006dd9dc  PUSH EBX
006dd9dd  PUSH EBP
006dd9de  PUSH ESI
006dd9df  MOV ESI,dword ptr [ESP + 0x18]
006dd9e3  PUSH EDI
006dd9e4  LEA ECX,[EAX + 0xc]
006dd9e7  TEST EAX,EAX
006dd9e9  JZ 0x006dda14
006dd9eb  MOV EDI,ESI
006dd9ed  MOV EBP,dword ptr [EDI]
006dd9ef  MOV EBX,EAX
006dd9f1  MOV dword ptr [EBX],EBP
006dd9f3  MOV EBP,dword ptr [EDI + 0x4]
006dd9f6  MOV dword ptr [EBX + 0x4],EBP
006dd9f9  MOV EDI,dword ptr [EDI + 0x8]
006dd9fc  MOV dword ptr [EBX + 0x8],EDI
006dd9ff  LEA EDI,[ESI + 0xc]
006dda02  MOV EBP,dword ptr [EDI]
006dda04  MOV EBX,ECX
006dda06  MOV dword ptr [EBX],EBP
006dda08  MOV EBP,dword ptr [EDI + 0x4]
006dda0b  MOV dword ptr [EBX + 0x4],EBP
006dda0e  MOV EDI,dword ptr [EDI + 0x8]
006dda11  MOV dword ptr [EBX + 0x8],EDI
006dda14  ADD EAX,0x18
006dda17  ADD ECX,0x18
006dda1a  DEC EDX
006dda1b  JNZ 0x006dd9e7
006dda1d  POP EDI
006dda1e  POP ESI
006dda1f  POP EBP
006dda20  POP EBX
006dda21  RET
