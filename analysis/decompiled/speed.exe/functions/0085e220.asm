0085e220  PUSH EBP
0085e221  MOV EBP,ESP
0085e223  PUSH -0x1
0085e225  PUSH 0x8c7b48
0085e22a  PUSH 0x7cd5e4
0085e22f  MOV EAX,FS:[0x0]
0085e235  PUSH EAX
0085e236  MOV dword ptr FS:[0x0],ESP
0085e23d  ADD ESP,0xfffffed8
0085e243  MOV EAX,[0x00906980]
0085e248  MOV dword ptr [EBP + -0x20],EAX
0085e24b  PUSH EBX
0085e24c  PUSH ESI
0085e24d  PUSH EDI
0085e24e  MOV dword ptr [EBP + -0x18],ESP
0085e251  LEA EAX,[EBP + 0xfffffed8]
0085e257  MOV dword ptr [EBP + 0xfffffecc],EAX
0085e25d  MOV dword ptr [EBP + 0xfffffed0],0x0
0085e267  MOV dword ptr [EBP + 0xfffffed4],0x0
0085e271  MOV ECX,dword ptr [EBP + 0xfffffecc]
0085e277  PUSH ECX
0085e278  PUSH 0x105
0085e27d  CALL dword ptr [0x00890174]
0085e283  MOV dword ptr [EBP + 0xfffffed4],EAX
0085e289  CMP dword ptr [EBP + 0xfffffed4],0x104
0085e293  JLE 0x0085e34a
0085e299  MOV dword ptr [EBP + -0x4],0x0
0085e2a0  MOV EAX,dword ptr [EBP + 0xfffffed4]
0085e2a6  ADD EAX,0x4
0085e2a9  AND EAX,0xfffffffc
0085e2ac  CALL 0x007c94b0
0085e2b1  MOV dword ptr [EBP + 0xfffffec8],ESP
0085e2b7  MOV dword ptr [EBP + -0x18],ESP
0085e2ba  MOV EDX,dword ptr [EBP + 0xfffffec8]
0085e2c0  MOV dword ptr [EBP + 0xfffffecc],EDX
0085e2c6  MOV dword ptr [EBP + -0x4],0xffffffff
0085e2cd  JMP 0x0085e324
0085e324  CMP dword ptr [EBP + 0xfffffed4],0x0
0085e32b  JZ 0x0085e34a
0085e32d  MOV ECX,dword ptr [EBP + 0xfffffecc]
0085e333  PUSH ECX
0085e334  MOV EDX,dword ptr [EBP + 0xfffffed4]
0085e33a  ADD EDX,0x1
0085e33d  PUSH EDX
0085e33e  CALL dword ptr [0x00890174]
0085e344  MOV dword ptr [EBP + 0xfffffed4],EAX
0085e34a  MOV dword ptr [EBP + -0x1c],0x0
0085e351  CMP dword ptr [EBP + 0xfffffed4],0x0
0085e358  JZ 0x0085e381
0085e35a  MOV EAX,dword ptr [EBP + 0xfffffecc]
0085e360  MOVZX ECX,byte ptr [EAX + 0x1]
0085e364  CMP ECX,0x3a
0085e367  JNZ 0x0085e381
0085e369  MOV EDX,dword ptr [EBP + 0xfffffecc]
0085e36f  MOVZX EAX,byte ptr [EDX]
0085e372  PUSH EAX
0085e373  CALL 0x00860240
0085e378  ADD ESP,0x4
0085e37b  SUB EAX,0x40
0085e37e  MOV dword ptr [EBP + -0x1c],EAX
0085e381  CMP dword ptr [EBP + 0xfffffed0],0x0
0085e388  JZ 0x0085e39b
0085e38a  PUSH 0x2
0085e38c  MOV ECX,dword ptr [EBP + 0xfffffecc]
0085e392  PUSH ECX
0085e393  CALL 0x007c7290
0085e398  ADD ESP,0x8
0085e39b  MOV EAX,dword ptr [EBP + -0x1c]
0085e39e  LEA ESP,[EBP + 0xfffffebc]
0085e3a4  MOV ECX,dword ptr [EBP + -0x10]
0085e3a7  MOV dword ptr FS:[0x0],ECX
0085e3ae  MOV ECX,dword ptr [EBP + -0x20]
0085e3b1  CALL 0x007d6cb0
0085e3b6  POP EDI
0085e3b7  POP ESI
0085e3b8  POP EBX
0085e3b9  MOV ESP,EBP
0085e3bb  POP EBP
0085e3bc  RET
