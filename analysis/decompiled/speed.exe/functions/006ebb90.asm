006ebb90  MOV ECX,dword ptr [ECX + 0x4]
006ebb93  PUSH 0x5656d0
006ebb98  CALL 0x005d59f0
006ebb9d  MOV ECX,dword ptr [ESP + 0x4]
006ebba1  TEST EAX,EAX
006ebba3  MOV dword ptr [ECX],EAX
006ebba5  SETNZ AL
006ebba8  RET 0x4
