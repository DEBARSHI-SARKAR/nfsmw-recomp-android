006fc270  MOV EDX,dword ptr [ECX + 0x4]
006fc273  MOV EAX,dword ptr [EDX + 0x4]
006fc276  SUB ESP,0x8
006fc279  PUSH EBX
006fc27a  MOV BL,byte ptr [EAX + 0x15]
006fc27d  TEST BL,BL
006fc27f  PUSH ESI
006fc280  MOV ESI,dword ptr [ESP + 0x14]
006fc284  PUSH EDI
006fc285  JNZ 0x006fc2a5
006fc287  MOV EDI,dword ptr [ESI]
006fc289  LEA ESP,[ESP]
006fc290  CMP dword ptr [EAX + 0xc],EDI
006fc293  JNC 0x006fc29a
006fc295  MOV EAX,dword ptr [EAX + 0x8]
006fc298  JMP 0x006fc29e
006fc29a  MOV EDX,EAX
006fc29c  MOV EAX,dword ptr [EAX]
006fc29e  MOV BL,byte ptr [EAX + 0x15]
006fc2a1  TEST BL,BL
006fc2a3  JZ 0x006fc290
006fc2a5  CMP EDX,dword ptr [ECX + 0x4]
006fc2a8  JZ 0x006fc2b1
006fc2aa  MOV EAX,dword ptr [ESI]
006fc2ac  CMP EAX,dword ptr [EDX + 0xc]
006fc2af  JNC 0x006fc2dd
006fc2b1  MOV EAX,dword ptr [ESI]
006fc2b3  MOV dword ptr [ESP + 0xc],EAX
006fc2b7  LEA EAX,[ESP + 0xc]
006fc2bb  PUSH EAX
006fc2bc  PUSH EDX
006fc2bd  LEA EDX,[ESP + 0x20]
006fc2c1  PUSH EDX
006fc2c2  MOV dword ptr [ESP + 0x1c],0x0
006fc2ca  CALL 0x006fbbf0
006fc2cf  MOV EAX,dword ptr [EAX]
006fc2d1  POP EDI
006fc2d2  POP ESI
006fc2d3  ADD EAX,0x10
006fc2d6  POP EBX
006fc2d7  ADD ESP,0x8
006fc2da  RET 0x4
006fc2dd  POP EDI
006fc2de  POP ESI
006fc2df  LEA EAX,[EDX + 0x10]
006fc2e2  POP EBX
006fc2e3  ADD ESP,0x8
006fc2e6  RET 0x4
