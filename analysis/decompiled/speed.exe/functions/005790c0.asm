005790c0  MOV EAX,ECX
005790c2  MOV ECX,dword ptr [ESP + 0x4]
005790c6  MOV EDX,dword ptr [ECX]
005790c8  MOV dword ptr [EAX],EDX
005790ca  MOV ECX,dword ptr [ECX + 0x4]
005790cd  MOV dword ptr [EAX + 0x4],ECX
005790d0  RET 0x4
