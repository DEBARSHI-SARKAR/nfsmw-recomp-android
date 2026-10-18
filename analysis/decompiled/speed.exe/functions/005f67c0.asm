005f67c0  PUSH ESI
005f67c1  MOV ESI,ECX
005f67c3  CALL 0x005e6a30
005f67c8  MOV dword ptr [ESI + 0x4],EAX
005f67cb  MOV byte ptr [EAX + 0x15],0x1
005f67cf  MOV EAX,dword ptr [ESI + 0x4]
005f67d2  MOV dword ptr [EAX + 0x4],EAX
005f67d5  MOV EAX,dword ptr [ESI + 0x4]
005f67d8  MOV dword ptr [EAX],EAX
005f67da  MOV EAX,dword ptr [ESI + 0x4]
005f67dd  MOV dword ptr [EAX + 0x8],EAX
005f67e0  MOV dword ptr [ESI + 0x8],0x0
005f67e7  MOV EAX,ESI
005f67e9  POP ESI
005f67ea  RET
