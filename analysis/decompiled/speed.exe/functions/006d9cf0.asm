006d9cf0  MOV EDX,dword ptr [ESP + 0x4]
006d9cf4  MOV EAX,dword ptr [EDX]
006d9cf6  PUSH EBX
006d9cf7  PUSH ESI
006d9cf8  MOV ESI,dword ptr [EAX + 0x8]
006d9cfb  MOV dword ptr [EDX],ESI
006d9cfd  MOV ESI,dword ptr [EAX + 0x8]
006d9d00  MOV BL,byte ptr [ESI + 0x25]
006d9d03  TEST BL,BL
006d9d05  JNZ 0x006d9d0a
006d9d07  MOV dword ptr [ESI + 0x4],EDX
006d9d0a  MOV ESI,dword ptr [EDX + 0x4]
006d9d0d  MOV dword ptr [EAX + 0x4],ESI
006d9d10  MOV ECX,dword ptr [ECX + 0x4]
006d9d13  CMP EDX,dword ptr [ECX + 0x4]
006d9d16  JNZ 0x006d9d26
006d9d18  MOV dword ptr [ECX + 0x4],EAX
006d9d1b  POP ESI
006d9d1c  MOV dword ptr [EAX + 0x8],EDX
006d9d1f  MOV dword ptr [EDX + 0x4],EAX
006d9d22  POP EBX
006d9d23  RET 0x4
006d9d26  MOV ECX,dword ptr [EDX + 0x4]
006d9d29  CMP EDX,dword ptr [ECX + 0x8]
006d9d2c  JNZ 0x006d9d3c
006d9d2e  MOV dword ptr [ECX + 0x8],EAX
006d9d31  POP ESI
006d9d32  MOV dword ptr [EAX + 0x8],EDX
006d9d35  MOV dword ptr [EDX + 0x4],EAX
006d9d38  POP EBX
006d9d39  RET 0x4
006d9d3c  MOV dword ptr [ECX],EAX
006d9d3e  POP ESI
006d9d3f  MOV dword ptr [EAX + 0x8],EDX
006d9d42  MOV dword ptr [EDX + 0x4],EAX
006d9d45  POP EBX
006d9d46  RET 0x4
