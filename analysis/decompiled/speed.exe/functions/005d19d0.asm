005d19d0  MOV EAX,dword ptr [ESP + 0x8]
005d19d4  MOV ECX,dword ptr [ESP + 0x4]
005d19d8  MOV EDX,dword ptr [EAX]
005d19da  PUSH ESI
005d19db  CMP EDX,dword ptr [ECX]
005d19dd  PUSH EDI
005d19de  JNC 0x005d19f2
005d19e0  MOV EDI,dword ptr [ECX]
005d19e2  MOV ESI,dword ptr [EAX + 0x4]
005d19e5  MOV dword ptr [EAX],EDI
005d19e7  MOV EDI,dword ptr [ECX + 0x4]
005d19ea  MOV dword ptr [EAX + 0x4],EDI
005d19ed  MOV dword ptr [ECX],EDX
005d19ef  MOV dword ptr [ECX + 0x4],ESI
005d19f2  MOV EDX,dword ptr [ESP + 0x14]
005d19f6  MOV ESI,dword ptr [EDX]
005d19f8  CMP ESI,dword ptr [EAX]
005d19fa  JNC 0x005d1a10
005d19fc  MOV EDI,dword ptr [EDX + 0x4]
005d19ff  PUSH EBX
005d1a00  MOV EBX,dword ptr [EAX]
005d1a02  MOV dword ptr [EDX],EBX
005d1a04  MOV EBX,dword ptr [EAX + 0x4]
005d1a07  MOV dword ptr [EDX + 0x4],EBX
005d1a0a  MOV dword ptr [EAX],ESI
005d1a0c  MOV dword ptr [EAX + 0x4],EDI
005d1a0f  POP EBX
005d1a10  MOV EDX,dword ptr [EAX]
005d1a12  CMP EDX,dword ptr [ECX]
005d1a14  JNC 0x005d1a28
005d1a16  MOV EDI,dword ptr [ECX]
005d1a18  MOV ESI,dword ptr [EAX + 0x4]
005d1a1b  MOV dword ptr [EAX],EDI
005d1a1d  MOV EDI,dword ptr [ECX + 0x4]
005d1a20  MOV dword ptr [EAX + 0x4],EDI
005d1a23  MOV dword ptr [ECX],EDX
005d1a25  MOV dword ptr [ECX + 0x4],ESI
005d1a28  POP EDI
005d1a29  POP ESI
005d1a2a  RET
