007f6258  PUSH EBP
007f6259  MOV EBP,ESP
007f625b  MOV EAX,dword ptr [EBP + 0x8]
007f625e  MOV dword ptr [ECX + 0x4],EAX
007f6261  MOV EAX,dword ptr [EBP + 0xc]
007f6264  MOV dword ptr [ECX + 0x8],EAX
007f6267  MOV EAX,dword ptr [EBP + 0x10]
007f626a  MOV dword ptr [ECX + 0xc],EAX
007f626d  MOV EAX,dword ptr [EBP + 0x14]
007f6270  MOV dword ptr [ECX + 0x10],EAX
007f6273  MOV EAX,dword ptr [EBP + 0x18]
007f6276  MOV dword ptr [ECX],0x80
007f627c  MOV dword ptr [ECX + 0x14],EAX
007f627f  POP EBP
007f6280  RET 0x14
