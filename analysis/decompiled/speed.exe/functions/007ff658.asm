007ff658  PUSH EBP
007ff659  MOV EBP,ESP
007ff65b  PUSH ECX
007ff65c  PUSH ECX
007ff65d  PUSH EBX
007ff65e  PUSH ESI
007ff65f  MOV ESI,dword ptr [EBP + 0x8]
007ff662  MOV ECX,dword ptr [ESI + 0x44]
007ff665  MOV EBX,dword ptr [ESI + 0x40]
007ff668  PUSH EDI
007ff669  MOV EDI,dword ptr [EBP + 0x10]
007ff66c  MOV EDX,dword ptr [EDI + 0x4]
007ff66f  MOV EAX,dword ptr [EDI]
007ff671  PUSH EDX
007ff672  PUSH EAX
007ff673  PUSH EAX
007ff674  PUSH dword ptr [EDI + 0x18]
007ff677  MOV dword ptr [EBP + 0x8],EAX
007ff67a  PUSH ECX
007ff67b  PUSH EBX
007ff67c  LEA EAX,[EBX + 0x20]
007ff67f  PUSH EAX
007ff680  MOV EAX,dword ptr [ESI + 0x78]
007ff683  ADD EAX,dword ptr [EBP + 0xc]
007ff686  MOV dword ptr [EBP + -0x4],ECX
007ff689  PUSH EAX
007ff68a  PUSH ESI
007ff68b  MOV dword ptr [EBP + 0x10],EDX
007ff68e  CALL 0x007fee29
007ff693  SAR dword ptr [EBP + 0x10],0x1
007ff696  PUSH dword ptr [EBP + 0x10]
007ff699  SAR dword ptr [EBP + 0x8],0x1
007ff69c  PUSH dword ptr [EBP + 0x8]
007ff69f  SAR dword ptr [EBP + -0x4],0x1
007ff6a2  PUSH dword ptr [EBP + 0x8]
007ff6a5  SAR EBX,0x1
007ff6a7  PUSH dword ptr [EDI + 0x1c]
007ff6aa  LEA EAX,[EBX + 0x10]
007ff6ad  PUSH dword ptr [EBP + -0x4]
007ff6b0  MOV dword ptr [EBP + -0x8],EAX
007ff6b3  PUSH EBX
007ff6b4  PUSH EAX
007ff6b5  MOV EAX,dword ptr [ESI + 0x7c]
007ff6b8  ADD EAX,dword ptr [EBP + 0xc]
007ff6bb  PUSH EAX
007ff6bc  PUSH ESI
007ff6bd  CALL 0x007fee29
007ff6c2  MOV EAX,dword ptr [ESI + 0x80]
007ff6c8  ADD EAX,dword ptr [EBP + 0xc]
007ff6cb  ADD ESP,0x48
007ff6ce  PUSH dword ptr [EBP + 0x10]
007ff6d1  PUSH dword ptr [EBP + 0x8]
007ff6d4  PUSH dword ptr [EBP + 0x8]
007ff6d7  PUSH dword ptr [EDI + 0x20]
007ff6da  PUSH dword ptr [EBP + -0x4]
007ff6dd  PUSH EBX
007ff6de  PUSH dword ptr [EBP + -0x8]
007ff6e1  PUSH EAX
007ff6e2  PUSH ESI
007ff6e3  CALL 0x007fee29
007ff6e8  ADD ESP,0x24
007ff6eb  POP EDI
007ff6ec  POP ESI
007ff6ed  POP EBX
007ff6ee  LEAVE
007ff6ef  RET
