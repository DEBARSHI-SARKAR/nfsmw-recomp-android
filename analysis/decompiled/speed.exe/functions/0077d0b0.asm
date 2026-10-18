0077d0b0  PUSH ESI
0077d0b1  MOV ESI,ECX
0077d0b3  CALL 0x00772030
0077d0b8  MOV dword ptr [ESI + 0x4],EAX
0077d0bb  MOV byte ptr [EAX + 0x15],0x1
0077d0bf  MOV EAX,dword ptr [ESI + 0x4]
0077d0c2  MOV dword ptr [EAX + 0x4],EAX
0077d0c5  MOV EAX,dword ptr [ESI + 0x4]
0077d0c8  MOV dword ptr [EAX],EAX
0077d0ca  MOV EAX,dword ptr [ESI + 0x4]
0077d0cd  MOV dword ptr [EAX + 0x8],EAX
0077d0d0  MOV dword ptr [ESI + 0x8],0x0
0077d0d7  MOV EAX,ESI
0077d0d9  POP ESI
0077d0da  RET 0x8
