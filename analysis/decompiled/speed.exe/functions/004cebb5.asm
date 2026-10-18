004cebb5  PUSH EBX
004cebb6  PUSH EBP
004cebb7  PUSH ESI
004cebb8  LEA ECX,[ESP + 0x1c]
004cebbc  MOV dword ptr [ESP + 0x10],EDI
004cebc0  CALL 0x004c03c0
004cebc5  MOV ESI,EAX
004cebc7  MOV dword ptr [ESP + 0x20],ESI
004cebcb  MOV dword ptr [ESP + 0x24],EDI
004cebcf  MOV EBP,dword ptr [ESP + 0x38]
004cebd3  IMUL EBP,EBP,0x168
004cebd9  MOV EAX,dword ptr [EBP + 0x9123ec]
004cebdf  MOV ECX,dword ptr [EBP + 0x9123e4]
004cebe5  MOV EBX,dword ptr [EBP + 0x9123e4]
004cebeb  LEA EDX,[ECX + EAX*0x8]
004cebee  CMP EBX,EDX
004cebf0  MOV dword ptr [ESP + 0x30],EDI
004cebf4  JZ 0x004cec67
004cebf6  MOV EAX,dword ptr [EBX]
004cebf8  MOV ECX,dword ptr [EBX + 0x4]
004cebfb  MOV dword ptr [ESP + 0x14],EAX
004cebff  MOV EAX,dword ptr [EAX + 0x4]
004cec02  MOVZX EDX,byte ptr [EAX + 0xe]
004cec06  CMP EDX,dword ptr [ESP + 0x3c]
004cec0a  MOV dword ptr [ESP + 0x18],ECX
004cec0e  JG 0x004cec47
004cec10  MOV ECX,dword ptr [ESI + 0x4]
004cec13  LEA EAX,[ESP + 0x14]
004cec17  LEA EDI,[ESI + 0x4]
004cec1a  PUSH EAX
004cec1b  PUSH ECX
004cec1c  PUSH ESI
004cec1d  LEA ECX,[ESP + 0x28]
004cec21  CALL 0x004c07c0
004cec26  PUSH 0x1
004cec28  LEA ECX,[ESP + 0x20]
004cec2c  MOV ESI,EAX
004cec2e  CALL 0x004cd140
004cec33  MOV dword ptr [EDI],ESI
004cec35  MOV EAX,dword ptr [ESI + 0x4]
004cec38  MOV dword ptr [EAX],ESI
004cec3a  MOV EAX,dword ptr [ESP + 0x10]
004cec3e  MOV ESI,dword ptr [ESP + 0x20]
004cec42  INC EAX
004cec43  MOV dword ptr [ESP + 0x10],EAX
004cec47  MOV EDX,dword ptr [ESP + 0x10]
004cec4b  CMP dword ptr [ESP + 0x40],EDX
004cec4f  JZ 0x004cec67
004cec51  MOV EAX,dword ptr [EBP + 0x9123ec]
004cec57  MOV ECX,dword ptr [EBP + 0x9123e4]
004cec5d  ADD EBX,0x8
004cec60  LEA EDX,[ECX + EAX*0x8]
004cec63  CMP EBX,EDX
004cec65  JNZ 0x004cebf6
004cec67  MOV EDI,dword ptr [ESI]
004cec69  CMP EDI,ESI
004cec6b  JZ 0x004cec86
004cec6d  LEA ECX,[ECX]
004cec70  MOV EAX,dword ptr [EDI + 0xc]
004cec73  MOV ECX,dword ptr [EDI + 0x8]
004cec76  PUSH EAX
004cec77  PUSH ECX
004cec78  CALL 0x004cc5d0
004cec7d  MOV EDI,dword ptr [EDI]
004cec7f  ADD ESP,0x8
004cec82  CMP EDI,ESI
004cec84  JNZ 0x004cec70
004cec86  MOV EAX,dword ptr [ESI]
004cec88  CMP EAX,ESI
004cec8a  MOV dword ptr [ESI],ESI
004cec8c  MOV dword ptr [ESP + 0x30],0xffffffff
004cec94  MOV dword ptr [ESI + 0x4],ESI
004cec97  JZ 0x004cecb7
004cec99  LEA ESP,[ESP]
004ceca0  MOV EDI,dword ptr [EAX]
004ceca2  PUSH 0x0
004ceca4  PUSH 0x10
004ceca6  PUSH EAX
004ceca7  MOV ECX,0x925b30
004cecac  CALL 0x005d0370
004cecb1  CMP EDI,ESI
004cecb3  MOV EAX,EDI
004cecb5  JNZ 0x004ceca0
004cecb7  PUSH 0x0
004cecb9  PUSH 0x10
004cecbb  PUSH ESI
004cecbc  MOV ECX,0x925b30
004cecc1  CALL 0x005d0370
004cecc6  MOV ECX,dword ptr [ESP + 0x28]
004cecca  MOV EAX,dword ptr [ESP + 0x10]
004cecce  POP ESI
004ceccf  POP EBP
004cecd0  POP EBX
004cecd1  POP EDI
004cecd2  MOV dword ptr FS:[0x0],ECX
004cecd9  ADD ESP,0x24
004cecdc  RET
