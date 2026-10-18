006bee80  FLD float ptr [ECX + 0x24]
006bee83  MOV EAX,dword ptr [ESP + 0x4]
006bee87  FLD float ptr [ECX + 0x28]
006bee8a  MOV ECX,dword ptr [ECX + 0x20]
006bee8d  FXCH
006bee8f  MOV dword ptr [EAX],ECX
006bee91  FSTP float ptr [EAX + 0x4]
006bee94  MOV dword ptr [EAX + 0xc],0x3f800000
006bee9b  FSTP float ptr [EAX + 0x8]
006bee9e  RET 0x4
