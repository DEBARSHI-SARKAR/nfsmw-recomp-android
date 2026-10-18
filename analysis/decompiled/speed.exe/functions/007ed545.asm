007ed545  MOV EAX,dword ptr [ESI + 0xc]
007ed548  MOV ECX,dword ptr [EAX + 0x80]
007ed54e  PUSH dword ptr [ESI + 0x8]
007ed551  MOV EAX,dword ptr [ECX]
007ed553  CALL dword ptr [EAX + 0x10]
007ed556  PUSH ESI
007ed557  CALL 0x007ed50c
007ed55c  POP ECX
007ed55d  RET
