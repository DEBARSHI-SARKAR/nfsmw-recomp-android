007cfd81  MOV EAX,dword ptr [EBP + -0x1c]
007cfd84  CMP EAX,dword ptr [EBP + 0x14]
007cfd87  JNZ 0x007cfd8b
007cfd89  JMP 0x007cfd90
007cfd8b  CALL 0x007d0ab0
007cfd90  MOV ECX,dword ptr [EBP + 0x8]
007cfd93  MOV EDX,dword ptr [EBP + -0x1c]
007cfd96  MOV dword ptr [ECX + 0x8],EDX
007cfd99  MOV ECX,dword ptr [EBP + -0x10]
007cfd9c  MOV dword ptr FS:[0x0],ECX
007cfda3  POP EDI
007cfda4  POP ESI
007cfda5  POP EBX
007cfda6  MOV ESP,EBP
007cfda8  POP EBP
007cfda9  RET
