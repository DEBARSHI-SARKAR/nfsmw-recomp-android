005b2e10  MOV EAX,ECX
005b2e12  MOV ECX,dword ptr [ESP + 0x4]
005b2e16  MOV EDX,dword ptr [ECX + 0xc]
005b2e19  MOV dword ptr [EAX + 0xc],EDX
005b2e1c  MOV EDX,dword ptr [ECX + 0x8]
005b2e1f  MOV dword ptr [EAX + 0x8],EDX
005b2e22  MOV EDX,dword ptr [ECX + 0x4]
005b2e25  MOV dword ptr [EAX + 0x4],EDX
005b2e28  MOV ECX,dword ptr [ECX]
005b2e2a  MOV dword ptr [EAX],ECX
005b2e2c  RET 0x4
