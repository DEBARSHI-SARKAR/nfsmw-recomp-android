00497080  MOV EAX,ECX
00497082  XOR ECX,ECX
00497084  OR EDX,0xffffffff
00497087  MOV dword ptr [EAX + 0x4],ECX
0049708a  MOV dword ptr [EAX + 0xc],ECX
0049708d  MOV dword ptr [EAX],0x8958b8
00497093  MOV dword ptr [EAX + 0x10],ECX
00497096  MOV dword ptr [EAX + 0x14],ECX
00497099  MOV dword ptr [EAX + 0x18],EDX
0049709c  MOV dword ptr [EAX + 0x1c],EDX
0049709f  MOV dword ptr [EAX + 0x20],ECX
004970a2  MOV dword ptr [EAX + 0x24],ECX
004970a5  MOV dword ptr [EAX + 0x28],EDX
004970a8  MOV dword ptr [EAX + 0x2c],ECX
004970ab  MOV dword ptr [EAX + 0x30],ECX
004970ae  MOV dword ptr [EAX + 0x34],ECX
004970b1  MOV dword ptr [EAX + 0x38],ECX
004970b4  MOV dword ptr [EAX + 0x3c],ECX
004970b7  MOV dword ptr [EAX + 0x8],0x12
004970be  RET
