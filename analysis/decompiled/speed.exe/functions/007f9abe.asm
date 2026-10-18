007f9abe  CMP dword ptr [ECX + 0x18],0x0
007f9ac2  JNZ 0x007f9acb
007f9ac4  FLD float ptr [0x00890968]
007f9aca  RET
007f9acb  MOV ECX,dword ptr [ECX + 0x18]
007f9ace  MOV EAX,dword ptr [ECX]
007f9ad0  JMP dword ptr [EAX + 0x10]
