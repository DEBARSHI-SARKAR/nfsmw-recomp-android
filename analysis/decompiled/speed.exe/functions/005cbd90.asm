005cbd90  SUB ESP,0x38
005cbd93  PUSH EBX
005cbd94  PUSH EBP
005cbd95  PUSH ESI
005cbd96  PUSH EDI
005cbd97  MOV EDI,dword ptr [ESP + 0x58]
005cbd9b  MOV EAX,EDI
005cbd9d  MOV dword ptr [ESP + 0x18],0x359
005cbda5  MOV dword ptr [ESP + 0x1c],0xbb7
005cbdad  MOV dword ptr [ESP + 0x20],0xeb7
005cbdb5  MOV dword ptr [ESP + 0x24],0x11e7
005cbdbd  MOV dword ptr [ESP + 0x28],0xbf5
005cbdc5  MOV dword ptr [ESP + 0x2c],0x281
005cbdcd  MOV dword ptr [ESP + 0x30],0x833
005cbdd5  MOV dword ptr [ESP + 0x34],0x943
005cbddd  MOV dword ptr [ESP + 0x38],0xc83
005cbde5  MOV dword ptr [ESP + 0x3c],0x1271
005cbded  MOV dword ptr [ESP + 0x40],0x1327
005cbdf5  MOV dword ptr [ESP + 0x44],0xda3
005cbdfd  LEA EDX,[EAX + 0x1]
005cbe00  MOV CL,byte ptr [EAX]
005cbe02  INC EAX
005cbe03  TEST CL,CL
005cbe05  JNZ 0x005cbe00
005cbe07  SUB EAX,EDX
005cbe09  MOV EBX,EAX
005cbe0b  LEA EBP,[EBX*0x4 + 0x0]
005cbe12  PUSH EBP
005cbe13  MOV dword ptr [ESP + 0x18],EBP
005cbe17  CALL 0x00652ad0
005cbe1c  ADD ESP,0x4
005cbe1f  XOR EDX,EDX
005cbe21  XOR ESI,ESI
005cbe23  TEST EBX,EBX
005cbe25  MOV dword ptr [ESP + 0x10],EAX
005cbe29  JLE 0x005cbe70
005cbe2b  MOV ECX,EAX
005cbe2d  LEA ECX,[ECX]
005cbe30  MOV AL,byte ptr [ESP + EDX*0x4 + 0x18]
005cbe34  IMUL byte ptr [ESI + EDI*0x1]
005cbe37  MOV byte ptr [ECX],AL
005cbe39  MOV AL,byte ptr [ESP + EDX*0x4 + 0x1c]
005cbe3d  IMUL byte ptr [ESI + EDI*0x1]
005cbe40  INC EDX
005cbe41  MOV byte ptr [ECX + 0x1],AL
005cbe44  MOV AL,byte ptr [ESP + EDX*0x4 + 0x1c]
005cbe48  IMUL byte ptr [ESI + EDI*0x1]
005cbe4b  INC ECX
005cbe4c  INC EDX
005cbe4d  INC ECX
005cbe4e  INC EDX
005cbe4f  MOV byte ptr [ECX],AL
005cbe51  MOV AL,byte ptr [ESP + EDX*0x4 + 0x18]
005cbe55  IMUL byte ptr [ESI + EDI*0x1]
005cbe58  INC ECX
005cbe59  MOV byte ptr [ECX],AL
005cbe5b  LEA EAX,[EDX + 0x1]
005cbe5e  CDQ
005cbe5f  MOV EBP,0xc
005cbe64  IDIV EBP
005cbe66  INC ECX
005cbe67  INC ESI
005cbe68  CMP ESI,EBX
005cbe6a  JL 0x005cbe30
005cbe6c  MOV EBP,dword ptr [ESP + 0x14]
005cbe70  MOV EAX,dword ptr [ESP + 0x50]
005cbe74  XOR ECX,ECX
005cbe76  TEST EAX,EAX
005cbe78  JLE 0x005cbea1
005cbe7a  MOV EDI,dword ptr [ESP + 0x4c]
005cbe7e  MOV EBX,dword ptr [ESP + 0x54]
005cbe82  SUB EDI,EBX
005cbe84  MOV EAX,ECX
005cbe86  CDQ
005cbe87  IDIV EBP
005cbe89  MOV EAX,dword ptr [ESP + 0x10]
005cbe8d  LEA ESI,[ECX + EBX*0x1]
005cbe90  MOV DL,byte ptr [EDX + EAX*0x1]
005cbe93  XOR DL,byte ptr [EDI + ESI*0x1]
005cbe96  MOV EAX,dword ptr [ESP + 0x50]
005cbe9a  INC ECX
005cbe9b  CMP ECX,EAX
005cbe9d  MOV byte ptr [ESI],DL
005cbe9f  JL 0x005cbe84
005cbea1  MOV EAX,dword ptr [ESP + 0x10]
005cbea5  PUSH EAX
005cbea6  CALL 0x00652b10
005cbeab  ADD ESP,0x4
005cbeae  POP EDI
005cbeaf  POP ESI
005cbeb0  POP EBP
005cbeb1  POP EBX
005cbeb2  ADD ESP,0x38
005cbeb5  RET
