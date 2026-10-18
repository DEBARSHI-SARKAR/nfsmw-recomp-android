006ebcd0  MOV EAX,dword ptr [ESP + 0x4]
006ebcd4  MOV ECX,dword ptr [ESP + 0x8]
006ebcd8  CMP EAX,ECX
006ebcda  JZ 0x006ebced
006ebcdc  MOV EDX,dword ptr [ESP + 0xc]
006ebce0  PUSH ESI
006ebce1  MOV ESI,dword ptr [EDX]
006ebce3  MOV dword ptr [EAX],ESI
006ebce5  ADD EAX,0x4
006ebce8  CMP EAX,ECX
006ebcea  JNZ 0x006ebce1
006ebcec  POP ESI
006ebced  RET
