004dd9d0  PUSH ESI
004dd9d1  MOV ESI,dword ptr [ESP + 0x8]
004dd9d5  MOV EAX,dword ptr [ESI]
004dd9d7  PUSH EDI
004dd9d8  MOV EDI,ECX
004dd9da  MOV ECX,ESI
004dd9dc  CALL dword ptr [EAX + 0x4]
004dd9df  TEST dword ptr [EAX],0xfff0
004dd9e5  JNZ 0x004dd9ea
004dd9e7  MOV dword ptr [EDI + 0x4c],ESI
004dd9ea  POP EDI
004dd9eb  POP ESI
004dd9ec  RET 0x4
