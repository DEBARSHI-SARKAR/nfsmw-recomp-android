006ebad0  MOV ECX,dword ptr [ECX + 0x4]
006ebad3  PUSH 0x5653c0
006ebad8  CALL 0x005d59f0
006ebadd  MOV ECX,dword ptr [ESP + 0x4]
006ebae1  TEST EAX,EAX
006ebae3  MOV dword ptr [ECX],EAX
006ebae5  SETNZ AL
006ebae8  RET 0x4
