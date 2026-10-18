0077a1b0  PUSH ESI
0077a1b1  MOV ESI,ECX
0077a1b3  MOV EAX,dword ptr [ESI + 0x4]
0077a1b6  MOV ECX,dword ptr [EAX + 0x4]
0077a1b9  PUSH ECX
0077a1ba  MOV ECX,ESI
0077a1bc  CALL 0x007721e0
0077a1c1  MOV EAX,dword ptr [ESI + 0x4]
0077a1c4  MOV dword ptr [EAX + 0x4],EAX
0077a1c7  MOV EAX,dword ptr [ESI + 0x4]
0077a1ca  MOV dword ptr [ESI + 0x8],0x0
0077a1d1  MOV dword ptr [EAX],EAX
0077a1d3  MOV ESI,dword ptr [ESI + 0x4]
0077a1d6  MOV dword ptr [ESI + 0x8],ESI
0077a1d9  POP ESI
0077a1da  RET
