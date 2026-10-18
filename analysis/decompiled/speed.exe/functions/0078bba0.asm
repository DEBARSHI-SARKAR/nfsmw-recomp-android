0078bba0  PUSH ESI
0078bba1  MOV ESI,ECX
0078bba3  MOV ECX,0x9b441c
0078bba8  CALL 0x007ec1bd
0078bbad  PUSH 0x9b4438
0078bbb2  CALL dword ptr [0x0089009c]
0078bbb8  MOV EAX,dword ptr [ESP + 0x8]
0078bbbc  MOV ECX,dword ptr [ESP + 0xc]
0078bbc0  PUSH 0x9b4438
0078bbc5  MOV dword ptr [ESI],EAX
0078bbc7  MOV dword ptr [ESI + 0x4],ECX
0078bbca  CALL dword ptr [0x008900a0]
0078bbd0  MOV ECX,0x9b441c
0078bbd5  CALL 0x007ec1c8
0078bbda  POP ESI
0078bbdb  RET 0x8
