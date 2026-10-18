006fabb0  MOV ECX,dword ptr [0x009885e0]
006fabb6  TEST ECX,ECX
006fabb8  JZ 0x006fabca
006fabba  MOV EAX,dword ptr [ECX]
006fabbc  PUSH 0x1
006fabbe  CALL dword ptr [EAX]
006fabc0  MOV dword ptr [0x009885e0],0x0
006fabca  PUSH ESI
006fabcb  CALL 0x006ed200
006fabd0  MOV ECX,EAX
006fabd2  CALL 0x00633e70
006fabd7  MOV ECX,dword ptr [0x00988ecc]
006fabdd  TEST ECX,ECX
006fabdf  MOV ESI,ECX
006fabe1  JZ 0x006fabf7
006fabe3  CALL 0x006f8ce0
006fabe8  PUSH 0x0
006fabea  PUSH 0x20
006fabec  PUSH ESI
006fabed  MOV ECX,0x925b30
006fabf2  CALL 0x005d0370
006fabf7  MOV dword ptr [0x009885d8],0x0
006fac01  POP ESI
006fac02  RET
