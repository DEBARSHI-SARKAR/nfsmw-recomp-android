004eabd0  MOV EAX,dword ptr [ESP + 0x4]
004eabd4  PUSH EBX
004eabd5  MOV EBX,dword ptr [ESP + 0xc]
004eabd9  CMP EAX,EBX
004eabdb  JZ 0x004eac63
004eabe1  MOV EDX,EAX
004eabe3  SUB EBX,EAX
004eabe5  MOV EAX,dword ptr [ECX + 0xc]
004eabe8  PUSH EBP
004eabe9  MOV EBP,dword ptr [ECX + 0x4]
004eabec  SAR EBX,0x3
004eabef  SUB EDX,EBP
004eabf1  PUSH EDI
004eabf2  SAR EDX,0x3
004eabf5  SUB EAX,EBX
004eabf7  XOR EDI,EDI
004eabf9  SUB EAX,EDX
004eabfb  MOV dword ptr [ESP + 0x14],EBX
004eabff  JZ 0x004eac43
004eac01  PUSH ESI
004eac02  LEA ESI,[EDX*0x8 + 0x0]
004eac09  MOV dword ptr [ESP + 0x14],ESI
004eac0d  LEA ECX,[ECX]
004eac10  MOV EAX,dword ptr [ECX + 0x4]
004eac13  ADD ESI,EAX
004eac15  JZ 0x004eac2b
004eac17  ADD EBX,EDI
004eac19  ADD EBX,EDX
004eac1b  MOV EBP,dword ptr [EAX + EBX*0x8]
004eac1e  MOV dword ptr [ESI],EBP
004eac20  MOV EAX,dword ptr [EAX + EBX*0x8 + 0x4]
004eac24  MOV EBX,dword ptr [ESP + 0x18]
004eac28  MOV dword ptr [ESI + 0x4],EAX
004eac2b  MOV EAX,dword ptr [ECX + 0xc]
004eac2e  MOV ESI,dword ptr [ESP + 0x14]
004eac32  SUB EAX,EBX
004eac34  INC EDI
004eac35  ADD ESI,0x8
004eac38  SUB EAX,EDX
004eac3a  CMP EDI,EAX
004eac3c  MOV dword ptr [ESP + 0x14],ESI
004eac40  JC 0x004eac10
004eac42  POP ESI
004eac43  MOV EDI,dword ptr [ECX + 0xc]
004eac46  SUB EDI,EBX
004eac48  MOV EAX,EDI
004eac4a  CMP EDX,EAX
004eac4c  MOV dword ptr [ECX + 0xc],EDI
004eac4f  POP EDI
004eac50  POP EBP
004eac51  JNC 0x004eac5d
004eac53  MOV ECX,dword ptr [ECX + 0x4]
004eac56  LEA EAX,[ECX + EDX*0x8]
004eac59  POP EBX
004eac5a  RET 0x8
004eac5d  MOV EDX,dword ptr [ECX + 0x4]
004eac60  LEA EAX,[EDX + EAX*0x8]
004eac63  POP EBX
004eac64  RET 0x8
