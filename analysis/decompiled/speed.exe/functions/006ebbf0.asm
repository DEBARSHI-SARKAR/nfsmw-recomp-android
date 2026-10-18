006ebbf0  MOV ECX,dword ptr [ECX + 0x4]
006ebbf3  PUSH 0x565880
006ebbf8  CALL 0x005d59f0
006ebbfd  MOV ECX,dword ptr [ESP + 0x4]
006ebc01  TEST EAX,EAX
006ebc03  MOV dword ptr [ECX],EAX
006ebc05  SETNZ AL
006ebc08  RET 0x4
