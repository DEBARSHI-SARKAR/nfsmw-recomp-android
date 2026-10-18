005aee90  MOV EAX,dword ptr [ESP + 0x8]
005aee94  TEST EAX,EAX
005aee96  JZ 0x005aeed9
005aee98  PUSH ESI
005aee99  MOV ESI,dword ptr [ESP + 0x8]
005aee9d  TEST ESI,ESI
005aee9f  JZ 0x005aeeb6
005aeea1  MOV EDX,dword ptr [ESI + 0x4]
005aeea4  TEST EDX,EDX
005aeea6  MOV dword ptr [EAX + 0x4],EDX
005aeea9  JZ 0x005aeeae
005aeeab  MOV dword ptr [EDX + 0x8],EAX
005aeeae  MOV dword ptr [EAX + 0x8],ESI
005aeeb1  MOV dword ptr [ESI + 0x4],EAX
005aeeb4  JMP 0x005aeecd
005aeeb6  MOV EDX,dword ptr [ECX + 0x8]
005aeeb9  TEST EDX,EDX
005aeebb  MOV dword ptr [EAX + 0x4],EDX
005aeebe  JZ 0x005aeec3
005aeec0  MOV dword ptr [EDX + 0x8],EAX
005aeec3  MOV dword ptr [EAX + 0x8],0x0
005aeeca  MOV dword ptr [ECX + 0x8],EAX
005aeecd  CMP dword ptr [ECX + 0xc],ESI
005aeed0  POP ESI
005aeed1  JNZ 0x005aeed6
005aeed3  MOV dword ptr [ECX + 0xc],EAX
005aeed6  INC dword ptr [ECX + 0x4]
005aeed9  RET 0x8
