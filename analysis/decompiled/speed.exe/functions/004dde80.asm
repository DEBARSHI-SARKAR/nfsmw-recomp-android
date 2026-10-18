004dde80  PUSH ESI
004dde81  MOV ESI,dword ptr [ESP + 0x8]
004dde85  MOV EAX,dword ptr [ESI]
004dde87  PUSH EDI
004dde88  MOV EDI,ECX
004dde8a  MOV ECX,ESI
004dde8c  CALL dword ptr [EAX + 0x4]
004dde8f  TEST dword ptr [EAX],0xfff0
004dde95  JNZ 0x004dde9a
004dde97  MOV dword ptr [EDI + 0x2c],ESI
004dde9a  POP EDI
004dde9b  POP ESI
004dde9c  RET 0x4
