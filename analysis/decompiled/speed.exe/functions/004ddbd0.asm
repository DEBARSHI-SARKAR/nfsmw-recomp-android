004ddbd0  PUSH ESI
004ddbd1  MOV ESI,dword ptr [ESP + 0x8]
004ddbd5  MOV EAX,dword ptr [ESI]
004ddbd7  PUSH EDI
004ddbd8  MOV EDI,ECX
004ddbda  MOV ECX,ESI
004ddbdc  CALL dword ptr [EAX + 0x4]
004ddbdf  MOV ECX,dword ptr [EAX]
004ddbe1  AND ECX,0xfff0
004ddbe7  CMP ECX,0x30
004ddbea  JNZ 0x004ddbef
004ddbec  MOV dword ptr [EDI + 0x28],ESI
004ddbef  POP EDI
004ddbf0  POP ESI
004ddbf1  RET 0x4
