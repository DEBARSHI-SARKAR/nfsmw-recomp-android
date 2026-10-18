006da080  MOV EAX,dword ptr [ESP + 0x8]
006da084  MOV ECX,dword ptr [ESP + 0x4]
006da088  CMP ECX,EAX
006da08a  MOV EAX,dword ptr [ESP + 0xc]
006da08e  JZ 0x006da0e4
006da090  PUSH EBX
006da091  PUSH EBP
006da092  PUSH ESI
006da093  PUSH EDI
006da094  LEA EDX,[EAX + 0xc]
006da097  LEA ESI,[ECX + 0xc]
006da09a  LEA EBX,[EBX]
006da0a0  TEST EAX,EAX
006da0a2  JZ 0x006da0cc
006da0a4  MOV EDI,ECX
006da0a6  MOV EBP,dword ptr [EDI]
006da0a8  MOV EBX,EAX
006da0aa  MOV dword ptr [EBX],EBP
006da0ac  MOV EBP,dword ptr [EDI + 0x4]
006da0af  MOV dword ptr [EBX + 0x4],EBP
006da0b2  MOV EDI,dword ptr [EDI + 0x8]
006da0b5  MOV dword ptr [EBX + 0x8],EDI
006da0b8  MOV EDI,ESI
006da0ba  MOV EBP,dword ptr [EDI]
006da0bc  MOV EBX,EDX
006da0be  MOV dword ptr [EBX],EBP
006da0c0  MOV EBP,dword ptr [EDI + 0x4]
006da0c3  MOV dword ptr [EBX + 0x4],EBP
006da0c6  MOV EDI,dword ptr [EDI + 0x8]
006da0c9  MOV dword ptr [EBX + 0x8],EDI
006da0cc  MOV EDI,dword ptr [ESP + 0x18]
006da0d0  ADD ECX,0x18
006da0d3  ADD EAX,0x18
006da0d6  ADD EDX,0x18
006da0d9  ADD ESI,0x18
006da0dc  CMP ECX,EDI
006da0de  JNZ 0x006da0a0
006da0e0  POP EDI
006da0e1  POP ESI
006da0e2  POP EBP
006da0e3  POP EBX
006da0e4  RET
