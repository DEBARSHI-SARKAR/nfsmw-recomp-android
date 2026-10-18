005bbb90  MOV EAX,dword ptr [ESP + 0xc]
005bbb94  CMP EAX,0xe10c4af9
005bbb99  JA 0x005bbbe1
005bbb9b  JZ 0x005bbbcf
005bbb9d  CMP EAX,0x30471ac
005bbba2  JZ 0x005bbbbd
005bbba4  CMP EAX,0xe10814a6
005bbba9  JNZ 0x005bbbe8
005bbbab  MOV ECX,dword ptr [ESP + 0x4]
005bbbaf  PUSH 0x1
005bbbb1  PUSH 0x0
005bbbb3  CALL 0x005b9c80
005bbbb8  MOV AL,0x1
005bbbba  RET 0xc
005bbbbd  MOV ECX,dword ptr [ESP + 0x4]
005bbbc1  PUSH 0x0
005bbbc3  PUSH 0x1
005bbbc5  CALL 0x005b9c80
005bbbca  MOV AL,0x1
005bbbcc  RET 0xc
005bbbcf  MOV ECX,dword ptr [ESP + 0x4]
005bbbd3  PUSH 0x0
005bbbd5  PUSH -0x1
005bbbd7  CALL 0x005b9c80
005bbbdc  MOV AL,0x1
005bbbde  RET 0xc
005bbbe1  CMP EAX,0xfb814f13
005bbbe6  JZ 0x005bbbed
005bbbe8  XOR AL,AL
005bbbea  RET 0xc
005bbbed  MOV ECX,dword ptr [ESP + 0x4]
005bbbf1  PUSH -0x1
005bbbf3  PUSH 0x0
005bbbf5  CALL 0x005b9c80
005bbbfa  MOV AL,0x1
005bbbfc  RET 0xc
