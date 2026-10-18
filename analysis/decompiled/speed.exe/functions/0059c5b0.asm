0059c5b0  PUSH ESI
0059c5b1  MOV ESI,ECX
0059c5b3  CALL 0x005945c0
0059c5b8  MOV dword ptr [ESI + 0x4],EAX
0059c5bb  MOV byte ptr [EAX + 0x11],0x1
0059c5bf  MOV EAX,dword ptr [ESI + 0x4]
0059c5c2  MOV dword ptr [EAX + 0x4],EAX
0059c5c5  MOV EAX,dword ptr [ESI + 0x4]
0059c5c8  MOV dword ptr [EAX],EAX
0059c5ca  MOV EAX,dword ptr [ESI + 0x4]
0059c5cd  MOV dword ptr [EAX + 0x8],EAX
0059c5d0  MOV dword ptr [ESI + 0x8],0x0
0059c5d7  POP ESI
0059c5d8  RET
