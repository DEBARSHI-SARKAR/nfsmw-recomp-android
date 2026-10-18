006dc4b0  PUSH -0x1
006dc4b2  PUSH 0x87e4a8
006dc4b7  MOV EAX,FS:[0x0]
006dc4bd  PUSH EAX
006dc4be  MOV dword ptr FS:[0x0],ESP
006dc4c5  PUSH ECX
006dc4c6  PUSH ESI
006dc4c7  MOV ESI,ECX
006dc4c9  MOV dword ptr [ESP + 0x4],ESI
006dc4cd  MOV EAX,dword ptr [ESI + 0x8]
006dc4d0  PUSH EAX
006dc4d1  MOV dword ptr [ESP + 0x14],0x0
006dc4d9  CALL 0x00466330
006dc4de  ADD ESP,0x4
006dc4e1  MOV ECX,ESI
006dc4e3  MOV dword ptr [ESI + 0x8],0x0
006dc4ea  MOV dword ptr [ESP + 0x10],0xffffffff
006dc4f2  CALL 0x006d9a00
006dc4f7  MOV ECX,dword ptr [ESP + 0x8]
006dc4fb  POP ESI
006dc4fc  MOV dword ptr FS:[0x0],ECX
006dc503  ADD ESP,0x10
006dc506  RET
