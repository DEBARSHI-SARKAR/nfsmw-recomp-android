0067aba0  PUSH ESI
0067aba1  MOV ESI,ECX
0067aba3  MOV EAX,dword ptr [ESI + 0x4]
0067aba6  MOV ECX,dword ptr [EAX + 0x4]
0067aba9  PUSH ECX
0067abaa  MOV ECX,ESI
0067abac  CALL 0x00675d70
0067abb1  MOV EAX,dword ptr [ESI + 0x4]
0067abb4  MOV dword ptr [EAX + 0x4],EAX
0067abb7  MOV EAX,dword ptr [ESI + 0x4]
0067abba  MOV dword ptr [ESI + 0x8],0x0
0067abc1  MOV dword ptr [EAX],EAX
0067abc3  MOV ESI,dword ptr [ESI + 0x4]
0067abc6  MOV dword ptr [ESI + 0x8],ESI
0067abc9  POP ESI
0067abca  RET
