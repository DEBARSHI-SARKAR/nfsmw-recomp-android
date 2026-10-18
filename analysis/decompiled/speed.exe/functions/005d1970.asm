005d1970  MOV EAX,dword ptr [ESP + 0x8]
005d1974  MOV ECX,dword ptr [ESP + 0x4]
005d1978  MOV EDX,dword ptr [EAX]
005d197a  PUSH ESI
005d197b  CMP EDX,dword ptr [ECX]
005d197d  PUSH EDI
005d197e  JNC 0x005d1992
005d1980  MOV EDI,dword ptr [ECX]
005d1982  MOV ESI,dword ptr [EAX + 0x4]
005d1985  MOV dword ptr [EAX],EDI
005d1987  MOV EDI,dword ptr [ECX + 0x4]
005d198a  MOV dword ptr [EAX + 0x4],EDI
005d198d  MOV dword ptr [ECX],EDX
005d198f  MOV dword ptr [ECX + 0x4],ESI
005d1992  MOV EDX,dword ptr [ESP + 0x14]
005d1996  MOV ESI,dword ptr [EDX]
005d1998  CMP ESI,dword ptr [EAX]
005d199a  JNC 0x005d19b0
005d199c  MOV EDI,dword ptr [EDX + 0x4]
005d199f  PUSH EBX
005d19a0  MOV EBX,dword ptr [EAX]
005d19a2  MOV dword ptr [EDX],EBX
005d19a4  MOV EBX,dword ptr [EAX + 0x4]
005d19a7  MOV dword ptr [EDX + 0x4],EBX
005d19aa  MOV dword ptr [EAX],ESI
005d19ac  MOV dword ptr [EAX + 0x4],EDI
005d19af  POP EBX
005d19b0  MOV EDX,dword ptr [EAX]
005d19b2  CMP EDX,dword ptr [ECX]
005d19b4  JNC 0x005d19c8
005d19b6  MOV EDI,dword ptr [ECX]
005d19b8  MOV ESI,dword ptr [EAX + 0x4]
005d19bb  MOV dword ptr [EAX],EDI
005d19bd  MOV EDI,dword ptr [ECX + 0x4]
005d19c0  MOV dword ptr [EAX + 0x4],EDI
005d19c3  MOV dword ptr [ECX],EDX
005d19c5  MOV dword ptr [ECX + 0x4],ESI
005d19c8  POP EDI
005d19c9  POP ESI
005d19ca  RET
