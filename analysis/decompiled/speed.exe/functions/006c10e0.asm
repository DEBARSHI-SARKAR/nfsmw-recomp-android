006c10e0  MOV EAX,ECX
006c10e2  XOR ECX,ECX
006c10e4  MOV dword ptr [EAX],ECX
006c10e6  MOV dword ptr [EAX + 0x4],ECX
006c10e9  MOV dword ptr [EAX + 0x8],ECX
006c10ec  MOV dword ptr [EAX + 0x10],0x80808080
006c10f3  MOV dword ptr [EAX + 0x14],ECX
006c10f6  MOV dword ptr [EAX + 0x18],ECX
006c10f9  MOV EDX,0x3f800000
006c10fe  MOV dword ptr [EAX + 0x1c],EDX
006c1101  MOV dword ptr [EAX + 0x20],EDX
006c1104  MOV dword ptr [EAX + 0x30],EDX
006c1107  MOV dword ptr [EAX + 0x34],ECX
006c110a  MOV dword ptr [EAX + 0x38],ECX
006c110d  MOV dword ptr [EAX + 0x40],ECX
006c1110  MOV dword ptr [EAX + 0x44],ECX
006c1113  MOV dword ptr [EAX + 0x48],EDX
006c1116  RET
