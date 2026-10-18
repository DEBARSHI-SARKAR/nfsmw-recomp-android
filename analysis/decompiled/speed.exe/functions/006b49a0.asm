006b49a0  PUSH -0x1
006b49a2  PUSH 0x87d618
006b49a7  MOV EAX,FS:[0x0]
006b49ad  PUSH EAX
006b49ae  MOV dword ptr FS:[0x0],ESP
006b49b5  PUSH ECX
006b49b6  MOV EAX,dword ptr [ESP + 0x14]
006b49ba  PUSH ESI
006b49bb  PUSH 0x2
006b49bd  MOV ESI,ECX
006b49bf  PUSH EAX
006b49c0  MOV dword ptr [ESP + 0xc],ESI
006b49c4  CALL 0x006b45c0
006b49c9  MOV EAX,dword ptr [ESI + 0x34]
006b49cc  MOV dword ptr [ESI],0x8ac0b4
006b49d2  MOV dword ptr [ESI + 0x8],0x8ac0ac
006b49d9  MOV dword ptr [ESI + 0x4c],0x8ac0a4
006b49e0  MOV dword ptr [ESI + 0x54],0x8ac09c
006b49e7  MOV ECX,dword ptr [EAX + 0x4]
006b49ea  PUSH 0x4038e0
006b49ef  MOV dword ptr [ESP + 0x14],0x0
006b49f7  CALL 0x005d59f0
006b49fc  MOV dword ptr [ESI + 0x98],EAX
006b4a02  MOV EAX,dword ptr [ESI + 0x34]
006b4a05  MOV ECX,dword ptr [EAX + 0x4]
006b4a08  PUSH 0x620fd0
006b4a0d  CALL 0x005d59f0
006b4a12  MOV ECX,dword ptr [ESP + 0x8]
006b4a16  MOV dword ptr [ESI + 0x9c],EAX
006b4a1c  MOV EAX,ESI
006b4a1e  POP ESI
006b4a1f  MOV dword ptr FS:[0x0],ECX
006b4a26  ADD ESP,0x10
006b4a29  RET 0x4
