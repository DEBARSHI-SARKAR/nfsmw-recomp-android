004cccf0  PUSH ESI
004cccf1  MOV ESI,dword ptr [ESP + 0xc]
004cccf5  PUSH EDI
004cccf6  MOV EDI,dword ptr [ESP + 0xc]
004cccfa  SUB ESI,EDI
004cccfc  MOV EAX,ESI
004cccfe  SAR EAX,0x3
004ccd01  CMP EAX,0x1
004ccd04  JLE 0x004ccd3c
004ccd06  MOV ECX,dword ptr [EDI + ESI*0x1 + -0x4]
004ccd0a  MOV EAX,dword ptr [EDI + ESI*0x1 + -0x8]
004ccd0e  MOV EDX,dword ptr [EDI]
004ccd10  PUSH ECX
004ccd11  PUSH EAX
004ccd12  LEA EAX,[ESI + -0x8]
004ccd15  SAR EAX,0x3
004ccd18  PUSH EAX
004ccd19  MOV dword ptr [EDI + ESI*0x1 + -0x8],EDX
004ccd1d  MOV EDX,dword ptr [EDI + 0x4]
004ccd20  PUSH 0x0
004ccd22  PUSH EDI
004ccd23  MOV dword ptr [EDI + ESI*0x1 + -0x4],EDX
004ccd27  CALL 0x004c7420
004ccd2c  SUB ESI,0x8
004ccd2f  MOV EAX,ESI
004ccd31  SAR EAX,0x3
004ccd34  ADD ESP,0x14
004ccd37  CMP EAX,0x1
004ccd3a  JG 0x004ccd06
004ccd3c  POP EDI
004ccd3d  POP ESI
004ccd3e  RET
