0072d240  PUSH ESI
0072d241  MOV ESI,ECX
0072d243  CALL 0x0072b5c0
0072d248  MOV dword ptr [ESI + 0x4],EAX
0072d24b  MOV byte ptr [EAX + 0x15],0x1
0072d24f  MOV EAX,dword ptr [ESI + 0x4]
0072d252  MOV dword ptr [EAX + 0x4],EAX
0072d255  MOV EAX,dword ptr [ESI + 0x4]
0072d258  MOV dword ptr [EAX],EAX
0072d25a  MOV EAX,dword ptr [ESI + 0x4]
0072d25d  MOV dword ptr [EAX + 0x8],EAX
0072d260  MOV dword ptr [ESI + 0x8],0x0
0072d267  POP ESI
0072d268  RET
