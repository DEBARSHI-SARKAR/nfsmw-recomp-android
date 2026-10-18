0046a300  MOV EAX,ECX
0046a302  MOV EDX,dword ptr [ESP + 0x8]
0046a306  XOR ECX,ECX
0046a308  MOV dword ptr [EAX + 0x24],EDX
0046a30b  MOV DX,word ptr [ESP + 0x4]
0046a310  MOV dword ptr [EAX],ECX
0046a312  MOV dword ptr [EAX + 0x4],ECX
0046a315  MOV dword ptr [EAX + 0x8],ECX
0046a318  MOV dword ptr [EAX + 0xc],ECX
0046a31b  MOV dword ptr [EAX + 0x20],ECX
0046a31e  MOV word ptr [EAX + 0x28],CX
0046a322  MOV word ptr [EAX + 0x2a],DX
0046a326  MOV dword ptr [EAX + 0x10],ECX
0046a329  MOV dword ptr [EAX + 0x14],ECX
0046a32c  MOV dword ptr [EAX + 0x18],ECX
0046a32f  MOV dword ptr [EAX + 0x1c],ECX
0046a332  MOV dword ptr [EAX + 0x2c],ECX
0046a335  MOV dword ptr [EAX + 0x30],ECX
0046a338  MOV dword ptr [EAX + 0x34],ECX
0046a33b  MOV dword ptr [EAX + 0x38],ECX
0046a33e  MOV dword ptr [EAX + 0x4c],ECX
0046a341  MOV word ptr [EAX + 0x54],CX
0046a345  MOV word ptr [EAX + 0x56],DX
0046a349  MOV dword ptr [EAX + 0x3c],ECX
0046a34c  MOV dword ptr [EAX + 0x40],ECX
0046a34f  MOV dword ptr [EAX + 0x44],ECX
0046a352  MOV dword ptr [EAX + 0x48],ECX
0046a355  PUSH ESI
0046a356  MOV ESI,dword ptr [ESP + 0xc]
0046a35a  MOV dword ptr [EAX + 0x50],ESI
0046a35d  MOV dword ptr [EAX + 0x7c],ESI
0046a360  MOV dword ptr [EAX + 0x58],ECX
0046a363  MOV dword ptr [EAX + 0x5c],ECX
0046a366  MOV dword ptr [EAX + 0x60],ECX
0046a369  MOV dword ptr [EAX + 0x64],ECX
0046a36c  MOV dword ptr [EAX + 0x78],ECX
0046a36f  MOV word ptr [EAX + 0x80],CX
0046a376  MOV word ptr [EAX + 0x82],DX
0046a37d  MOV dword ptr [EAX + 0x68],ECX
0046a380  MOV dword ptr [EAX + 0x6c],ECX
0046a383  MOV dword ptr [EAX + 0x70],ECX
0046a386  MOV dword ptr [EAX + 0x74],ECX
0046a389  POP ESI
0046a38a  RET 0x8
