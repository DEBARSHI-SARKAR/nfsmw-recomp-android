006eeb10  PUSH ESI
006eeb11  MOV ESI,ECX
006eeb13  MOV ECX,dword ptr [ESI + 0x3c]
006eeb16  TEST ECX,ECX
006eeb18  JZ 0x006eeb39
006eeb1a  MOV DL,byte ptr [ECX + 0xc]
006eeb1d  MOV AL,0x1
006eeb1f  CMP DL,AL
006eeb21  JZ 0x006eeb2b
006eeb23  MOV byte ptr [ECX + 0xc],AL
006eeb26  MOV EAX,dword ptr [ECX]
006eeb28  CALL dword ptr [EAX + 0x4]
006eeb2b  MOV dword ptr [ESI + 0x3c],0x0
006eeb32  MOV dword ptr [ESI + 0x48],0x0
006eeb39  POP ESI
006eeb3a  RET
