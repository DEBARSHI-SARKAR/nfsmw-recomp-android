006fd1d0  PUSH ESI
006fd1d1  MOV ESI,ECX
006fd1d3  MOV EAX,dword ptr [ESI]
006fd1d5  CALL dword ptr [EAX + 0x38]
006fd1d8  TEST AL,AL
006fd1da  JZ 0x006fd1ed
006fd1dc  MOV AL,byte ptr [ESI + 0x38c]
006fd1e2  TEST AL,AL
006fd1e4  JNZ 0x006fd1ed
006fd1e6  MOV byte ptr [ESI + 0x38c],0x1
006fd1ed  POP ESI
006fd1ee  RET
