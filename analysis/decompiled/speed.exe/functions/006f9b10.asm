006f9b10  PUSH ECX
006f9b11  MOV EDX,dword ptr [ESP + 0xc]
006f9b15  PUSH ESI
006f9b16  MOV ESI,ECX
006f9b18  MOV ECX,dword ptr [ESP + 0xc]
006f9b1c  SUB ESP,0x10
006f9b1f  MOV EAX,ESP
006f9b21  MOV dword ptr [EAX],ECX
006f9b23  MOV ECX,dword ptr [ESP + 0x24]
006f9b27  MOV dword ptr [EAX + 0x4],EDX
006f9b2a  MOV dword ptr [EAX + 0x8],ECX
006f9b2d  MOV ECX,ESI
006f9b2f  MOV dword ptr [ESP + 0x14],ESP
006f9b33  CALL 0x006f9800
006f9b38  MOV dword ptr [ESI],0x8b0a50
006f9b3e  MOV dword ptr [ESI + 0x8],0x8b0a48
006f9b45  MOV dword ptr [ESI + 0x2c],0x8b0a34
006f9b4c  MOV dword ptr [ESI + 0x38],0x8b0a18
006f9b53  MOV dword ptr [ESI + 0x48],0x8b0a10
006f9b5a  MOV dword ptr [ESI + 0x50],0x8b0a04
006f9b61  MOV dword ptr [ESI + 0x58],0x8b09f4
006f9b68  MOV dword ptr [ESI + 0x60],0x8b09e8
006f9b6f  MOV EAX,ESI
006f9b71  POP ESI
006f9b72  POP ECX
006f9b73  RET 0x10
