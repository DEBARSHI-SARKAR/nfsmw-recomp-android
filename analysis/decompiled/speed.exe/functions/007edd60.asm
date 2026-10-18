007edd60  PUSH EBP
007edd61  MOV EBP,ESP
007edd63  PUSH dword ptr [EBP + 0x8]
007edd66  CALL 0x007edca5
007edd6b  POP ECX
007edd6c  MOV ECX,dword ptr [EAX + 0x80]
007edd72  MOV EAX,dword ptr [ECX]
007edd74  POP EBP
007edd75  JMP dword ptr [EAX + 0x2c]
