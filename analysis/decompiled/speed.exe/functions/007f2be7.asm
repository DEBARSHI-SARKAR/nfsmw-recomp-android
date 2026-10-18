007f2be7  PUSH EBP
007f2be8  MOV EBP,ESP
007f2bea  PUSH ESI
007f2beb  PUSH dword ptr [EBP + 0xc]
007f2bee  MOV ESI,ECX
007f2bf0  PUSH dword ptr [EBP + 0x8]
007f2bf3  CALL 0x007f34a4
007f2bf8  PUSH dword ptr [EBP + 0xc]
007f2bfb  MOV EAX,dword ptr [ESI]
007f2bfd  AND dword ptr [ESI + 0x78],0x0
007f2c01  MOV ECX,ESI
007f2c03  CALL dword ptr [EAX + 0x18]
007f2c06  POP ESI
007f2c07  POP EBP
007f2c08  RET 0x8
