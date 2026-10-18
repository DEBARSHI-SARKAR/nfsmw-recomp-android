007e93e0  PUSH EBP
007e93e1  MOV EBP,ESP
007e93e3  MOV EDX,dword ptr [EBP + 0xc]
007e93e6  MOV EAX,ECX
007e93e8  MOV ECX,dword ptr [EBP + 0x8]
007e93eb  MOV dword ptr [EAX],ECX
007e93ed  MOV dword ptr [EAX + 0x4],EDX
007e93f0  MOV dword ptr [EAX + 0x8],0x0
007e93f7  POP EBP
007e93f8  RET 0x8
