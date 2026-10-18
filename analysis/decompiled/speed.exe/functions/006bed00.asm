006bed00  MOV EAX,[0x00982ad0]
006bed05  LEA ECX,[EAX + EAX*0x2]
006bed08  MOV EAX,dword ptr [ESP + 0x4]
006bed0c  MOV EDX,dword ptr [EAX]
006bed0e  PUSH ESI
006bed0f  MOV ESI,dword ptr [0x00982ac4]
006bed15  MOV dword ptr [ESI + ECX*0x8 + 0x4],EDX
006bed19  MOV EDX,dword ptr [EAX + 0x4]
006bed1c  MOV ECX,dword ptr [0x00982ad0]
006bed22  MOV ESI,dword ptr [0x00982ac4]
006bed28  LEA ECX,[ECX + ECX*0x2]
006bed2b  MOV dword ptr [ESI + ECX*0x8 + 0x8],EDX
006bed2f  MOV EDX,dword ptr [EAX + 0x8]
006bed32  MOV ECX,dword ptr [0x00982ad0]
006bed38  MOV EAX,[0x00982ac4]
006bed3d  LEA ECX,[ECX + ECX*0x2]
006bed40  MOV dword ptr [EAX + ECX*0x8 + 0xc],EDX
006bed44  INC dword ptr [0x00982ad0]
006bed4a  POP ESI
006bed4b  RET
