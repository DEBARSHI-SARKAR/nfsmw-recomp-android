0077a0c0  PUSH ESI
0077a0c1  MOV ESI,ECX
0077a0c3  CALL 0x00771f50
0077a0c8  MOV dword ptr [ESI + 0x4],EAX
0077a0cb  MOV byte ptr [EAX + 0xf],0x1
0077a0cf  MOV EAX,dword ptr [ESI + 0x4]
0077a0d2  MOV dword ptr [EAX + 0x4],EAX
0077a0d5  MOV EAX,dword ptr [ESI + 0x4]
0077a0d8  MOV dword ptr [EAX],EAX
0077a0da  MOV EAX,dword ptr [ESI + 0x4]
0077a0dd  MOV dword ptr [EAX + 0x8],EAX
0077a0e0  MOV dword ptr [ESI + 0x8],0x0
0077a0e7  POP ESI
0077a0e8  RET
