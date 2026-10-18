0065fc30  PUSH ESI
0065fc31  MOV ESI,ECX
0065fc33  CALL 0x0065e190
0065fc38  MOV dword ptr [ESI + 0x4],EAX
0065fc3b  MOV byte ptr [EAX + 0x15],0x1
0065fc3f  MOV EAX,dword ptr [ESI + 0x4]
0065fc42  MOV dword ptr [EAX + 0x4],EAX
0065fc45  MOV EAX,dword ptr [ESI + 0x4]
0065fc48  MOV dword ptr [EAX],EAX
0065fc4a  MOV EAX,dword ptr [ESI + 0x4]
0065fc4d  MOV dword ptr [EAX + 0x8],EAX
0065fc50  MOV dword ptr [ESI + 0x8],0x0
0065fc57  MOV EAX,ESI
0065fc59  POP ESI
0065fc5a  RET 0x8
