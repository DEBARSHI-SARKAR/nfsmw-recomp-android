0068cf70  PUSH ESI
0068cf71  MOV ESI,ECX
0068cf73  MOV EAX,dword ptr [ESI + 0x74]
0068cf76  LEA ECX,[ESI + 0x74]
0068cf79  CALL dword ptr [EAX + 0xc]
0068cf7c  MOV EDX,dword ptr [ESI + 0x48]
0068cf7f  LEA ECX,[ESI + 0x48]
0068cf82  POP ESI
0068cf83  JMP dword ptr [EDX + 0x4]
