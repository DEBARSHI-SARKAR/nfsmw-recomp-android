005b3fe0  MOV EAX,dword ptr [ECX + 0x8c]
005b3fe6  IMUL EAX,dword ptr [ECX + 0x60]
005b3fea  MOV EDX,dword ptr [ECX + 0x88]
005b3ff0  MOV ECX,dword ptr [ECX + 0x90]
005b3ff6  ADD EAX,EDX
005b3ff8  LEA EAX,[EAX + EAX*0x2]
005b3ffb  SHL EAX,0x4
005b3ffe  LEA EAX,[EAX + ECX*0x1 + 0x20]
005b4002  MOV ECX,dword ptr [ESP + 0x4]
005b4006  MOV EDX,dword ptr [ECX]
005b4008  MOV dword ptr [EAX],EDX
005b400a  MOV EDX,dword ptr [ECX + 0x4]
005b400d  MOV dword ptr [EAX + 0x4],EDX
005b4010  MOV EDX,dword ptr [ECX + 0x8]
005b4013  MOV dword ptr [EAX + 0x8],EDX
005b4016  MOV ECX,dword ptr [ECX + 0xc]
005b4019  MOV dword ptr [EAX + 0xc],ECX
005b401c  RET 0x4
