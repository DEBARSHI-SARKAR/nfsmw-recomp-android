005ded50  MOV EAX,dword ptr [ESP + 0x4]
005ded54  MOV ECX,dword ptr [EAX]
005ded56  MOV DL,byte ptr [ECX + 0x15]
005ded59  TEST DL,DL
005ded5b  JNZ 0x005ded6b
005ded5d  LEA ECX,[ECX]
005ded60  MOV EAX,ECX
005ded62  MOV ECX,dword ptr [EAX]
005ded64  MOV DL,byte ptr [ECX + 0x15]
005ded67  TEST DL,DL
005ded69  JZ 0x005ded60
005ded6b  RET
