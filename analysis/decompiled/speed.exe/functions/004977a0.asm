004977a0  MOV EAX,ECX
004977a2  XOR ECX,ECX
004977a4  OR EDX,0xffffffff
004977a7  MOV dword ptr [EAX + 0x4],ECX
004977aa  MOV dword ptr [EAX + 0xc],ECX
004977ad  MOV dword ptr [EAX],0x895908
004977b3  MOV dword ptr [EAX + 0x10],ECX
004977b6  MOV dword ptr [EAX + 0x14],ECX
004977b9  MOV dword ptr [EAX + 0x18],EDX
004977bc  MOV dword ptr [EAX + 0x1c],EDX
004977bf  MOV dword ptr [EAX + 0x20],ECX
004977c2  MOV dword ptr [EAX + 0x24],ECX
004977c5  MOV dword ptr [EAX + 0x28],ECX
004977c8  MOV dword ptr [EAX + 0x2c],ECX
004977cb  MOV dword ptr [EAX + 0x8],0x13
004977d2  RET
