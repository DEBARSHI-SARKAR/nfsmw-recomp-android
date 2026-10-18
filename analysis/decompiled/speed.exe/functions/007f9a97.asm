007f9a97  PUSH ESI
007f9a98  MOV ESI,ECX
007f9a9a  MOV ECX,dword ptr [ESI + 0x18]
007f9a9d  TEST ECX,ECX
007f9a9f  JZ 0x007f9aab
007f9aa1  MOV EAX,dword ptr [ECX]
007f9aa3  PUSH 0x1
007f9aa5  CALL dword ptr [EAX]
007f9aa7  AND dword ptr [ESI + 0x18],0x0
007f9aab  POP ESI
007f9aac  RET
