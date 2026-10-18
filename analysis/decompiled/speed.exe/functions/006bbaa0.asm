006bbaa0  PUSH ECX
006bbaa1  PUSH ESI
006bbaa2  MOV ESI,ECX
006bbaa4  MOV EAX,dword ptr [ESI + 0x4]
006bbaa7  MOV ECX,dword ptr [EAX]
006bbaa9  PUSH EDI
006bbaaa  PUSH EAX
006bbaab  PUSH ECX
006bbaac  LEA EAX,[ESP + 0x10]
006bbab0  PUSH EAX
006bbab1  MOV ECX,ESI
006bbab3  CALL 0x006bb410
006bbab8  MOV EAX,dword ptr [ESI + 0x4]
006bbabb  XOR EDI,EDI
006bbabd  CMP EAX,EDI
006bbabf  JZ 0x006bbacf
006bbac1  PUSH EDI
006bbac2  PUSH 0x18
006bbac4  PUSH EAX
006bbac5  MOV ECX,0x925b30
006bbaca  CALL 0x005d0370
006bbacf  MOV dword ptr [ESI + 0x4],EDI
006bbad2  MOV dword ptr [ESI + 0x8],EDI
006bbad5  POP EDI
006bbad6  POP ESI
006bbad7  POP ECX
006bbad8  RET
