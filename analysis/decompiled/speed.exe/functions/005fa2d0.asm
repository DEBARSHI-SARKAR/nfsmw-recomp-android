005fa2d0  PUSH ESI
005fa2d1  PUSH EDI
005fa2d2  MOV ESI,ECX
005fa2d4  MOV EDI,dword ptr [ESI + 0x4]
005fa2d7  PUSH 0x3d4e5abd
005fa2dc  PUSH EDI
005fa2dd  CALL 0x005f8ea0
005fa2e2  MOV dword ptr [ESI + 0x4],EAX
005fa2e5  MOV EAX,dword ptr [ESP + 0x14]
005fa2e9  ADD ESP,0x8
005fa2ec  MOV dword ptr [EAX + 0x4],EDI
005fa2ef  POP EDI
005fa2f0  POP ESI
005fa2f1  RET 0x8
