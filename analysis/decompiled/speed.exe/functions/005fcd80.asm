005fcd80  PUSH ESI
005fcd81  MOV ESI,ECX
005fcd83  MOV EAX,dword ptr [ESI + 0xc]
005fcd86  TEST EAX,EAX
005fcd88  JZ 0x005fcd9b
005fcd8a  CMP dword ptr [EAX],0x0
005fcd8d  JNZ 0x005fcd9b
005fcd8f  MOV ECX,dword ptr [0x0091e00c]
005fcd95  PUSH EAX
005fcd96  CALL 0x005fa780
005fcd9b  MOV EAX,dword ptr [ESI + 0x10]
005fcd9e  TEST EAX,EAX
005fcda0  JZ 0x005fcdb3
005fcda2  CMP dword ptr [EAX],0x0
005fcda5  JNZ 0x005fcdb3
005fcda7  MOV ECX,dword ptr [0x0091e00c]
005fcdad  PUSH EAX
005fcdae  CALL 0x005fa780
005fcdb3  MOV ECX,dword ptr [ESI + 0x8]
005fcdb6  PUSH 0x0
005fcdb8  PUSH 0xe0d01505
005fcdbd  CALL 0x00454810
005fcdc2  TEST EAX,EAX
005fcdc4  POP ESI
005fcdc5  JNZ 0x005fcdd1
005fcdc7  PUSH 0x4
005fcdc9  CALL 0x006269b0
005fcdce  ADD ESP,0x4
005fcdd1  FLD float ptr [EAX]
005fcdd3  RET
