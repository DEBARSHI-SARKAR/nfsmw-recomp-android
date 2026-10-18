007d22d0  PUSH EBP
007d22d1  MOV EBP,ESP
007d22d3  MOV EAX,dword ptr [EBP + 0x8]
007d22d6  MOV ECX,dword ptr [EAX]
007d22d8  ADD ECX,0x8
007d22db  MOV EDX,dword ptr [EBP + 0x8]
007d22de  MOV dword ptr [EDX],ECX
007d22e0  MOV EAX,dword ptr [EBP + 0x8]
007d22e3  MOV ECX,dword ptr [EAX]
007d22e5  MOV EAX,dword ptr [ECX + -0x8]
007d22e8  MOV EDX,dword ptr [ECX + -0x4]
007d22eb  POP EBP
007d22ec  RET
