005777a0  MOV EAX,ECX
005777a2  MOV ECX,dword ptr [ESP + 0x4]
005777a6  MOV EDX,dword ptr [ECX]
005777a8  MOV ECX,dword ptr [ESP + 0x8]
005777ac  MOV dword ptr [EAX],EDX
005777ae  MOV EDX,dword ptr [ECX]
005777b0  MOV dword ptr [EAX + 0x4],EDX
005777b3  RET 0x8
