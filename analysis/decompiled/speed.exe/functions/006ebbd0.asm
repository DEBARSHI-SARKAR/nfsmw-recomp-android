006ebbd0  MOV ECX,dword ptr [ECX + 0x4]
006ebbd3  PUSH 0x5657b0
006ebbd8  CALL 0x005d59f0
006ebbdd  MOV ECX,dword ptr [ESP + 0x4]
006ebbe1  TEST EAX,EAX
006ebbe3  MOV dword ptr [ECX],EAX
006ebbe5  SETNZ AL
006ebbe8  RET 0x4
