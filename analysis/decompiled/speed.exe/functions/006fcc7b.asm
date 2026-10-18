006fcc7b  SUB ESP,0x10
006fcc7e  MOV EAX,ESP
006fcc80  MOV dword ptr [EAX],EBX
006fcc82  MOV dword ptr [EAX + 0x4],EBX
006fcc85  MOV dword ptr [EAX + 0x8],EBX
006fcc88  CALL dword ptr [ECX + 0x4]
006fcc8b  ADD ESP,0x10
006fcc8e  JMP 0x006fcc1d
