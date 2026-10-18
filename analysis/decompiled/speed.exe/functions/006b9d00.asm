006b9d00  MOV EAX,dword ptr [ESP + 0x8]
006b9d04  PUSH ESI
006b9d05  MOV ESI,ECX
006b9d07  MOV ECX,dword ptr [ESP + 0x8]
006b9d0b  PUSH EAX
006b9d0c  PUSH ECX
006b9d0d  MOV ECX,ESI
006b9d0f  CALL 0x006b9920
006b9d14  XOR EAX,EAX
006b9d16  MOV dword ptr [ESI + 0xb8],EAX
006b9d1c  MOV dword ptr [ESI + 0xbc],EAX
006b9d22  MOV dword ptr [ESI],0x8ad3c4
006b9d28  MOV dword ptr [ESI + 0x8],0x8ad3bc
006b9d2f  MOV dword ptr [ESI + 0x4c],0x8ad398
006b9d36  MOV dword ptr [ESI + 0x54],0x8ad394
006b9d3d  MOV dword ptr [ESI + 0x58],0x8ad388
006b9d44  MOV dword ptr [ESI + 0x60],0x8ad380
006b9d4b  MOV EAX,ESI
006b9d4d  POP ESI
006b9d4e  RET 0x8
