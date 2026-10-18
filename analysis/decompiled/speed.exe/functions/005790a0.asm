005790a0  MOV EAX,ECX
005790a2  MOV ECX,dword ptr [ESP + 0x4]
005790a6  MOV EDX,dword ptr [ECX]
005790a8  MOV dword ptr [EAX],EDX
005790aa  MOV ECX,dword ptr [ECX + 0x4]
005790ad  MOV dword ptr [EAX + 0x4],ECX
005790b0  RET 0x4
