006fbed0  PUSH ECX
006fbed1  MOV EAX,dword ptr [ESP + 0x8]
006fbed5  PUSH ESI
006fbed6  MOV ESI,dword ptr [0x00988ecc]
006fbedc  MOV ECX,dword ptr [ESI + 0x4]
006fbedf  PUSH 0x0
006fbee1  MOV dword ptr [ESP + 0x10],EAX
006fbee5  MOV EAX,dword ptr [ESI + 0x8]
006fbee8  LEA EDX,[ESP + 0x10]
006fbeec  PUSH EDX
006fbeed  PUSH EAX
006fbeee  PUSH ECX
006fbeef  LEA EAX,[ESP + 0x14]
006fbef3  PUSH EAX
006fbef4  CALL 0x006f6b40
006fbef9  MOV EDX,dword ptr [ESP + 0x18]
006fbefd  ADD ESP,0x14
006fbf00  LEA ECX,[ESP + 0xc]
006fbf04  PUSH ECX
006fbf05  PUSH 0x1
006fbf07  PUSH EDX
006fbf08  MOV ECX,ESI
006fbf0a  CALL 0x006fa240
006fbf0f  POP ESI
006fbf10  POP ECX
006fbf11  RET
