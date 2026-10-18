0050dc80  MOV EDX,dword ptr [ESP + 0x8]
0050dc84  MOV EAX,ECX
0050dc86  XOR ECX,ECX
0050dc88  MOV dword ptr [EAX + 0x24],EDX
0050dc8b  MOV DX,word ptr [ESP + 0x4]
0050dc90  MOV dword ptr [EAX],ECX
0050dc92  MOV dword ptr [EAX + 0x4],ECX
0050dc95  MOV dword ptr [EAX + 0x8],ECX
0050dc98  MOV dword ptr [EAX + 0xc],ECX
0050dc9b  MOV dword ptr [EAX + 0x20],ECX
0050dc9e  MOV word ptr [EAX + 0x28],CX
0050dca2  MOV word ptr [EAX + 0x2a],DX
0050dca6  MOV dword ptr [EAX + 0x10],ECX
0050dca9  MOV dword ptr [EAX + 0x14],ECX
0050dcac  MOV dword ptr [EAX + 0x18],ECX
0050dcaf  MOV dword ptr [EAX + 0x1c],ECX
0050dcb2  PUSH ESI
0050dcb3  MOV ESI,dword ptr [ESP + 0xc]
0050dcb7  MOV dword ptr [EAX + 0x50],ESI
0050dcba  MOV dword ptr [EAX + 0x2c],ECX
0050dcbd  MOV dword ptr [EAX + 0x30],ECX
0050dcc0  MOV dword ptr [EAX + 0x34],ECX
0050dcc3  MOV dword ptr [EAX + 0x38],ECX
0050dcc6  MOV dword ptr [EAX + 0x4c],ECX
0050dcc9  MOV word ptr [EAX + 0x54],CX
0050dccd  MOV word ptr [EAX + 0x56],DX
0050dcd1  MOV dword ptr [EAX + 0x3c],ECX
0050dcd4  MOV dword ptr [EAX + 0x40],ECX
0050dcd7  MOV dword ptr [EAX + 0x44],ECX
0050dcda  MOV dword ptr [EAX + 0x48],ECX
0050dcdd  POP ESI
0050dcde  RET 0x8
