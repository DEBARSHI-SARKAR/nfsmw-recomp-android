006ebaf0  MOV ECX,dword ptr [ECX + 0x4]
006ebaf3  PUSH 0x565430
006ebaf8  CALL 0x005d59f0
006ebafd  MOV ECX,dword ptr [ESP + 0x4]
006ebb01  TEST EAX,EAX
006ebb03  MOV dword ptr [ECX],EAX
006ebb05  SETNZ AL
006ebb08  RET 0x4
