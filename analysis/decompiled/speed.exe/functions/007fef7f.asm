007fef7f  PUSH EBP
007fef80  MOV EBP,ESP
007fef82  MOV ECX,dword ptr [EBP + 0x10]
007fef85  TEST ECX,ECX
007fef87  MOV EAX,dword ptr [EBP + 0x8]
007fef8a  JBE 0x007fef9a
007fef8c  PUSH ESI
007fef8d  MOV DL,byte ptr [EAX]
007fef8f  MOV ESI,dword ptr [EBP + 0xc]
007fef92  MOV byte ptr [EAX + ESI*0x1],DL
007fef95  INC EAX
007fef96  DEC ECX
007fef97  JNZ 0x007fef8d
007fef99  POP ESI
007fef9a  POP EBP
007fef9b  RET
