006bd830  PUSH EDI
006bd831  MOV ECX,0x10
006bd836  XOR EAX,EAX
006bd838  MOV EDI,0x9880a0
006bd83d  STOSD.REP ES:EDI
006bd83f  MOV dword ptr [0x00987ab0],0x3f800000
006bd849  MOV dword ptr [0x00987ab4],0x0
006bd853  MOV dword ptr [0x00987ab8],0x0
006bd85d  MOV dword ptr [0x00987abc],0x0
006bd867  MOV dword ptr [0x00987ac0],0x0
006bd871  MOV dword ptr [0x00987ac4],0x3f800000
006bd87b  MOV dword ptr [0x00987ac8],0x0
006bd885  MOV dword ptr [0x00987acc],0x0
006bd88f  MOV dword ptr [0x00987ad0],0x0
006bd899  MOV dword ptr [0x00987ad4],0x0
006bd8a3  MOV dword ptr [0x00987ad8],0x3f800000
006bd8ad  MOV dword ptr [0x00987adc],0x0
006bd8b7  MOV dword ptr [0x00987ae0],0x0
006bd8c1  MOV dword ptr [0x00987ae4],0x0
006bd8cb  MOV dword ptr [0x00987ae8],0x0
006bd8d5  MOV dword ptr [0x00987aec],0x3f800000
006bd8df  POP EDI
006bd8e0  RET
