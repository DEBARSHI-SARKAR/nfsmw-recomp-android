007483e0  MOV EAX,ECX
007483e2  MOV ECX,dword ptr [ESP + 0x4]
007483e6  XOR EDX,EDX
007483e8  MOV dword ptr [EAX + 0xc],ECX
007483eb  MOV dword ptr [EAX + 0x18],EDX
007483ee  MOV ECX,dword ptr [ECX]
007483f0  MOV dword ptr [EAX + 0x8],ECX
007483f3  MOV ECX,dword ptr [ESP + 0x8]
007483f7  MOV dword ptr [EAX + 0x10],ECX
007483fa  MOV ECX,dword ptr [ESP + 0xc]
007483fe  MOV dword ptr [EAX + 0x14],ECX
00748401  MOV dword ptr [EAX + 0x1c],EDX
00748404  RET 0xc
