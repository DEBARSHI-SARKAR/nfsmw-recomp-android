0040dfd0  PUSH ESI
0040dfd1  MOV ESI,ECX
0040dfd3  PUSH ESI
0040dfd4  CALL 0x004040f0
0040dfd9  MOV EAX,dword ptr [ESP + 0xc]
0040dfdd  MOV ECX,dword ptr [ESP + 0x10]
0040dfe1  MOV dword ptr [ESI + 0x4],EAX
0040dfe4  ADD ESP,0x4
0040dfe7  MOV dword ptr [ESI + 0x8],ECX
0040dfea  MOV EAX,ESI
0040dfec  POP ESI
0040dfed  RET 0x8
