005bc050  MOV EAX,ECX
005bc052  MOV dword ptr [EAX],0x8a2df0
005bc058  MOV ECX,0xabadcafe
005bc05d  MOV dword ptr [EAX + 0x4],ECX
005bc060  MOV dword ptr [EAX + 0x8],ECX
005bc063  XOR ECX,ECX
005bc065  MOV dword ptr [EAX + 0x10],ECX
005bc068  MOV dword ptr [EAX + 0x14],ECX
005bc06b  MOV dword ptr [EAX + 0x1c],ECX
005bc06e  MOV word ptr [EAX + 0x20],CX
005bc072  MOV dword ptr [EAX + 0x24],ECX
005bc075  MOV dword ptr [EAX + 0x28],ECX
005bc078  MOV dword ptr [EAX + 0x2c],ECX
005bc07b  MOV dword ptr [EAX + 0x30],ECX
005bc07e  MOV dword ptr [EAX + 0x3c],ECX
005bc081  MOV dword ptr [EAX + 0x40],ECX
005bc084  MOV dword ptr [EAX + 0x38],ECX
005bc087  MOV EDX,0x8a2c18
005bc08c  MOV dword ptr [EAX + 0x34],EDX
005bc08f  MOV dword ptr [EAX + 0x44],EDX
005bc092  MOV dword ptr [EAX + 0x4c],ECX
005bc095  MOV dword ptr [EAX + 0x50],ECX
005bc098  MOV dword ptr [EAX + 0x48],ECX
005bc09b  MOV dword ptr [EAX + 0x58],ECX
005bc09e  MOV ECX,dword ptr [0x008f56c4]
005bc0a4  MOV EDX,ECX
005bc0a6  INC ECX
005bc0a7  MOV dword ptr [0x008f56c4],ECX
005bc0ad  MOV dword ptr [EAX + 0xc],EDX
005bc0b0  RET
