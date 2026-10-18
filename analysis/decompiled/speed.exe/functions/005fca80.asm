005fca80  PUSH ESI
005fca81  MOV ESI,ECX
005fca83  MOV EAX,dword ptr [ESI + 0xc]
005fca86  TEST EAX,EAX
005fca88  JZ 0x005fca9b
005fca8a  CMP dword ptr [EAX],0x0
005fca8d  JNZ 0x005fca9b
005fca8f  MOV ECX,dword ptr [0x0091e00c]
005fca95  PUSH EAX
005fca96  CALL 0x005fa780
005fca9b  MOV EAX,dword ptr [ESI + 0x10]
005fca9e  TEST EAX,EAX
005fcaa0  JZ 0x005fcab3
005fcaa2  CMP dword ptr [EAX],0x0
005fcaa5  JNZ 0x005fcab3
005fcaa7  MOV ECX,dword ptr [0x0091e00c]
005fcaad  PUSH EAX
005fcaae  CALL 0x005fa780
005fcab3  MOV ECX,dword ptr [ESI + 0x8]
005fcab6  PUSH 0x0
005fcab8  PUSH 0x2ad67092
005fcabd  CALL 0x00454810
005fcac2  TEST EAX,EAX
005fcac4  POP ESI
005fcac5  JNZ 0x005fcad1
005fcac7  PUSH 0x1
005fcac9  CALL 0x006269b0
005fcace  ADD ESP,0x4
005fcad1  MOV AL,byte ptr [EAX]
005fcad3  RET
