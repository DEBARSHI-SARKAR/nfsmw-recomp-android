006c0a30  MOV EAX,ECX
006c0a32  XOR ECX,ECX
006c0a34  MOV EDX,0x42800000
006c0a39  MOV dword ptr [EAX + 0x10],EDX
006c0a3c  MOV dword ptr [EAX + 0x20],EDX
006c0a3f  MOV dword ptr [EAX + 0x24],EDX
006c0a42  MOV dword ptr [EAX + 0x34],EDX
006c0a45  MOV EDX,0x80808080
006c0a4a  MOV dword ptr [EAX + 0x80],EDX
006c0a50  MOV dword ptr [EAX + 0x84],EDX
006c0a56  MOV dword ptr [EAX + 0x88],EDX
006c0a5c  MOV dword ptr [EAX + 0x8c],EDX
006c0a62  MOV EDX,0x3f800000
006c0a67  MOV dword ptr [EAX],ECX
006c0a69  MOV dword ptr [EAX + 0x4],ECX
006c0a6c  MOV dword ptr [EAX + 0x8],ECX
006c0a6f  MOV dword ptr [EAX + 0x14],ECX
006c0a72  MOV dword ptr [EAX + 0x18],ECX
006c0a75  MOV dword ptr [EAX + 0x28],ECX
006c0a78  MOV dword ptr [EAX + 0x30],ECX
006c0a7b  MOV dword ptr [EAX + 0x38],ECX
006c0a7e  MOV dword ptr [EAX + 0x40],ECX
006c0a81  MOV dword ptr [EAX + 0x44],ECX
006c0a84  MOV dword ptr [EAX + 0x48],EDX
006c0a87  MOV dword ptr [EAX + 0x4c],ECX
006c0a8a  MOV dword ptr [EAX + 0x50],EDX
006c0a8d  MOV dword ptr [EAX + 0x54],EDX
006c0a90  MOV dword ptr [EAX + 0x58],ECX
006c0a93  MOV dword ptr [EAX + 0x5c],EDX
006c0a96  MOV byte ptr [EAX + 0x90],CL
006c0a9c  RET
