007f9c61  PUSH EBP
007f9c62  MOV EBP,ESP
007f9c64  MOV EAX,ECX
007f9c66  MOV ECX,dword ptr [EBP + 0x8]
007f9c69  MOV EDX,dword ptr [ECX + 0x4]
007f9c6c  MOV dword ptr [EDX],EAX
007f9c6e  MOV dword ptr [ECX + 0x4],EAX
007f9c71  MOV dword ptr [EAX + 0x4],EDX
007f9c74  MOV dword ptr [EAX],ECX
007f9c76  POP EBP
007f9c77  RET 0x4
