004da0a0  PUSH ESI
004da0a1  MOV ESI,dword ptr [ESP + 0x8]
004da0a5  MOV EAX,dword ptr [ESI]
004da0a7  PUSH EDI
004da0a8  MOV EDI,ECX
004da0aa  MOV ECX,ESI
004da0ac  CALL dword ptr [EAX + 0x4]
004da0af  MOV EAX,dword ptr [EAX]
004da0b1  SAR EAX,0x4
004da0b4  AND EAX,0xfff
004da0b9  SUB EAX,0x2
004da0bc  JZ 0x004da0d6
004da0be  DEC EAX
004da0bf  JZ 0x004da0ce
004da0c1  SUB EAX,0x4
004da0c4  JNZ 0x004da0d9
004da0c6  MOV dword ptr [EDI + 0x44],ESI
004da0c9  POP EDI
004da0ca  POP ESI
004da0cb  RET 0x4
004da0ce  MOV dword ptr [EDI + 0x4c],ESI
004da0d1  POP EDI
004da0d2  POP ESI
004da0d3  RET 0x4
004da0d6  MOV dword ptr [EDI + 0x48],ESI
004da0d9  POP EDI
004da0da  POP ESI
004da0db  RET 0x4
