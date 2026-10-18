005d8de0  PUSH ESI
005d8de1  MOV ESI,ECX
005d8de3  CALL 0x00466410
005d8de8  TEST EAX,EAX
005d8dea  JZ 0x005d8e04
005d8dec  MOV ECX,dword ptr [ESP + 0x8]
005d8df0  MOV dword ptr [EAX + 0x8],ECX
005d8df3  MOV ECX,dword ptr [ESI + 0x4]
005d8df6  MOV dword ptr [ECX],EAX
005d8df8  MOV dword ptr [ESI + 0x4],EAX
005d8dfb  MOV dword ptr [EAX],ESI
005d8dfd  MOV dword ptr [EAX + 0x4],ECX
005d8e00  POP ESI
005d8e01  RET 0x4
005d8e04  MOV ECX,dword ptr [ESI + 0x4]
005d8e07  XOR EAX,EAX
005d8e09  MOV dword ptr [ECX],EAX
005d8e0b  MOV dword ptr [ESI + 0x4],EAX
005d8e0e  MOV dword ptr [EAX],ESI
005d8e10  MOV dword ptr [EAX + 0x4],ECX
005d8e13  POP ESI
005d8e14  RET 0x4
