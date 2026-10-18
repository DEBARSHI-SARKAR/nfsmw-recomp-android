005ea8d0  PUSH ESI
005ea8d1  MOV ESI,ECX
005ea8d3  CALL 0x005e6a30
005ea8d8  MOV dword ptr [ESI + 0x4],EAX
005ea8db  MOV byte ptr [EAX + 0x15],0x1
005ea8df  MOV EAX,dword ptr [ESI + 0x4]
005ea8e2  MOV dword ptr [EAX + 0x4],EAX
005ea8e5  MOV EAX,dword ptr [ESI + 0x4]
005ea8e8  MOV dword ptr [EAX],EAX
005ea8ea  MOV EAX,dword ptr [ESI + 0x4]
005ea8ed  MOV dword ptr [EAX + 0x8],EAX
005ea8f0  MOV dword ptr [ESI + 0x8],0x0
005ea8f7  POP ESI
005ea8f8  RET
