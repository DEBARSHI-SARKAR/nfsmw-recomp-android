004dfda0  PUSH ESI
004dfda1  MOV ESI,dword ptr [ESP + 0x8]
004dfda5  MOV EAX,dword ptr [ESI]
004dfda7  PUSH EDI
004dfda8  MOV EDI,ECX
004dfdaa  MOV ECX,ESI
004dfdac  CALL dword ptr [EAX + 0x4]
004dfdaf  TEST dword ptr [EAX],0xfff0
004dfdb5  JNZ 0x004dfdba
004dfdb7  MOV dword ptr [EDI + 0x5c],ESI
004dfdba  POP EDI
004dfdbb  POP ESI
004dfdbc  RET 0x4
