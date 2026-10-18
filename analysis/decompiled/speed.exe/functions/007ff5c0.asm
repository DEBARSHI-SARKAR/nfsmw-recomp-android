007ff5c0  PUSH EBP
007ff5c1  MOV EBP,ESP
007ff5c3  PUSH ECX
007ff5c4  PUSH ECX
007ff5c5  PUSH EBX
007ff5c6  PUSH ESI
007ff5c7  MOV ESI,dword ptr [EBP + 0x8]
007ff5ca  MOV ECX,dword ptr [ESI + 0x44]
007ff5cd  MOV EBX,dword ptr [ESI + 0x40]
007ff5d0  PUSH EDI
007ff5d1  MOV EDI,dword ptr [EBP + 0x10]
007ff5d4  MOV EDX,dword ptr [EDI + 0x4]
007ff5d7  MOV EAX,dword ptr [EDI]
007ff5d9  PUSH EDX
007ff5da  PUSH EAX
007ff5db  PUSH EAX
007ff5dc  PUSH dword ptr [EDI + 0x18]
007ff5df  MOV dword ptr [EBP + 0x8],EAX
007ff5e2  PUSH ECX
007ff5e3  PUSH EBX
007ff5e4  LEA EAX,[EBX + 0x20]
007ff5e7  PUSH EAX
007ff5e8  MOV EAX,dword ptr [ESI + 0x78]
007ff5eb  ADD EAX,dword ptr [EBP + 0xc]
007ff5ee  MOV dword ptr [EBP + -0x4],ECX
007ff5f1  PUSH EAX
007ff5f2  PUSH ESI
007ff5f3  MOV dword ptr [EBP + 0x10],EDX
007ff5f6  CALL 0x007feb1e
007ff5fb  SAR dword ptr [EBP + 0x10],0x1
007ff5fe  PUSH dword ptr [EBP + 0x10]
007ff601  SAR dword ptr [EBP + 0x8],0x1
007ff604  PUSH dword ptr [EBP + 0x8]
007ff607  SAR dword ptr [EBP + -0x4],0x1
007ff60a  PUSH dword ptr [EBP + 0x8]
007ff60d  SAR EBX,0x1
007ff60f  PUSH dword ptr [EDI + 0x1c]
007ff612  LEA EAX,[EBX + 0x10]
007ff615  PUSH dword ptr [EBP + -0x4]
007ff618  MOV dword ptr [EBP + -0x8],EAX
007ff61b  PUSH EBX
007ff61c  PUSH EAX
007ff61d  MOV EAX,dword ptr [ESI + 0x7c]
007ff620  ADD EAX,dword ptr [EBP + 0xc]
007ff623  PUSH EAX
007ff624  PUSH ESI
007ff625  CALL 0x007feb1e
007ff62a  MOV EAX,dword ptr [ESI + 0x80]
007ff630  ADD EAX,dword ptr [EBP + 0xc]
007ff633  ADD ESP,0x48
007ff636  PUSH dword ptr [EBP + 0x10]
007ff639  PUSH dword ptr [EBP + 0x8]
007ff63c  PUSH dword ptr [EBP + 0x8]
007ff63f  PUSH dword ptr [EDI + 0x20]
007ff642  PUSH dword ptr [EBP + -0x4]
007ff645  PUSH EBX
007ff646  PUSH dword ptr [EBP + -0x8]
007ff649  PUSH EAX
007ff64a  PUSH ESI
007ff64b  CALL 0x007feb1e
007ff650  ADD ESP,0x24
007ff653  POP EDI
007ff654  POP ESI
007ff655  POP EBX
007ff656  LEAVE
007ff657  RET
