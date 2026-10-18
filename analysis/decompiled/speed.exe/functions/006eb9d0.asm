006eb9d0  MOV ECX,dword ptr [ECX + 0x4]
006eb9d3  PUSH 0x68a9e0
006eb9d8  CALL 0x005d59f0
006eb9dd  MOV ECX,dword ptr [ESP + 0x4]
006eb9e1  TEST EAX,EAX
006eb9e3  MOV dword ptr [ECX],EAX
006eb9e5  SETNZ AL
006eb9e8  RET 0x4
