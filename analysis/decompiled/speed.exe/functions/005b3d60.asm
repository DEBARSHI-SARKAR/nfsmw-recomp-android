005b3d60  MOV EAX,ECX
005b3d62  MOV ECX,0xabadcafe
005b3d67  MOV dword ptr [EAX + 0x4],ECX
005b3d6a  MOV dword ptr [EAX + 0x8],ECX
005b3d6d  XOR ECX,ECX
005b3d6f  MOV dword ptr [EAX],0x8a2cec
005b3d75  MOV dword ptr [EAX + 0x24],ECX
005b3d78  MOV dword ptr [EAX + 0x28],ECX
005b3d7b  MOV dword ptr [EAX + 0x2c],ECX
005b3d7e  MOV dword ptr [EAX + 0x30],ECX
005b3d81  MOV dword ptr [EAX + 0xc],ECX
005b3d84  MOV dword ptr [EAX + 0x14],ECX
005b3d87  MOV dword ptr [EAX + 0x18],ECX
005b3d8a  MOV dword ptr [EAX + 0x1c],ECX
005b3d8d  MOV dword ptr [EAX + 0x20],ECX
005b3d90  RET
