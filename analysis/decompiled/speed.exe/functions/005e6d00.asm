005e6d00  MOV EDX,dword ptr [ESP + 0x4]
005e6d04  MOV EAX,dword ptr [EDX + 0x8]
005e6d07  PUSH EBX
005e6d08  PUSH ESI
005e6d09  MOV ESI,dword ptr [EAX]
005e6d0b  MOV dword ptr [EDX + 0x8],ESI
005e6d0e  MOV ESI,dword ptr [EAX]
005e6d10  MOV BL,byte ptr [ESI + 0x21]
005e6d13  TEST BL,BL
005e6d15  JNZ 0x005e6d1a
005e6d17  MOV dword ptr [ESI + 0x4],EDX
005e6d1a  MOV ESI,dword ptr [EDX + 0x4]
005e6d1d  MOV dword ptr [EAX + 0x4],ESI
005e6d20  MOV ECX,dword ptr [ECX + 0x4]
005e6d23  CMP EDX,dword ptr [ECX + 0x4]
005e6d26  JNZ 0x005e6d35
005e6d28  MOV dword ptr [ECX + 0x4],EAX
005e6d2b  POP ESI
005e6d2c  MOV dword ptr [EAX],EDX
005e6d2e  MOV dword ptr [EDX + 0x4],EAX
005e6d31  POP EBX
005e6d32  RET 0x4
005e6d35  MOV ECX,dword ptr [EDX + 0x4]
005e6d38  CMP EDX,dword ptr [ECX]
005e6d3a  JNZ 0x005e6d48
005e6d3c  MOV dword ptr [ECX],EAX
005e6d3e  POP ESI
005e6d3f  MOV dword ptr [EAX],EDX
005e6d41  MOV dword ptr [EDX + 0x4],EAX
005e6d44  POP EBX
005e6d45  RET 0x4
005e6d48  MOV dword ptr [ECX + 0x8],EAX
005e6d4b  POP ESI
005e6d4c  MOV dword ptr [EAX],EDX
005e6d4e  MOV dword ptr [EDX + 0x4],EAX
005e6d51  POP EBX
005e6d52  RET 0x4
