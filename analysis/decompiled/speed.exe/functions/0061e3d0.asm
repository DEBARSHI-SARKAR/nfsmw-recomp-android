0061e3d0  PUSH ESI
0061e3d1  MOV ESI,ECX
0061e3d3  CALL 0x0060cac0
0061e3d8  MOV dword ptr [ESI + 0x4],EAX
0061e3db  MOV byte ptr [EAX + 0x15],0x1
0061e3df  MOV EAX,dword ptr [ESI + 0x4]
0061e3e2  MOV dword ptr [EAX + 0x4],EAX
0061e3e5  MOV EAX,dword ptr [ESI + 0x4]
0061e3e8  MOV dword ptr [EAX],EAX
0061e3ea  MOV EAX,dword ptr [ESI + 0x4]
0061e3ed  MOV dword ptr [EAX + 0x8],EAX
0061e3f0  MOV dword ptr [ESI + 0x8],0x0
0061e3f7  MOV EAX,ESI
0061e3f9  POP ESI
0061e3fa  RET
