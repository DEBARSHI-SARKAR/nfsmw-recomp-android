005f33e0  PUSH ESI
005f33e1  MOV ESI,ECX
005f33e3  MOV EAX,dword ptr [ESI + 0x4]
005f33e6  MOV ECX,dword ptr [EAX + 0x4]
005f33e9  PUSH ECX
005f33ea  MOV ECX,ESI
005f33ec  CALL 0x005f2530
005f33f1  MOV EAX,dword ptr [ESI + 0x4]
005f33f4  MOV dword ptr [EAX + 0x4],EAX
005f33f7  MOV EAX,dword ptr [ESI + 0x4]
005f33fa  MOV dword ptr [ESI + 0x8],0x0
005f3401  MOV dword ptr [EAX],EAX
005f3403  MOV ESI,dword ptr [ESI + 0x4]
005f3406  MOV dword ptr [ESI + 0x8],ESI
005f3409  POP ESI
005f340a  RET
