004da7a0  PUSH ESI
004da7a1  MOV ESI,ECX
004da7a3  MOV ECX,dword ptr [ESP + 0x8]
004da7a7  MOV EAX,dword ptr [ECX + 0x14]
004da7aa  CMP EAX,0x2
004da7ad  JZ 0x004da7cc
004da7af  CMP EAX,0x3
004da7b2  JZ 0x004da7cc
004da7b4  CMP EAX,0x4
004da7b7  JZ 0x004da7cc
004da7b9  CMP EAX,0xc
004da7bc  JZ 0x004da7cc
004da7be  CMP EAX,0x5
004da7c1  JZ 0x004da7cc
004da7c3  MOV dword ptr [ESI + 0x18],0x0
004da7ca  JMP 0x004da7cf
004da7cc  MOV dword ptr [ESI + 0x18],ECX
004da7cf  MOV dword ptr [ESI + 0x14],ECX
004da7d2  MOV ECX,dword ptr [ESI + 0x18]
004da7d5  MOV EAX,dword ptr [ECX]
004da7d7  CALL dword ptr [EAX + 0x40]
004da7da  MOV ECX,dword ptr [ESI + 0x18]
004da7dd  ADD ECX,0xd0
004da7e3  MOV dword ptr [ESI + 0x24],EAX
004da7e6  MOV dword ptr [ESI + 0x34],ECX
004da7e9  POP ESI
004da7ea  RET 0x4
