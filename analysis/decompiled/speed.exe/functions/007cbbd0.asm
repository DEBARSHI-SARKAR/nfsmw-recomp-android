007cbbd0  PUSH EBP
007cbbd1  MOV EBP,ESP
007cbbd3  MOV EAX,dword ptr [EBP + 0xc]
007cbbd6  AND EAX,0xfff7ffff
007cbbdb  PUSH EAX
007cbbdc  MOV ECX,dword ptr [EBP + 0x8]
007cbbdf  PUSH ECX
007cbbe0  CALL 0x007cbb80
007cbbe5  ADD ESP,0x8
007cbbe8  POP EBP
007cbbe9  RET
