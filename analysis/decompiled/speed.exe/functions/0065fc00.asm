0065fc00  PUSH ESI
0065fc01  MOV ESI,ECX
0065fc03  CALL 0x0065cfa0
0065fc08  MOV dword ptr [ESI + 0x4],EAX
0065fc0b  MOV byte ptr [EAX + 0x29],0x1
0065fc0f  MOV EAX,dword ptr [ESI + 0x4]
0065fc12  MOV dword ptr [EAX + 0x4],EAX
0065fc15  MOV EAX,dword ptr [ESI + 0x4]
0065fc18  MOV dword ptr [EAX],EAX
0065fc1a  MOV EAX,dword ptr [ESI + 0x4]
0065fc1d  MOV dword ptr [EAX + 0x8],EAX
0065fc20  MOV dword ptr [ESI + 0x8],0x0
0065fc27  MOV EAX,ESI
0065fc29  POP ESI
0065fc2a  RET 0x8
