004de0c0  PUSH ESI
004de0c1  MOV ESI,dword ptr [ESP + 0x8]
004de0c5  MOV EAX,dword ptr [ESI]
004de0c7  PUSH EDI
004de0c8  MOV EDI,ECX
004de0ca  MOV ECX,ESI
004de0cc  CALL dword ptr [EAX + 0x4]
004de0cf  TEST dword ptr [EAX],0xfff0
004de0d5  JNZ 0x004de0da
004de0d7  MOV dword ptr [EDI + 0x28],ESI
004de0da  POP EDI
004de0db  POP ESI
004de0dc  RET 0x4
