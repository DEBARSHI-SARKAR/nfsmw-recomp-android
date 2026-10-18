007f0ef2  PUSH EBP
007f0ef3  MOV EBP,ESP
007f0ef5  CMP dword ptr [EBP + 0xc],0x0
007f0ef9  JNZ 0x007f0f06
007f0efb  MOV AX,word ptr [EBP + 0x10]
007f0eff  MOV ECX,dword ptr [EBP + 0x8]
007f0f02  MOV word ptr [ECX + 0xe],AX
007f0f06  POP EBP
007f0f07  RET
