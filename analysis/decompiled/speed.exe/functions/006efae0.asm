006efae0  MOV EAX,dword ptr [ESP + 0x4]
006efae4  PUSH EBX
006efae5  MOV EBX,dword ptr [ESP + 0xc]
006efae9  CMP EAX,EBX
006efaeb  JZ 0x006efb73
006efaf1  MOV EDX,EAX
006efaf3  SUB EBX,EAX
006efaf5  MOV EAX,dword ptr [ECX + 0xc]
006efaf8  PUSH EBP
006efaf9  MOV EBP,dword ptr [ECX + 0x4]
006efafc  SAR EBX,0x3
006efaff  SUB EDX,EBP
006efb01  PUSH EDI
006efb02  SAR EDX,0x3
006efb05  SUB EAX,EBX
006efb07  XOR EDI,EDI
006efb09  SUB EAX,EDX
006efb0b  MOV dword ptr [ESP + 0x14],EBX
006efb0f  JZ 0x006efb53
006efb11  PUSH ESI
006efb12  LEA ESI,[EDX*0x8 + 0x0]
006efb19  MOV dword ptr [ESP + 0x14],ESI
006efb1d  LEA ECX,[ECX]
006efb20  MOV EAX,dword ptr [ECX + 0x4]
006efb23  ADD ESI,EAX
006efb25  JZ 0x006efb3b
006efb27  ADD EBX,EDI
006efb29  ADD EBX,EDX
006efb2b  MOV EBP,dword ptr [EAX + EBX*0x8]
006efb2e  MOV dword ptr [ESI],EBP
006efb30  MOV EAX,dword ptr [EAX + EBX*0x8 + 0x4]
006efb34  MOV EBX,dword ptr [ESP + 0x18]
006efb38  MOV dword ptr [ESI + 0x4],EAX
006efb3b  MOV EAX,dword ptr [ECX + 0xc]
006efb3e  MOV ESI,dword ptr [ESP + 0x14]
006efb42  SUB EAX,EBX
006efb44  INC EDI
006efb45  ADD ESI,0x8
006efb48  SUB EAX,EDX
006efb4a  CMP EDI,EAX
006efb4c  MOV dword ptr [ESP + 0x14],ESI
006efb50  JC 0x006efb20
006efb52  POP ESI
006efb53  MOV EDI,dword ptr [ECX + 0xc]
006efb56  SUB EDI,EBX
006efb58  MOV EAX,EDI
006efb5a  CMP EDX,EAX
006efb5c  MOV dword ptr [ECX + 0xc],EDI
006efb5f  POP EDI
006efb60  POP EBP
006efb61  JNC 0x006efb6d
006efb63  MOV ECX,dword ptr [ECX + 0x4]
006efb66  LEA EAX,[ECX + EDX*0x8]
006efb69  POP EBX
006efb6a  RET 0x8
006efb6d  MOV EDX,dword ptr [ECX + 0x4]
006efb70  LEA EAX,[EDX + EAX*0x8]
006efb73  POP EBX
006efb74  RET 0x8
