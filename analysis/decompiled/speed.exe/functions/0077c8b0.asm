0077c8b0  PUSH ESI
0077c8b1  MOV ESI,ECX
0077c8b3  CALL 0x0077a230
0077c8b8  MOV dword ptr [ESI + 0x4],EAX
0077c8bb  MOV byte ptr [EAX + 0x15],0x1
0077c8bf  MOV EAX,dword ptr [ESI + 0x4]
0077c8c2  MOV dword ptr [EAX + 0x4],EAX
0077c8c5  MOV EAX,dword ptr [ESI + 0x4]
0077c8c8  MOV dword ptr [EAX],EAX
0077c8ca  MOV EAX,dword ptr [ESI + 0x4]
0077c8cd  MOV dword ptr [EAX + 0x8],EAX
0077c8d0  MOV dword ptr [ESI + 0x8],0x0
0077c8d7  POP ESI
0077c8d8  RET
