005ea260  PUSH ESI
005ea261  MOV ESI,ECX
005ea263  MOV EAX,dword ptr [ESI + 0x4]
005ea266  MOV ECX,dword ptr [EAX + 0x4]
005ea269  PUSH ECX
005ea26a  MOV ECX,ESI
005ea26c  CALL 0x005e5ed0
005ea271  MOV EAX,dword ptr [ESI + 0x4]
005ea274  MOV dword ptr [EAX + 0x4],EAX
005ea277  MOV EAX,dword ptr [ESI + 0x4]
005ea27a  MOV dword ptr [ESI + 0x8],0x0
005ea281  MOV dword ptr [EAX],EAX
005ea283  MOV ESI,dword ptr [ESI + 0x4]
005ea286  MOV dword ptr [ESI + 0x8],ESI
005ea289  POP ESI
005ea28a  RET
