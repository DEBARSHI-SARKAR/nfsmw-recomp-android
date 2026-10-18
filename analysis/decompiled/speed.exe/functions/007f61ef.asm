007f61ef  PUSH EBP
007f61f0  MOV EBP,ESP
007f61f2  MOV EAX,dword ptr [EBP + 0x8]
007f61f5  MOV dword ptr [ECX + 0x4],EAX
007f61f8  MOV EAX,dword ptr [EBP + 0xc]
007f61fb  MOV dword ptr [ECX + 0x8],EAX
007f61fe  MOV EAX,dword ptr [EBP + 0x10]
007f6201  MOV dword ptr [ECX + 0xc],EAX
007f6204  MOV EAX,dword ptr [EBP + 0x14]
007f6207  MOV dword ptr [ECX + 0x10],EAX
007f620a  MOV EAX,dword ptr [EBP + 0x18]
007f620d  MOV dword ptr [ECX],0x8
007f6213  MOV dword ptr [ECX + 0x14],EAX
007f6216  POP EBP
007f6217  RET 0x14
