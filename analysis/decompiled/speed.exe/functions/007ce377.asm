007ce377  PUSH EBP
007ce378  MOV EBP,ESP
007ce37a  ADD ESP,-0x20
007ce37d  MOV dword ptr [EBP + -0x20],EAX
007ce380  FSTP double ptr [EBP + -0x8]
007ce383  MOV dword ptr [EBP + -0x1c],ECX
007ce386  MOV EAX,dword ptr [EBP + 0x10]
007ce389  MOV ECX,dword ptr [EBP + 0x14]
007ce38c  MOV dword ptr [EBP + -0x18],EAX
007ce38f  MOV dword ptr [EBP + -0x14],ECX
007ce392  LEA EAX,[EBP + 0x8]
007ce395  LEA ECX,[EBP + -0x20]
007ce398  PUSH EAX
007ce399  PUSH ECX
007ce39a  PUSH EDX
007ce39b  CALL 0x007ded90
007ce3a0  ADD ESP,0xc
007ce3a3  FLD double ptr [EBP + -0x8]
007ce3a6  CMP word ptr [EBP + 0x8],0x27f
007ce3ac  JZ 0x007ce3b1
007ce3ae  FLDCW word ptr [EBP + 0x8]
007ce3b1  LEAVE
007ce3b2  RET
