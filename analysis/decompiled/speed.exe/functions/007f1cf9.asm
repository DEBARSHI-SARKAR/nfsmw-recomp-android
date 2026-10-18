007f1cf9  PUSH ESI
007f1cfa  MOV ESI,ECX
007f1cfc  MOV ECX,dword ptr [ESI + 0xb0]
007f1d02  MOV dword ptr [ESI],0x8c2260
007f1d08  JMP 0x007f1d0d
007f1d0a  MOV ECX,dword ptr [ESI + 0x20]
007f1d0d  TEST ECX,ECX
007f1d0f  JZ 0x007f1d17
007f1d11  MOV EAX,dword ptr [ECX]
007f1d13  PUSH 0x1
007f1d15  CALL dword ptr [EAX]
007f1d17  CMP dword ptr [ESI + 0xa0],0x0
007f1d1e  JG 0x007f1d0a
007f1d20  AND dword ptr [ESI + 0xa0],0x0
007f1d27  MOV dword ptr [ESI],0x8c2240
007f1d2d  POP ESI
007f1d2e  RET
