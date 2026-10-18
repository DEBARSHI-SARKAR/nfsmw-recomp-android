007ecfcc  PUSH EBP
007ecfcd  MOV EBP,ESP
007ecfcf  TEST byte ptr [EBP + 0x8],0x1
007ecfd3  PUSH ESI
007ecfd4  MOV ESI,ECX
007ecfd6  MOV dword ptr [ESI],0x8c1fa4
007ecfdc  JZ 0x007ecfe5
007ecfde  PUSH ESI
007ecfdf  CALL 0x00652b00
007ecfe4  POP ECX
007ecfe5  MOV EAX,ESI
007ecfe7  POP ESI
007ecfe8  POP EBP
007ecfe9  RET 0x4
