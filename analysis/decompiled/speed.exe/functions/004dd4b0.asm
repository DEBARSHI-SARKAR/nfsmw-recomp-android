004dd4b0  PUSH ESI
004dd4b1  MOV ESI,dword ptr [ESP + 0x8]
004dd4b5  MOV EAX,dword ptr [ESI]
004dd4b7  PUSH EDI
004dd4b8  MOV EDI,ECX
004dd4ba  MOV ECX,ESI
004dd4bc  CALL dword ptr [EAX + 0x4]
004dd4bf  MOV EAX,dword ptr [EAX]
004dd4c1  SAR EAX,0x4
004dd4c4  AND EAX,0xfff
004dd4c9  SUB EAX,0x0
004dd4cc  JZ 0x004dd4d9
004dd4ce  DEC EAX
004dd4cf  JNZ 0x004dd4dc
004dd4d1  MOV dword ptr [EDI + 0x40],ESI
004dd4d4  POP EDI
004dd4d5  POP ESI
004dd4d6  RET 0x4
004dd4d9  MOV dword ptr [EDI + 0x3c],ESI
004dd4dc  POP EDI
004dd4dd  POP ESI
004dd4de  RET 0x4
