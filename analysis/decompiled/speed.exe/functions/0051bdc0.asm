0051bdc0  PUSH ESI
0051bdc1  PUSH EDI
0051bdc2  MOV EDI,ECX
0051bdc4  MOV ESI,dword ptr [EDI + 0x2c]
0051bdc7  TEST ESI,ESI
0051bdc9  JZ 0x0051bdf7
0051bdcb  OR dword ptr [ESI + 0x1c],0x400000
0051bdd2  MOV dword ptr [ESI + 0x60],0x18eebc5e
0051bdd9  MOV ECX,dword ptr [0x0091dd08]
0051bddf  TEST ECX,ECX
0051bde1  JZ 0x0051bde8
0051bde3  MOV EAX,dword ptr [ECX]
0051bde5  PUSH ESI
0051bde6  CALL dword ptr [EAX]
0051bde8  MOV ECX,dword ptr [ESI + 0x1c]
0051bdeb  AND ECX,0xfffffffd
0051bdee  OR ECX,0x400000
0051bdf4  MOV dword ptr [ESI + 0x1c],ECX
0051bdf7  MOV EDX,dword ptr [0x0091ca20]
0051bdfd  MOV EAX,dword ptr [EDX]
0051bdff  FILD dword ptr [EAX + 0x10]
0051be02  PUSH ECX
0051be03  LEA ESI,[EDI + 0x5c]
0051be06  MOV ECX,ESI
0051be08  FSTP float ptr [ESP]
0051be0b  CALL 0x0056cd20
0051be10  MOV EDX,dword ptr [ESI]
0051be12  POP EDI
0051be13  MOV ECX,ESI
0051be15  POP ESI
0051be16  JMP dword ptr [EDX + 0x24]
