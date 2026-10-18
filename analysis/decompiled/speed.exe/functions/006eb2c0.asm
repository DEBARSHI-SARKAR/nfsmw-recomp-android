006eb2c0  MOV EAX,dword ptr [ESP + 0x4]
006eb2c4  MOV ECX,dword ptr [EAX + 0x8]
006eb2c7  MOV DL,byte ptr [ECX + 0x15]
006eb2ca  TEST DL,DL
006eb2cc  JNZ 0x006eb2dc
006eb2ce  MOV EDI,EDI
006eb2d0  MOV EAX,ECX
006eb2d2  MOV ECX,dword ptr [EAX + 0x8]
006eb2d5  MOV DL,byte ptr [ECX + 0x15]
006eb2d8  TEST DL,DL
006eb2da  JZ 0x006eb2d0
006eb2dc  RET
