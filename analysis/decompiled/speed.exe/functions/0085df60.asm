0085df60  PUSH EBP
0085df61  MOV EBP,ESP
0085df63  SUB ESP,0x150
0085df69  MOV EAX,[0x00906980]
0085df6e  MOV dword ptr [EBP + -0x4],EAX
0085df71  LEA EAX,[EBP + 0xfffffeb8]
0085df77  PUSH EAX
0085df78  MOV ECX,dword ptr [EBP + 0x8]
0085df7b  PUSH ECX
0085df7c  CALL dword ptr [0x00890104]
0085df82  TEST EAX,EAX
0085df84  JNZ 0x0085dff4
0085df86  CALL dword ptr [0x00890188]
0085df8c  MOV dword ptr [EBP + 0xfffffeb4],EAX
0085df92  MOV EDX,dword ptr [EBP + 0xfffffeb4]
0085df98  MOV dword ptr [EBP + 0xfffffeb0],EDX
0085df9e  MOV EAX,dword ptr [EBP + 0xfffffeb0]
0085dfa4  SUB EAX,0x2
0085dfa7  MOV dword ptr [EBP + 0xfffffeb0],EAX
0085dfad  CMP dword ptr [EBP + 0xfffffeb0],0x10
0085dfb4  JA 0x0085dfe4
0085dfb6  MOV ECX,dword ptr [EBP + 0xfffffeb0]
0085dfbc  MOVZX EDX,byte ptr [ECX + 0x85e08a]
0085dfc3  JMP dword ptr [EDX*0x4 + 0x85e07e]
0085dfca  CALL 0x007cb270
0085dfcf  MOV dword ptr [EAX],0x2
0085dfd5  JMP 0x0085dfef
0085dfd7  CALL 0x007cb270
0085dfdc  MOV dword ptr [EAX],0xc
0085dfe2  JMP 0x0085dfef
0085dfe4  CALL 0x007cb270
0085dfe9  MOV dword ptr [EAX],0x16
0085dfef  OR EAX,0xffffffff
0085dff2  JMP 0x0085e072
0085dff4  XOR EAX,EAX
0085dff6  CMP dword ptr [EBP + 0xfffffeb8],0x80
0085e000  SETZ AL
0085e003  DEC EAX
0085e004  AND EAX,dword ptr [EBP + 0xfffffeb8]
0085e00a  MOV ECX,dword ptr [EBP + 0xc]
0085e00d  MOV dword ptr [ECX],EAX
0085e00f  LEA EDX,[EBP + 0xfffffebc]
0085e015  PUSH EDX
0085e016  CALL 0x0085e0d0
0085e01b  ADD ESP,0x4
0085e01e  MOV ECX,dword ptr [EBP + 0xc]
0085e021  MOV dword ptr [ECX + 0x4],EAX
0085e024  LEA EDX,[EBP + 0xfffffec4]
0085e02a  PUSH EDX
0085e02b  CALL 0x0085e0d0
0085e030  ADD ESP,0x4
0085e033  MOV ECX,dword ptr [EBP + 0xc]
0085e036  MOV dword ptr [ECX + 0x8],EAX
0085e039  LEA EDX,[EBP + 0xfffffecc]
0085e03f  PUSH EDX
0085e040  CALL 0x0085e0d0
0085e045  ADD ESP,0x4
0085e048  MOV ECX,dword ptr [EBP + 0xc]
0085e04b  MOV dword ptr [ECX + 0xc],EAX
0085e04e  MOV EDX,dword ptr [EBP + 0xc]
0085e051  MOV EAX,dword ptr [EBP + 0xfffffed8]
0085e057  MOV dword ptr [EDX + 0x10],EAX
0085e05a  LEA ECX,[EBP + 0xfffffee4]
0085e060  PUSH ECX
0085e061  MOV EDX,dword ptr [EBP + 0xc]
0085e064  ADD EDX,0x14
0085e067  PUSH EDX
0085e068  CALL 0x007d0bd0
0085e06d  ADD ESP,0x8
0085e070  XOR EAX,EAX
0085e072  MOV ECX,dword ptr [EBP + -0x4]
0085e075  CALL 0x007d6cb0
0085e07a  MOV ESP,EBP
0085e07c  POP EBP
0085e07d  RET
