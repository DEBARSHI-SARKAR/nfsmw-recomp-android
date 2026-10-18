0056dbe0  MOV EAX,dword ptr [ESP + 0x4]
0056dbe4  CMP EAX,0xb
0056dbe7  JL 0x0056dbf6
0056dbe9  MOV EAX,dword ptr [ECX + 0x18]
0056dbec  LEA EAX,[EAX + EAX*0x2]
0056dbef  LEA EAX,[ECX + EAX*0x8 + 0x1c]
0056dbf3  RET 0x4
0056dbf6  LEA EDX,[EAX + EAX*0x2]
0056dbf9  LEA EAX,[ECX + EDX*0x8 + 0x1c]
0056dbfd  RET 0x4
