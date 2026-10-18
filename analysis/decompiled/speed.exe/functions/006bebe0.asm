006bebe0  MOV EAX,[0x00982ad4]
006bebe5  FLD float ptr [ESP + 0x4]
006bebe9  MOV ECX,dword ptr [0x00982ac4]
006bebef  LEA EAX,[EAX + EAX*0x2]
006bebf2  FSTP float ptr [ECX + EAX*0x8 + 0x14]
006bebf6  MOV EAX,[0x00982ad4]
006bebfb  FLD float ptr [ESP + 0x8]
006bebff  LEA EDX,[EAX + EAX*0x2 + 0x3]
006bec03  MOV EAX,[0x00982ac4]
006bec08  FSTP float ptr [EAX + EDX*0x8]
006bec0b  MOV EAX,[0x00982ad4]
006bec10  INC EAX
006bec11  MOV [0x00982ad4],EAX
006bec16  RET
