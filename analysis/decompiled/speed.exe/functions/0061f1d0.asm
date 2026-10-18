0061f1d0  PUSH ESI
0061f1d1  MOV ESI,ECX
0061f1d3  CALL 0x0060cc50
0061f1d8  MOV dword ptr [ESI + 0x4],EAX
0061f1db  MOV byte ptr [EAX + 0x21],0x1
0061f1df  MOV EAX,dword ptr [ESI + 0x4]
0061f1e2  MOV dword ptr [EAX + 0x4],EAX
0061f1e5  MOV EAX,dword ptr [ESI + 0x4]
0061f1e8  MOV dword ptr [EAX],EAX
0061f1ea  MOV EAX,dword ptr [ESI + 0x4]
0061f1ed  MOV dword ptr [EAX + 0x8],EAX
0061f1f0  MOV dword ptr [ESI + 0x8],0x0
0061f1f7  MOV EAX,ESI
0061f1f9  POP ESI
0061f1fa  RET
