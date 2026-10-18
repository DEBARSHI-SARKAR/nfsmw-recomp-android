0041bc70  PUSH ESI
0041bc71  MOV ESI,ECX
0041bc73  MOV EAX,dword ptr [ESI + 0x8]
0041bc76  PUSH EDI
0041bc77  MOV EDI,dword ptr [ESP + 0xc]
0041bc7b  CMP EDI,EAX
0041bc7d  JBE 0x0041bd0a
0041bc83  MOV EAX,dword ptr [ESI]
0041bc85  PUSH EBX
0041bc86  PUSH EBP
0041bc87  PUSH EDI
0041bc88  CALL dword ptr [EAX + 0x14]
0041bc8b  MOV ECX,dword ptr [ESI + 0x8]
0041bc8e  MOV EDX,dword ptr [ESI]
0041bc90  MOV EBX,dword ptr [ESI + 0x4]
0041bc93  MOV EBP,dword ptr [ESI + 0xc]
0041bc96  PUSH 0x10
0041bc98  MOV dword ptr [ESP + 0x18],ECX
0041bc9c  PUSH EDI
0041bc9d  MOV ECX,ESI
0041bc9f  CALL dword ptr [EDX + 0x4]
0041bca2  CMP EBX,EAX
0041bca4  MOV dword ptr [ESI + 0x4],EAX
0041bca7  MOV dword ptr [ESI + 0x8],EDI
0041bcaa  JZ 0x0041bd08
0041bcac  XOR EDI,EDI
0041bcae  TEST EBP,EBP
0041bcb0  MOV dword ptr [ESI + 0xc],0x0
0041bcb7  JLE 0x0041bcf7
0041bcb9  LEA ESP,[ESP]
0041bcc0  MOV EAX,dword ptr [ESI + 0xc]
0041bcc3  CMP EAX,dword ptr [ESI + 0x8]
0041bcc6  JC 0x0041bcd9
0041bcc8  MOV EDX,dword ptr [ESI]
0041bcca  INC EAX
0041bccb  PUSH EAX
0041bccc  MOV ECX,ESI
0041bcce  CALL dword ptr [EDX + 0xc]
0041bcd1  PUSH EAX
0041bcd2  MOV ECX,ESI
0041bcd4  CALL 0x0041bc70
0041bcd9  MOV EAX,dword ptr [ESI + 0xc]
0041bcdc  MOV ECX,dword ptr [ESI + 0x4]
0041bcdf  LEA EAX,[ECX + EAX*0x4]
0041bce2  TEST EAX,EAX
0041bce4  JZ 0x0041bceb
0041bce6  MOV EDX,dword ptr [EBX + EDI*0x4]
0041bce9  MOV dword ptr [EAX],EDX
0041bceb  MOV EDX,dword ptr [ESI + 0xc]
0041bcee  INC EDX
0041bcef  INC EDI
0041bcf0  CMP EDI,EBP
0041bcf2  MOV dword ptr [ESI + 0xc],EDX
0041bcf5  JL 0x0041bcc0
0041bcf7  TEST EBX,EBX
0041bcf9  JZ 0x0041bd08
0041bcfb  MOV ECX,dword ptr [ESP + 0x14]
0041bcff  MOV EAX,dword ptr [ESI]
0041bd01  PUSH ECX
0041bd02  PUSH EBX
0041bd03  MOV ECX,ESI
0041bd05  CALL dword ptr [EAX + 0x8]
0041bd08  POP EBP
0041bd09  POP EBX
0041bd0a  POP EDI
0041bd0b  POP ESI
0041bd0c  RET 0x4
