005ea300  PUSH ESI
005ea301  MOV ESI,ECX
005ea303  MOV EAX,dword ptr [ESI + 0x4]
005ea306  MOV ECX,dword ptr [EAX + 0x4]
005ea309  PUSH ECX
005ea30a  MOV ECX,ESI
005ea30c  CALL 0x005e6020
005ea311  MOV EAX,dword ptr [ESI + 0x4]
005ea314  MOV dword ptr [EAX + 0x4],EAX
005ea317  MOV EAX,dword ptr [ESI + 0x4]
005ea31a  MOV dword ptr [ESI + 0x8],0x0
005ea321  MOV dword ptr [EAX],EAX
005ea323  MOV ESI,dword ptr [ESI + 0x4]
005ea326  MOV dword ptr [ESI + 0x8],ESI
005ea329  POP ESI
005ea32a  RET
