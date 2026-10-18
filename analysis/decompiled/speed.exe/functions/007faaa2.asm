007faaa2  PUSH EBP
007faaa3  MOV EBP,ESP
007faaa5  PUSH ESI
007faaa6  MOV ESI,ECX
007faaa8  CALL 0x007fa64e
007faaad  TEST byte ptr [EBP + 0x8],0x1
007faab1  JZ 0x007faabb
007faab3  PUSH ESI
007faab4  CALL dword ptr [0x00909e58]
007faaba  POP ECX
007faabb  MOV EAX,ESI
007faabd  POP ESI
007faabe  POP EBP
007faabf  RET 0x4
