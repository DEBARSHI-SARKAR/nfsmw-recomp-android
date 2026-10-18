0068cfe0  PUSH ESI
0068cfe1  MOV ESI,ECX
0068cfe3  MOV ECX,dword ptr [ESI + 0x7c]
0068cfe6  MOV EAX,dword ptr [ECX]
0068cfe8  CALL dword ptr [EAX + 0x74]
0068cfeb  TEST AL,AL
0068cfed  JZ 0x0068d040
0068cfef  MOV EDX,dword ptr [ESI + 0x48]
0068cff2  PUSH EDI
0068cff3  LEA EDI,[ESI + 0x48]
0068cff6  MOV ECX,EDI
0068cff8  CALL dword ptr [EDX + 0x4]
0068cffb  MOV EAX,dword ptr [EDI]
0068cffd  PUSH 0x3f800000
0068d002  MOV ECX,EDI
0068d004  CALL dword ptr [EAX + 0x1c]
0068d007  MOV ECX,dword ptr [ESI + 0x7c]
0068d00a  MOV EDX,dword ptr [ECX]
0068d00c  CALL dword ptr [EDX + 0x74]
0068d00f  TEST AL,0x2
0068d011  POP EDI
0068d012  JZ 0x0068d040
0068d014  MOV ECX,dword ptr [ESI + 0x34]
0068d017  MOV EAX,dword ptr [ECX]
0068d019  CALL dword ptr [EAX + 0x54]
0068d01c  MOV EDX,dword ptr [EAX]
0068d01e  PUSH 0x8a2fb4
0068d023  MOV ECX,EAX
0068d025  CALL dword ptr [EDX + 0x64]
0068d028  MOV ECX,dword ptr [ESI + 0x34]
0068d02b  MOV EAX,dword ptr [ECX]
0068d02d  CALL dword ptr [EAX + 0x54]
0068d030  MOV EDX,dword ptr [EAX]
0068d032  POP ESI
0068d033  MOV dword ptr [ESP + 0x4],0x8a2fb4
0068d03b  MOV ECX,EAX
0068d03d  JMP dword ptr [EDX + 0x60]
0068d040  POP ESI
0068d041  RET 0x4
