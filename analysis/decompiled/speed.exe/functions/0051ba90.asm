0051ba90  PUSH ESI
0051ba91  PUSH EDI
0051ba92  MOV EDI,ECX
0051ba94  MOV ESI,dword ptr [EDI + 0x2c]
0051ba97  TEST ESI,ESI
0051ba99  JZ 0x0051bac7
0051ba9b  OR dword ptr [ESI + 0x1c],0x400000
0051baa2  MOV dword ptr [ESI + 0x60],0xf2e2d84a
0051baa9  MOV ECX,dword ptr [0x0091dd08]
0051baaf  TEST ECX,ECX
0051bab1  JZ 0x0051bab8
0051bab3  MOV EAX,dword ptr [ECX]
0051bab5  PUSH ESI
0051bab6  CALL dword ptr [EAX]
0051bab8  MOV ECX,dword ptr [ESI + 0x1c]
0051babb  AND ECX,0xfffffffd
0051babe  OR ECX,0x400000
0051bac4  MOV dword ptr [ESI + 0x1c],ECX
0051bac7  MOV EDX,dword ptr [0x0091ca20]
0051bacd  MOV EAX,dword ptr [EDX]
0051bacf  FILD dword ptr [EAX + 0x8]
0051bad2  PUSH ECX
0051bad3  LEA ESI,[EDI + 0x5c]
0051bad6  MOV ECX,ESI
0051bad8  FSTP float ptr [ESP]
0051badb  CALL 0x0056cd20
0051bae0  MOV EDX,dword ptr [ESI]
0051bae2  POP EDI
0051bae3  MOV ECX,ESI
0051bae5  POP ESI
0051bae6  JMP dword ptr [EDX + 0x24]
