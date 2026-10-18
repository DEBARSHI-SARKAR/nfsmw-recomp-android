0059cba0  PUSH -0x1
0059cba2  PUSH 0x872ec8
0059cba7  MOV EAX,FS:[0x0]
0059cbad  PUSH EAX
0059cbae  MOV dword ptr FS:[0x0],ESP
0059cbb5  PUSH ECX
0059cbb6  PUSH ESI
0059cbb7  MOV ESI,ECX
0059cbb9  LEA EAX,[ESI + 0x30]
0059cbbc  MOV dword ptr [ESP + 0x4],ESI
0059cbc0  MOV dword ptr [ESI],0x8a1ee8
0059cbc6  MOV dword ptr [EAX],0x8a1ee0
0059cbcc  MOV ECX,dword ptr [EAX + 0x4]
0059cbcf  PUSH EAX
0059cbd0  MOV dword ptr [ESP + 0x14],0x0
0059cbd8  MOV dword ptr [EAX],0x890970
0059cbde  CALL 0x005d5a50
0059cbe3  MOV dword ptr [ESI],0x8a1e80
0059cbe9  MOV EAX,dword ptr [ESI + 0x8]
0059cbec  ADD ESI,0x8
0059cbef  CMP EAX,ESI
0059cbf1  MOV dword ptr [ESP + 0x10],0xffffffff
0059cbf9  JZ 0x0059cc19
0059cbfb  JMP 0x0059cc00
0059cc00  MOV ECX,dword ptr [EAX]
0059cc02  MOV EDX,dword ptr [EAX + 0x4]
0059cc05  MOV dword ptr [EDX],ECX
0059cc07  PUSH EAX
0059cc08  MOV dword ptr [ECX + 0x4],EDX
0059cc0b  CALL 0x00466440
0059cc10  MOV EAX,dword ptr [ESI]
0059cc12  ADD ESP,0x4
0059cc15  CMP EAX,ESI
0059cc17  JNZ 0x0059cc00
0059cc19  MOV ECX,dword ptr [ESP + 0x8]
0059cc1d  POP ESI
0059cc1e  MOV dword ptr FS:[0x0],ECX
0059cc25  ADD ESP,0x10
0059cc28  RET
