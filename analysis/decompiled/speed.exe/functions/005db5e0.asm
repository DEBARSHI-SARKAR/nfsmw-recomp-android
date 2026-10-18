005db5e0  MOV EAX,dword ptr [ESP + 0x4]
005db5e4  ADD ECX,0x58
005db5e7  MOV EDX,dword ptr [ECX]
005db5e9  MOV dword ptr [EAX],EDX
005db5eb  MOV EDX,dword ptr [ECX + 0x4]
005db5ee  MOV dword ptr [EAX + 0x4],EDX
005db5f1  MOV ECX,dword ptr [ECX + 0x8]
005db5f4  MOV dword ptr [EAX + 0x8],ECX
005db5f7  RET 0x4
