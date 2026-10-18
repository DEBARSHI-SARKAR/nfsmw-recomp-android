007f61d0  PUSH EBP
007f61d1  MOV EBP,ESP
007f61d3  MOV EAX,dword ptr [EBP + 0x8]
007f61d6  MOV dword ptr [ECX + 0x4],EAX
007f61d9  MOV EAX,dword ptr [EBP + 0xc]
007f61dc  MOV dword ptr [ECX + 0x8],EAX
007f61df  MOV EAX,dword ptr [EBP + 0x10]
007f61e2  MOV dword ptr [ECX],0x4
007f61e8  MOV dword ptr [ECX + 0xc],EAX
007f61eb  POP EBP
007f61ec  RET 0xc
