004024e0  MOV EAX,ECX
004024e2  MOV ECX,dword ptr [ESP + 0x4]
004024e6  MOV EDX,dword ptr [ECX + 0xc]
004024e9  MOV dword ptr [EAX + 0xc],EDX
004024ec  MOV EDX,dword ptr [ECX]
004024ee  MOV dword ptr [EAX],EDX
004024f0  MOV EDX,dword ptr [ECX + 0x4]
004024f3  MOV dword ptr [EAX + 0x4],EDX
004024f6  MOV ECX,dword ptr [ECX + 0x8]
004024f9  MOV dword ptr [EAX + 0x8],ECX
004024fc  RET 0x4
