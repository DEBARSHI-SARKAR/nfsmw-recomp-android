007cfd58  CALL 0x007cd100
007cfd5d  CMP dword ptr [EAX + 0x84],0x0
007cfd64  JLE 0x007cfd80
007cfd66  CALL 0x007cd100
007cfd6b  ADD EAX,0x84
007cfd70  MOV dword ptr [EBP + -0x28],EAX
007cfd73  MOV EAX,dword ptr [EBP + -0x28]
007cfd76  MOV ECX,dword ptr [EAX]
007cfd78  SUB ECX,0x1
007cfd7b  MOV EDX,dword ptr [EBP + -0x28]
007cfd7e  MOV dword ptr [EDX],ECX
007cfd80  RET
