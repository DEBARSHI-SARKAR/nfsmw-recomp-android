006ee9f0  MOV ECX,dword ptr [ESP + 0x4]
006ee9f4  TEST ECX,ECX
006ee9f6  JZ 0x006eea07
006ee9f8  MOV AL,byte ptr [ECX + 0xc]
006ee9fb  TEST AL,AL
006ee9fd  JNZ 0x006eea07
006ee9ff  MOV EAX,dword ptr [ECX]
006eea01  CALL dword ptr [EAX + 0x8]
006eea04  RET 0x4
006eea07  OR EAX,0xffffffff
006eea0a  RET 0x4
