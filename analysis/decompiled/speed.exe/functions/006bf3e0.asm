006bf3e0  SUB ESP,0x48
006bf3e3  PUSH EBX
006bf3e4  XOR EBX,EBX
006bf3e6  MOV AL,0x2
006bf3e8  PUSH 0x93cb2c
006bf3ed  MOV byte ptr [ESP + 0x2c],AL
006bf3f1  MOV byte ptr [ESP + 0x34],AL
006bf3f5  MOV EAX,[0x00982bdc]
006bf3fa  LEA EDX,[ESP + 0x28]
006bf3fe  PUSH EDX
006bf3ff  MOV word ptr [ESP + 0x2c],BX
006bf404  MOV word ptr [ESP + 0x2e],BX
006bf409  MOV byte ptr [ESP + 0x31],BL
006bf40d  MOV byte ptr [ESP + 0x32],BL
006bf411  MOV byte ptr [ESP + 0x33],BL
006bf415  MOV word ptr [ESP + 0x34],BX
006bf41a  MOV word ptr [ESP + 0x36],0xc
006bf421  MOV byte ptr [ESP + 0x39],BL
006bf425  MOV byte ptr [ESP + 0x3a],0x3
006bf42a  MOV byte ptr [ESP + 0x3b],BL
006bf42e  MOV word ptr [ESP + 0x3c],BX
006bf433  MOV word ptr [ESP + 0x3e],0x18
006bf43a  MOV byte ptr [ESP + 0x40],0x4
006bf43f  MOV byte ptr [ESP + 0x41],BL
006bf443  MOV byte ptr [ESP + 0x42],0xa
006bf448  MOV byte ptr [ESP + 0x43],BL
006bf44c  MOV word ptr [ESP + 0x44],BX
006bf451  MOV word ptr [ESP + 0x46],0x1c
006bf458  MOV byte ptr [ESP + 0x48],0x1
006bf45d  MOV byte ptr [ESP + 0x49],BL
006bf461  MOV byte ptr [ESP + 0x4a],0x5
006bf466  MOV byte ptr [ESP + 0x4b],BL
006bf46a  MOV word ptr [ESP + 0x4c],0xff
006bf471  MOV word ptr [ESP + 0x4e],BX
006bf476  MOV byte ptr [ESP + 0x50],0x11
006bf47b  MOV byte ptr [ESP + 0x51],BL
006bf47f  MOV byte ptr [ESP + 0x52],BL
006bf483  MOV byte ptr [ESP + 0x53],BL
006bf487  MOV ECX,dword ptr [EAX]
006bf489  PUSH EAX
006bf48a  CALL dword ptr [ECX + 0x158]
006bf490  MOV EAX,[0x00982bdc]
006bf495  PUSH 0x93cc60
006bf49a  LEA EDX,[ESP + 0x8]
006bf49e  PUSH EDX
006bf49f  MOV word ptr [ESP + 0xc],BX
006bf4a4  MOV word ptr [ESP + 0xe],BX
006bf4a9  MOV byte ptr [ESP + 0x10],0x3
006bf4ae  MOV byte ptr [ESP + 0x11],BL
006bf4b2  MOV byte ptr [ESP + 0x12],0x9
006bf4b7  MOV byte ptr [ESP + 0x13],BL
006bf4bb  MOV word ptr [ESP + 0x14],BX
006bf4c0  MOV word ptr [ESP + 0x16],0x10
006bf4c7  MOV byte ptr [ESP + 0x18],0x4
006bf4cc  MOV byte ptr [ESP + 0x19],BL
006bf4d0  MOV byte ptr [ESP + 0x1a],0xa
006bf4d5  MOV byte ptr [ESP + 0x1b],BL
006bf4d9  MOV word ptr [ESP + 0x1c],BX
006bf4de  MOV word ptr [ESP + 0x1e],0x14
006bf4e5  MOV byte ptr [ESP + 0x20],0x1
006bf4ea  MOV byte ptr [ESP + 0x21],BL
006bf4ee  MOV byte ptr [ESP + 0x22],0x5
006bf4f3  MOV byte ptr [ESP + 0x23],BL
006bf4f7  MOV word ptr [ESP + 0x24],0xff
006bf4fe  MOV word ptr [ESP + 0x26],BX
006bf503  MOV byte ptr [ESP + 0x28],0x11
006bf508  MOV byte ptr [ESP + 0x29],BL
006bf50c  MOV byte ptr [ESP + 0x2a],BL
006bf510  MOV byte ptr [ESP + 0x2b],BL
006bf514  MOV ECX,dword ptr [EAX]
006bf516  PUSH EAX
006bf517  CALL dword ptr [ECX + 0x158]
006bf51d  POP EBX
006bf51e  ADD ESP,0x48
006bf521  RET
