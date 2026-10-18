007ce000  PUSH EBP
007ce001  MOV EBP,ESP
007ce003  SUB ESP,0x40
007ce006  MOV EAX,[0x00906980]
007ce00b  MOV dword ptr [EBP + -0x8],EAX
007ce00e  MOV EAX,dword ptr [EBP + 0x8]
007ce011  MOV dword ptr [EBP + -0x3c],EAX
007ce014  MOV byte ptr [EBP + -0x3d],0x0
007ce018  LEA ECX,[EBP + -0x38]
007ce01b  MOV dword ptr [EBP + -0x28],ECX
007ce01e  LEA EDX,[EBP + -0x20]
007ce021  PUSH EDX
007ce022  LEA EAX,[EBP + -0x38]
007ce025  PUSH EAX
007ce026  MOV ECX,dword ptr [EBP + -0x3c]
007ce029  MOV EDX,dword ptr [ECX + 0x4]
007ce02c  PUSH EDX
007ce02d  MOV EAX,dword ptr [ECX]
007ce02f  PUSH EAX
007ce030  CALL 0x007deba0
007ce035  ADD ESP,0x10
007ce038  MOV ECX,dword ptr [EBP + -0x28]
007ce03b  MOV EDX,dword ptr [ECX + 0x4]
007ce03e  SUB EDX,0x1
007ce041  MOV dword ptr [EBP + -0x24],EDX
007ce044  MOV EAX,dword ptr [EBP + -0x28]
007ce047  XOR ECX,ECX
007ce049  CMP dword ptr [EAX],0x2d
007ce04c  SETZ CL
007ce04f  ADD ECX,dword ptr [EBP + 0xc]
007ce052  MOV dword ptr [EBP + -0x4],ECX
007ce055  MOV EDX,dword ptr [EBP + -0x28]
007ce058  PUSH EDX
007ce059  MOV EAX,dword ptr [EBP + 0x10]
007ce05c  PUSH EAX
007ce05d  MOV ECX,dword ptr [EBP + -0x4]
007ce060  PUSH ECX
007ce061  CALL 0x007deaa0
007ce066  ADD ESP,0xc
007ce069  MOV EDX,dword ptr [EBP + -0x28]
007ce06c  MOV EAX,dword ptr [EDX + 0x4]
007ce06f  SUB EAX,0x1
007ce072  CMP dword ptr [EBP + -0x24],EAX
007ce075  SETL CL
007ce078  MOV byte ptr [EBP + -0x3d],CL
007ce07b  MOV EDX,dword ptr [EBP + -0x28]
007ce07e  MOV EAX,dword ptr [EDX + 0x4]
007ce081  SUB EAX,0x1
007ce084  MOV dword ptr [EBP + -0x24],EAX
007ce087  CMP dword ptr [EBP + -0x24],-0x4
007ce08b  JL 0x007ce095
007ce08d  MOV ECX,dword ptr [EBP + -0x24]
007ce090  CMP ECX,dword ptr [EBP + 0x10]
007ce093  JL 0x007ce0b1
007ce095  PUSH 0x1
007ce097  MOV EDX,dword ptr [EBP + -0x28]
007ce09a  PUSH EDX
007ce09b  MOV EAX,dword ptr [EBP + 0x14]
007ce09e  PUSH EAX
007ce09f  MOV ECX,dword ptr [EBP + 0x10]
007ce0a2  PUSH ECX
007ce0a3  MOV EDX,dword ptr [EBP + 0xc]
007ce0a6  PUSH EDX
007ce0a7  CALL 0x007cdcd0
007ce0ac  ADD ESP,0x14
007ce0af  JMP 0x007ce0eb
007ce0b1  MOVSX EAX,byte ptr [EBP + -0x3d]
007ce0b5  TEST EAX,EAX
007ce0b7  JZ 0x007ce0d5
007ce0b9  MOV ECX,dword ptr [EBP + -0x4]
007ce0bc  MOVSX EDX,byte ptr [ECX]
007ce0bf  MOV EAX,dword ptr [EBP + -0x4]
007ce0c2  ADD EAX,0x1
007ce0c5  MOV dword ptr [EBP + -0x4],EAX
007ce0c8  TEST EDX,EDX
007ce0ca  JZ 0x007ce0ce
007ce0cc  JMP 0x007ce0b9
007ce0ce  MOV ECX,dword ptr [EBP + -0x4]
007ce0d1  MOV byte ptr [ECX + -0x2],0x0
007ce0d5  PUSH 0x1
007ce0d7  MOV EDX,dword ptr [EBP + -0x28]
007ce0da  PUSH EDX
007ce0db  MOV EAX,dword ptr [EBP + 0x10]
007ce0de  PUSH EAX
007ce0df  MOV ECX,dword ptr [EBP + 0xc]
007ce0e2  PUSH ECX
007ce0e3  CALL 0x007cdec0
007ce0e8  ADD ESP,0x10
007ce0eb  MOV ECX,dword ptr [EBP + -0x8]
007ce0ee  CALL 0x007d6cb0
007ce0f3  MOV ESP,EBP
007ce0f5  POP EBP
007ce0f6  RET
