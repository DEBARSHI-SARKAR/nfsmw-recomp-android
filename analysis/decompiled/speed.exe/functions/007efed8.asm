007efed8  PUSH EBP
007efed9  MOV EBP,ESP
007efedb  MOV EAX,dword ptr [EBP + 0x8]
007efede  MOV EDX,dword ptr [ECX]
007efee0  MOV dword ptr [EAX],EDX
007efee2  INC dword ptr [ECX + 0x8]
007efee5  MOV dword ptr [ECX],EAX
007efee7  CMP dword ptr [EAX],0x0
007efeea  JNZ 0x007efeef
007efeec  MOV dword ptr [ECX + 0x4],EAX
007efeef  POP EBP
007efef0  RET 0x4
