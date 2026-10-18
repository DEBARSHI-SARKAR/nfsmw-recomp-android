007f5cf1  PUSH ESI
007f5cf2  MOV ESI,ECX
007f5cf4  MOV ECX,dword ptr [ESI + 0x14]
007f5cf7  MOV EAX,dword ptr [ECX]
007f5cf9  CALL dword ptr [EAX + 0x6c]
007f5cfc  AND dword ptr [ESI + 0x6c],0x0
007f5d00  AND dword ptr [ESI + 0x70],0x0
007f5d04  POP ESI
007f5d05  RET
