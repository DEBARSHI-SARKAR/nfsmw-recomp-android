005ea9d0  PUSH ESI
005ea9d1  MOV ESI,ECX
005ea9d3  CALL 0x005e6e40
005ea9d8  MOV dword ptr [ESI + 0x4],EAX
005ea9db  MOV byte ptr [EAX + 0xf],0x1
005ea9df  MOV EAX,dword ptr [ESI + 0x4]
005ea9e2  MOV dword ptr [EAX + 0x4],EAX
005ea9e5  MOV EAX,dword ptr [ESI + 0x4]
005ea9e8  MOV dword ptr [EAX],EAX
005ea9ea  MOV EAX,dword ptr [ESI + 0x4]
005ea9ed  MOV dword ptr [EAX + 0x8],EAX
005ea9f0  MOV dword ptr [ESI + 0x8],0x0
005ea9f7  POP ESI
005ea9f8  RET
