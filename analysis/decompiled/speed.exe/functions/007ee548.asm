007ee548  PUSH EBP
007ee549  MOV EBP,ESP
007ee54b  MOV EAX,dword ptr [EBP + 0x8]
007ee54e  MOV EDX,dword ptr [ECX]
007ee550  MOV dword ptr [EAX],EDX
007ee552  INC dword ptr [ECX + 0x8]
007ee555  MOV dword ptr [ECX],EAX
007ee557  CMP dword ptr [EAX],0x0
007ee55a  JNZ 0x007ee55f
007ee55c  MOV dword ptr [ECX + 0x4],EAX
007ee55f  POP EBP
007ee560  RET 0x4
