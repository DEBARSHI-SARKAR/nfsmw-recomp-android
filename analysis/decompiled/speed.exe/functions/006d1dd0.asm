006d1dd0  PUSH ESI
006d1dd1  MOV ESI,ECX
006d1dd3  MOV AL,byte ptr [ESI + 0x24]
006d1dd6  TEST AL,AL
006d1dd8  JZ 0x006d1dea
006d1dda  MOV EAX,dword ptr [ESI]
006d1ddc  TEST EAX,EAX
006d1dde  JZ 0x006d1dea
006d1de0  MOV ECX,dword ptr [EAX]
006d1de2  PUSH EAX
006d1de3  CALL dword ptr [ECX + 0x30]
006d1de6  MOV byte ptr [ESI + 0x24],0x0
006d1dea  MOV ECX,ESI
006d1dec  POP ESI
006d1ded  JMP 0x006c1010
