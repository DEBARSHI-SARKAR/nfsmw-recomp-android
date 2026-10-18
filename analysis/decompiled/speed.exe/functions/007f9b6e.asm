007f9b6e  PUSH EBP
007f9b6f  MOV EBP,ESP
007f9b71  MOV EAX,ECX
007f9b73  MOV ECX,dword ptr [EBP + 0x14]
007f9b76  MOV dword ptr [EAX + 0xc],ECX
007f9b79  MOV ECX,dword ptr [EBP + 0x8]
007f9b7c  MOV dword ptr [EAX],ECX
007f9b7e  MOV ECX,dword ptr [EBP + 0xc]
007f9b81  MOV dword ptr [EAX + 0x4],ECX
007f9b84  MOV ECX,dword ptr [EBP + 0x10]
007f9b87  MOV dword ptr [EAX + 0x8],ECX
007f9b8a  POP EBP
007f9b8b  RET 0x10
