005a64a0  PUSH ESI
005a64a1  MOV ESI,ECX
005a64a3  CALL 0x005945c0
005a64a8  MOV dword ptr [ESI + 0x4],EAX
005a64ab  MOV byte ptr [EAX + 0x11],0x1
005a64af  MOV EAX,dword ptr [ESI + 0x4]
005a64b2  MOV dword ptr [EAX + 0x4],EAX
005a64b5  MOV EAX,dword ptr [ESI + 0x4]
005a64b8  MOV dword ptr [EAX],EAX
005a64ba  MOV EAX,dword ptr [ESI + 0x4]
005a64bd  MOV dword ptr [EAX + 0x8],EAX
005a64c0  MOV dword ptr [ESI + 0x8],0x0
005a64c7  MOV EAX,ESI
005a64c9  POP ESI
005a64ca  RET 0x8
