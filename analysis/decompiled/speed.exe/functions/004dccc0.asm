004dccc0  PUSH ESI
004dccc1  PUSH EDI
004dccc2  MOV EDI,ECX
004dccc4  MOV EAX,dword ptr [EDI + 0xc]
004dccc7  MOV dword ptr [EAX + 0x8],0x0
004dccce  MOV ESI,dword ptr [EDI + 0x2c]
004dccd1  TEST ESI,ESI
004dccd3  JZ 0x004dccf0
004dccd5  MOV ECX,dword ptr [ESI]
004dccd7  TEST ECX,ECX
004dccd9  JZ 0x004dcce0
004dccdb  CALL 0x00831782
004dcce0  PUSH ESI
004dcce1  CALL 0x00831682
004dcce6  ADD ESP,0x4
004dcce9  MOV dword ptr [EDI + 0x2c],0x0
004dccf0  POP EDI
004dccf1  POP ESI
004dccf2  RET
