0069bfc0  PUSH ESI
0069bfc1  PUSH EDI
0069bfc2  MOV EDI,dword ptr [ESP + 0xc]
0069bfc6  MOV EAX,dword ptr [EDI]
0069bfc8  MOV ESI,ECX
0069bfca  CMP EAX,dword ptr [0x0092c5e0]
0069bfd0  JNZ 0x0069bffe
0069bfd2  MOV EAX,dword ptr [ESI + 0x34]
0069bfd5  MOV ECX,dword ptr [EAX + 0x4]
0069bfd8  PUSH 0x4039c0
0069bfdd  CALL 0x005d59f0
0069bfe2  MOV dword ptr [ESI + 0x8c],EAX
0069bfe8  MOV EAX,dword ptr [ESI + 0x34]
0069bfeb  MOV ECX,dword ptr [EAX + 0x4]
0069bfee  PUSH 0x4039f0
0069bff3  CALL 0x005d59f0
0069bff8  MOV dword ptr [ESI + 0x90],EAX
0069bffe  MOV ECX,dword ptr [EDI]
0069c000  CMP ECX,dword ptr [0x0092c590]
0069c006  JNZ 0x0069c01e
0069c008  MOV EAX,dword ptr [ESI + 0x34]
0069c00b  MOV ECX,dword ptr [EAX + 0x4]
0069c00e  PUSH 0x404ff0
0069c013  CALL 0x005d59f0
0069c018  MOV dword ptr [ESI + 0x94],EAX
0069c01e  POP EDI
0069c01f  POP ESI
0069c020  RET 0x4
