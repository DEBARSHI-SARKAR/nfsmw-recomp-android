005deb70  MOV EAX,dword ptr [ESP + 0x4]
005deb74  MOV ECX,dword ptr [EAX]
005deb76  MOV DL,byte ptr [ECX + 0x15]
005deb79  TEST DL,DL
005deb7b  JNZ 0x005deb8b
005deb7d  LEA ECX,[ECX]
005deb80  MOV EAX,ECX
005deb82  MOV ECX,dword ptr [EAX]
005deb84  MOV DL,byte ptr [ECX + 0x15]
005deb87  TEST DL,DL
005deb89  JZ 0x005deb80
005deb8b  RET
