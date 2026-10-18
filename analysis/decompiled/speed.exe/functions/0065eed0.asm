0065eed0  PUSH ESI
0065eed1  MOV ESI,ECX
0065eed3  CALL 0x0065e190
0065eed8  MOV dword ptr [ESI + 0x4],EAX
0065eedb  MOV byte ptr [EAX + 0x15],0x1
0065eedf  MOV EAX,dword ptr [ESI + 0x4]
0065eee2  MOV dword ptr [EAX + 0x4],EAX
0065eee5  MOV EAX,dword ptr [ESI + 0x4]
0065eee8  MOV dword ptr [EAX],EAX
0065eeea  MOV EAX,dword ptr [ESI + 0x4]
0065eeed  MOV dword ptr [EAX + 0x8],EAX
0065eef0  MOV dword ptr [ESI + 0x8],0x0
0065eef7  POP ESI
0065eef8  RET
