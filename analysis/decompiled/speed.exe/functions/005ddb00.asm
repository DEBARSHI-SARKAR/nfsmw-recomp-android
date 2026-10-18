005ddb00  MOV EAX,dword ptr [ESP + 0x4]
005ddb04  CMP EAX,dword ptr [ECX + 0xb4]
005ddb0a  JNC 0x005ddb16
005ddb0c  MOV EAX,dword ptr [ECX + EAX*0x4 + 0xb8]
005ddb13  RET 0x4
005ddb16  XOR EAX,EAX
005ddb18  RET 0x4
