007aa190  PUSH -0x1
007aa192  PUSH 0x882aa8
007aa197  MOV EAX,FS:[0x0]
007aa19d  PUSH EAX
007aa19e  MOV dword ptr FS:[0x0],ESP
007aa1a5  PUSH ECX
007aa1a6  PUSH ESI
007aa1a7  MOV ESI,ECX
007aa1a9  MOV dword ptr [ESP + 0x4],ESI
007aa1ad  MOV dword ptr [ESI],0x8b7570
007aa1b3  MOV ECX,dword ptr [ESI + 0x4c]
007aa1b6  TEST ECX,ECX
007aa1b8  MOV dword ptr [ESP + 0x10],0x0
007aa1c0  JZ 0x007aa1c8
007aa1c2  MOV EAX,dword ptr [ECX]
007aa1c4  PUSH 0x1
007aa1c6  CALL dword ptr [EAX]
007aa1c8  MOV ECX,dword ptr [ESP + 0x8]
007aa1cc  MOV dword ptr [ESI],0x89b8c8
007aa1d2  POP ESI
007aa1d3  MOV dword ptr FS:[0x0],ECX
007aa1da  ADD ESP,0x10
007aa1dd  RET
