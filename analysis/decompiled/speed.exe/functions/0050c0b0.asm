0050c0b0  PUSH ESI
0050c0b1  MOV ESI,ECX
0050c0b3  CALL 0x005048f0
0050c0b8  MOV dword ptr [ESI + 0x4],EAX
0050c0bb  MOV byte ptr [EAX + 0x15],0x1
0050c0bf  MOV EAX,dword ptr [ESI + 0x4]
0050c0c2  MOV dword ptr [EAX + 0x4],EAX
0050c0c5  MOV EAX,dword ptr [ESI + 0x4]
0050c0c8  MOV dword ptr [EAX],EAX
0050c0ca  MOV EAX,dword ptr [ESI + 0x4]
0050c0cd  MOV dword ptr [EAX + 0x8],EAX
0050c0d0  MOV dword ptr [ESI + 0x8],0x0
0050c0d7  MOV EAX,ESI
0050c0d9  POP ESI
0050c0da  RET
