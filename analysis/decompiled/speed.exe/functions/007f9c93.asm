007f9c93  PUSH EBP
007f9c94  MOV EBP,ESP
007f9c96  MOV EAX,dword ptr [EBP + 0x8]
007f9c99  MOV EDX,dword ptr [ECX]
007f9c9b  MOV dword ptr [ECX],EAX
007f9c9d  MOV dword ptr [EDX + 0x4],EAX
007f9ca0  MOV dword ptr [EAX + 0x4],ECX
007f9ca3  MOV dword ptr [EAX],EDX
007f9ca5  POP EBP
007f9ca6  RET 0x4
