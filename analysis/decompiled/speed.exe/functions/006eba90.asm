006eba90  MOV ECX,dword ptr [ECX + 0x4]
006eba93  PUSH 0x5652e0
006eba98  CALL 0x005d59f0
006eba9d  MOV ECX,dword ptr [ESP + 0x4]
006ebaa1  TEST EAX,EAX
006ebaa3  MOV dword ptr [ECX],EAX
006ebaa5  SETNZ AL
006ebaa8  RET 0x4
