005b2ea0  MOV EDX,dword ptr [ECX + 0x8]
005b2ea3  MOV EAX,dword ptr [ESP + 0x8]
005b2ea7  PUSH EBX
005b2ea8  MOV EBX,dword ptr [EAX + 0x8]
005b2eab  PUSH ESI
005b2eac  MOV ESI,dword ptr [ECX + 0x4]
005b2eaf  PUSH EDI
005b2eb0  MOV EDI,dword ptr [EAX + 0x4]
005b2eb3  SUB EDX,EBX
005b2eb5  MOV EBX,dword ptr [EAX]
005b2eb7  SUB ESI,EDI
005b2eb9  MOV EDI,dword ptr [ECX]
005b2ebb  MOV ECX,dword ptr [ECX + 0xc]
005b2ebe  SUB EDI,EBX
005b2ec0  MOV EBX,dword ptr [EAX + 0xc]
005b2ec3  MOV EAX,dword ptr [ESP + 0x10]
005b2ec7  SUB ECX,EBX
005b2ec9  MOV EBX,EAX
005b2ecb  MOV dword ptr [EBX],EDI
005b2ecd  MOV dword ptr [EBX + 0x4],ESI
005b2ed0  POP EDI
005b2ed1  MOV dword ptr [EBX + 0x8],EDX
005b2ed4  POP ESI
005b2ed5  MOV dword ptr [EBX + 0xc],ECX
005b2ed8  POP EBX
005b2ed9  RET 0x8
