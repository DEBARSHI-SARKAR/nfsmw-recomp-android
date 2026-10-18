0059de50  PUSH -0x1
0059de52  PUSH 0x873048
0059de57  MOV EAX,FS:[0x0]
0059de5d  PUSH EAX
0059de5e  MOV dword ptr FS:[0x0],ESP
0059de65  PUSH ECX
0059de66  PUSH ESI
0059de67  MOV ESI,ECX
0059de69  LEA EAX,[ESI + 0x30]
0059de6c  MOV dword ptr [ESP + 0x4],ESI
0059de70  MOV dword ptr [ESI],0x8a2080
0059de76  MOV dword ptr [EAX],0x8a2070
0059de7c  MOV ECX,dword ptr [EAX + 0x4]
0059de7f  PUSH EAX
0059de80  MOV dword ptr [ESP + 0x14],0x0
0059de88  MOV dword ptr [EAX],0x890970
0059de8e  CALL 0x005d5a50
0059de93  MOV dword ptr [ESI],0x8a1e80
0059de99  MOV EAX,dword ptr [ESI + 0x8]
0059de9c  ADD ESI,0x8
0059de9f  CMP EAX,ESI
0059dea1  MOV dword ptr [ESP + 0x10],0xffffffff
0059dea9  JZ 0x0059dec9
0059deab  JMP 0x0059deb0
0059deb0  MOV ECX,dword ptr [EAX]
0059deb2  MOV EDX,dword ptr [EAX + 0x4]
0059deb5  MOV dword ptr [EDX],ECX
0059deb7  PUSH EAX
0059deb8  MOV dword ptr [ECX + 0x4],EDX
0059debb  CALL 0x00466440
0059dec0  MOV EAX,dword ptr [ESI]
0059dec2  ADD ESP,0x4
0059dec5  CMP EAX,ESI
0059dec7  JNZ 0x0059deb0
0059dec9  MOV ECX,dword ptr [ESP + 0x8]
0059decd  POP ESI
0059dece  MOV dword ptr FS:[0x0],ECX
0059ded5  ADD ESP,0x10
0059ded8  RET
