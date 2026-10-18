005e7d00  MOV EAX,dword ptr [ESP + 0x8]
005e7d04  MOV ECX,dword ptr [ESP + 0x4]
005e7d08  MOV EDX,dword ptr [EAX]
005e7d0a  PUSH ESI
005e7d0b  CMP EDX,dword ptr [ECX]
005e7d0d  PUSH EDI
005e7d0e  JNC 0x005e7d22
005e7d10  MOV EDI,dword ptr [ECX]
005e7d12  MOV ESI,dword ptr [EAX + 0x4]
005e7d15  MOV dword ptr [EAX],EDI
005e7d17  MOV EDI,dword ptr [ECX + 0x4]
005e7d1a  MOV dword ptr [EAX + 0x4],EDI
005e7d1d  MOV dword ptr [ECX],EDX
005e7d1f  MOV dword ptr [ECX + 0x4],ESI
005e7d22  MOV EDX,dword ptr [ESP + 0x14]
005e7d26  MOV ESI,dword ptr [EDX]
005e7d28  CMP ESI,dword ptr [EAX]
005e7d2a  JNC 0x005e7d40
005e7d2c  MOV EDI,dword ptr [EDX + 0x4]
005e7d2f  PUSH EBX
005e7d30  MOV EBX,dword ptr [EAX]
005e7d32  MOV dword ptr [EDX],EBX
005e7d34  MOV EBX,dword ptr [EAX + 0x4]
005e7d37  MOV dword ptr [EDX + 0x4],EBX
005e7d3a  MOV dword ptr [EAX],ESI
005e7d3c  MOV dword ptr [EAX + 0x4],EDI
005e7d3f  POP EBX
005e7d40  MOV EDX,dword ptr [EAX]
005e7d42  CMP EDX,dword ptr [ECX]
005e7d44  JNC 0x005e7d58
005e7d46  MOV EDI,dword ptr [ECX]
005e7d48  MOV ESI,dword ptr [EAX + 0x4]
005e7d4b  MOV dword ptr [EAX],EDI
005e7d4d  MOV EDI,dword ptr [ECX + 0x4]
005e7d50  MOV dword ptr [EAX + 0x4],EDI
005e7d53  MOV dword ptr [ECX],EDX
005e7d55  MOV dword ptr [ECX + 0x4],ESI
005e7d58  POP EDI
005e7d59  POP ESI
005e7d5a  RET
