0081ab36  PUSH EBP
0081ab37  MOV EBP,ESP
0081ab39  SUB ESP,0xc
0081ab3c  PUSH EBX
0081ab3d  PUSH ESI
0081ab3e  PUSH EDI
0081ab3f  MOV dword ptr [0x009c21d4],0x81ab18
0081ab49  MOV dword ptr [0x009c21d8],0x81aa84
0081ab53  CALL 0x0081bccb
0081ab58  MOV EDI,dword ptr [EBP + 0x8]
0081ab5b  XOR EBX,EBX
0081ab5d  CMP dword ptr [0x009c1bec],EBX
0081ab63  LEA EAX,[EDI + 0x50]
0081ab66  PUSH EAX
0081ab67  MOV ECX,0x9c1bec
0081ab6c  SETZ byte ptr [EBP + -0x1]
0081ab70  CALL 0x0081962e
0081ab75  MOV ECX,dword ptr [EBP + 0xc]
0081ab78  XOR ESI,ESI
0081ab7a  CMP dword ptr [ECX],EBX
0081ab7c  JLE 0x0081ab9f
0081ab7e  LEA EDX,[ECX + 0x4]
0081ab81  MOV EAX,dword ptr [EDX]
0081ab83  ADD EAX,EDI
0081ab85  MOV EBX,dword ptr [EAX]
0081ab87  MOV EBX,dword ptr [EBX*0x4 + 0x90bc40]
0081ab8e  SUB EBX,EAX
0081ab90  SUB EBX,0x4
0081ab93  INC ESI
0081ab94  MOV dword ptr [EAX],EBX
0081ab96  ADD EDX,0x4
0081ab99  CMP ESI,dword ptr [ECX]
0081ab9b  JL 0x0081ab81
0081ab9d  XOR EBX,EBX
0081ab9f  SUB ECX,dword ptr [EDI + 0x30]
0081aba2  MOV EAX,dword ptr [EDI + 0x34]
0081aba5  ADD EAX,ECX
0081aba7  XOR ESI,ESI
0081aba9  CMP dword ptr [EAX],EBX
0081abab  MOV dword ptr [EBP + 0xc],ECX
0081abae  JLE 0x0081abc1
0081abb0  LEA EDX,[EAX + 0x4]
0081abb3  MOV ECX,dword ptr [EDX]
0081abb5  ADD ECX,EDI
0081abb7  ADD dword ptr [ECX],EDI
0081abb9  INC ESI
0081abba  ADD EDX,0x4
0081abbd  CMP ESI,dword ptr [EAX]
0081abbf  JL 0x0081abb3
0081abc1  MOV ESI,dword ptr [EDI + 0x38]
0081abc4  ADD ESI,dword ptr [EBP + 0xc]
0081abc7  MOV dword ptr [EBP + 0x8],EBX
0081abca  CMP dword ptr [ESI],EBX
0081abcc  JLE 0x0081ac25
0081abce  LEA EBX,[ESI + 0x4]
0081abd1  MOV EAX,dword ptr [EBX + 0x4]
0081abd4  ADD EAX,dword ptr [EBP + 0xc]
0081abd7  MOV CX,word ptr [EAX]
0081abda  MOV word ptr [EBP + -0x8],CX
0081abde  MOV CX,word ptr [EAX + 0x2]
0081abe2  ADD EAX,0x4
0081abe5  MOV word ptr [EBP + -0x6],CX
0081abe9  MOV ECX,dword ptr [EBX]
0081abeb  MOV dword ptr [EBP + -0xc],EAX
0081abee  MOV AL,byte ptr [EBX + 0x8]
0081abf1  ADD ECX,EDI
0081abf3  TEST AL,AL
0081abf5  JNZ 0x0081ac02
0081abf7  LEA EAX,[EBP + -0xc]
0081abfa  PUSH EAX
0081abfb  CALL 0x0083163c
0081ac00  JMP 0x0081ac16
0081ac02  CMP AL,0x1
0081ac04  LEA EAX,[EBP + -0xc]
0081ac07  PUSH EAX
0081ac08  JNZ 0x0081ac11
0081ac0a  CALL 0x00831611
0081ac0f  JMP 0x0081ac16
0081ac11  CALL 0x008315e6
0081ac16  INC dword ptr [EBP + 0x8]
0081ac19  MOV EAX,dword ptr [EBP + 0x8]
0081ac1c  ADD EBX,0xc
0081ac1f  CMP EAX,dword ptr [ESI]
0081ac21  JL 0x0081abd1
0081ac23  XOR EBX,EBX
0081ac25  MOV ESI,dword ptr [EDI + 0x1c]
0081ac28  ADD ESI,EDI
0081ac2a  CMP word ptr [EDI + 0xa],BX
0081ac2e  MOV dword ptr [EBP + 0x8],EBX
0081ac31  JBE 0x0081ac9c
0081ac33  ADD dword ptr [ESI + 0x28],EDI
0081ac36  MOV ECX,dword ptr [ESI + 0x28]
0081ac39  ADD dword ptr [ESI + 0x2c],EDI
0081ac3c  MOV EAX,dword ptr [ESI + 0x2c]
0081ac3f  LEA EDX,[EBP + 0xc]
0081ac42  PUSH EDX
0081ac43  PUSH 0x40
0081ac45  SUB EAX,ECX
0081ac47  PUSH EAX
0081ac48  PUSH ECX
0081ac49  CALL dword ptr [0x00890294]
0081ac4f  LEA EAX,[ESI + 0xc]
0081ac52  PUSH EAX
0081ac53  LEA EAX,[ESI + 0x4]
0081ac56  PUSH EAX
0081ac57  MOV dword ptr [ESI + 0x14],0x81a86b
0081ac5e  MOV dword ptr [ESI + 0x18],ESI
0081ac61  CALL 0x008317bc
0081ac66  XOR EAX,EAX
0081ac68  CMP byte ptr [ESI + 0x24],AL
0081ac6b  POP ECX
0081ac6c  POP ECX
0081ac6d  JBE 0x0081ac82
0081ac6f  MOV ECX,dword ptr [ESI + EAX*0x4 + 0x3c]
0081ac73  MOV EDX,dword ptr [ESI + 0x2c]
0081ac76  MOV dword ptr [ECX + EDX*0x1],EDI
0081ac79  MOVZX ECX,byte ptr [ESI + 0x24]
0081ac7d  INC EAX
0081ac7e  CMP EAX,ECX
0081ac80  JL 0x0081ac6f
0081ac82  MOVZX EAX,byte ptr [ESI + 0x27]
0081ac86  MOVZX ECX,byte ptr [ESI + 0x24]
0081ac8a  ADD EAX,ECX
0081ac8c  INC dword ptr [EBP + 0x8]
0081ac8f  LEA ESI,[ESI + EAX*0x4 + 0x3c]
0081ac93  MOVZX EAX,word ptr [EDI + 0xa]
0081ac97  CMP dword ptr [EBP + 0x8],EAX
0081ac9a  JL 0x0081ac33
0081ac9c  MOV ESI,dword ptr [EBP + 0x10]
0081ac9f  CMP ESI,EBX
0081aca1  JZ 0x0081acd5
0081aca3  CMP byte ptr [ESI],0x0
0081aca6  JZ 0x0081acd5
0081aca8  MOV EAX,ESI
0081acaa  LEA ECX,[EAX + 0x1]
0081acad  MOV DL,byte ptr [EAX]
0081acaf  INC EAX
0081acb0  TEST DL,DL
0081acb2  JNZ 0x0081acad
0081acb4  SUB EAX,ECX
0081acb6  INC EAX
0081acb7  PUSH EAX
0081acb8  CALL 0x0081e9e7
0081acbd  POP ECX
0081acbe  MOV dword ptr [EDI + 0x48],EAX
0081acc1  MOV EDX,ESI
0081acc3  MOV CL,byte ptr [EDX]
0081acc5  INC EDX
0081acc6  MOV byte ptr [EAX],CL
0081acc8  INC EAX
0081acc9  TEST CL,CL
0081accb  JNZ 0x0081acc3
0081accd  MOV EAX,dword ptr [EBP + 0x14]
0081acd0  MOV dword ptr [EDI + 0x4c],EAX
0081acd3  JMP 0x0081acd8
0081acd5  MOV dword ptr [EDI + 0x48],EBX
0081acd8  CMP byte ptr [EBP + -0x1],0x0
0081acdc  JZ 0x0081ad0a
0081acde  MOV EAX,[0x009c1b5c]
0081ace3  CMP EAX,EBX
0081ace5  MOV dword ptr [0x009c1bfc],0x81f98a
0081acef  MOV [0x009c1bf4],EAX
0081acf4  MOV dword ptr [0x009c1bf8],EBX
0081acfa  MOV ECX,0x9c1bf4
0081acff  JZ 0x0081ad04
0081ad01  MOV dword ptr [EAX + 0x4],ECX
0081ad04  MOV dword ptr [0x009c1b5c],ECX
0081ad0a  CALL 0x0081bcd9
0081ad0f  POP EDI
0081ad10  POP ESI
0081ad11  POP EBX
0081ad12  LEAVE
0081ad13  RET
