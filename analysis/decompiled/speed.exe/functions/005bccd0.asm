005bccd0  PUSH ESI
005bccd1  PUSH EDI
005bccd2  MOV EDI,dword ptr [ESP + 0xc]
005bccd6  MOV ESI,ECX
005bccd8  MOV ECX,dword ptr [EDI]
005bccda  TEST ECX,ECX
005bccdc  JZ 0x005bcd0b
005bccde  XOR EAX,EAX
005bcce0  CMP word ptr [ECX],AX
005bcce3  JZ 0x005bcced
005bcce5  INC EAX
005bcce6  CMP word ptr [ECX + EAX*0x2],0x0
005bcceb  JNZ 0x005bcce5
005bcced  MOV ECX,dword ptr [ESI + 0x4]
005bccf0  INC EAX
005bccf1  CMP EAX,ECX
005bccf3  JBE 0x005bccfd
005bccf5  PUSH EAX
005bccf6  MOV ECX,ESI
005bccf8  CALL 0x005b91c0
005bccfd  MOV EAX,dword ptr [EDI]
005bccff  MOV ECX,dword ptr [ESI]
005bcd01  PUSH EAX
005bcd02  PUSH ECX
005bcd03  CALL 0x005b37c0
005bcd08  ADD ESP,0x8
005bcd0b  POP EDI
005bcd0c  MOV EAX,ESI
005bcd0e  POP ESI
005bcd0f  RET 0x4
