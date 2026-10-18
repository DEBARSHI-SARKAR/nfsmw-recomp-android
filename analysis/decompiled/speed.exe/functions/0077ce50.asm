0077ce50  PUSH ESI
0077ce51  MOV ESI,dword ptr [ECX + 0x8]
0077ce54  TEST ESI,ESI
0077ce56  JZ 0x0077ce7e
0077ce58  MOV EAX,dword ptr [ESI + 0x4]
0077ce5b  MOV ECX,dword ptr [EAX + 0x4]
0077ce5e  PUSH ECX
0077ce5f  MOV ECX,ESI
0077ce61  CALL 0x00779ea0
0077ce66  MOV EAX,dword ptr [ESI + 0x4]
0077ce69  MOV dword ptr [EAX + 0x4],EAX
0077ce6c  MOV EAX,dword ptr [ESI + 0x4]
0077ce6f  MOV dword ptr [ESI + 0x8],0x0
0077ce76  MOV dword ptr [EAX],EAX
0077ce78  MOV ESI,dword ptr [ESI + 0x4]
0077ce7b  MOV dword ptr [ESI + 0x8],ESI
0077ce7e  POP ESI
0077ce7f  RET
