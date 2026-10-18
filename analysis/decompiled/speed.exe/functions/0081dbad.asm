0081dbad  PUSH EBP
0081dbae  MOV EBP,ESP
0081dbb0  SUB ESP,0xf0
0081dbb6  PUSH ESI
0081dbb7  XOR ESI,ESI
0081dbb9  CMP byte ptr [0x009c2188],0x0
0081dbc0  MOV dword ptr [EBP + -0x14],ESI
0081dbc3  JNZ 0x0081dbcd
0081dbc5  PUSH -0xa
0081dbc7  POP EAX
0081dbc8  JMP 0x0081deeb
0081dbcd  PUSH EBX
0081dbce  PUSH EDI
0081dbcf  PUSH dword ptr [EBP + 0x14]
0081dbd2  CALL 0x008225bd
0081dbd7  MOV EBX,dword ptr [EBP + 0xc]
0081dbda  MOV AL,byte ptr [EBX + 0x2]
0081dbdd  MOV byte ptr [EBP + 0xffffff13],AL
0081dbe3  POP ECX
0081dbe4  MOVZX ECX,AL
0081dbe7  MOV EAX,dword ptr [EBP + 0x10]
0081dbea  MOV dword ptr [EBP + -0x10],ECX
0081dbed  MOV ECX,dword ptr [EBP + 0x8]
0081dbf0  MOV EDI,dword ptr [ECX*0x4 + 0x9c1f44]
0081dbf7  MOV CX,word ptr [EAX + 0x8]
0081dbfb  MOV word ptr [EBP + 0xffffff28],CX
0081dc02  MOV ECX,dword ptr [EBX]
0081dc04  MOV dword ptr [EBP + -0x14],ESI
0081dc07  MOV dword ptr [EDI + 0x4],ESI
0081dc0a  MOV dword ptr [EDI + 0x48],ESI
0081dc0d  MOV dword ptr [EDI + 0x4c],ESI
0081dc10  MOV dword ptr [EDI + 0xc],ESI
0081dc13  MOV dword ptr [EDI + 0x60],ECX
0081dc16  CMP byte ptr [EDI + 0x62],0x0
0081dc1a  MOV dword ptr [EDI + 0x8],ESI
0081dc1d  MOV word ptr [EDI + 0x46],SI
0081dc21  MOV word ptr [EDI + 0x44],SI
0081dc25  MOV dword ptr [EBP + -0x8],ESI
0081dc28  JBE 0x0081dc64
0081dc2a  ADD EAX,0x18
0081dc2d  MOV dword ptr [EBP + -0x4],EAX
0081dc30  LEA ECX,[EDI + 0x64]
0081dc33  LEA EAX,[EDI + 0x28]
0081dc36  JMP 0x0081dc3b
0081dc38  MOV ECX,dword ptr [EBP + -0xc]
0081dc3b  MOV EDX,dword ptr [EBP + -0x4]
0081dc3e  INC dword ptr [EBP + -0x8]
0081dc41  ADD dword ptr [EBP + -0x4],0x4
0081dc45  MOV dword ptr [ECX + -0x54],ESI
0081dc48  MOV word ptr [EAX + 0xc],SI
0081dc4c  MOV word ptr [EAX],SI
0081dc4f  MOV EDX,dword ptr [EDX]
0081dc51  MOV dword ptr [ECX],EDX
0081dc53  ADD ECX,0x4
0081dc56  MOV dword ptr [EBP + -0xc],ECX
0081dc59  MOVZX ECX,byte ptr [EDI + 0x62]
0081dc5d  INC EAX
0081dc5e  INC EAX
0081dc5f  CMP dword ptr [EBP + -0x8],ECX
0081dc62  JL 0x0081dc38
0081dc64  LEA EAX,[EBP + 0xffffff10]
0081dc6a  PUSH EAX
0081dc6b  LEA EAX,[EBP + -0x14]
0081dc6e  PUSH EAX
0081dc6f  CALL 0x00822548
0081dc74  CMP EAX,ESI
0081dc76  POP ECX
0081dc77  POP ECX
0081dc78  MOV dword ptr [EBP + -0x8],EAX
0081dc7b  JZ 0x0081dee7
0081dc81  LEA ECX,[EBP + -0x24]
0081dc84  PUSH ECX
0081dc85  LEA ECX,[EBP + -0x18]
0081dc88  PUSH ECX
0081dc89  PUSH EAX
0081dc8a  CALL 0x0081ec32
0081dc8f  PUSH dword ptr [EBP + -0x24]
0081dc92  LEA EAX,[EBP + -0x1c]
0081dc95  PUSH dword ptr [EBP + -0x18]
0081dc98  PUSH EAX
0081dc99  PUSH 0x65
0081dc9b  PUSH dword ptr [EBP + -0x10]
0081dc9e  CALL 0x0081f413
0081dca3  ADD ESP,0x20
0081dca6  CMP EAX,ESI
0081dca8  MOV dword ptr [EBP + -0x4],EAX
0081dcab  JGE 0x0081dcb5
0081dcad  MOV dword ptr [EDI],0xfffffff7
0081dcb3  JMP 0x0081dc64
0081dcb5  MOV ECX,dword ptr [EBP + -0x1c]
0081dcb8  MOV dword ptr [EDI],ECX
0081dcba  MOVZX ECX,byte ptr [EBX + 0x2]
0081dcbe  PUSH ECX
0081dcbf  PUSH EAX
0081dcc0  CALL 0x0081dab6
0081dcc5  MOV ESI,dword ptr [EBP + -0x4]
0081dcc8  MOV byte ptr [EDI + 0x42],AL
0081dccb  MOV EAX,[0x009c21f4]
0081dcd0  LEA ESI,[ESI + ESI*0x8]
0081dcd3  SHL ESI,0x4
0081dcd6  MOV dword ptr [EBP + -0x20],ESI
0081dcd9  ADD ESI,EAX
0081dcdb  OR dword ptr [ESI + 0x18],0xffffffff
0081dcdf  AND dword ptr [ESI + 0x14],0x0
0081dce3  MOV AX,word ptr [EBX]
0081dce6  MOV word ptr [ESI + 0x20],AX
0081dcea  MOV AL,byte ptr [EBX + 0x3]
0081dced  MOV byte ptr [ESI + 0x22],AL
0081dcf0  MOV AL,byte ptr [EBX + 0x2]
0081dcf3  POP ECX
0081dcf4  MOV byte ptr [ESI + 0x23],AL
0081dcf7  CMP byte ptr [EBX + 0x2],0x1
0081dcfb  POP ECX
0081dcfc  JNZ 0x0081dd0b
0081dcfe  MOV EDX,dword ptr [EBP + 0x14]
0081dd01  MOV AX,word ptr [EDX + 0x8]
0081dd05  MOV word ptr [ESI + 0x1c],AX
0081dd09  JMP 0x0081dd15
0081dd0b  PUSH ESI
0081dd0c  CALL 0x00821b41
0081dd11  MOV EDX,dword ptr [EBP + 0x14]
0081dd14  POP ECX
0081dd15  AND word ptr [ESI + 0x4c],0x0
0081dd1a  FLD float ptr [0x00890bf0]
0081dd20  OR word ptr [ESI + 0x12],0xffff
0081dd25  MOV EAX,dword ptr [EBP + 0x10]
0081dd28  MOV CX,word ptr [EAX]
0081dd2b  MOV word ptr [ESI + 0x88],CX
0081dd32  MOV CX,word ptr [EDX + 0xc]
0081dd36  MOV word ptr [ESI + 0x8c],CX
0081dd3d  MOV CL,byte ptr [EDX + 0x1]
0081dd40  MOV byte ptr [ESI + 0x68],CL
0081dd43  MOV CL,byte ptr [EDX + 0x5]
0081dd46  MOV byte ptr [ESI + 0x60],CL
0081dd49  MOVSX ECX,byte ptr [EDX + 0x5]
0081dd4d  MOV dword ptr [EBP + -0xc],ECX
0081dd50  MOV ECX,dword ptr [ESI + 0x64]
0081dd53  FILD dword ptr [EBP + -0xc]
0081dd56  FMUL ST1
0081dd58  FSTP float ptr [ECX]
0081dd5a  MOVSX AX,byte ptr [EAX + 0x6]
0081dd5f  XOR ECX,ECX
0081dd61  MOV byte ptr [ESI + 0x26],0x0
0081dd65  MOV byte ptr [ESI + 0x27],0x0
0081dd69  MOV dword ptr [ESI + 0x78],ECX
0081dd6c  MOV dword ptr [ESI + 0x80],ECX
0081dd72  IMUL EAX,EAX,0x64
0081dd75  MOV word ptr [ESI + 0x86],AX
0081dd7c  MOVSX EAX,byte ptr [EDX]
0081dd7f  MOV dword ptr [EBP + -0xc],EAX
0081dd82  FILD dword ptr [EBP + -0xc]
0081dd85  FMUL ST1
0081dd87  FSTP float ptr [ESI + 0x38]
0081dd8a  MOVZX EAX,byte ptr [EBX + 0x2]
0081dd8e  TEST EAX,EAX
0081dd90  FSTP ST0
0081dd92  JLE 0x0081de39
0081dd98  MOV EDX,dword ptr [EBP + 0x10]
0081dd9b  FLDZ
0081dd9d  MOV DX,word ptr [EDX + ECX*0x2 + 0xc]
0081dda2  LEA EAX,[EAX + EAX*0x2]
0081dda5  LEA EAX,[ECX + EAX*0x2]
0081dda8  SUB DX,word ptr [EAX*0x2 + 0x9c21f4]
0081ddb0  MOVSX EAX,word ptr [ESI + ECX*0x2 + 0x4]
0081ddb5  MOV word ptr [ESI + ECX*0x2 + 0x50],DX
0081ddba  MOV DX,word ptr [EBP + -0x8]
0081ddbe  LEA EAX,[EAX + EAX*0x8]
0081ddc1  SHL EAX,0x4
0081ddc4  ADD EAX,dword ptr [0x009c21f4]
0081ddca  MOV word ptr [EAX + 0x24],DX
0081ddce  MOV EDX,dword ptr [EBP + 0x14]
0081ddd1  MOV DL,byte ptr [EDX + 0x4]
0081ddd4  MOV byte ptr [EAX + 0x5f],DL
0081ddd7  MOV EDX,dword ptr [EBP + 0x10]
0081ddda  MOV DL,byte ptr [EDX + 0x3]
0081dddd  MOV byte ptr [EAX + 0x2b],DL
0081dde0  MOV EDX,dword ptr [ESI + 0x38]
0081dde3  FSTP float ptr [EAX + 0x30]
0081dde6  MOV dword ptr [EAX + 0x38],EDX
0081dde9  XOR EDX,EDX
0081ddeb  MOV dword ptr [EAX + 0x74],EDX
0081ddee  MOV byte ptr [EAX + 0x5e],DL
0081ddf1  MOV byte ptr [EAX + 0x5d],DL
0081ddf4  MOV dword ptr [EAX + 0x3c],EDX
0081ddf7  MOV dword ptr [EAX + 0x70],EDX
0081ddfa  MOV dword ptr [EAX + 0x7c],EDX
0081ddfd  MOV byte ptr [EAX + 0x5c],0x1
0081de01  MOV dword ptr [EAX + 0x40],0x7f0000
0081de08  MOV dword ptr [EAX + 0x44],0x7fffffff
0081de0f  FLD float ptr [0x0090bd14]
0081de15  FMUL float ptr [EAX + 0x38]
0081de18  CMP ECX,0x5
0081de1b  SETZ DL
0081de1e  AND word ptr [EAX + 0x1e],0x0
0081de23  FSTP float ptr [EAX + 0x48]
0081de26  MOV byte ptr [EAX + 0x4e],DL
0081de29  MOVZX EAX,byte ptr [EBX + 0x2]
0081de2d  INC ECX
0081de2e  CMP ECX,EAX
0081de30  JL 0x0081dd98
0081de36  MOV EDX,dword ptr [EBP + 0x14]
0081de39  CMP byte ptr [EBX + 0x2],0x1
0081de3d  JNZ 0x0081de47
0081de3f  MOV AX,word ptr [EDX + 0xa]
0081de43  MOV word ptr [ESI + 0x1e],AX
0081de47  AND dword ptr [EBP + -0x8],0x0
0081de4b  CMP byte ptr [EBX + 0x2],0x0
0081de4f  JBE 0x0081de79
0081de51  LEA ECX,[ESI + 0x50]
0081de54  MOVSX EAX,word ptr [ECX + -0x4c]
0081de58  MOV DX,word ptr [ECX]
0081de5b  LEA EAX,[EAX + EAX*0x8]
0081de5e  SHL EAX,0x4
0081de61  ADD EAX,dword ptr [0x009c21f4]
0081de67  ADD word ptr [EAX + 0x1c],DX
0081de6b  INC dword ptr [EBP + -0x8]
0081de6e  MOVZX EAX,byte ptr [EBX + 0x2]
0081de72  INC ECX
0081de73  INC ECX
0081de74  CMP dword ptr [EBP + -0x8],EAX
0081de77  JL 0x0081de54
0081de79  PUSH dword ptr [EBP + -0x4]
0081de7c  AND word ptr [ESI + 0x8a],0x0
0081de84  CALL 0x008219bb
0081de89  PUSH dword ptr [EBP + 0x10]
0081de8c  MOV EAX,dword ptr [EBP + 0x14]
0081de8f  MOVZX ECX,word ptr [EAX + 0x16]
0081de93  PUSH EBX
0081de94  PUSH ECX
0081de95  MOVZX ECX,word ptr [EAX + 0x14]
0081de99  MOVZX EAX,word ptr [EAX + 0xe]
0081de9d  PUSH ECX
0081de9e  PUSH EAX
0081de9f  PUSH dword ptr [EBP + -0x4]
0081dea2  PUSH dword ptr [EBP + 0x8]
0081dea5  CALL 0x008224de
0081deaa  ADD ESP,0x20
0081dead  TEST EAX,EAX
0081deaf  MOV dword ptr [EBP + -0xc],EAX
0081deb2  JGE 0x0081dee7
0081deb4  MOV EAX,dword ptr [EBP + -0x10]
0081deb7  TEST EAX,EAX
0081deb9  JLE 0x0081dedb
0081debb  MOV ESI,dword ptr [EBP + -0x20]
0081debe  ADD ESI,0x4
0081dec1  MOV dword ptr [EBP + -0x4],EAX
0081dec4  MOV EAX,[0x009c21f4]
0081dec9  MOVSX EAX,word ptr [ESI + EAX*0x1]
0081decd  PUSH EAX
0081dece  CALL 0x0081f6c3
0081ded3  INC ESI
0081ded4  INC ESI
0081ded5  DEC dword ptr [EBP + -0x4]
0081ded8  POP ECX
0081ded9  JNZ 0x0081dec4
0081dedb  MOV EAX,dword ptr [EBP + -0xc]
0081dede  MOV dword ptr [EDI],EAX
0081dee0  XOR ESI,ESI
0081dee2  JMP 0x0081dc64
0081dee7  MOV EAX,dword ptr [EDI]
0081dee9  POP EDI
0081deea  POP EBX
0081deeb  POP ESI
0081deec  LEAVE
0081deed  RET
