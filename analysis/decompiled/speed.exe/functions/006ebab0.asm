006ebab0  MOV ECX,dword ptr [ECX + 0x4]
006ebab3  PUSH 0x565350
006ebab8  CALL 0x005d59f0
006ebabd  MOV ECX,dword ptr [ESP + 0x4]
006ebac1  TEST EAX,EAX
006ebac3  MOV dword ptr [ECX],EAX
006ebac5  SETNZ AL
006ebac8  RET 0x4
