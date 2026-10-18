0075f1d0  PUSH ESI
0075f1d1  MOV ESI,ECX
0075f1d3  CALL 0x0074cd10
0075f1d8  MOV dword ptr [ESI + 0x4],EAX
0075f1db  MOV byte ptr [EAX + 0x15],0x1
0075f1df  MOV EAX,dword ptr [ESI + 0x4]
0075f1e2  MOV dword ptr [EAX + 0x4],EAX
0075f1e5  MOV EAX,dword ptr [ESI + 0x4]
0075f1e8  MOV dword ptr [EAX],EAX
0075f1ea  MOV EAX,dword ptr [ESI + 0x4]
0075f1ed  MOV dword ptr [EAX + 0x8],EAX
0075f1f0  MOV dword ptr [ESI + 0x8],0x0
0075f1f7  MOV EAX,ESI
0075f1f9  POP ESI
0075f1fa  RET
