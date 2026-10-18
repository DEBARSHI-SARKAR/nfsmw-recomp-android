006ffdd0  PUSH ESI
006ffdd1  MOV ESI,ECX
006ffdd3  MOV EAX,dword ptr [ESI + 0x7c]
006ffdd6  TEST EAX,EAX
006ffdd8  JZ 0x006ffdf5
006ffdda  PUSH EAX
006ffddb  MOV ECX,0x912840
006ffde0  MOV word ptr [ESI + 0x8c],0x0
006ffde9  CALL 0x004ac0e0
006ffdee  MOV dword ptr [ESI + 0x7c],0x0
006ffdf5  POP ESI
006ffdf6  RET
