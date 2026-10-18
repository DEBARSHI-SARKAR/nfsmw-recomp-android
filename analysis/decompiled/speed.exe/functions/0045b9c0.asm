0045b9c0  PUSH ESI
0045b9c1  MOV ESI,ECX
0045b9c3  MOV EAX,dword ptr [ESI + 0x4]
0045b9c6  MOV ECX,dword ptr [EAX + 0x4]
0045b9c9  PUSH ECX
0045b9ca  MOV ECX,ESI
0045b9cc  CALL 0x0045b9f0
0045b9d1  MOV EAX,dword ptr [ESI + 0x4]
0045b9d4  MOV dword ptr [EAX + 0x4],EAX
0045b9d7  MOV EAX,dword ptr [ESI + 0x4]
0045b9da  MOV dword ptr [ESI + 0x8],0x0
0045b9e1  MOV dword ptr [EAX],EAX
0045b9e3  MOV ESI,dword ptr [ESI + 0x4]
0045b9e6  MOV dword ptr [ESI + 0x8],ESI
0045b9e9  POP ESI
0045b9ea  RET
