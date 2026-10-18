004eadf0  MOV EAX,dword ptr [ESP + 0x4]
004eadf4  PUSH EBX
004eadf5  MOV EBX,dword ptr [ESP + 0xc]
004eadf9  CMP EAX,EBX
004eadfb  JZ 0x004eae83
004eae01  MOV EDX,EAX
004eae03  SUB EBX,EAX
004eae05  MOV EAX,dword ptr [ECX + 0xc]
004eae08  PUSH EBP
004eae09  MOV EBP,dword ptr [ECX + 0x4]
004eae0c  SAR EBX,0x3
004eae0f  SUB EDX,EBP
004eae11  PUSH EDI
004eae12  SAR EDX,0x3
004eae15  SUB EAX,EBX
004eae17  XOR EDI,EDI
004eae19  SUB EAX,EDX
004eae1b  MOV dword ptr [ESP + 0x14],EBX
004eae1f  JZ 0x004eae63
004eae21  PUSH ESI
004eae22  LEA ESI,[EDX*0x8 + 0x0]
004eae29  MOV dword ptr [ESP + 0x14],ESI
004eae2d  LEA ECX,[ECX]
004eae30  MOV EAX,dword ptr [ECX + 0x4]
004eae33  ADD ESI,EAX
004eae35  JZ 0x004eae4b
004eae37  ADD EBX,EDI
004eae39  ADD EBX,EDX
004eae3b  MOV EBP,dword ptr [EAX + EBX*0x8]
004eae3e  MOV dword ptr [ESI],EBP
004eae40  MOV EAX,dword ptr [EAX + EBX*0x8 + 0x4]
004eae44  MOV EBX,dword ptr [ESP + 0x18]
004eae48  MOV dword ptr [ESI + 0x4],EAX
004eae4b  MOV EAX,dword ptr [ECX + 0xc]
004eae4e  MOV ESI,dword ptr [ESP + 0x14]
004eae52  SUB EAX,EBX
004eae54  INC EDI
004eae55  ADD ESI,0x8
004eae58  SUB EAX,EDX
004eae5a  CMP EDI,EAX
004eae5c  MOV dword ptr [ESP + 0x14],ESI
004eae60  JC 0x004eae30
004eae62  POP ESI
004eae63  MOV EDI,dword ptr [ECX + 0xc]
004eae66  SUB EDI,EBX
004eae68  MOV EAX,EDI
004eae6a  CMP EDX,EAX
004eae6c  MOV dword ptr [ECX + 0xc],EDI
004eae6f  POP EDI
004eae70  POP EBP
004eae71  JNC 0x004eae7d
004eae73  MOV ECX,dword ptr [ECX + 0x4]
004eae76  LEA EAX,[ECX + EDX*0x8]
004eae79  POP EBX
004eae7a  RET 0x8
004eae7d  MOV EDX,dword ptr [ECX + 0x4]
004eae80  LEA EAX,[EDX + EAX*0x8]
004eae83  POP EBX
004eae84  RET 0x8
