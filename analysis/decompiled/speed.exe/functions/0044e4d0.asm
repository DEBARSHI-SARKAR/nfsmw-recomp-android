0044e4d0  PUSH 0x1c
0044e4d2  CALL 0x00652ad0
0044e4d7  ADD ESP,0x4
0044e4da  TEST EAX,EAX
0044e4dc  JZ 0x0044e525
0044e4de  MOV ECX,dword ptr [ESP + 0x4]
0044e4e2  MOV dword ptr [EAX + 0xc],ECX
0044e4e5  MOV dword ptr [EAX],0x893af4
0044e4eb  MOV dword ptr [EAX + 0x10],0x0
0044e4f2  LEA ECX,[EAX + 0x14]
0044e4f5  MOV dword ptr [ECX],ECX
0044e4f7  MOV dword ptr [ECX + 0x4],ECX
0044e4fa  MOV ECX,dword ptr [ESP + 0x8]
0044e4fe  ADD ECX,0x8
0044e501  MOV dword ptr [EAX + 0x10],ECX
0044e504  LEA EDX,[ECX + 0x40]
0044e507  MOV dword ptr [ECX + 0x14],EDX
0044e50a  MOV EDX,dword ptr [0x0090dac0]
0044e510  LEA ECX,[EAX + 0x4]
0044e513  MOV dword ptr [EDX],ECX
0044e515  MOV dword ptr [0x0090dac0],ECX
0044e51b  MOV dword ptr [ECX + 0x4],EDX
0044e51e  MOV dword ptr [ECX],0x90dabc
0044e524  RET
0044e525  XOR EAX,EAX
0044e527  RET
