005913f0  MOV EDX,dword ptr [ESP + 0x8]
005913f4  MOV EAX,ECX
005913f6  MOV ECX,dword ptr [ESP + 0x4]
005913fa  MOV dword ptr [EAX + 0x8],ECX
005913fd  MOV dword ptr [EAX + 0x14],EDX
00591400  XOR ECX,ECX
00591402  MOV dword ptr [EAX + 0xc],ECX
00591405  MOV dword ptr [EAX + 0x10],ECX
00591408  LEA EDX,[EAX + 0x18]
0059140b  MOV dword ptr [EDX],EDX
0059140d  MOV dword ptr [EDX + 0x4],EDX
00591410  MOV dword ptr [EAX + 0x20],ECX
00591413  MOV EDX,0x3f800000
00591418  MOV dword ptr [EAX + 0x30],EDX
0059141b  MOV dword ptr [EAX + 0x34],ECX
0059141e  MOV dword ptr [EAX + 0x38],ECX
00591421  MOV dword ptr [EAX + 0x3c],ECX
00591424  MOV dword ptr [EAX + 0x40],ECX
00591427  MOV dword ptr [EAX + 0x44],EDX
0059142a  MOV dword ptr [EAX + 0x48],ECX
0059142d  MOV dword ptr [EAX + 0x4c],ECX
00591430  MOV dword ptr [EAX + 0x50],ECX
00591433  MOV dword ptr [EAX + 0x54],ECX
00591436  MOV dword ptr [EAX + 0x58],EDX
00591439  MOV dword ptr [EAX + 0x5c],ECX
0059143c  MOV dword ptr [EAX + 0x60],ECX
0059143f  MOV dword ptr [EAX + 0x64],ECX
00591442  MOV dword ptr [EAX + 0x68],ECX
00591445  MOV dword ptr [EAX + 0x6c],EDX
00591448  RET 0x8
