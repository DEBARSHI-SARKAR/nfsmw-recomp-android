007f6310  CMP dword ptr [ECX + 0x108],0x40
007f6317  JNZ 0x007f6321
007f6319  MOV ECX,dword ptr [ECX + 0x4]
007f631c  MOV EAX,dword ptr [ECX]
007f631e  JMP dword ptr [EAX + 0x24]
007f6321  RET
