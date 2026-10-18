007ff2cc  PUSH EBP
007ff2cd  MOV EBP,ESP
007ff2cf  SUB ESP,0xc
007ff2d2  PUSH EBX
007ff2d3  PUSH ESI
007ff2d4  MOV ESI,dword ptr [EBP + 0x8]
007ff2d7  MOV ECX,dword ptr [ESI]
007ff2d9  PUSH EDI
007ff2da  MOV EDI,dword ptr [EBP + 0x18]
007ff2dd  MOV EAX,ECX
007ff2df  IMUL EAX,dword ptr [EBP + 0x1c]
007ff2e3  LEA EAX,[EAX + EDI*0x1 + -0x1]
007ff2e7  XOR EDX,EDX
007ff2e9  DIV EDI
007ff2eb  MOV EDI,dword ptr [ESI + 0x4]
007ff2ee  MOV EDX,dword ptr [EBP + 0x20]
007ff2f1  PUSH dword ptr [EBP + 0x28]
007ff2f4  MOV EBX,dword ptr [EBP + 0xc]
007ff2f7  PUSH dword ptr [EBP + 0x24]
007ff2fa  PUSH dword ptr [EBP + 0x20]
007ff2fd  PUSH dword ptr [EBP + 0x1c]
007ff300  PUSH dword ptr [EBP + 0x18]
007ff303  PUSH dword ptr [EBP + 0x14]
007ff306  PUSH dword ptr [EBP + 0x10]
007ff309  MOV dword ptr [EBP + -0x8],EAX
007ff30c  MOV EAX,EDI
007ff30e  IMUL EAX,dword ptr [EBP + 0x24]
007ff312  LEA EAX,[EAX + EDX*0x1 + -0x1]
007ff316  XOR EDX,EDX
007ff318  DIV dword ptr [EBP + 0x20]
007ff31b  PUSH EAX
007ff31c  PUSH dword ptr [EBP + -0x8]
007ff31f  MOV dword ptr [EBP + -0x4],EAX
007ff322  PUSH dword ptr [EBX + 0x8]
007ff325  PUSH dword ptr [EBX + 0x18]
007ff328  PUSH EDI
007ff329  PUSH ECX
007ff32a  PUSH dword ptr [ESI + 0x8]
007ff32d  PUSH dword ptr [ESI + 0x18]
007ff330  CALL 0x007ff0c2
007ff335  MOV EAX,dword ptr [EBP + -0x8]
007ff338  ADD ESP,0x3c
007ff33b  CMP EAX,dword ptr [EBX]
007ff33d  JGE 0x007ff394
007ff33f  AND dword ptr [EBP + 0xc],0x0
007ff343  CMP dword ptr [EBP + -0x4],0x0
007ff347  JLE 0x007ff394
007ff349  MOV EAX,dword ptr [EBX + 0x8]
007ff34c  IMUL EAX,dword ptr [EBP + 0xc]
007ff350  ADD EAX,dword ptr [EBP + -0x8]
007ff353  MOV ECX,dword ptr [EBX + 0x18]
007ff356  LEA EDX,[EAX + ECX*0x1]
007ff359  MOVSX EAX,byte ptr [EDX + -0x2]
007ff35d  MOV ECX,dword ptr [EBX]
007ff35f  SUB ECX,dword ptr [EBP + -0x8]
007ff362  MOV dword ptr [EBP + -0xc],EBX
007ff365  MOV BL,AL
007ff367  MOV BH,BL
007ff369  INC ECX
007ff36a  LEA EDI,[EDX + -0x1]
007ff36d  MOV EDX,ECX
007ff36f  SHR ECX,0x2
007ff372  MOV EAX,EBX
007ff374  SHL EAX,0x10
007ff377  MOV AX,BX
007ff37a  MOV EBX,dword ptr [EBP + -0xc]
007ff37d  STOSD.REP ES:EDI
007ff37f  MOV ECX,EDX
007ff381  AND ECX,0x3
007ff384  INC dword ptr [EBP + 0xc]
007ff387  STOSB.REP ES:EDI
007ff389  MOV EAX,dword ptr [EBP + 0xc]
007ff38c  CMP EAX,dword ptr [EBP + -0x4]
007ff38f  JL 0x007ff349
007ff391  MOV ESI,dword ptr [EBP + 0x8]
007ff394  MOV ECX,dword ptr [EBX + 0x4]
007ff397  MOV EDX,dword ptr [EBP + -0x4]
007ff39a  CMP EDX,ECX
007ff39c  JGE 0x007ff3d8
007ff39e  LEA EAX,[EDX + -0x1]
007ff3a1  CMP EAX,ECX
007ff3a3  JGE 0x007ff3d8
007ff3a5  ADD EDX,-0x2
007ff3a8  MOV dword ptr [EBP + 0xc],EDX
007ff3ab  MOV EDI,dword ptr [EBX + 0x8]
007ff3ae  MOV EDX,dword ptr [EBX + 0x18]
007ff3b1  MOV ECX,dword ptr [EBX]
007ff3b3  MOV ESI,EDI
007ff3b5  IMUL EDI,EAX
007ff3b8  IMUL ESI,dword ptr [EBP + 0xc]
007ff3bc  INC ECX
007ff3bd  ADD ESI,EDX
007ff3bf  ADD EDI,EDX
007ff3c1  MOV EDX,ECX
007ff3c3  SHR ECX,0x2
007ff3c6  MOVSD.REP ES:EDI,ESI
007ff3c8  MOV ECX,EDX
007ff3ca  AND ECX,0x3
007ff3cd  INC EAX
007ff3ce  MOVSB.REP ES:EDI,ESI
007ff3d0  CMP EAX,dword ptr [EBX + 0x4]
007ff3d3  JL 0x007ff3ab
007ff3d5  MOV ESI,dword ptr [EBP + 0x8]
007ff3d8  PUSH dword ptr [EBP + 0x28]
007ff3db  MOV EAX,dword ptr [EBP + -0x4]
007ff3de  PUSH dword ptr [EBP + 0x24]
007ff3e1  CDQ
007ff3e2  PUSH dword ptr [EBP + 0x20]
007ff3e5  SUB EAX,EDX
007ff3e7  PUSH dword ptr [EBP + 0x1c]
007ff3ea  MOV dword ptr [EBP + -0x4],EAX
007ff3ed  PUSH dword ptr [EBP + 0x18]
007ff3f0  MOV EAX,dword ptr [EBP + -0x8]
007ff3f3  PUSH dword ptr [EBP + 0x14]
007ff3f6  SAR dword ptr [EBP + -0x4],0x1
007ff3f9  PUSH dword ptr [EBP + 0x10]
007ff3fc  CDQ
007ff3fd  PUSH dword ptr [EBP + -0x4]
007ff400  SUB EAX,EDX
007ff402  MOV EDI,EAX
007ff404  SAR EDI,0x1
007ff406  PUSH EDI
007ff407  PUSH dword ptr [EBX + 0x14]
007ff40a  MOV dword ptr [EBP + -0x8],EDI
007ff40d  PUSH dword ptr [EBX + 0x1c]
007ff410  PUSH dword ptr [ESI + 0x10]
007ff413  PUSH dword ptr [ESI + 0xc]
007ff416  PUSH dword ptr [ESI + 0x14]
007ff419  PUSH dword ptr [ESI + 0x1c]
007ff41c  CALL 0x007ff0c2
007ff421  ADD ESP,0x3c
007ff424  CMP EDI,dword ptr [EBX + 0xc]
007ff427  JGE 0x007ff47e
007ff429  AND dword ptr [EBP + 0xc],0x0
007ff42d  CMP dword ptr [EBX + 0x10],0x0
007ff431  JLE 0x007ff47e
007ff433  MOV EAX,dword ptr [EBX + 0x14]
007ff436  IMUL EAX,dword ptr [EBP + 0xc]
007ff43a  ADD EAX,dword ptr [EBX + 0x1c]
007ff43d  MOV ECX,dword ptr [EBX + 0xc]
007ff440  LEA EDX,[EAX + EDI*0x1]
007ff443  MOVSX EAX,byte ptr [EDX + -0x2]
007ff447  MOV dword ptr [EBP + -0xc],EBX
007ff44a  MOV BL,AL
007ff44c  MOV BH,BL
007ff44e  SUB ECX,EDI
007ff450  INC ECX
007ff451  LEA EDI,[EDX + -0x1]
007ff454  MOV EDX,ECX
007ff456  SHR ECX,0x2
007ff459  MOV EAX,EBX
007ff45b  SHL EAX,0x10
007ff45e  MOV AX,BX
007ff461  MOV EBX,dword ptr [EBP + -0xc]
007ff464  STOSD.REP ES:EDI
007ff466  MOV ECX,EDX
007ff468  AND ECX,0x3
007ff46b  INC dword ptr [EBP + 0xc]
007ff46e  STOSB.REP ES:EDI
007ff470  MOV EAX,dword ptr [EBP + 0xc]
007ff473  CMP EAX,dword ptr [EBX + 0x10]
007ff476  MOV EDI,dword ptr [EBP + -0x8]
007ff479  JL 0x007ff433
007ff47b  MOV ESI,dword ptr [EBP + 0x8]
007ff47e  MOV ECX,dword ptr [EBP + -0x4]
007ff481  CMP ECX,dword ptr [EBX + 0x10]
007ff484  JGE 0x007ff4dc
007ff486  LEA EAX,[ECX + -0x1]
007ff489  MOV dword ptr [EBP + 0xc],EAX
007ff48c  MOV EAX,dword ptr [EBX + 0x4]
007ff48f  CDQ
007ff490  SUB EAX,EDX
007ff492  SAR EAX,0x1
007ff494  CMP dword ptr [EBP + 0xc],EAX
007ff497  JGE 0x007ff4dc
007ff499  MOV EDI,dword ptr [EBX + 0x14]
007ff49c  MOV EDX,dword ptr [EBP + -0x4]
007ff49f  MOV EAX,dword ptr [EBX + 0x1c]
007ff4a2  MOV ECX,dword ptr [EBX + 0xc]
007ff4a5  MOV ESI,EDI
007ff4a7  IMUL EDI,dword ptr [EBP + 0xc]
007ff4ab  ADD EDX,-0x2
007ff4ae  IMUL ESI,EDX
007ff4b1  ADD ESI,EAX
007ff4b3  ADD EDI,EAX
007ff4b5  MOV EAX,ECX
007ff4b7  SHR ECX,0x2
007ff4ba  MOVSD.REP ES:EDI,ESI
007ff4bc  MOV ECX,EAX
007ff4be  AND ECX,0x3
007ff4c1  INC dword ptr [EBP + 0xc]
007ff4c4  MOVSB.REP ES:EDI,ESI
007ff4c6  MOV EAX,dword ptr [EBX + 0x4]
007ff4c9  CDQ
007ff4ca  SUB EAX,EDX
007ff4cc  SAR EAX,0x1
007ff4ce  CMP dword ptr [EBP + 0xc],EAX
007ff4d1  JL 0x007ff499
007ff4d3  MOV ESI,dword ptr [EBP + 0x8]
007ff4d6  MOV EDI,dword ptr [EBP + -0x8]
007ff4d9  MOV ECX,dword ptr [EBP + -0x4]
007ff4dc  PUSH dword ptr [EBP + 0x28]
007ff4df  PUSH dword ptr [EBP + 0x24]
007ff4e2  PUSH dword ptr [EBP + 0x20]
007ff4e5  PUSH dword ptr [EBP + 0x1c]
007ff4e8  PUSH dword ptr [EBP + 0x18]
007ff4eb  PUSH dword ptr [EBP + 0x14]
007ff4ee  PUSH dword ptr [EBP + 0x10]
007ff4f1  PUSH ECX
007ff4f2  PUSH EDI
007ff4f3  PUSH dword ptr [EBX + 0x14]
007ff4f6  PUSH dword ptr [EBX + 0x20]
007ff4f9  PUSH dword ptr [ESI + 0x10]
007ff4fc  PUSH dword ptr [ESI + 0xc]
007ff4ff  PUSH dword ptr [ESI + 0x14]
007ff502  PUSH dword ptr [ESI + 0x20]
007ff505  CALL 0x007ff0c2
007ff50a  ADD ESP,0x3c
007ff50d  CMP EDI,dword ptr [EBX + 0xc]
007ff510  JGE 0x007ff566
007ff512  AND dword ptr [EBP + 0xc],0x0
007ff516  CMP dword ptr [EBX + 0x10],0x0
007ff51a  JLE 0x007ff566
007ff51c  JMP 0x007ff521
007ff51e  MOV EDI,dword ptr [EBP + -0x8]
007ff521  MOV EAX,dword ptr [EBX + 0x14]
007ff524  IMUL EAX,dword ptr [EBP + 0xc]
007ff528  ADD EAX,dword ptr [EBX + 0x20]
007ff52b  MOV ECX,dword ptr [EBX + 0xc]
007ff52e  LEA EDX,[EAX + EDI*0x1]
007ff531  MOVSX EAX,byte ptr [EDX + -0x2]
007ff535  MOV dword ptr [EBP + 0x8],EBX
007ff538  MOV BL,AL
007ff53a  MOV BH,BL
007ff53c  SUB ECX,EDI
007ff53e  INC ECX
007ff53f  LEA EDI,[EDX + -0x1]
007ff542  MOV EDX,ECX
007ff544  SHR ECX,0x2
007ff547  MOV EAX,EBX
007ff549  SHL EAX,0x10
007ff54c  MOV AX,BX
007ff54f  MOV EBX,dword ptr [EBP + 0x8]
007ff552  STOSD.REP ES:EDI
007ff554  MOV ECX,EDX
007ff556  AND ECX,0x3
007ff559  INC dword ptr [EBP + 0xc]
007ff55c  STOSB.REP ES:EDI
007ff55e  MOV EAX,dword ptr [EBP + 0xc]
007ff561  CMP EAX,dword ptr [EBX + 0x10]
007ff564  JL 0x007ff51e
007ff566  MOV ECX,dword ptr [EBP + -0x4]
007ff569  CMP ECX,dword ptr [EBX + 0x10]
007ff56c  JGE 0x007ff5bb
007ff56e  MOV EAX,dword ptr [EBX + 0x4]
007ff571  CDQ
007ff572  SUB EAX,EDX
007ff574  LEA ESI,[ECX + -0x1]
007ff577  SAR EAX,0x1
007ff579  CMP ESI,EAX
007ff57b  MOV dword ptr [EBP + 0xc],ESI
007ff57e  JGE 0x007ff5bb
007ff580  ADD ECX,-0x2
007ff583  MOV dword ptr [EBP + 0x8],ECX
007ff586  MOV EDI,dword ptr [EBX + 0x14]
007ff589  MOV EAX,dword ptr [EBX + 0x20]
007ff58c  MOV ECX,dword ptr [EBX + 0xc]
007ff58f  MOV ESI,EDI
007ff591  IMUL EDI,dword ptr [EBP + 0xc]
007ff595  IMUL ESI,dword ptr [EBP + 0x8]
007ff599  ADD ESI,EAX
007ff59b  ADD EDI,EAX
007ff59d  MOV EAX,ECX
007ff59f  SHR ECX,0x2
007ff5a2  MOVSD.REP ES:EDI,ESI
007ff5a4  MOV ECX,EAX
007ff5a6  AND ECX,0x3
007ff5a9  INC dword ptr [EBP + 0xc]
007ff5ac  MOVSB.REP ES:EDI,ESI
007ff5ae  MOV EAX,dword ptr [EBX + 0x4]
007ff5b1  CDQ
007ff5b2  SUB EAX,EDX
007ff5b4  SAR EAX,0x1
007ff5b6  CMP dword ptr [EBP + 0xc],EAX
007ff5b9  JL 0x007ff586
007ff5bb  POP EDI
007ff5bc  POP ESI
007ff5bd  POP EBX
007ff5be  LEAVE
007ff5bf  RET
