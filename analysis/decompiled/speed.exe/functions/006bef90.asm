006bef90  PUSH ESI
006bef91  PUSH EDI
006bef92  MOV EDI,dword ptr [ESP + 0xc]
006bef96  PUSH EDI
006bef97  MOV ESI,ECX
006bef99  CALL 0x006beeb0
006bef9e  FLD float ptr [ESI + 0x24]
006befa1  FLD float ptr [ESI + 0x28]
006befa4  MOV EAX,dword ptr [ESI + 0x20]
006befa7  FXCH
006befa9  MOV dword ptr [EDI + 0x30],EAX
006befac  FSTP float ptr [EDI + 0x34]
006befaf  MOV dword ptr [EDI + 0x3c],0x3f800000
006befb6  FSTP float ptr [EDI + 0x38]
006befb9  POP EDI
006befba  POP ESI
006befbb  RET 0x4
