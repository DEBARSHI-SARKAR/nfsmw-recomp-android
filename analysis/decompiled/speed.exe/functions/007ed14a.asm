007ed14a  PUSH EBP
007ed14b  MOV EBP,ESP
007ed14d  PUSH ESI
007ed14e  MOV ESI,dword ptr [EBP + 0x8]
007ed151  MOV EAX,dword ptr [ESI + 0xc]
007ed154  MOV ECX,dword ptr [EAX + 0x80]
007ed15a  PUSH dword ptr [ESI + 0x8]
007ed15d  MOV EAX,dword ptr [ECX]
007ed15f  CALL dword ptr [EAX + 0x24]
007ed162  MOV ECX,dword ptr [EBP + 0xc]
007ed165  MOV dword ptr [ECX],EAX
007ed167  MOV EAX,dword ptr [EBP + 0x10]
007ed16a  MOV dword ptr [ECX + 0x4],EDX
007ed16d  MOV ECX,dword ptr [ESI + 0x10]
007ed170  MOV dword ptr [EAX],ECX
007ed172  MOV ECX,dword ptr [ESI + 0x14]
007ed175  MOV dword ptr [EAX + 0x4],ECX
007ed178  POP ESI
007ed179  POP EBP
007ed17a  RET
