005dfd40  MOV EAX,dword ptr [ESP + 0x4]
005dfd44  MOV ECX,dword ptr [EAX]
005dfd46  MOV DL,byte ptr [ECX + 0x21]
005dfd49  TEST DL,DL
005dfd4b  JNZ 0x005dfd5b
005dfd4d  LEA ECX,[ECX]
005dfd50  MOV EAX,ECX
005dfd52  MOV ECX,dword ptr [EAX]
005dfd54  MOV DL,byte ptr [ECX + 0x21]
005dfd57  TEST DL,DL
005dfd59  JZ 0x005dfd50
005dfd5b  RET
