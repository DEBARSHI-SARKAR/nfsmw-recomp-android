0065fdb0  PUSH ESI
0065fdb1  MOV ESI,ECX
0065fdb3  MOV EAX,dword ptr [ESI]
0065fdb5  SUB EAX,dword ptr [ESI + 0xc]
0065fdb8  TEST EAX,EAX
0065fdba  JLE 0x0065fddc
0065fdbc  PUSH EAX
0065fdbd  LEA EAX,[ESI + 0x118]
0065fdc3  PUSH EAX
0065fdc4  LEA ECX,[ESI + 0x14]
0065fdc7  PUSH ECX
0065fdc8  CALL 0x0065f9a0
0065fdcd  MOV EDX,dword ptr [ESI]
0065fdcf  ADD ESP,0xc
0065fdd2  MOV dword ptr [ESI + 0xc],EDX
0065fdd5  MOV dword ptr [ESI + 0x4],0x0
0065fddc  POP ESI
0065fddd  RET
