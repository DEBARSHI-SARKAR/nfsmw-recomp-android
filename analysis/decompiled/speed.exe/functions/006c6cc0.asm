006c6cc0  MOV EAX,dword ptr [ESP + 0x4]
006c6cc4  CMP dword ptr [0x00982cb4],EAX
006c6cca  MOV EDX,dword ptr [0x00982c80]
006c6cd0  JNZ 0x006c6cda
006c6cd2  CMP dword ptr [0x00982cc8],EDX
006c6cd8  JZ 0x006c6d0e
006c6cda  INC dword ptr [0x00987b30]
006c6ce0  XOR ECX,ECX
006c6ce2  MOV [0x00982cb4],EAX
006c6ce7  MOV dword ptr [0x00982cb8],ECX
006c6ced  MOV dword ptr [0x00982cbc],ECX
006c6cf3  MOV dword ptr [0x00982cc0],ECX
006c6cf9  MOV dword ptr [0x00982cc4],ECX
006c6cff  MOV dword ptr [0x00982cc8],EDX
006c6d05  MOV dword ptr [ESP + 0x4],EAX
006c6d09  JMP 0x006c68b0
006c6d0e  RET
