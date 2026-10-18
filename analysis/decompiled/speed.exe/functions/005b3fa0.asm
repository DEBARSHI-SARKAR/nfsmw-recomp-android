005b3fa0  MOV EAX,dword ptr [ECX + 0x8c]
005b3fa6  IMUL EAX,dword ptr [ECX + 0x60]
005b3faa  MOV EDX,dword ptr [ECX + 0x88]
005b3fb0  MOV ECX,dword ptr [ECX + 0x90]
005b3fb6  ADD EAX,EDX
005b3fb8  MOV EDX,dword ptr [ESP + 0x4]
005b3fbc  LEA EAX,[EAX + EAX*0x2]
005b3fbf  SHL EAX,0x4
005b3fc2  LEA EAX,[EAX + ECX*0x1 + 0xc]
005b3fc6  MOV ECX,dword ptr [ESP + 0x8]
005b3fca  MOV dword ptr [EAX],EDX
005b3fcc  MOV EDX,dword ptr [ESP + 0xc]
005b3fd0  MOV dword ptr [EAX + 0x4],ECX
005b3fd3  MOV dword ptr [EAX + 0x8],EDX
005b3fd6  RET 0xc
