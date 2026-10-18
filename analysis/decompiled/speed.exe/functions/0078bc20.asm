0078bc20  MOV EDX,dword ptr [ESP + 0x8]
0078bc24  MOV EAX,ECX
0078bc26  MOV ECX,dword ptr [ESP + 0x4]
0078bc2a  MOV dword ptr [EAX],ECX
0078bc2c  MOV ECX,dword ptr [ESP + 0xc]
0078bc30  MOV dword ptr [EAX + 0x8],ECX
0078bc33  MOV ECX,dword ptr [ESP + 0x14]
0078bc37  MOV dword ptr [EAX + 0x4],EDX
0078bc3a  MOV EDX,dword ptr [ESP + 0x10]
0078bc3e  MOV dword ptr [EAX + 0x10],ECX
0078bc41  MOV ECX,dword ptr [ESP + 0x18]
0078bc45  MOV dword ptr [EAX + 0xc],EDX
0078bc48  MOV EDX,dword ptr [ESP + 0x1c]
0078bc4c  MOV dword ptr [EAX + 0x2c],ECX
0078bc4f  XOR CL,CL
0078bc51  MOV dword ptr [EAX + 0x14],EDX
0078bc54  MOV byte ptr [EAX + 0x30],CL
0078bc57  MOV byte ptr [EAX + 0x18],CL
0078bc5a  RET 0x1c
