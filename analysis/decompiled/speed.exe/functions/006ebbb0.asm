006ebbb0  MOV ECX,dword ptr [ECX + 0x4]
006ebbb3  PUSH 0x565740
006ebbb8  CALL 0x005d59f0
006ebbbd  MOV ECX,dword ptr [ESP + 0x4]
006ebbc1  TEST EAX,EAX
006ebbc3  MOV dword ptr [ECX],EAX
006ebbc5  SETNZ AL
006ebbc8  RET 0x4
