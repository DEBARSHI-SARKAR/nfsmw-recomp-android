005bcef0  SUB ESP,0x14
005bcef3  PUSH EBX
005bcef4  PUSH EBP
005bcef5  MOV EBP,dword ptr [ESP + 0x20]
005bcef9  XOR EAX,EAX
005bcefb  CMP EBP,EAX
005bcefd  MOV EBX,ECX
005bceff  MOV dword ptr [ESP + 0x10],EBX
005bcf03  JNZ 0x005bcf2e
005bcf05  MOV dword ptr [ESP + 0x20],EAX
005bcf09  CMP dword ptr [EBX + 0x4],0x1
005bcf0d  JNC 0x005bcf16
005bcf0f  PUSH 0x1
005bcf11  CALL 0x005b91c0
005bcf16  MOV ECX,dword ptr [EBX]
005bcf18  LEA EAX,[ESP + 0x20]
005bcf1c  PUSH EAX
005bcf1d  PUSH ECX
005bcf1e  CALL 0x005b37c0
005bcf23  ADD ESP,0x8
005bcf26  POP EBP
005bcf27  POP EBX
005bcf28  ADD ESP,0x14
005bcf2b  RET 0x4
005bcf2e  CMP byte ptr [EBP],0x0
005bcf32  PUSH ESI
005bcf33  PUSH EDI
005bcf34  MOV dword ptr [ESP + 0x10],EAX
005bcf38  JZ 0x005bd007
005bcf3e  JMP 0x005bcf44
005bcf40  MOV EAX,dword ptr [ESP + 0x14]
005bcf44  LEA EDI,[EAX + 0x1]
005bcf47  MOV AL,byte ptr [EAX + EBP*0x1]
005bcf4a  CMP AL,0xd
005bcf4c  MOV dword ptr [ESP + 0x14],EDI
005bcf50  JZ 0x005bcf56
005bcf52  INC dword ptr [ESP + 0x10]
005bcf56  CMP AL,0x5c
005bcf58  JNZ 0x005bcff9
005bcf5e  MOV AL,byte ptr [EDI + EBP*0x1]
005bcf61  CMP AL,0x41
005bcf63  JL 0x005bcf6b
005bcf65  CMP AL,0x5a
005bcf67  JG 0x005bcf6b
005bcf69  ADD AL,0x20
005bcf6b  TEST AL,AL
005bcf6d  JZ 0x005bd007
005bcf73  MOV EAX,[0x008f57b0]
005bcf78  TEST EAX,EAX
005bcf7a  MOV dword ptr [ESP + 0x28],0x8f57b0
005bcf82  JZ 0x005bcff9
005bcf84  MOV CL,byte ptr [EAX]
005bcf86  TEST CL,CL
005bcf88  LEA EDX,[EDI + EBP*0x1]
005bcf8b  JZ 0x005bcfa4
005bcf8d  MOV ESI,EAX
005bcf8f  SUB ESI,EDX
005bcf91  MOV BL,byte ptr [EDX]
005bcf93  TEST BL,BL
005bcf95  JZ 0x005bcfa4
005bcf97  CMP CL,BL
005bcf99  JNZ 0x005bcfe4
005bcf9b  MOV CL,byte ptr [ESI + EDX*0x1 + 0x1]
005bcf9f  INC EDX
005bcfa0  TEST CL,CL
005bcfa2  JNZ 0x005bcf91
005bcfa4  LEA EDX,[EAX + 0x1]
005bcfa7  MOV CL,byte ptr [EAX]
005bcfa9  INC EAX
005bcfaa  TEST CL,CL
005bcfac  JNZ 0x005bcfa7
005bcfae  SUB EAX,EDX
005bcfb0  LEA ECX,[EAX + EDI*0x1]
005bcfb3  MOV AL,byte ptr [ECX + EBP*0x1]
005bcfb6  TEST AL,AL
005bcfb8  JZ 0x005bcfde
005bcfba  LEA EBX,[EBX]
005bcfc0  CMP AL,0x5c
005bcfc2  JZ 0x005bcfd7
005bcfc4  CMP AL,0x30
005bcfc6  JL 0x005bcfde
005bcfc8  CMP AL,0x39
005bcfca  JG 0x005bcfde
005bcfcc  MOV AL,byte ptr [ECX + EBP*0x1 + 0x1]
005bcfd0  INC ECX
005bcfd1  TEST AL,AL
005bcfd3  JNZ 0x005bcfc0
005bcfd5  JMP 0x005bcfde
005bcfd7  LEA EDX,[ECX + 0x1]
005bcfda  MOV dword ptr [ESP + 0x14],EDX
005bcfde  CMP byte ptr [ECX + EBP*0x1],0x5c
005bcfe2  JZ 0x005bcff5
005bcfe4  MOV EAX,dword ptr [ESP + 0x28]
005bcfe8  ADD EAX,0x8
005bcfeb  MOV dword ptr [ESP + 0x28],EAX
005bcfef  MOV EAX,dword ptr [EAX]
005bcff1  TEST EAX,EAX
005bcff3  JNZ 0x005bcf84
005bcff5  MOV EBX,dword ptr [ESP + 0x18]
005bcff9  MOV EAX,dword ptr [ESP + 0x14]
005bcffd  CMP byte ptr [EAX + EBP*0x1],0x0
005bd001  JNZ 0x005bcf40
005bd007  MOV EAX,dword ptr [ESP + 0x10]
005bd00b  MOV ECX,dword ptr [EBX + 0x4]
005bd00e  INC EAX
005bd00f  CMP EAX,ECX
005bd011  JBE 0x005bd01b
005bd013  PUSH EAX
005bd014  MOV ECX,EBX
005bd016  CALL 0x005b91c0
005bd01b  MOV DL,byte ptr [EBP]
005bd01e  XOR ECX,ECX
005bd020  XOR EAX,EAX
005bd022  TEST DL,DL
005bd024  MOV dword ptr [ESP + 0x10],ECX
005bd028  JZ 0x005bd179
005bd02e  JMP 0x005bd034
005bd030  MOV EAX,dword ptr [ESP + 0x14]
005bd034  LEA ESI,[EAX + 0x1]
005bd037  MOV AL,byte ptr [EAX + EBP*0x1]
005bd03a  CMP AL,0x5c
005bd03c  MOV dword ptr [ESP + 0x20],ESI
005bd040  MOV dword ptr [ESP + 0x14],ESI
005bd044  JZ 0x005bd059
005bd046  CMP AL,0xd
005bd048  JZ 0x005bd167
005bd04e  MOVSX DX,AL
005bd052  MOV EAX,dword ptr [EBX]
005bd054  JMP 0x005bd15e
005bd059  MOV EDX,dword ptr [0x008f57b0]
005bd05f  MOV EAX,0x8f57b0
005bd064  XOR EBX,EBX
005bd066  TEST EDX,EDX
005bd068  MOV dword ptr [ESP + 0x1c],EAX
005bd06c  MOV byte ptr [ESP + 0x28],0x0
005bd071  JZ 0x005bd14e
005bd077  JMP 0x005bd080
005bd080  MOV EDI,dword ptr [EAX]
005bd082  TEST EDI,EDI
005bd084  JZ 0x005bd130
005bd08a  MOV DL,byte ptr [EDI]
005bd08c  TEST DL,DL
005bd08e  LEA ECX,[ESI + EBP*0x1]
005bd091  JZ 0x005bd0b2
005bd093  MOV ESI,EDI
005bd095  SUB ESI,ECX
005bd097  MOV AL,byte ptr [ECX]
005bd099  TEST AL,AL
005bd09b  JZ 0x005bd0ae
005bd09d  CMP DL,AL
005bd09f  JNZ 0x005bd128
005bd0a5  MOV DL,byte ptr [ESI + ECX*0x1 + 0x1]
005bd0a9  INC ECX
005bd0aa  TEST DL,DL
005bd0ac  JNZ 0x005bd097
005bd0ae  MOV ESI,dword ptr [ESP + 0x20]
005bd0b2  MOV EAX,EDI
005bd0b4  LEA EDX,[EAX + 0x1]
005bd0b7  MOV CL,byte ptr [EAX]
005bd0b9  INC EAX
005bd0ba  TEST CL,CL
005bd0bc  JNZ 0x005bd0b7
005bd0be  SUB EAX,EDX
005bd0c0  LEA ECX,[EAX + ESI*0x1]
005bd0c3  MOV AL,byte ptr [ECX + EBP*0x1]
005bd0c6  TEST AL,AL
005bd0c8  JZ 0x005bd120
005bd0ca  LEA EBX,[EBX]
005bd0d0  CMP AL,0x5c
005bd0d2  JZ 0x005bd0f0
005bd0d4  CMP AL,0x30
005bd0d6  JL 0x005bd120
005bd0d8  CMP AL,0x39
005bd0da  JG 0x005bd120
005bd0dc  MOVSX EAX,AL
005bd0df  LEA EDX,[EBX + EBX*0x4]
005bd0e2  INC ECX
005bd0e3  LEA EBX,[EAX + EDX*0x2 + -0x30]
005bd0e7  MOV AL,byte ptr [ECX + EBP*0x1]
005bd0ea  TEST AL,AL
005bd0ec  JNZ 0x005bd0d0
005bd0ee  JMP 0x005bd120
005bd0f0  MOV EDI,dword ptr [ESP + 0x10]
005bd0f4  XOR EAX,EAX
005bd0f6  MOV AL,BL
005bd0f8  LEA EDX,[ECX + 0x1]
005bd0fb  MOV dword ptr [ESP + 0x14],EDX
005bd0ff  MOV EDX,dword ptr [ESP + 0x1c]
005bd103  MOV byte ptr [ESP + 0x28],0x1
005bd108  AND EAX,0xff
005bd10d  OR AX,word ptr [EDX + 0x4]
005bd111  MOV EDX,dword ptr [ESP + 0x18]
005bd115  MOV EDX,dword ptr [EDX]
005bd117  MOV word ptr [EDX + EDI*0x2],AX
005bd11b  INC EDI
005bd11c  MOV dword ptr [ESP + 0x10],EDI
005bd120  CMP byte ptr [ECX + EBP*0x1],0x5c
005bd124  JZ 0x005bd142
005bd126  JMP 0x005bd12c
005bd128  MOV ESI,dword ptr [ESP + 0x20]
005bd12c  MOV EAX,dword ptr [ESP + 0x1c]
005bd130  MOV ECX,dword ptr [EAX + 0x8]
005bd133  ADD EAX,0x8
005bd136  TEST ECX,ECX
005bd138  MOV dword ptr [ESP + 0x1c],EAX
005bd13c  JNZ 0x005bd080
005bd142  MOV AL,byte ptr [ESP + 0x28]
005bd146  TEST AL,AL
005bd148  MOV ECX,dword ptr [ESP + 0x10]
005bd14c  JNZ 0x005bd167
005bd14e  MOV EAX,dword ptr [ESP + 0x14]
005bd152  MOVSX DX,byte ptr [EAX + EBP*0x1 + -0x1]
005bd158  MOV EAX,dword ptr [ESP + 0x18]
005bd15c  MOV EAX,dword ptr [EAX]
005bd15e  MOV word ptr [EAX + ECX*0x2],DX
005bd162  INC ECX
005bd163  MOV dword ptr [ESP + 0x10],ECX
005bd167  MOV EDX,dword ptr [ESP + 0x14]
005bd16b  CMP byte ptr [EDX + EBP*0x1],0x0
005bd16f  MOV EBX,dword ptr [ESP + 0x18]
005bd173  JNZ 0x005bd030
005bd179  MOV EAX,dword ptr [EBX]
005bd17b  POP EDI
005bd17c  POP ESI
005bd17d  POP EBP
005bd17e  MOV word ptr [EAX + ECX*0x2],0x0
005bd184  POP EBX
005bd185  ADD ESP,0x14
005bd188  RET 0x4
