006a45c0  PUSH ESI
006a45c1  MOV ESI,ECX
006a45c3  MOV ECX,dword ptr [ESI + 0xf0]
006a45c9  TEST ECX,ECX
006a45cb  JZ 0x006a45d6
006a45cd  MOV EAX,dword ptr [ECX]
006a45cf  PUSH 0x0
006a45d1  PUSH 0x0
006a45d3  CALL dword ptr [EAX + 0x10]
006a45d6  MOV dword ptr [ESI + 0x58],0x0
006a45dd  MOV dword ptr [ESI + 0x5c],0xffffffff
006a45e4  MOV dword ptr [ESI + 0x54],0x0
006a45eb  POP ESI
006a45ec  RET
