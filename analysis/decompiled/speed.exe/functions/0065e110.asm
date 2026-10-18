0065e110  PUSH ESI
0065e111  MOV ESI,ECX
0065e113  CALL 0x0065cfa0
0065e118  MOV dword ptr [ESI + 0x4],EAX
0065e11b  MOV byte ptr [EAX + 0x29],0x1
0065e11f  MOV EAX,dword ptr [ESI + 0x4]
0065e122  MOV dword ptr [EAX + 0x4],EAX
0065e125  MOV EAX,dword ptr [ESI + 0x4]
0065e128  MOV dword ptr [EAX],EAX
0065e12a  MOV EAX,dword ptr [ESI + 0x4]
0065e12d  MOV dword ptr [EAX + 0x8],EAX
0065e130  MOV dword ptr [ESI + 0x8],0x0
0065e137  POP ESI
0065e138  RET
