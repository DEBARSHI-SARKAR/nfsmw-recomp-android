007620b0  SUB ESP,0x10
007620b3  MOV EAX,dword ptr [ESP + 0x18]
007620b7  MOV ECX,dword ptr [EAX]
007620b9  MOV EDX,dword ptr [EAX + 0x4]
007620bc  MOV EAX,dword ptr [EAX + 0x8]
007620bf  MOV dword ptr [ESP],ECX
007620c2  MOV ECX,dword ptr [ESP + 0x1c]
007620c6  MOV dword ptr [ESP + 0x4],EDX
007620ca  MOV dword ptr [ESP + 0x8],EAX
007620ce  MOV EAX,dword ptr [ESP + 0x14]
007620d2  MOV dword ptr [ESP + 0xc],ECX
007620d6  MOV ECX,dword ptr [ESP]
007620d9  MOV EDX,EAX
007620db  MOV dword ptr [EDX],ECX
007620dd  MOV ECX,dword ptr [ESP + 0x4]
007620e1  MOV dword ptr [EDX + 0x4],ECX
007620e4  MOV ECX,dword ptr [ESP + 0x8]
007620e8  MOV dword ptr [EDX + 0x8],ECX
007620eb  MOV ECX,dword ptr [ESP + 0xc]
007620ef  MOV dword ptr [EDX + 0xc],ECX
007620f2  ADD ESP,0x10
007620f5  RET
