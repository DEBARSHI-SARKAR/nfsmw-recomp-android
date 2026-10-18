0045bd70  PUSH -0x1
0045bd72  PUSH 0x869fbf
0045bd77  MOV EAX,FS:[0x0]
0045bd7d  PUSH EAX
0045bd7e  MOV dword ptr FS:[0x0],ESP
0045bd85  PUSH ECX
0045bd86  PUSH EBP
0045bd87  PUSH ESI
0045bd88  MOV ESI,ECX
0045bd8a  PUSH EDI
0045bd8b  MOV dword ptr [ESP + 0xc],ESI
0045bd8f  MOV dword ptr [ESI],0x893ce8
0045bd95  MOV EAX,dword ptr [ESI + 0x30]
0045bd98  MOV ECX,dword ptr [EAX + 0x4]
0045bd9b  LEA EDI,[ESI + 0x2c]
0045bd9e  PUSH ECX
0045bd9f  MOV ECX,EDI
0045bda1  MOV dword ptr [ESP + 0x1c],0x5
0045bda9  CALL 0x0045b9f0
0045bdae  MOV EAX,dword ptr [EDI + 0x4]
0045bdb1  MOV dword ptr [EAX + 0x4],EAX
0045bdb4  MOV EAX,dword ptr [EDI + 0x4]
0045bdb7  MOV dword ptr [EDI + 0x8],0x0
0045bdbe  MOV dword ptr [EAX],EAX
0045bdc0  MOV EAX,dword ptr [EDI + 0x4]
0045bdc3  LEA EBP,[ESI + 0x1c]
0045bdc6  MOV ECX,EBP
0045bdc8  MOV dword ptr [EAX + 0x8],EAX
0045bdcb  CALL 0x0045b040
0045bdd0  LEA ECX,[ESI + 0x44]
0045bdd3  MOV byte ptr [ESP + 0x18],0x4
0045bdd8  CALL 0x0045b230
0045bddd  LEA ECX,[ESI + 0x38]
0045bde0  MOV byte ptr [ESP + 0x18],0x3
0045bde5  CALL 0x0045b1b0
0045bdea  MOV ECX,EDI
0045bdec  MOV byte ptr [ESP + 0x18],0x2
0045bdf1  CALL 0x0045b8c0
0045bdf6  MOV ECX,EBP
0045bdf8  MOV byte ptr [ESP + 0x18],0x1
0045bdfd  CALL 0x0045b040
0045be02  LEA ECX,[ESI + 0x8]
0045be05  MOV byte ptr [ESP + 0x18],0x0
0045be0a  CALL 0x0045b2b0
0045be0f  MOV ECX,dword ptr [ESP + 0x10]
0045be13  POP EDI
0045be14  MOV dword ptr [ESI],0x893c3c
0045be1a  POP ESI
0045be1b  POP EBP
0045be1c  MOV dword ptr FS:[0x0],ECX
0045be23  ADD ESP,0x10
0045be26  RET
