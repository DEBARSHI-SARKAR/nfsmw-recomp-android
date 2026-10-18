0043f0b0  PUSH ESI
0043f0b1  MOV ESI,ECX
0043f0b3  CALL 0x0041c8a0
0043f0b8  MOV dword ptr [ESI + 0x4],EAX
0043f0bb  MOV byte ptr [EAX + 0xf],0x1
0043f0bf  MOV EAX,dword ptr [ESI + 0x4]
0043f0c2  MOV dword ptr [EAX + 0x4],EAX
0043f0c5  MOV EAX,dword ptr [ESI + 0x4]
0043f0c8  MOV dword ptr [EAX],EAX
0043f0ca  MOV EAX,dword ptr [ESI + 0x4]
0043f0cd  MOV dword ptr [EAX + 0x8],EAX
0043f0d0  MOV dword ptr [ESI + 0x8],0x0
0043f0d7  MOV EAX,ESI
0043f0d9  POP ESI
0043f0da  RET
