007ca540  PUSH EBP
007ca541  MOV EBP,ESP
007ca543  MOV EAX,dword ptr [EBP + 0x8]
007ca546  CMP EAX,dword ptr [EBP + 0xc]
007ca549  JNC 0x007ca563
007ca54b  MOV ECX,dword ptr [EBP + 0x8]
007ca54e  CMP dword ptr [ECX],0x0
007ca551  JZ 0x007ca558
007ca553  MOV EDX,dword ptr [EBP + 0x8]
007ca556  CALL dword ptr [EDX]
007ca558  MOV EAX,dword ptr [EBP + 0x8]
007ca55b  ADD EAX,0x4
007ca55e  MOV dword ptr [EBP + 0x8],EAX
007ca561  JMP 0x007ca543
007ca563  POP EBP
007ca564  RET
