00467a80  MOV EAX,ECX
00467a82  MOV EDX,dword ptr [ESP + 0x8]
00467a86  XOR ECX,ECX
00467a88  MOV dword ptr [EAX + 0x24],EDX
00467a8b  MOV DX,word ptr [ESP + 0x4]
00467a90  MOV dword ptr [EAX],ECX
00467a92  MOV dword ptr [EAX + 0x4],ECX
00467a95  MOV dword ptr [EAX + 0x8],ECX
00467a98  MOV dword ptr [EAX + 0xc],ECX
00467a9b  MOV dword ptr [EAX + 0x20],ECX
00467a9e  MOV word ptr [EAX + 0x28],CX
00467aa2  MOV word ptr [EAX + 0x2a],DX
00467aa6  MOV dword ptr [EAX + 0x10],ECX
00467aa9  MOV dword ptr [EAX + 0x14],ECX
00467aac  MOV dword ptr [EAX + 0x18],ECX
00467aaf  MOV dword ptr [EAX + 0x1c],ECX
00467ab2  MOV dword ptr [EAX + 0x2c],ECX
00467ab5  MOV dword ptr [EAX + 0x30],ECX
00467ab8  MOV dword ptr [EAX + 0x34],ECX
00467abb  MOV dword ptr [EAX + 0x38],ECX
00467abe  MOV dword ptr [EAX + 0x4c],ECX
00467ac1  MOV word ptr [EAX + 0x54],CX
00467ac5  MOV word ptr [EAX + 0x56],DX
00467ac9  MOV dword ptr [EAX + 0x3c],ECX
00467acc  MOV dword ptr [EAX + 0x40],ECX
00467acf  MOV dword ptr [EAX + 0x44],ECX
00467ad2  MOV dword ptr [EAX + 0x48],ECX
00467ad5  PUSH ESI
00467ad6  MOV ESI,dword ptr [ESP + 0xc]
00467ada  MOV dword ptr [EAX + 0x50],ESI
00467add  MOV dword ptr [EAX + 0x7c],ESI
00467ae0  MOV dword ptr [EAX + 0x58],ECX
00467ae3  MOV dword ptr [EAX + 0x5c],ECX
00467ae6  MOV dword ptr [EAX + 0x60],ECX
00467ae9  MOV dword ptr [EAX + 0x64],ECX
00467aec  MOV dword ptr [EAX + 0x78],ECX
00467aef  MOV word ptr [EAX + 0x80],CX
00467af6  MOV word ptr [EAX + 0x82],DX
00467afd  MOV dword ptr [EAX + 0x68],ECX
00467b00  MOV dword ptr [EAX + 0x6c],ECX
00467b03  MOV dword ptr [EAX + 0x70],ECX
00467b06  MOV dword ptr [EAX + 0x74],ECX
00467b09  POP ESI
00467b0a  RET 0x8
