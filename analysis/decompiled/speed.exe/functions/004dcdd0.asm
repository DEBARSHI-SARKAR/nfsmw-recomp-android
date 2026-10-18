004dcdd0  PUSH ESI
004dcdd1  MOV ESI,dword ptr [ESP + 0x8]
004dcdd5  MOV EAX,dword ptr [ESI]
004dcdd7  PUSH EDI
004dcdd8  MOV EDI,ECX
004dcdda  MOV ECX,ESI
004dcddc  CALL dword ptr [EAX + 0x4]
004dcddf  MOV ECX,dword ptr [EAX]
004dcde1  AND ECX,0xfff0
004dcde7  CMP ECX,0x60
004dcdea  JNZ 0x004dcdef
004dcdec  MOV dword ptr [EDI + 0x4c],ESI
004dcdef  POP EDI
004dcdf0  POP ESI
004dcdf1  RET 0x4
