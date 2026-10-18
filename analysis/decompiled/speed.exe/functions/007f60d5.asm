007f60d5  PUSH EBP
007f60d6  MOV EBP,ESP
007f60d8  MOV EAX,dword ptr [EBP + 0x8]
007f60db  OR dword ptr [ECX + 0x8],0xffffffff
007f60df  MOV dword ptr [ECX],0x2
007f60e5  MOV dword ptr [ECX + 0x4],EAX
007f60e8  ADD ECX,0xc
007f60eb  CALL 0x007f3d1a
007f60f0  POP EBP
007f60f1  RET 0x4
