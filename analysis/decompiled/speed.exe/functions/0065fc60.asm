0065fc60  PUSH ESI
0065fc61  MOV ESI,ECX
0065fc63  CALL 0x0065e210
0065fc68  MOV dword ptr [ESI + 0x4],EAX
0065fc6b  MOV byte ptr [EAX + 0x1d],0x1
0065fc6f  MOV EAX,dword ptr [ESI + 0x4]
0065fc72  MOV dword ptr [EAX + 0x4],EAX
0065fc75  MOV EAX,dword ptr [ESI + 0x4]
0065fc78  MOV dword ptr [EAX],EAX
0065fc7a  MOV EAX,dword ptr [ESI + 0x4]
0065fc7d  MOV dword ptr [EAX + 0x8],EAX
0065fc80  MOV dword ptr [ESI + 0x8],0x0
0065fc87  MOV EAX,ESI
0065fc89  POP ESI
0065fc8a  RET 0x8
