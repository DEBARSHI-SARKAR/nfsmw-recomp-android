006d67b0  PUSH ESI
006d67b1  MOV ESI,ECX
006d67b3  MOV EAX,dword ptr [ESI + 0x44]
006d67b6  PUSH EAX
006d67b7  MOV dword ptr [ESI],0x8af1f8
006d67bd  CALL 0x00652b00
006d67c2  MOV EAX,dword ptr [ESI + 0x48]
006d67c5  ADD ESP,0x4
006d67c8  TEST EAX,EAX
006d67ca  JZ 0x006d67e5
006d67cc  MOV ECX,dword ptr [EAX]
006d67ce  PUSH EAX
006d67cf  CALL dword ptr [ECX + 0x114]
006d67d5  MOV EAX,dword ptr [ESI + 0x48]
006d67d8  MOV EDX,dword ptr [EAX]
006d67da  PUSH EAX
006d67db  CALL dword ptr [EDX + 0x8]
006d67de  MOV dword ptr [ESI + 0x48],0x0
006d67e5  MOV EAX,dword ptr [ESI + 0x4c]
006d67e8  TEST EAX,EAX
006d67ea  JZ 0x006d67f9
006d67ec  MOV ECX,dword ptr [EAX]
006d67ee  PUSH EAX
006d67ef  CALL dword ptr [ECX + 0x8]
006d67f2  MOV dword ptr [ESI + 0x4c],0x0
006d67f9  POP ESI
006d67fa  RET
