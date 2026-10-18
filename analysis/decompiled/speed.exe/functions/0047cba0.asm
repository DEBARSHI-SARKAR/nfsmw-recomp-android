0047cba0  PUSH ESI
0047cba1  LEA ESI,[ECX + 0x4]
0047cba4  MOV dword ptr [ECX],0x0
0047cbaa  CMP dword ptr [ESI],ESI
0047cbac  JZ 0x0047cbd0
0047cbae  MOV EDI,EDI
0047cbb0  MOV EAX,dword ptr [ESI]
0047cbb2  MOV ECX,dword ptr [EAX]
0047cbb4  MOV EDX,dword ptr [EAX + 0x4]
0047cbb7  MOV dword ptr [EDX],ECX
0047cbb9  MOV dword ptr [ECX + 0x4],EDX
0047cbbc  MOV CL,byte ptr [EAX + 0xe]
0047cbbf  TEST CL,CL
0047cbc1  JZ 0x0047cbcc
0047cbc3  PUSH EAX
0047cbc4  CALL 0x00652b00
0047cbc9  ADD ESP,0x4
0047cbcc  CMP dword ptr [ESI],ESI
0047cbce  JNZ 0x0047cbb0
0047cbd0  POP ESI
0047cbd1  RET
