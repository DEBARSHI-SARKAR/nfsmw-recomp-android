007d22b0  PUSH EBP
007d22b1  MOV EBP,ESP
007d22b3  MOV EAX,dword ptr [EBP + 0x8]
007d22b6  MOV ECX,dword ptr [EAX]
007d22b8  ADD ECX,0x4
007d22bb  MOV EDX,dword ptr [EBP + 0x8]
007d22be  MOV dword ptr [EDX],ECX
007d22c0  MOV EAX,dword ptr [EBP + 0x8]
007d22c3  MOV ECX,dword ptr [EAX]
007d22c5  MOV EAX,dword ptr [ECX + -0x4]
007d22c8  POP EBP
007d22c9  RET
