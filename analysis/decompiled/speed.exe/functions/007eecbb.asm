007eecbb  PUSH EBP
007eecbc  MOV EBP,ESP
007eecbe  TEST byte ptr [EBP + 0x8],0x1
007eecc2  PUSH ESI
007eecc3  MOV ESI,ECX
007eecc5  MOV dword ptr [ESI],0x8c1fa4
007eeccb  JZ 0x007eecd4
007eeccd  PUSH ESI
007eecce  CALL 0x00652b00
007eecd3  POP ECX
007eecd4  MOV EAX,ESI
007eecd6  POP ESI
007eecd7  POP EBP
007eecd8  RET 0x4
