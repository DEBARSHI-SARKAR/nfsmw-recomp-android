007dd470  PUSH EBP
007dd471  MOV EBP,ESP
007dd473  MOV dword ptr [0x009bae84],0x0
007dd47d  CMP dword ptr [EBP + 0x8],-0x2
007dd481  JNZ 0x007dd495
007dd483  MOV dword ptr [0x009bae84],0x1
007dd48d  CALL dword ptr [0x0089025c]
007dd493  JMP 0x007dd4c7
007dd495  CMP dword ptr [EBP + 0x8],-0x3
007dd499  JNZ 0x007dd4ad
007dd49b  MOV dword ptr [0x009bae84],0x1
007dd4a5  CALL dword ptr [0x00890258]
007dd4ab  JMP 0x007dd4c7
007dd4ad  CMP dword ptr [EBP + 0x8],-0x4
007dd4b1  JNZ 0x007dd4c4
007dd4b3  MOV dword ptr [0x009bae84],0x1
007dd4bd  MOV EAX,[0x009badb0]
007dd4c2  JMP 0x007dd4c7
007dd4c4  MOV EAX,dword ptr [EBP + 0x8]
007dd4c7  POP EBP
007dd4c8  RET
