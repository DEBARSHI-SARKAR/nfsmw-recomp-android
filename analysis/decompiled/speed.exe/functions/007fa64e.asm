007fa64e  PUSH EBP
007fa64f  MOV EBP,ESP
007fa651  PUSH ECX
007fa652  PUSH EBX
007fa653  PUSH ESI
007fa654  PUSH EDI
007fa655  PUSH 0xb
007fa657  MOV dword ptr [EBP + -0x4],ECX
007fa65a  MOV dword ptr [ECX],0x8c2930
007fa660  LEA ESI,[ECX + 0x20]
007fa663  POP EDI
007fa664  JMP 0x007fa688
007fa666  MOV EAX,dword ptr [ESI]
007fa668  MOV EDX,dword ptr [EAX]
007fa66a  MOV EBX,dword ptr [EAX + 0x4]
007fa66d  MOV dword ptr [EBX],EDX
007fa66f  MOV dword ptr [EDX + 0x4],EBX
007fa672  MOV dword ptr [EAX],EDI
007fa674  ADD EAX,-0x8
007fa677  MOV dword ptr [EAX + 0xc],EDI
007fa67a  JZ 0x007fa688
007fa67c  PUSH 0x1
007fa67e  MOV ECX,EAX
007fa680  CALL 0x007faa42
007fa685  MOV ECX,dword ptr [EBP + -0x4]
007fa688  CMP dword ptr [ESI],ESI
007fa68a  JNZ 0x007fa666
007fa68c  LEA EBX,[ECX + 0x28]
007fa68f  CMP dword ptr [EBX],EBX
007fa691  JZ 0x007fa6b9
007fa693  MOV EAX,dword ptr [EBX]
007fa695  MOV ECX,dword ptr [EAX]
007fa697  MOV EDX,dword ptr [EAX + 0x4]
007fa69a  MOV dword ptr [EDX],ECX
007fa69c  MOV dword ptr [ECX + 0x4],EDX
007fa69f  LEA ECX,[EAX + -0x8]
007fa6a2  TEST ECX,ECX
007fa6a4  MOV dword ptr [EAX],EDI
007fa6a6  MOV dword ptr [EAX + 0x4],EDI
007fa6a9  JZ 0x007fa6b2
007fa6ab  PUSH 0x1
007fa6ad  CALL 0x007faa42
007fa6b2  CMP dword ptr [EBX],EBX
007fa6b4  JNZ 0x007fa693
007fa6b6  MOV ECX,dword ptr [EBP + -0x4]
007fa6b9  PUSH 0x7
007fa6bb  POP EAX
007fa6bc  MOV dword ptr [EBX],EAX
007fa6be  MOV dword ptr [EBX + 0x4],EAX
007fa6c1  POP EDI
007fa6c2  MOV dword ptr [ESI],EAX
007fa6c4  MOV dword ptr [ESI + 0x4],EAX
007fa6c7  POP ESI
007fa6c8  MOV dword ptr [ECX],0x8c27a8
007fa6ce  POP EBX
007fa6cf  LEAVE
007fa6d0  RET
