007da170  PUSH EBX
007da171  MOV EBX,ESP
007da173  SUB ESP,0x8
007da176  AND ESP,0xfffffff0
007da179  ADD ESP,0x4
007da17c  PUSH EBP
007da17d  MOV EBP,dword ptr [EBX + 0x4]
007da180  MOV dword ptr [ESP + 0x4],EBP
007da184  MOV EBP,ESP
007da186  SUB ESP,0x90
007da18c  MOV EAX,[0x00906980]
007da191  MOV dword ptr [EBP + -0x4],EAX
007da194  MOV EAX,dword ptr [EBX + 0x28]
007da197  PUSH EAX
007da198  LEA ECX,[EBX + 0x20]
007da19b  PUSH ECX
007da19c  MOV EDX,dword ptr [EBX + 0x8]
007da19f  PUSH EDX
007da1a0  CALL 0x007da730
007da1a5  ADD ESP,0xc
007da1a8  TEST EAX,EAX
007da1aa  JNZ 0x007da1e7
007da1ac  MOV EAX,dword ptr [EBP + -0x40]
007da1af  OR EAX,0x1
007da1b2  MOV dword ptr [EBP + -0x40],EAX
007da1b5  MOV ECX,dword ptr [EBP + -0x40]
007da1b8  AND ECX,0xffffffe1
007da1bb  OR ECX,0x2
007da1be  MOV dword ptr [EBP + -0x40],ECX
007da1c1  FLD double ptr [EBX + 0x18]
007da1c4  FSTP double ptr [EBP + -0x50]
007da1c7  LEA EDX,[EBX + 0x20]
007da1ca  PUSH EDX
007da1cb  LEA EAX,[EBX + 0x10]
007da1ce  PUSH EAX
007da1cf  MOV ECX,dword ptr [EBX + 0xc]
007da1d2  PUSH ECX
007da1d3  MOV EDX,dword ptr [EBX + 0x8]
007da1d6  PUSH EDX
007da1d7  LEA EAX,[EBX + 0x28]
007da1da  PUSH EAX
007da1db  LEA ECX,[EBP + -0x80]
007da1de  PUSH ECX
007da1df  CALL 0x007da280
007da1e4  ADD ESP,0x18
007da1e7  MOV EDX,dword ptr [EBX + 0x8]
007da1ea  PUSH EDX
007da1eb  CALL 0x007dab70
007da1f0  ADD ESP,0x4
007da1f3  MOV dword ptr [EBP + 0xffffff7c],EAX
007da1f9  CMP dword ptr [0x00907390],0x0
007da200  JNZ 0x007da23f
007da202  CMP dword ptr [EBP + 0xffffff7c],0x0
007da209  JZ 0x007da23f
007da20b  MOV EAX,dword ptr [EBX + 0x28]
007da20e  PUSH EAX
007da20f  FLD double ptr [EBX + 0x20]
007da212  SUB ESP,0x8
007da215  FSTP double ptr [ESP]
007da218  FLD double ptr [EBX + 0x18]
007da21b  SUB ESP,0x8
007da21e  FSTP double ptr [ESP]
007da221  FLD double ptr [EBX + 0x10]
007da224  SUB ESP,0x8
007da227  FSTP double ptr [ESP]
007da22a  MOV ECX,dword ptr [EBX + 0xc]
007da22d  PUSH ECX
007da22e  MOV EDX,dword ptr [EBP + 0xffffff7c]
007da234  PUSH EDX
007da235  CALL 0x007daa50
007da23a  ADD ESP,0x24
007da23d  JMP 0x007da262
007da23f  MOV EAX,dword ptr [EBP + 0xffffff7c]
007da245  PUSH EAX
007da246  CALL 0x007daaf0
007da24b  ADD ESP,0x4
007da24e  PUSH 0xffff
007da253  MOV ECX,dword ptr [EBX + 0x28]
007da256  PUSH ECX
007da257  CALL 0x007dac10
007da25c  ADD ESP,0x8
007da25f  FLD double ptr [EBX + 0x20]
007da262  MOV ECX,dword ptr [EBP + -0x4]
007da265  CALL 0x007d6cb0
007da26a  MOV ESP,EBP
007da26c  POP EBP
007da26d  MOV ESP,EBX
007da26f  POP EBX
007da270  RET
