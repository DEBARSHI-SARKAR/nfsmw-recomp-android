0069bd80  PUSH -0x1
0069bd82  PUSH 0x87c3c8
0069bd87  MOV EAX,FS:[0x0]
0069bd8d  PUSH EAX
0069bd8e  MOV dword ptr FS:[0x0],ESP
0069bd95  PUSH ECX
0069bd96  MOV EAX,dword ptr [ESP + 0x14]
0069bd9a  PUSH ESI
0069bd9b  MOV ESI,ECX
0069bd9d  PUSH EAX
0069bd9e  MOV dword ptr [ESP + 0x8],ESI
0069bda2  CALL 0x0069b900
0069bda7  MOV EAX,dword ptr [ESI + 0x34]
0069bdaa  MOV dword ptr [ESI],0x8ab458
0069bdb0  MOV dword ptr [ESI + 0x8],0x8ab44c
0069bdb7  MOV dword ptr [ESI + 0x48],0x8ab448
0069bdbe  MOV ECX,dword ptr [EAX + 0x4]
0069bdc1  PUSH 0x404040
0069bdc6  MOV dword ptr [ESP + 0x14],0x0
0069bdce  CALL 0x005d59f0
0069bdd3  MOV ECX,dword ptr [ESP + 0x8]
0069bdd7  MOV dword ptr [ESI + 0xec],EAX
0069bddd  MOV EAX,ESI
0069bddf  POP ESI
0069bde0  MOV dword ptr FS:[0x0],ECX
0069bde7  ADD ESP,0x10
0069bdea  RET 0x4
