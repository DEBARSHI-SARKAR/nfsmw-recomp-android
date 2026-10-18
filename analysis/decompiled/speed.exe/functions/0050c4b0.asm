0050c4b0  PUSH ESI
0050c4b1  MOV ESI,ECX
0050c4b3  CALL 0x005047f0
0050c4b8  MOV dword ptr [ESI + 0x4],EAX
0050c4bb  MOV byte ptr [EAX + 0x15],0x1
0050c4bf  MOV EAX,dword ptr [ESI + 0x4]
0050c4c2  MOV dword ptr [EAX + 0x4],EAX
0050c4c5  MOV EAX,dword ptr [ESI + 0x4]
0050c4c8  MOV dword ptr [EAX],EAX
0050c4ca  MOV EAX,dword ptr [ESI + 0x4]
0050c4cd  MOV dword ptr [EAX + 0x8],EAX
0050c4d0  MOV dword ptr [ESI + 0x8],0x0
0050c4d7  MOV EAX,ESI
0050c4d9  POP ESI
0050c4da  RET
