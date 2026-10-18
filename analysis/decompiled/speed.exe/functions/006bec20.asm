006bec20  MOV EAX,[0x00982ad0]
006bec25  LEA ECX,[EAX + EAX*0x2]
006bec28  MOV EAX,dword ptr [ESP + 0x4]
006bec2c  MOV EDX,dword ptr [EAX]
006bec2e  PUSH ESI
006bec2f  MOV ESI,dword ptr [0x00982ac4]
006bec35  MOV dword ptr [ESI + ECX*0x8 + 0x4],EDX
006bec39  MOV EDX,dword ptr [EAX + 0x4]
006bec3c  MOV ECX,dword ptr [0x00982ad0]
006bec42  MOV ESI,dword ptr [0x00982ac4]
006bec48  LEA ECX,[ECX + ECX*0x2]
006bec4b  MOV dword ptr [ESI + ECX*0x8 + 0x8],EDX
006bec4f  MOV EDX,dword ptr [EAX + 0x8]
006bec52  MOV ECX,dword ptr [0x00982ad0]
006bec58  MOV EAX,[0x00982ac4]
006bec5d  LEA ECX,[ECX + ECX*0x2]
006bec60  MOV dword ptr [EAX + ECX*0x8 + 0xc],EDX
006bec64  INC dword ptr [0x00982ad0]
006bec6a  POP ESI
006bec6b  RET
