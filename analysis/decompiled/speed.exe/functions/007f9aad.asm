007f9aad  CMP dword ptr [ECX + 0x18],0x0
007f9ab1  JNZ 0x007f9ab6
007f9ab3  XOR EAX,EAX
007f9ab5  RET
007f9ab6  MOV ECX,dword ptr [ECX + 0x18]
007f9ab9  MOV EAX,dword ptr [ECX]
007f9abb  JMP dword ptr [EAX + 0xc]
