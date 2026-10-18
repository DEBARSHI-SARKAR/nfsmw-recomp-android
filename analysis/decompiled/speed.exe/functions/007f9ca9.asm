007f9ca9  PUSH EBP
007f9caa  MOV EBP,ESP
007f9cac  MOV EDX,dword ptr [ECX + 0x4]
007f9caf  MOV EAX,dword ptr [EBP + 0x8]
007f9cb2  MOV dword ptr [EDX],EAX
007f9cb4  MOV dword ptr [ECX + 0x4],EAX
007f9cb7  MOV dword ptr [EAX + 0x4],EDX
007f9cba  MOV dword ptr [EAX],ECX
007f9cbc  POP EBP
007f9cbd  RET 0x4
