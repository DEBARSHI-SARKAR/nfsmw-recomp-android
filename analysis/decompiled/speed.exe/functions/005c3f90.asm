005c3f90  PUSH -0x1
005c3f92  PUSH 0x8746c8
005c3f97  MOV EAX,FS:[0x0]
005c3f9d  PUSH EAX
005c3f9e  MOV dword ptr FS:[0x0],ESP
005c3fa5  PUSH ECX
005c3fa6  MOV EAX,dword ptr [ESP + 0x18]
005c3faa  PUSH ESI
005c3fab  PUSH EDI
005c3fac  MOV EDI,dword ptr [ESP + 0x1c]
005c3fb0  PUSH EAX
005c3fb1  MOV ESI,ECX
005c3fb3  PUSH EDI
005c3fb4  MOV dword ptr [ESP + 0x10],ESI
005c3fb8  CALL 0x005c31a0
005c3fbd  XOR EAX,EAX
005c3fbf  MOV dword ptr [ESI],0x8a2e1c
005c3fc5  MOV ECX,dword ptr [EDI + 0x5c]
005c3fc8  MOV dword ptr [ESI + 0x5c],ECX
005c3fcb  MOV dword ptr [ESI + 0x60],EAX
005c3fce  MOV dword ptr [ESI + 0x64],EAX
005c3fd1  MOV dword ptr [ESI + 0x68],EAX
005c3fd4  MOV EDX,dword ptr [EDI + 0x6c]
005c3fd7  MOV dword ptr [ESI + 0x6c],EDX
005c3fda  MOV ECX,dword ptr [EDI + 0x70]
005c3fdd  MOV dword ptr [ESI + 0x70],ECX
005c3fe0  MOV dword ptr [ESI + 0x74],EAX
005c3fe3  MOV dword ptr [ESI + 0x78],EAX
005c3fe6  MOV dword ptr [ESI + 0x7c],EAX
005c3fe9  MOV dword ptr [ESI + 0x80],EAX
005c3fef  MOV EDX,dword ptr [EDI + 0x84]
005c3ff5  MOV dword ptr [ESI + 0x84],EDX
005c3ffb  MOV ECX,dword ptr [EDI + 0x88]
005c4001  MOV dword ptr [ESI + 0x8c],EAX
005c4007  MOV dword ptr [ESI + 0x90],EAX
005c400d  MOV dword ptr [ESI + 0x94],EAX
005c4013  MOV dword ptr [ESI + 0x98],EAX
005c4019  MOV dword ptr [ESI + 0x9c],EAX
005c401f  MOV dword ptr [ESI + 0xa0],EAX
005c4025  MOV dword ptr [ESI + 0x88],ECX
005c402b  MOV dword ptr [ESI + 0xa4],0x3f800000
005c4035  MOV dword ptr [ESI + 0xa8],0xbab60b61
005c403f  MOV dword ptr [ESP + 0x14],EAX
005c4043  MOV EAX,0xff
005c4048  MOV dword ptr [ESI + 0xb8],EAX
005c404e  MOV dword ptr [ESI + 0xb4],EAX
005c4054  MOV dword ptr [ESI + 0xb0],EAX
005c405a  MOV dword ptr [ESI + 0xac],EAX
005c4060  MOV EDX,dword ptr [EDI + 0xbc]
005c4066  MOV dword ptr [ESI + 0xbc],EDX
005c406c  MOV EAX,dword ptr [EDI + 0xc0]
005c4072  MOV dword ptr [ESI + 0xc0],EAX
005c4078  MOV ECX,dword ptr [EDI + 0xc4]
005c407e  MOV dword ptr [ESI + 0xc4],ECX
005c4084  PUSH EDI
005c4085  MOV ECX,ESI
005c4087  CALL 0x005bdb00
005c408c  MOV ECX,dword ptr [ESP + 0xc]
005c4090  POP EDI
005c4091  MOV EAX,ESI
005c4093  POP ESI
005c4094  MOV dword ptr FS:[0x0],ECX
005c409b  ADD ESP,0x10
005c409e  RET 0x8
