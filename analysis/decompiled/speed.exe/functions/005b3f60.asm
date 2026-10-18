005b3f60  MOV EAX,dword ptr [ECX + 0x8c]
005b3f66  IMUL EAX,dword ptr [ECX + 0x60]
005b3f6a  MOV EDX,dword ptr [ECX + 0x88]
005b3f70  MOV ECX,dword ptr [ECX + 0x90]
005b3f76  ADD EAX,EDX
005b3f78  LEA EAX,[EAX + EAX*0x2]
005b3f7b  SHL EAX,0x4
005b3f7e  LEA EAX,[EAX + ECX*0x1 + 0x4]
005b3f82  MOV ECX,dword ptr [ESP + 0x4]
005b3f86  MOV EDX,dword ptr [ECX]
005b3f88  MOV dword ptr [EAX],EDX
005b3f8a  MOV ECX,dword ptr [ECX + 0x4]
005b3f8d  MOV dword ptr [EAX + 0x4],ECX
005b3f90  RET 0x4
