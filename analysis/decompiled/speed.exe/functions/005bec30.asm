005bec30  PUSH ESI
005bec31  MOV ESI,ECX
005bec33  MOV EAX,dword ptr [ESI + 0x2c]
005bec36  PUSH EDI
005bec37  PUSH EAX
005bec38  MOV ECX,0x91dd1c
005bec3d  CALL 0x005b2b60
005bec42  MOV EDI,dword ptr [ESP + 0xc]
005bec46  PUSH EDI
005bec47  MOV ECX,0x91dd1c
005bec4c  MOV dword ptr [ESI + 0x2c],0x0
005bec53  CALL 0x005bcb70
005bec58  MOV dword ptr [ESI + 0x30],EDI
005bec5b  POP EDI
005bec5c  MOV dword ptr [ESI + 0x2c],EAX
005bec5f  POP ESI
005bec60  RET 0x4
