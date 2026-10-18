006becc0  MOV EAX,[0x00982ad4]
006becc5  FLD float ptr [ESP + 0x4]
006becc9  MOV ECX,dword ptr [0x00982ac4]
006beccf  LEA EAX,[EAX + EAX*0x2]
006becd2  FSTP float ptr [ECX + EAX*0x8 + 0x14]
006becd6  MOV EAX,[0x00982ad4]
006becdb  FLD float ptr [ESP + 0x8]
006becdf  LEA EDX,[EAX + EAX*0x2 + 0x3]
006bece3  MOV EAX,[0x00982ac4]
006bece8  FSTP float ptr [EAX + EDX*0x8]
006beceb  MOV EAX,[0x00982ad4]
006becf0  INC EAX
006becf1  MOV [0x00982ad4],EAX
006becf6  RET
