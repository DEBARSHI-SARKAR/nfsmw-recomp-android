0040aea0  PUSH ESI
0040aea1  MOV ESI,ECX
0040aea3  MOV ECX,dword ptr [ESI + 0x80]
0040aea9  MOV EAX,dword ptr [ECX]
0040aeab  CALL dword ptr [EAX + 0x10]
0040aeae  FSUB float ptr [ESI + 0xac]
0040aeb4  POP ESI
0040aeb5  RET
