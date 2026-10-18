0078e6d0  MOV EAX,dword ptr [ESP + 0x4]
0078e6d4  LEA EAX,[EAX + EAX*0x2]
0078e6d7  SHL EAX,0x4
0078e6da  MOV ECX,dword ptr [EAX + ECX*0x1 + 0x44]
0078e6de  TEST ECX,ECX
0078e6e0  MOV dword ptr [ESP + 0x4],ECX
0078e6e4  FILD dword ptr [ESP + 0x4]
0078e6e8  JGE 0x0078e6f0
0078e6ea  FADD float ptr [0x00891214]
0078e6f0  FMUL float ptr [0x00890d60]
0078e6f6  RET 0x4
