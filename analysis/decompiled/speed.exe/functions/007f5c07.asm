007f5c07  PUSH ESI
007f5c08  MOV ESI,ECX
007f5c0a  CMP byte ptr [ESI + 0x78],0x0
007f5c0e  JZ 0x007f5c1c
007f5c10  MOV ECX,dword ptr [ESI + 0x10]
007f5c13  MOV EAX,dword ptr [ECX]
007f5c15  CALL dword ptr [EAX + 0x4]
007f5c18  MOV byte ptr [ESI + 0x78],0x0
007f5c1c  POP ESI
007f5c1d  RET
