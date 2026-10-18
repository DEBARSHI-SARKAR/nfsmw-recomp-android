007d22f0  PUSH EBP
007d22f1  MOV EBP,ESP
007d22f3  MOV EAX,dword ptr [EBP + 0x8]
007d22f6  MOV ECX,dword ptr [EAX]
007d22f8  ADD ECX,0x4
007d22fb  MOV EDX,dword ptr [EBP + 0x8]
007d22fe  MOV dword ptr [EDX],ECX
007d2300  MOV EAX,dword ptr [EBP + 0x8]
007d2303  MOV ECX,dword ptr [EAX]
007d2305  MOV AX,word ptr [ECX + -0x4]
007d2309  POP EBP
007d230a  RET
