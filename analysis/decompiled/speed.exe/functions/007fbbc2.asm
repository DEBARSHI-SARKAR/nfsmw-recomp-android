007fbbc2  PUSH EBP
007fbbc3  MOV EBP,ESP
007fbbc5  MOV ECX,dword ptr [0x009c1948]
007fbbcb  TEST ECX,ECX
007fbbcd  JZ 0x007fbbdb
007fbbcf  MOV EAX,dword ptr [ECX]
007fbbd1  PUSH 0x0
007fbbd3  PUSH dword ptr [EBP + 0x8]
007fbbd6  CALL dword ptr [EAX + 0x4]
007fbbd9  POP EBP
007fbbda  RET
007fbbdb  POP EBP
007fbbdc  JMP 0x007c7250
