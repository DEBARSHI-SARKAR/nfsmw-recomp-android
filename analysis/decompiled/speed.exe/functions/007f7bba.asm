007f7bba  PUSH EBP
007f7bbb  MOV EBP,ESP
007f7bbd  MOV EAX,dword ptr [EBP + 0x8]
007f7bc0  FLD float ptr [EBP + 0x8]
007f7bc3  PUSH ESI
007f7bc4  MOV ESI,ECX
007f7bc6  MOV dword ptr [ESI + 0x48],EAX
007f7bc9  CALL 0x007c4b80
007f7bce  MOV ECX,dword ptr [ESI + 0x64]
007f7bd1  PUSH EAX
007f7bd2  CALL 0x007f9ad3
007f7bd7  MOV ECX,dword ptr [ESI + 0x64]
007f7bda  MOV dword ptr [ESI + 0x74],EAX
007f7bdd  CALL 0x007f9aad
007f7be2  MOV dword ptr [ESI + 0x44],EAX
007f7be5  MOV EAX,dword ptr [ESI + 0x74]
007f7be8  POP ESI
007f7be9  POP EBP
007f7bea  RET 0x4
