007ee7aa  PUSH EBP
007ee7ab  MOV EBP,ESP
007ee7ad  MOV EAX,dword ptr [EBP + 0x8]
007ee7b0  PUSH ESI
007ee7b1  MOV ESI,ECX
007ee7b3  MOV ECX,dword ptr [EAX + 0x80]
007ee7b9  PUSH dword ptr [ESI + 0x30]
007ee7bc  MOV EAX,dword ptr [ECX]
007ee7be  CALL dword ptr [EAX + 0x28]
007ee7c1  NEG AL
007ee7c3  SBB AL,AL
007ee7c5  AND AL,0x3
007ee7c7  ADD AL,0xfe
007ee7c9  MOV byte ptr [ESI + 0x11],AL
007ee7cc  POP ESI
007ee7cd  POP EBP
007ee7ce  RET 0x4
