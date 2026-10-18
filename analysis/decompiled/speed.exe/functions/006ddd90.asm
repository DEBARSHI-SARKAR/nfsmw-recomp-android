006ddd90  SUB ESP,0x24
006ddd93  PUSH EBX
006ddd94  PUSH EBP
006ddd95  PUSH ESI
006ddd96  MOV ESI,ECX
006ddd98  MOV EBX,dword ptr [ESI]
006ddd9a  MOV EAX,dword ptr [EBX + 0x18]
006ddd9d  TEST EAX,EAX
006ddd9f  PUSH EDI
006ddda0  LEA EDI,[EBX + 0x18]
006ddda3  MOV dword ptr [ESP + 0x1c],EBX
006ddda7  MOV dword ptr [ESP + 0x14],EDI
006dddab  JZ 0x006dddd0
006dddad  MOV EAX,dword ptr [EBX + 0x18]
006dddb0  TEST EAX,EAX
006dddb2  JZ 0x006dddd0
006dddb4  PUSH EAX
006dddb5  MOV ECX,0x987f08
006dddba  CALL 0x006d99c0
006dddbf  MOV EAX,dword ptr [EBX]
006dddc1  MOV ECX,dword ptr [EBX + 0x4]
006dddc4  MOV dword ptr [EBX + 0x18],0x0
006dddcb  MOV dword ptr [ECX],EAX
006dddcd  MOV dword ptr [EAX + 0x4],ECX
006dddd0  PUSH 0x10
006dddd2  LEA EAX,[ESI + 0xc]
006dddd5  PUSH 0x8affec
006dddda  PUSH EAX
006ddddb  CALL 0x00460d60
006ddde0  ADD ESP,0xc
006ddde3  TEST EAX,EAX
006ddde5  JNZ 0x006dddf2
006ddde7  MOV AL,byte ptr [ESI + 0x54]
006dddea  TEST AL,AL
006dddec  JZ 0x006dddf2
006dddee  MOV byte ptr [ESI + 0x54],0x2
006dddf2  MOV EBP,dword ptr [ESI + 0x70]
006dddf5  TEST EBP,EBP
006dddf7  JZ 0x006de036
006dddfd  MOV ECX,dword ptr [EBX + 0x14]
006dde00  CMP ECX,0x29
006dde03  MOV EDX,dword ptr [ESI + 0x40]
006dde06  MOV dword ptr [ESP + 0x28],0x0
006dde0e  MOV dword ptr [ESP + 0x10],EDX
006dde12  MOV dword ptr [ESP + 0x20],EBP
006dde16  JNZ 0x006ddeb5
006dde1c  MOV ECX,dword ptr [ESI + 0x38]
006dde1f  MOV EAX,dword ptr [ESI + 0x74]
006dde22  SHL ECX,0x2
006dde25  PUSH ECX
006dde26  MOV dword ptr [ESP + 0x28],EAX
006dde2a  CALL 0x00652ad0
006dde2f  MOV dword ptr [ESP + 0x24],EAX
006dde33  MOV EDI,EAX
006dde35  MOV AL,byte ptr [ESI + 0x4e]
006dde38  ADD ESP,0x4
006dde3b  TEST AL,AL
006dde3d  MOV dword ptr [ESP + 0x28],0x1
006dde45  MOV dword ptr [ESP + 0x18],0x0
006dde4d  JLE 0x006dde99
006dde4f  NOP
006dde50  MOVSX EBX,word ptr [ESP + 0x18]
006dde55  MOVSX EDX,word ptr [ESI + 0x44]
006dde59  MOVSX EAX,word ptr [ESI + 0x46]
006dde5d  MOV CL,BL
006dde5f  SAR EDX,CL
006dde61  SAR EAX,CL
006dde63  IMUL EAX,EDX
006dde66  TEST EAX,EAX
006dde68  JLE 0x006dde84
006dde6a  LEA EBX,[EBX]
006dde70  MOVZX EDX,byte ptr [EBP]
006dde74  MOV ECX,dword ptr [ESP + 0x24]
006dde78  MOV EDX,dword ptr [ECX + EDX*0x4]
006dde7b  MOV dword ptr [EDI],EDX
006dde7d  ADD EDI,0x4
006dde80  INC EBP
006dde81  DEC EAX
006dde82  JNZ 0x006dde70
006dde84  MOV EAX,dword ptr [ESP + 0x18]
006dde88  MOVSX ECX,byte ptr [ESI + 0x4e]
006dde8c  INC EAX
006dde8d  CMP EAX,ECX
006dde8f  MOV dword ptr [ESP + 0x18],EAX
006dde93  JL 0x006dde50
006dde95  MOV EBX,dword ptr [ESP + 0x1c]
006dde99  MOV EDX,dword ptr [ESP + 0x10]
006dde9d  MOV EDI,dword ptr [ESP + 0x14]
006ddea1  LEA EAX,[EDX*0x4 + 0x0]
006ddea8  MOV ECX,0x15
006ddead  MOV dword ptr [ESP + 0x10],EAX
006ddeb1  MOV byte ptr [ESI + 0x4a],0x20
006ddeb5  MOV AL,[0x00982ae8]
006ddeba  TEST AL,AL
006ddebc  JZ 0x006ddecc
006ddebe  MOV dword ptr [EDI],0x0
006ddec4  POP EDI
006ddec5  POP ESI
006ddec6  POP EBP
006ddec7  POP EBX
006ddec8  ADD ESP,0x24
006ddecb  RET
006ddecc  MOV EAX,dword ptr [ESI + 0x68]
006ddecf  XOR EBP,EBP
006dded1  XOR DL,DL
006dded3  TEST EAX,EAX
006dded5  JZ 0x006ddee2
006dded7  CMP dword ptr [EAX + 0x10],0x3e871f1
006ddede  JNZ 0x006ddee2
006ddee0  MOV DL,0x1
006ddee2  MOV EAX,[0x00982ae0]
006ddee7  TEST EAX,EAX
006ddee9  JLE 0x006ddf2e
006ddeeb  TEST DL,DL
006ddeed  JNZ 0x006ddf2e
006ddeef  MOV AL,byte ptr [ESI + 0x4e]
006ddef2  MOVSX EDX,AL
006ddef5  CMP EDX,dword ptr [0x00982ae0]
006ddefb  JLE 0x006ddf05
006ddefd  MOV EBP,dword ptr [0x00982ae0]
006ddf03  JMP 0x006ddf0c
006ddf05  CMP AL,0x1
006ddf07  JLE 0x006ddf2e
006ddf09  LEA EBP,[EDX + -0x1]
006ddf0c  TEST EBP,EBP
006ddf0e  JZ 0x006ddf2e
006ddf10  MOVSX EAX,word ptr [ESI + 0x44]
006ddf14  CDQ
006ddf15  LEA EDI,[EBP + EBP*0x1]
006ddf19  IDIV EDI
006ddf1b  MOV word ptr [ESI + 0x44],AX
006ddf1f  MOVSX EAX,word ptr [ESI + 0x46]
006ddf23  CDQ
006ddf24  IDIV EDI
006ddf26  MOV EDI,dword ptr [ESP + 0x14]
006ddf2a  MOV word ptr [ESI + 0x46],AX
006ddf2e  MOV EAX,[0x00982bdc]
006ddf33  PUSH 0x0
006ddf35  MOV EDX,dword ptr [EAX]
006ddf37  PUSH EDI
006ddf38  PUSH 0x1
006ddf3a  PUSH ECX
006ddf3b  MOVSX ECX,byte ptr [ESI + 0x4e]
006ddf3f  PUSH 0x0
006ddf41  SUB ECX,EBP
006ddf43  PUSH ECX
006ddf44  MOVSX ECX,word ptr [ESI + 0x46]
006ddf48  PUSH ECX
006ddf49  MOVSX ECX,word ptr [ESI + 0x44]
006ddf4d  PUSH ECX
006ddf4e  PUSH EAX
006ddf4f  CALL dword ptr [EDX + 0x5c]
006ddf52  CMP dword ptr [EDI],0x0
006ddf55  JZ 0x006de036
006ddf5b  TEST EBP,EBP
006ddf5d  MOV EAX,[0x00987ec4]
006ddf62  MOV EDI,dword ptr [ESP + 0x20]
006ddf66  MOV dword ptr [EAX],EBX
006ddf68  MOV dword ptr [0x00987ec4],EBX
006ddf6e  MOV dword ptr [EBX + 0x4],EAX
006ddf71  MOV dword ptr [EBX],0x987ec0
006ddf77  MOVSX ECX,byte ptr [ESI + 0x4e]
006ddf7b  MOV dword ptr [ESP + 0x18],EDI
006ddf7f  MOV dword ptr [ESP + 0x24],ECX
006ddf83  JLE 0x006ddfaa
006ddf85  SUB ECX,EBP
006ddf87  MOV dword ptr [ESP + 0x24],ECX
006ddf8b  JMP 0x006ddf90
006ddf90  MOV EAX,dword ptr [ESP + 0x10]
006ddf94  ADD EDI,EAX
006ddf96  CDQ
006ddf97  AND EDX,0x3
006ddf9a  ADD EAX,EDX
006ddf9c  SAR EAX,0x2
006ddf9f  DEC EBP
006ddfa0  MOV dword ptr [ESP + 0x10],EAX
006ddfa4  JNZ 0x006ddf90
006ddfa6  MOV dword ptr [ESP + 0x18],EDI
006ddfaa  XOR EBX,EBX
006ddfac  TEST ECX,ECX
006ddfae  JLE 0x006de021
006ddfb0  MOV dword ptr [ESP + 0x1c],EBX
006ddfb4  JMP 0x006ddfc0
006ddfb6  MOV EDI,dword ptr [ESP + 0x18]
006ddfba  LEA EBX,[EBX]
006ddfc0  MOV EDX,dword ptr [ESP + 0x14]
006ddfc4  MOV EAX,dword ptr [EDX]
006ddfc6  MOV ECX,dword ptr [EAX]
006ddfc8  PUSH 0x0
006ddfca  PUSH 0x0
006ddfcc  LEA EDX,[ESP + 0x34]
006ddfd0  PUSH EDX
006ddfd1  PUSH EBX
006ddfd2  PUSH EAX
006ddfd3  CALL dword ptr [ECX + 0x4c]
006ddfd6  MOV ECX,dword ptr [ESP + 0x1c]
006ddfda  MOV EBP,dword ptr [ESP + 0x10]
006ddfde  SAR EBP,CL
006ddfe0  MOV ESI,EDI
006ddfe2  MOV EDI,dword ptr [ESP + 0x30]
006ddfe6  PUSH EBX
006ddfe7  MOV ECX,EBP
006ddfe9  MOV EAX,ECX
006ddfeb  SHR ECX,0x2
006ddfee  MOVSD.REP ES:EDI,ESI
006ddff0  MOV ECX,EAX
006ddff2  AND ECX,0x3
006ddff5  MOVSB.REP ES:EDI,ESI
006ddff7  MOV ECX,dword ptr [ESP + 0x18]
006ddffb  MOV EAX,dword ptr [ECX]
006ddffd  MOV EDX,dword ptr [EAX]
006ddfff  PUSH EAX
006de000  CALL dword ptr [EDX + 0x50]
006de003  MOV ESI,dword ptr [ESP + 0x18]
006de007  MOV ECX,dword ptr [ESP + 0x1c]
006de00b  MOV EAX,dword ptr [ESP + 0x24]
006de00f  ADD ESI,EBP
006de011  INC EBX
006de012  ADD ECX,0x2
006de015  CMP EBX,EAX
006de017  MOV dword ptr [ESP + 0x18],ESI
006de01b  MOV dword ptr [ESP + 0x1c],ECX
006de01f  JL 0x006ddfb6
006de021  MOV EAX,dword ptr [ESP + 0x28]
006de025  TEST EAX,EAX
006de027  JZ 0x006de036
006de029  MOV EAX,dword ptr [ESP + 0x20]
006de02d  PUSH EAX
006de02e  CALL 0x00652b10
006de033  ADD ESP,0x4
006de036  POP EDI
006de037  POP ESI
006de038  POP EBP
006de039  POP EBX
006de03a  ADD ESP,0x24
006de03d  RET
