006eb2e0  MOV EAX,dword ptr [ESP + 0x4]
006eb2e4  MOV ECX,dword ptr [EAX]
006eb2e6  MOV DL,byte ptr [ECX + 0x15]
006eb2e9  TEST DL,DL
006eb2eb  JNZ 0x006eb2fb
006eb2ed  LEA ECX,[ECX]
006eb2f0  MOV EAX,ECX
006eb2f2  MOV ECX,dword ptr [EAX]
006eb2f4  MOV DL,byte ptr [ECX + 0x15]
006eb2f7  TEST DL,DL
006eb2f9  JZ 0x006eb2f0
006eb2fb  RET
