0065e1e0  PUSH ESI
0065e1e1  MOV ESI,ECX
0065e1e3  MOV EAX,dword ptr [ESI + 0x4]
0065e1e6  MOV ECX,dword ptr [EAX + 0x4]
0065e1e9  PUSH ECX
0065e1ea  MOV ECX,ESI
0065e1ec  CALL 0x0065d120
0065e1f1  MOV EAX,dword ptr [ESI + 0x4]
0065e1f4  MOV dword ptr [EAX + 0x4],EAX
0065e1f7  MOV EAX,dword ptr [ESI + 0x4]
0065e1fa  MOV dword ptr [ESI + 0x8],0x0
0065e201  MOV dword ptr [EAX],EAX
0065e203  MOV ESI,dword ptr [ESI + 0x4]
0065e206  MOV dword ptr [ESI + 0x8],ESI
0065e209  POP ESI
0065e20a  RET
