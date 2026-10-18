007f9c49  PUSH EBP
007f9c4a  MOV EBP,ESP
007f9c4c  MOV EAX,ECX
007f9c4e  MOV ECX,dword ptr [EBP + 0x8]
007f9c51  MOV EDX,dword ptr [ECX]
007f9c53  MOV dword ptr [ECX],EAX
007f9c55  MOV dword ptr [EDX + 0x4],EAX
007f9c58  MOV dword ptr [EAX + 0x4],ECX
007f9c5b  MOV dword ptr [EAX],EDX
007f9c5d  POP EBP
007f9c5e  RET 0x4
