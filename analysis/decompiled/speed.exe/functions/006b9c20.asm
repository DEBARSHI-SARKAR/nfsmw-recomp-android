006b9c20  MOV EAX,dword ptr [ESP + 0x8]
006b9c24  PUSH ESI
006b9c25  MOV ESI,ECX
006b9c27  MOV ECX,dword ptr [ESP + 0x8]
006b9c2b  PUSH EAX
006b9c2c  PUSH ECX
006b9c2d  MOV ECX,ESI
006b9c2f  CALL 0x006b9b20
006b9c34  MOV dword ptr [ESI],0x8ad6ac
006b9c3a  MOV dword ptr [ESI + 0x8],0x8ad6a4
006b9c41  MOV dword ptr [ESI + 0x4c],0x8ad680
006b9c48  MOV dword ptr [ESI + 0x54],0x8ad67c
006b9c4f  MOV dword ptr [ESI + 0x58],0x8ad670
006b9c56  MOV dword ptr [ESI + 0x60],0x8ad668
006b9c5d  MOV dword ptr [ESI + 0xb8],0x8ad658
006b9c67  MOV EAX,ESI
006b9c69  POP ESI
006b9c6a  RET 0x8
