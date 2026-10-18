006d64a0  PUSH ESI
006d64a1  MOV ESI,ECX
006d64a3  MOV EAX,dword ptr [ESI + 0x44]
006d64a6  PUSH EAX
006d64a7  MOV dword ptr [ESI],0x8af1f8
006d64ad  CALL 0x00652b00
006d64b2  MOV EAX,dword ptr [ESI + 0x48]
006d64b5  ADD ESP,0x4
006d64b8  TEST EAX,EAX
006d64ba  JZ 0x006d64d5
006d64bc  MOV ECX,dword ptr [EAX]
006d64be  PUSH EAX
006d64bf  CALL dword ptr [ECX + 0x114]
006d64c5  MOV EAX,dword ptr [ESI + 0x48]
006d64c8  MOV EDX,dword ptr [EAX]
006d64ca  PUSH EAX
006d64cb  CALL dword ptr [EDX + 0x8]
006d64ce  MOV dword ptr [ESI + 0x48],0x0
006d64d5  MOV EAX,dword ptr [ESI + 0x4c]
006d64d8  TEST EAX,EAX
006d64da  JZ 0x006d64e9
006d64dc  MOV ECX,dword ptr [EAX]
006d64de  PUSH EAX
006d64df  CALL dword ptr [ECX + 0x8]
006d64e2  MOV dword ptr [ESI + 0x4c],0x0
006d64e9  POP ESI
006d64ea  RET
