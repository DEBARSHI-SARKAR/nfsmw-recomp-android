005ee5d0  PUSH ESI
005ee5d1  MOV ESI,ECX
005ee5d3  CALL 0x005e6dc0
005ee5d8  MOV dword ptr [ESI + 0x4],EAX
005ee5db  MOV byte ptr [EAX + 0x21],0x1
005ee5df  MOV EAX,dword ptr [ESI + 0x4]
005ee5e2  MOV dword ptr [EAX + 0x4],EAX
005ee5e5  MOV EAX,dword ptr [ESI + 0x4]
005ee5e8  MOV dword ptr [EAX],EAX
005ee5ea  MOV EAX,dword ptr [ESI + 0x4]
005ee5ed  MOV dword ptr [EAX + 0x8],EAX
005ee5f0  MOV dword ptr [ESI + 0x8],0x0
005ee5f7  MOV EAX,ESI
005ee5f9  POP ESI
005ee5fa  RET 0x8
