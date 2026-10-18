007dd8c0  PUSH EBP
007dd8c1  MOV EBP,ESP
007dd8c3  SUB ESP,0x528
007dd8c9  MOV EAX,[0x00906980]
007dd8ce  MOV dword ptr [EBP + -0x4],EAX
007dd8d1  LEA EAX,[EBP + 0xfffffad8]
007dd8d7  PUSH EAX
007dd8d8  MOV ECX,dword ptr [0x009c51c4]
007dd8de  PUSH ECX
007dd8df  CALL dword ptr [0x00890244]
007dd8e5  CMP EAX,0x1
007dd8e8  JNZ 0x007ddb0b
007dd8ee  MOV dword ptr [EBP + 0xfffffaec],0x0
007dd8f8  JMP 0x007dd909
007dd8fa  MOV EDX,dword ptr [EBP + 0xfffffaec]
007dd900  ADD EDX,0x1
007dd903  MOV dword ptr [EBP + 0xfffffaec],EDX
007dd909  CMP dword ptr [EBP + 0xfffffaec],0x100
007dd913  JNC 0x007dd92a
007dd915  MOV EAX,dword ptr [EBP + 0xfffffaec]
007dd91b  MOV CL,byte ptr [EBP + 0xfffffaec]
007dd921  MOV byte ptr [EBP + EAX*0x1 + 0xfffffaf0],CL
007dd928  JMP 0x007dd8fa
007dd92a  MOV byte ptr [EBP + 0xfffffaf0],0x20
007dd931  LEA EDX,[EBP + 0xfffffade]
007dd937  MOV dword ptr [EBP + 0xfffffbf4],EDX
007dd93d  JMP 0x007dd94e
007dd93f  MOV EAX,dword ptr [EBP + 0xfffffbf4]
007dd945  ADD EAX,0x2
007dd948  MOV dword ptr [EBP + 0xfffffbf4],EAX
007dd94e  MOV ECX,dword ptr [EBP + 0xfffffbf4]
007dd954  MOVZX EDX,byte ptr [ECX]
007dd957  TEST EDX,EDX
007dd959  JZ 0x007dd99f
007dd95b  MOV EAX,dword ptr [EBP + 0xfffffbf4]
007dd961  MOVZX ECX,byte ptr [EAX]
007dd964  MOV dword ptr [EBP + 0xfffffaec],ECX
007dd96a  JMP 0x007dd97b
007dd96c  MOV EDX,dword ptr [EBP + 0xfffffaec]
007dd972  ADD EDX,0x1
007dd975  MOV dword ptr [EBP + 0xfffffaec],EDX
007dd97b  MOV EAX,dword ptr [EBP + 0xfffffbf4]
007dd981  MOVZX ECX,byte ptr [EAX + 0x1]
007dd985  CMP dword ptr [EBP + 0xfffffaec],ECX
007dd98b  JA 0x007dd99d
007dd98d  MOV EDX,dword ptr [EBP + 0xfffffaec]
007dd993  MOV byte ptr [EBP + EDX*0x1 + 0xfffffaf0],0x20
007dd99b  JMP 0x007dd96c
007dd99d  JMP 0x007dd93f
007dd99f  PUSH 0x0
007dd9a1  MOV EAX,[0x009c50a0]
007dd9a6  PUSH EAX
007dd9a7  MOV ECX,dword ptr [0x009c51c4]
007dd9ad  PUSH ECX
007dd9ae  LEA EDX,[EBP + 0xfffffdf8]
007dd9b4  PUSH EDX
007dd9b5  PUSH 0x100
007dd9ba  LEA EAX,[EBP + 0xfffffaf0]
007dd9c0  PUSH EAX
007dd9c1  PUSH 0x1
007dd9c3  CALL 0x007e2560
007dd9c8  ADD ESP,0x1c
007dd9cb  PUSH 0x0
007dd9cd  MOV ECX,dword ptr [0x009c51c4]
007dd9d3  PUSH ECX
007dd9d4  PUSH 0x100
007dd9d9  LEA EDX,[EBP + 0xfffffcf8]
007dd9df  PUSH EDX
007dd9e0  PUSH 0x100
007dd9e5  LEA EAX,[EBP + 0xfffffaf0]
007dd9eb  PUSH EAX
007dd9ec  PUSH 0x100
007dd9f1  MOV ECX,dword ptr [0x009c50a0]
007dd9f7  PUSH ECX
007dd9f8  CALL 0x007d4090
007dd9fd  ADD ESP,0x20
007dda00  PUSH 0x0
007dda02  MOV EDX,dword ptr [0x009c51c4]
007dda08  PUSH EDX
007dda09  PUSH 0x100
007dda0e  LEA EAX,[EBP + 0xfffffbf8]
007dda14  PUSH EAX
007dda15  PUSH 0x100
007dda1a  LEA ECX,[EBP + 0xfffffaf0]
007dda20  PUSH ECX
007dda21  PUSH 0x200
007dda26  MOV EDX,dword ptr [0x009c50a0]
007dda2c  PUSH EDX
007dda2d  CALL 0x007d4090
007dda32  ADD ESP,0x20
007dda35  MOV dword ptr [EBP + 0xfffffaec],0x0
007dda3f  JMP 0x007dda50
007dda41  MOV EAX,dword ptr [EBP + 0xfffffaec]
007dda47  ADD EAX,0x1
007dda4a  MOV dword ptr [EBP + 0xfffffaec],EAX
007dda50  CMP dword ptr [EBP + 0xfffffaec],0x100
007dda5a  JNC 0x007ddb06
007dda60  MOV ECX,dword ptr [EBP + 0xfffffaec]
007dda66  MOVZX EDX,word ptr [EBP + ECX*0x2 + 0xfffffdf8]
007dda6e  AND EDX,0x1
007dda71  JZ 0x007ddaaa
007dda73  MOV EAX,dword ptr [EBP + 0xfffffaec]
007dda79  MOVZX ECX,byte ptr [EAX + 0x9c50c1]
007dda80  OR ECX,0x10
007dda83  MOV EDX,dword ptr [EBP + 0xfffffaec]
007dda89  MOV byte ptr [EDX + 0x9c50c1],CL
007dda8f  MOV EAX,dword ptr [EBP + 0xfffffaec]
007dda95  MOV ECX,dword ptr [EBP + 0xfffffaec]
007dda9b  MOV DL,byte ptr [EBP + ECX*0x1 + 0xfffffcf8]
007ddaa2  MOV byte ptr [EAX + 0x9c51e0],DL
007ddaa8  JMP 0x007ddb01
007ddaaa  MOV EAX,dword ptr [EBP + 0xfffffaec]
007ddab0  MOVZX ECX,word ptr [EBP + EAX*0x2 + 0xfffffdf8]
007ddab8  AND ECX,0x2
007ddabb  JZ 0x007ddaf4
007ddabd  MOV EDX,dword ptr [EBP + 0xfffffaec]
007ddac3  MOVZX EAX,byte ptr [EDX + 0x9c50c1]
007ddaca  OR EAX,0x20
007ddacd  MOV ECX,dword ptr [EBP + 0xfffffaec]
007ddad3  MOV byte ptr [ECX + 0x9c50c1],AL
007ddad9  MOV EDX,dword ptr [EBP + 0xfffffaec]
007ddadf  MOV EAX,dword ptr [EBP + 0xfffffaec]
007ddae5  MOV CL,byte ptr [EBP + EAX*0x1 + 0xfffffbf8]
007ddaec  MOV byte ptr [EDX + 0x9c51e0],CL
007ddaf2  JMP 0x007ddb01
007ddaf4  MOV EDX,dword ptr [EBP + 0xfffffaec]
007ddafa  MOV byte ptr [EDX + 0x9c51e0],0x0
007ddb01  JMP 0x007dda41
007ddb06  JMP 0x007ddbd2
007ddb0b  MOV dword ptr [EBP + 0xfffffaec],0x0
007ddb15  JMP 0x007ddb26
007ddb17  MOV EAX,dword ptr [EBP + 0xfffffaec]
007ddb1d  ADD EAX,0x1
007ddb20  MOV dword ptr [EBP + 0xfffffaec],EAX
007ddb26  CMP dword ptr [EBP + 0xfffffaec],0x100
007ddb30  JNC 0x007ddbd2
007ddb36  CMP dword ptr [EBP + 0xfffffaec],0x41
007ddb3d  JC 0x007ddb7b
007ddb3f  CMP dword ptr [EBP + 0xfffffaec],0x5a
007ddb46  JA 0x007ddb7b
007ddb48  MOV ECX,dword ptr [EBP + 0xfffffaec]
007ddb4e  MOVZX EDX,byte ptr [ECX + 0x9c50c1]
007ddb55  OR EDX,0x10
007ddb58  MOV EAX,dword ptr [EBP + 0xfffffaec]
007ddb5e  MOV byte ptr [EAX + 0x9c50c1],DL
007ddb64  MOV ECX,dword ptr [EBP + 0xfffffaec]
007ddb6a  ADD ECX,0x20
007ddb6d  MOV EDX,dword ptr [EBP + 0xfffffaec]
007ddb73  MOV byte ptr [EDX + 0x9c51e0],CL
007ddb79  JMP 0x007ddbcd
007ddb7b  CMP dword ptr [EBP + 0xfffffaec],0x61
007ddb82  JC 0x007ddbc0
007ddb84  CMP dword ptr [EBP + 0xfffffaec],0x7a
007ddb8b  JA 0x007ddbc0
007ddb8d  MOV EAX,dword ptr [EBP + 0xfffffaec]
007ddb93  MOVZX ECX,byte ptr [EAX + 0x9c50c1]
007ddb9a  OR ECX,0x20
007ddb9d  MOV EDX,dword ptr [EBP + 0xfffffaec]
007ddba3  MOV byte ptr [EDX + 0x9c50c1],CL
007ddba9  MOV EAX,dword ptr [EBP + 0xfffffaec]
007ddbaf  SUB EAX,0x20
007ddbb2  MOV ECX,dword ptr [EBP + 0xfffffaec]
007ddbb8  MOV byte ptr [ECX + 0x9c51e0],AL
007ddbbe  JMP 0x007ddbcd
007ddbc0  MOV EDX,dword ptr [EBP + 0xfffffaec]
007ddbc6  MOV byte ptr [EDX + 0x9c51e0],0x0
007ddbcd  JMP 0x007ddb17
007ddbd2  MOV ECX,dword ptr [EBP + -0x4]
007ddbd5  CALL 0x007d6cb0
007ddbda  MOV ESP,EBP
007ddbdc  POP EBP
007ddbdd  RET
