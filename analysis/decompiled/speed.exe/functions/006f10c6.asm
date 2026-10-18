006f10c6  SUB ESP,0x10
006f10c9  MOV ECX,ESP
006f10cb  MOV dword ptr [ECX],EDX
006f10cd  MOV dword ptr [ECX + 0x4],EDX
006f10d0  MOV dword ptr [ECX + 0x8],EDX
006f10d3  CALL dword ptr [EAX + 0x4]
006f10d6  ADD ESP,0x10
006f10d9  MOV dword ptr [ESI + 0x38],EAX
006f10dc  POP ESI
006f10dd  RET 0x4
