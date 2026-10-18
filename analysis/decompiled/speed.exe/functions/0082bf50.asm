0082bf50  PUSH EBP
0082bf51  MOV EBP,ESP
0082bf53  MOV EAX,dword ptr [EBP + 0x8]
0082bf56  MOV ECX,dword ptr [EBP + 0xc]
0082bf59  MOV [0x009c29b4],EAX
0082bf5e  MOV EDX,dword ptr [ECX]
0082bf60  MOV dword ptr [0x009c29b8],EDX
0082bf66  MOV EAX,dword ptr [ECX + 0x4]
0082bf69  MOV [0x009c29bc],EAX
0082bf6e  MOV ECX,dword ptr [ECX + 0x8]
0082bf71  MOV dword ptr [0x009c29c0],ECX
0082bf77  MOV dword ptr [0x009c2988],0x82bf10
0082bf81  MOV dword ptr [0x009c298c],0x82bf30
0082bf8b  POP EBP
0082bf8c  RET
