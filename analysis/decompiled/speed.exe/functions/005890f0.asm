005890f0  MOV DL,byte ptr [ESP + 0x4]
005890f4  MOV EAX,ECX
005890f6  XOR ECX,ECX
005890f8  MOV dword ptr [EAX + 0xc],ECX
005890fb  MOV dword ptr [EAX + 0x10],ECX
005890fe  MOV dword ptr [EAX + 0x14],ECX
00589101  MOV dword ptr [EAX + 0x18],ECX
00589104  MOV dword ptr [EAX + 0x1c],0xc38a0000
0058910b  MOV dword ptr [EAX + 0x20],0xc1200000
00589112  MOV dword ptr [EAX + 0x24],ECX
00589115  MOV byte ptr [EAX + 0x28],DL
00589118  MOV byte ptr [EAX + 0x29],CL
0058911b  MOV byte ptr [EAX + 0x2a],CL
0058911e  MOV dword ptr [EAX],0x8a139c
00589124  MOV dword ptr [EAX + 0x2c],ECX
00589127  MOV dword ptr [EAX + 0x30],ECX
0058912a  MOV dword ptr [EAX + 0x34],ECX
0058912d  RET 0x4
