004de1e0  PUSH ESI
004de1e1  MOV ESI,ECX
004de1e3  MOV ECX,dword ptr [ESI + 0x28]
004de1e6  TEST ECX,ECX
004de1e8  JZ 0x004de1f0
004de1ea  MOV EAX,dword ptr [ECX]
004de1ec  PUSH 0x1
004de1ee  CALL dword ptr [EAX]
004de1f0  MOV dword ptr [ESI + 0x28],0x0
004de1f7  POP ESI
004de1f8  RET
