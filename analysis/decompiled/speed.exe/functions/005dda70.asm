005dda70  MOV EAX,dword ptr [ECX + 0xa4]
005dda76  MOV ECX,dword ptr [ECX + 0xa8]
005dda7c  MOV EDX,dword ptr [ESP + 0xc]
005dda80  PUSH EBX
005dda81  MOV BL,byte ptr [ESP + 0xc]
005dda85  LEA EAX,[EAX + EAX*0x4]
005dda88  PUSH ESI
005dda89  LEA ESI,[ECX + EAX*0x4]
005dda8c  MOV EAX,dword ptr [ESP + 0xc]
005dda90  ADD EAX,0x14
005dda93  CMP EAX,ESI
005dda95  JNC 0x005ddab9
005dda97  TEST BL,BL
005dda99  JZ 0x005ddaa8
005dda9b  MOV CL,byte ptr [EAX + 0x8]
005dda9e  CMP CL,0x2
005ddaa1  JZ 0x005ddaa8
005ddaa3  CMP CL,0x3
005ddaa6  JNZ 0x005dda90
005ddaa8  TEST EDX,EDX
005ddaaa  JZ 0x005ddabb
005ddaac  MOVZX ECX,word ptr [EAX + 0xa]
005ddab0  CMP ECX,EDX
005ddab2  JNZ 0x005dda90
005ddab4  POP ESI
005ddab5  POP EBX
005ddab6  RET 0xc
005ddab9  XOR EAX,EAX
005ddabb  POP ESI
005ddabc  POP EBX
005ddabd  RET 0xc
