006cb9d0  SUB ESP,0x54
006cb9d3  LEA EAX,[ESP + 0x4]
006cb9d7  PUSH EAX
006cb9d8  MOV dword ptr [ESP + 0x8],0x50
006cb9e0  CALL 0x007ecddf
006cb9e5  MOV ECX,dword ptr [0x00910ef4]
006cb9eb  MOV EAX,0x93dc08
006cb9f0  ADD ESP,0x4
006cb9f3  MOV dword ptr [ESP + 0xc],0x40
006cb9fb  MOV dword ptr [ESP + 0x8],ECX
006cb9ff  LEA EDX,[EAX + 0x1]
006cba02  MOV CL,byte ptr [EAX]
006cba04  INC EAX
006cba05  TEST CL,CL
006cba07  JNZ 0x006cba02
006cba09  SUB EAX,EDX
006cba0b  MOV dword ptr [ESP],EAX
006cba0e  JZ 0x006cba18
006cba10  MOV dword ptr [ESP + 0x38],0x93dc08
006cba18  LEA EDX,[ESP + 0x4]
006cba1c  PUSH EDX
006cba1d  CALL 0x007ece0c
006cba22  ADD ESP,0x58
006cba25  RET
