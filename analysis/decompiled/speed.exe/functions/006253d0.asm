006253d0  MOV DL,byte ptr [ESP + 0x8]
006253d4  MOV EAX,ECX
006253d6  MOV ECX,dword ptr [ESP + 0x4]
006253da  MOV dword ptr [EAX + 0x4],0x10
006253e1  MOV dword ptr [EAX],0x8a7590
006253e7  MOV dword ptr [EAX + 0x8],ECX
006253ea  MOV byte ptr [EAX + 0xc],DL
006253ed  RET 0x8
