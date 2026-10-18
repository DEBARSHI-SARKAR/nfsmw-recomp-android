005ea2b0  PUSH ESI
005ea2b1  MOV ESI,ECX
005ea2b3  MOV EAX,dword ptr [ESI + 0x4]
005ea2b6  MOV ECX,dword ptr [EAX + 0x4]
005ea2b9  PUSH ECX
005ea2ba  MOV ECX,ESI
005ea2bc  CALL 0x005e5f90
005ea2c1  MOV EAX,dword ptr [ESI + 0x4]
005ea2c4  MOV dword ptr [EAX + 0x4],EAX
005ea2c7  MOV EAX,dword ptr [ESI + 0x4]
005ea2ca  MOV dword ptr [ESI + 0x8],0x0
005ea2d1  MOV dword ptr [EAX],EAX
005ea2d3  MOV ESI,dword ptr [ESI + 0x4]
005ea2d6  MOV dword ptr [ESI + 0x8],ESI
005ea2d9  POP ESI
005ea2da  RET
