0065cfa0  PUSH 0x0
0065cfa2  PUSH 0x30
0065cfa4  MOV ECX,0x925b30
0065cfa9  CALL 0x005d29d0
0065cfae  TEST EAX,EAX
0065cfb0  JZ 0x0065cfb8
0065cfb2  MOV dword ptr [EAX],0x0
0065cfb8  LEA ECX,[EAX + 0x4]
0065cfbb  TEST ECX,ECX
0065cfbd  JZ 0x0065cfc5
0065cfbf  MOV dword ptr [ECX],0x0
0065cfc5  LEA ECX,[EAX + 0x8]
0065cfc8  TEST ECX,ECX
0065cfca  JZ 0x0065cfd2
0065cfcc  MOV dword ptr [ECX],0x0
0065cfd2  MOV byte ptr [EAX + 0x28],0x1
0065cfd6  MOV byte ptr [EAX + 0x29],0x0
0065cfda  RET
