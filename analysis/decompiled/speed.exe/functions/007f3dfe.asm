007f3dfe  PUSH EBP
007f3dff  MOV EBP,ESP
007f3e01  MOV EAX,dword ptr [EBP + 0x8]
007f3e04  MOV dword ptr [ECX],EAX
007f3e06  MOV EAX,dword ptr [EBP + 0xc]
007f3e09  MOV dword ptr [ECX + 0x4],EAX
007f3e0c  MOV EAX,dword ptr [EBP + 0x10]
007f3e0f  MOV dword ptr [ECX + 0x8],EAX
007f3e12  MOV EAX,dword ptr [EBP + 0x14]
007f3e15  MOV dword ptr [ECX + 0xc],EAX
007f3e18  POP EBP
007f3e19  RET 0x10
