005dfcf0  MOV EAX,dword ptr [ESP + 0x4]
005dfcf4  MOV ECX,dword ptr [EAX]
005dfcf6  MOV DL,byte ptr [ECX + 0x21]
005dfcf9  TEST DL,DL
005dfcfb  JNZ 0x005dfd0b
005dfcfd  LEA ECX,[ECX]
005dfd00  MOV EAX,ECX
005dfd02  MOV ECX,dword ptr [EAX]
005dfd04  MOV DL,byte ptr [ECX + 0x21]
005dfd07  TEST DL,DL
005dfd09  JZ 0x005dfd00
005dfd0b  RET
