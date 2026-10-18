007fa26b  PUSH EBP
007fa26c  MOV EBP,ESP
007fa26e  MOV EAX,dword ptr [EBP + 0x8]
007fa271  MOV EDX,dword ptr [ECX + 0x4]
007fa274  MOV dword ptr [EDX],EAX
007fa276  MOV dword ptr [ECX + 0x4],EAX
007fa279  MOV dword ptr [EAX + 0x4],EDX
007fa27c  MOV dword ptr [EAX],ECX
007fa27e  ADD EAX,-0x8
007fa281  POP EBP
007fa282  RET 0x4
