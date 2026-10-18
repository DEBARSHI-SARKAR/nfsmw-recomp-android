007ef88e  PUSH EBP
007ef88f  MOV EBP,ESP
007ef891  SUB ESP,0x478
007ef897  PUSH EBX
007ef898  XOR EBX,EBX
007ef89a  PUSH ESI
007ef89b  MOV byte ptr [0x009bb171],BL
007ef8a1  MOV byte ptr [0x009bb170],BL
007ef8a7  PUSH EDI
007ef8a8  MOV ECX,0x9bb178
007ef8ad  MOV dword ptr [EBP + -0x4],EBX
007ef8b0  MOV byte ptr [0x009bb158],BL
007ef8b6  MOV byte ptr [0x009bb172],0x1
007ef8bd  MOV byte ptr [0x009bb159],BL
007ef8c3  CALL 0x007ec1a7
007ef8c8  PUSH 0x9bb15c
007ef8cd  CALL 0x007ecc4a
007ef8d2  PUSH -0x3
007ef8d4  PUSH EBX
007ef8d5  PUSH EBX
007ef8d6  PUSH EBX
007ef8d7  PUSH 0x7ef80a
007ef8dc  PUSH 0x9bb164
007ef8e1  CALL 0x007ec44f
007ef8e6  MOV EAX,[0x00907708]
007ef8eb  LEA ECX,[EBP + 0xfffffb88]
007ef8f1  ADD ESP,0x1c
007ef8f4  MOV byte ptr [0x009bb173],0x1
007ef8fb  MOV ESI,EAX
007ef8fd  SUB ECX,EAX
007ef8ff  MOV AL,byte ptr [ESI]
007ef901  MOV byte ptr [ECX + ESI*0x1],AL
007ef904  INC ESI
007ef905  CMP AL,BL
007ef907  JNZ 0x007ef8ff
007ef909  MOV EAX,[0x00907734]
007ef90e  MOV EDX,EAX
007ef910  MOV CL,byte ptr [EAX]
007ef912  INC EAX
007ef913  CMP CL,BL
007ef915  JNZ 0x007ef910
007ef917  LEA EDI,[EBP + 0xfffffb88]
007ef91d  SUB EAX,EDX
007ef91f  DEC EDI
007ef920  MOV CL,byte ptr [EDI + 0x1]
007ef923  INC EDI
007ef924  CMP CL,BL
007ef926  JNZ 0x007ef920
007ef928  MOV ECX,EAX
007ef92a  SHR ECX,0x2
007ef92d  MOV ESI,EDX
007ef92f  MOVSD.REP ES:EDI,ESI
007ef931  MOV ECX,EAX
007ef933  PUSH EBX
007ef934  LEA EAX,[EBP + 0xfffffb88]
007ef93a  AND ECX,0x3
007ef93d  PUSH EBX
007ef93e  PUSH EAX
007ef93f  MOVSB.REP ES:EDI,ESI
007ef941  CALL 0x007f0378
007ef946  MOV EDX,EAX
007ef948  ADD ESP,0xc
007ef94b  CMP EDX,EBX
007ef94d  MOV dword ptr [0x009bb174],EDX
007ef953  JZ 0x007ef9b6
007ef955  CMP dword ptr [EDX],0x128
007ef95b  SETZ AL
007ef95e  CMP AL,BL
007ef960  JZ 0x007ef9a3
007ef962  MOV ESI,dword ptr [EDX + 0x4]
007ef965  CMP ESI,0x1
007ef968  SETGE AL
007ef96b  CMP AL,BL
007ef96d  JZ 0x007ef9a3
007ef96f  CMP ESI,0x1
007ef972  SETLE AL
007ef975  CMP AL,BL
007ef977  JZ 0x007ef9a3
007ef979  MOV EAX,dword ptr [EDX + 0xc]
007ef97c  IMUL EAX,EAX,0x105
007ef982  PUSH EBX
007ef983  PUSH EAX
007ef984  ADD EDX,0x128
007ef98a  PUSH EDX
007ef98b  CALL 0x007f0fea
007ef990  MOV EDX,dword ptr [0x009bb174]
007ef996  ADD ESP,0xc
007ef999  CMP dword ptr [EDX + 0x8],EAX
007ef99c  SETZ AL
007ef99f  CMP AL,BL
007ef9a1  JNZ 0x007ef9b6
007ef9a3  MOV ECX,dword ptr [0x009076dc]
007ef9a9  MOV EAX,dword ptr [ECX]
007ef9ab  PUSH EBX
007ef9ac  PUSH EDX
007ef9ad  CALL dword ptr [EAX + 0x4]
007ef9b0  MOV dword ptr [0x009bb174],EBX
007ef9b6  PUSH EBX
007ef9b7  LEA EAX,[EBP + -0x10]
007ef9ba  PUSH EAX
007ef9bb  PUSH dword ptr [EBP + 0x8]
007ef9be  CALL 0x007f0336
007ef9c3  ADD ESP,0xc
007ef9c6  CMP dword ptr [EBP + -0x10],EBX
007ef9c9  MOV dword ptr [EBP + -0x14],EAX
007ef9cc  MOV dword ptr [EBP + -0x8],EAX
007ef9cf  JLE 0x007efe1f
007ef9d5  CMP dword ptr [EBP + -0x4],EBX
007ef9d8  JNZ 0x007efa29
007ef9da  MOV ECX,dword ptr [0x009076dc]
007ef9e0  LEA EAX,[EBP + -0x3c]
007ef9e3  MOV dword ptr [EBP + -0x1c],EAX
007ef9e6  LEA EDX,[EBP + -0x48]
007ef9e9  LEA EAX,[EBP + -0x24]
007ef9ec  PUSH EDX
007ef9ed  MOV dword ptr [EBP + -0x48],0x6
007ef9f4  MOV dword ptr [EBP + -0x44],0x127
007ef9fb  MOV dword ptr [EBP + -0x24],0x5
007efa02  MOV dword ptr [EBP + -0x20],0x8c20e8
007efa09  MOV dword ptr [EBP + -0x3c],0x1
007efa10  MOV dword ptr [EBP + -0x38],0x8c2124
007efa17  MOV dword ptr [EBP + -0x34],EBX
007efa1a  MOV dword ptr [EBP + -0x40],EAX
007efa1d  MOV EAX,dword ptr [ECX]
007efa1f  PUSH 0x10c
007efa24  CALL dword ptr [EAX]
007efa26  MOV dword ptr [EBP + -0x4],EAX
007efa29  PUSH 0x2c
007efa2b  PUSH dword ptr [EBP + -0x8]
007efa2e  CALL 0x007c97c0
007efa33  MOV ESI,EAX
007efa35  INC ESI
007efa36  PUSH 0x2c
007efa38  PUSH ESI
007efa39  CALL 0x007c97c0
007efa3e  MOV EDI,EAX
007efa40  PUSH ESI
007efa41  MOV byte ptr [EDI],BL
007efa43  CALL 0x007c6380
007efa48  MOV ESI,dword ptr [EBP + -0x4]
007efa4b  INC EDI
007efa4c  PUSH 0xd
007efa4e  PUSH EDI
007efa4f  MOV dword ptr [ESI + 0x108],EAX
007efa55  CALL 0x007c97c0
007efa5a  LEA ECX,[ESI + 0x4]
007efa5d  ADD ESP,0x1c
007efa60  MOV byte ptr [EAX],BL
007efa62  SUB ECX,EDI
007efa64  MOV DL,byte ptr [EDI]
007efa66  MOV byte ptr [ECX + EDI*0x1],DL
007efa69  INC EDI
007efa6a  CMP DL,BL
007efa6c  JNZ 0x007efa64
007efa6e  ADD EAX,0x2
007efa71  CMP dword ptr [ESI + 0x108],0x1
007efa78  MOV dword ptr [EBP + -0x8],EAX
007efa7b  JLE 0x007efdfc
007efa81  MOV EDI,dword ptr [EBP + -0x4]
007efa84  PUSH 0x2a
007efa86  LEA ESI,[EDI + 0x4]
007efa89  PUSH ESI
007efa8a  CALL 0x007c97c0
007efa8f  TEST EAX,EAX
007efa91  POP ECX
007efa92  POP ECX
007efa93  JNZ 0x007efba5
007efa99  PUSH 0x3f
007efa9b  PUSH ESI
007efa9c  CALL 0x007c97c0
007efaa1  TEST EAX,EAX
007efaa3  POP ECX
007efaa4  POP ECX
007efaa5  JNZ 0x007efba5
007efaab  MOV ECX,ESI
007efaad  CALL 0x007ef0f8
007efab2  CMP AL,0x1
007efab4  JZ 0x007efdfc
007efaba  MOV EAX,[0x00907708]
007efabf  LEA EDX,[EBP + 0xfffffe9c]
007efac5  SUB EDX,EAX
007efac7  MOV CL,byte ptr [EAX]
007efac9  MOV byte ptr [EDX + EAX*0x1],CL
007efacc  INC EAX
007efacd  CMP CL,BL
007efacf  JNZ 0x007efac7
007efad1  MOV EAX,dword ptr [EBP + -0x4]
007efad4  ADD EAX,0x4
007efad7  MOV ESI,EAX
007efad9  MOV CL,byte ptr [EAX]
007efadb  INC EAX
007efadc  CMP CL,BL
007efade  JNZ 0x007efad9
007efae0  LEA EDI,[EBP + 0xfffffe9c]
007efae6  SUB EAX,ESI
007efae8  DEC EDI
007efae9  MOV CL,byte ptr [EDI + 0x1]
007efaec  INC EDI
007efaed  CMP CL,BL
007efaef  JNZ 0x007efae9
007efaf1  MOV ECX,EAX
007efaf3  SHR ECX,0x2
007efaf6  PUSH EBX
007efaf7  MOVSD.REP ES:EDI,ESI
007efaf9  PUSH 0x80
007efafe  PUSH 0x3
007efb00  PUSH EBX
007efb01  PUSH EBX
007efb02  MOV ECX,EAX
007efb04  PUSH 0x80000000
007efb09  LEA EAX,[EBP + 0xfffffe9c]
007efb0f  AND ECX,0x3
007efb12  PUSH EAX
007efb13  MOVSB.REP ES:EDI,ESI
007efb15  CALL dword ptr [0x008902ac]
007efb1b  MOV EDI,EAX
007efb1d  CMP EDI,-0x1
007efb20  JZ 0x007efb5e
007efb22  MOV EAX,dword ptr [EBP + -0x4]
007efb25  ADD EAX,0x4
007efb28  PUSH EAX
007efb29  CALL 0x007eef91
007efb2e  MOV ESI,dword ptr [0x009bb174]
007efb34  POP ECX
007efb35  PUSH EBX
007efb36  PUSH EDI
007efb37  MOV dword ptr [EBP + -0xc],EAX
007efb3a  ADD ESI,0x10
007efb3d  CALL dword ptr [0x0089016c]
007efb43  ADD dword ptr [ESI],EAX
007efb45  MOV EAX,dword ptr [EBP + -0xc]
007efb48  PUSH EDI
007efb49  ADC dword ptr [ESI + 0x4],EBX
007efb4c  MOV byte ptr [EAX + 0x104],0x1
007efb53  CALL dword ptr [0x00890078]
007efb59  JMP 0x007efdfc
007efb5e  MOV EAX,[0x009bb194]
007efb63  XOR EDX,EDX
007efb65  CMP EAX,EBX
007efb67  JZ 0x007efb82
007efb69  MOV ESI,dword ptr [EBP + -0x4]
007efb6c  MOV ECX,dword ptr [ESI + 0x108]
007efb72  CMP dword ptr [EAX + 0x108],ECX
007efb78  JG 0x007efb97
007efb7a  MOV EDX,EAX
007efb7c  MOV EAX,dword ptr [EAX]
007efb7e  CMP EAX,EBX
007efb80  JNZ 0x007efb72
007efb82  PUSH dword ptr [EBP + -0x4]
007efb85  MOV ECX,0x9bb194
007efb8a  CALL 0x007efe98
007efb8f  MOV dword ptr [EBP + -0x4],EBX
007efb92  JMP 0x007efdfc
007efb97  PUSH ESI
007efb98  PUSH EDX
007efb99  MOV ECX,0x9bb194
007efb9e  CALL 0x007eff01
007efba3  JMP 0x007efb8f
007efba5  MOV EAX,dword ptr [EDI + 0x108]
007efbab  MOV dword ptr [EBP + -0x18],EAX
007efbae  MOV EAX,[0x0090770c]
007efbb3  LEA ESI,[EBP + 0xfffffe9c]
007efbb9  SUB ESI,EAX
007efbbb  MOV CL,byte ptr [EAX]
007efbbd  MOV byte ptr [ESI + EAX*0x1],CL
007efbc0  INC EAX
007efbc1  CMP CL,BL
007efbc3  JNZ 0x007efbbb
007efbc5  LEA EAX,[EDI + 0x4]
007efbc8  MOV EDX,EAX
007efbca  MOV CL,byte ptr [EAX]
007efbcc  INC EAX
007efbcd  CMP CL,BL
007efbcf  JNZ 0x007efbca
007efbd1  LEA EDI,[EBP + 0xfffffe9c]
007efbd7  SUB EAX,EDX
007efbd9  DEC EDI
007efbda  MOV CL,byte ptr [EDI + 0x1]
007efbdd  INC EDI
007efbde  CMP CL,BL
007efbe0  JNZ 0x007efbda
007efbe2  MOV ECX,EAX
007efbe4  SHR ECX,0x2
007efbe7  MOV ESI,EDX
007efbe9  MOVSD.REP ES:EDI,ESI
007efbeb  MOV ECX,EAX
007efbed  AND ECX,0x3
007efbf0  MOVSB.REP ES:EDI,ESI
007efbf2  MOV ESI,dword ptr [EBP + -0x4]
007efbf5  ADD ESI,0x4
007efbf8  LEA EAX,[EBP + 0xfffffd98]
007efbfe  SUB EAX,ESI
007efc00  MOV CL,byte ptr [ESI]
007efc02  MOV byte ptr [EAX + ESI*0x1],CL
007efc05  INC ESI
007efc06  CMP CL,BL
007efc08  JNZ 0x007efc00
007efc0a  LEA EAX,[EBP + 0xfffffd98]
007efc10  LEA EDX,[EAX + 0x1]
007efc13  MOV CL,byte ptr [EAX]
007efc15  INC EAX
007efc16  CMP CL,BL
007efc18  JNZ 0x007efc13
007efc1a  SUB EAX,EDX
007efc1c  LEA EAX,[EBP + EAX*0x1 + 0xfffffd97]
007efc23  DEC EAX
007efc24  CMP byte ptr [EAX],0x5c
007efc27  JNZ 0x007efc23
007efc29  MOV byte ptr [EAX + 0x1],BL
007efc2c  LEA EAX,[EBP + 0xfffffc88]
007efc32  PUSH EAX
007efc33  LEA EAX,[EBP + 0xfffffe9c]
007efc39  PUSH EAX
007efc3a  CALL 0x007f083a
007efc3f  TEST AL,AL
007efc41  POP ECX
007efc42  POP ECX
007efc43  JZ 0x007efdfc
007efc49  TEST byte ptr [EBP + 0xfffffc88],0x10
007efc50  JNZ 0x007efdda
007efc56  MOV EDI,dword ptr [EBP + -0x4]
007efc59  CMP EDI,EBX
007efc5b  JNZ 0x007efcae
007efc5d  MOV ECX,dword ptr [0x009076dc]
007efc63  LEA EAX,[EBP + -0x54]
007efc66  MOV dword ptr [EBP + -0x58],EAX
007efc69  LEA EDX,[EBP + -0x30]
007efc6c  LEA EAX,[EBP + -0x60]
007efc6f  PUSH EDX
007efc70  MOV dword ptr [EBP + -0x30],0x6
007efc77  MOV dword ptr [EBP + -0x2c],0x162
007efc7e  MOV dword ptr [EBP + -0x60],0x5
007efc85  MOV dword ptr [EBP + -0x5c],0x8c20e8
007efc8c  MOV dword ptr [EBP + -0x54],0x1
007efc93  MOV dword ptr [EBP + -0x50],0x8c2124
007efc9a  MOV dword ptr [EBP + -0x4c],EBX
007efc9d  MOV dword ptr [EBP + -0x28],EAX
007efca0  MOV EAX,dword ptr [ECX]
007efca2  PUSH 0x10c
007efca7  CALL dword ptr [EAX]
007efca9  MOV EDI,EAX
007efcab  MOV dword ptr [EBP + -0x4],EDI
007efcae  LEA ECX,[EBP + 0xfffffd98]
007efcb4  LEA EDX,[EDI + 0x4]
007efcb7  MOV EAX,ECX
007efcb9  SUB EDX,EAX
007efcbb  MOV AL,byte ptr [ECX]
007efcbd  MOV byte ptr [EDX + ECX*0x1],AL
007efcc0  INC ECX
007efcc1  CMP AL,BL
007efcc3  JNZ 0x007efcbb
007efcc5  LEA ECX,[EBP + 0xfffffc94]
007efccb  MOV EDX,ECX
007efccd  MOV AL,byte ptr [ECX]
007efccf  INC ECX
007efcd0  CMP AL,BL
007efcd2  JNZ 0x007efccd
007efcd4  SUB ECX,EDX
007efcd6  MOV EAX,ECX
007efcd8  ADD EDI,0x3
007efcdb  MOV CL,byte ptr [EDI + 0x1]
007efcde  INC EDI
007efcdf  CMP CL,BL
007efce1  JNZ 0x007efcdb
007efce3  MOV ECX,EAX
007efce5  SHR ECX,0x2
007efce8  MOV ESI,EDX
007efcea  MOVSD.REP ES:EDI,ESI
007efcec  MOV ECX,EAX
007efcee  AND ECX,0x3
007efcf1  MOVSB.REP ES:EDI,ESI
007efcf3  MOV ECX,dword ptr [EBP + -0x4]
007efcf6  ADD ECX,0x4
007efcf9  CALL 0x007ef0f8
007efcfe  TEST AL,AL
007efd00  JNZ 0x007efdda
007efd06  MOV EAX,[0x00907708]
007efd0b  LEA EDX,[EBP + 0xfffffe9c]
007efd11  SUB EDX,EAX
007efd13  MOV CL,byte ptr [EAX]
007efd15  MOV byte ptr [EDX + EAX*0x1],CL
007efd18  INC EAX
007efd19  CMP CL,BL
007efd1b  JNZ 0x007efd13
007efd1d  MOV EAX,dword ptr [EBP + -0x4]
007efd20  ADD EAX,0x4
007efd23  MOV ESI,EAX
007efd25  MOV CL,byte ptr [EAX]
007efd27  INC EAX
007efd28  CMP CL,BL
007efd2a  JNZ 0x007efd25
007efd2c  LEA EDI,[EBP + 0xfffffe9c]
007efd32  SUB EAX,ESI
007efd34  DEC EDI
007efd35  MOV CL,byte ptr [EDI + 0x1]
007efd38  INC EDI
007efd39  CMP CL,BL
007efd3b  JNZ 0x007efd35
007efd3d  MOV ECX,EAX
007efd3f  SHR ECX,0x2
007efd42  PUSH EBX
007efd43  MOVSD.REP ES:EDI,ESI
007efd45  PUSH 0x80
007efd4a  PUSH 0x3
007efd4c  PUSH EBX
007efd4d  PUSH EBX
007efd4e  MOV ECX,EAX
007efd50  PUSH 0x80000000
007efd55  LEA EAX,[EBP + 0xfffffe9c]
007efd5b  AND ECX,0x3
007efd5e  PUSH EAX
007efd5f  MOVSB.REP ES:EDI,ESI
007efd61  CALL dword ptr [0x008902ac]
007efd67  MOV EDI,EAX
007efd69  CMP EDI,-0x1
007efd6c  JZ 0x007efda7
007efd6e  MOV EAX,dword ptr [EBP + -0x4]
007efd71  ADD EAX,0x4
007efd74  PUSH EAX
007efd75  CALL 0x007eef91
007efd7a  MOV ESI,dword ptr [0x009bb174]
007efd80  POP ECX
007efd81  PUSH EBX
007efd82  PUSH EDI
007efd83  MOV dword ptr [EBP + -0xc],EAX
007efd86  ADD ESI,0x10
007efd89  CALL dword ptr [0x0089016c]
007efd8f  ADD dword ptr [ESI],EAX
007efd91  MOV EAX,dword ptr [EBP + -0xc]
007efd94  PUSH EDI
007efd95  ADC dword ptr [ESI + 0x4],EBX
007efd98  MOV byte ptr [EAX + 0x104],0x1
007efd9f  CALL dword ptr [0x00890078]
007efda5  JMP 0x007efdda
007efda7  MOV ECX,dword ptr [EBP + -0x18]
007efdaa  MOV EDX,dword ptr [EBP + -0x4]
007efdad  MOV dword ptr [EDX + 0x108],ECX
007efdb3  MOV EAX,[0x009bb194]
007efdb8  XOR ESI,ESI
007efdba  JMP 0x007efdc8
007efdbc  CMP dword ptr [EAX + 0x108],ECX
007efdc2  JG 0x007efe38
007efdc4  MOV ESI,EAX
007efdc6  MOV EAX,dword ptr [EAX]
007efdc8  CMP EAX,EBX
007efdca  JNZ 0x007efdbc
007efdcc  PUSH EDX
007efdcd  MOV ECX,0x9bb194
007efdd2  CALL 0x007efe98
007efdd7  MOV dword ptr [EBP + -0x4],EBX
007efdda  LEA EAX,[EBP + 0xfffffc88]
007efde0  PUSH EAX
007efde1  CALL 0x007f0895
007efde6  TEST AL,AL
007efde8  POP ECX
007efde9  JNZ 0x007efc49
007efdef  LEA EAX,[EBP + 0xfffffc88]
007efdf5  PUSH EAX
007efdf6  CALL 0x007f08e8
007efdfb  POP ECX
007efdfc  MOV EAX,dword ptr [EBP + -0x8]
007efdff  SUB EAX,dword ptr [EBP + -0x14]
007efe02  CMP EAX,dword ptr [EBP + -0x10]
007efe05  JL 0x007ef9d5
007efe0b  CMP dword ptr [EBP + -0x4],EBX
007efe0e  JZ 0x007efe1f
007efe10  MOV ECX,dword ptr [0x009076dc]
007efe16  MOV EAX,dword ptr [ECX]
007efe18  PUSH EBX
007efe19  PUSH dword ptr [EBP + -0x4]
007efe1c  CALL dword ptr [EAX + 0x4]
007efe1f  MOV ECX,dword ptr [0x009076dc]
007efe25  MOV EAX,dword ptr [ECX]
007efe27  PUSH EBX
007efe28  PUSH dword ptr [EBP + -0x14]
007efe2b  CALL dword ptr [EAX + 0x4]
007efe2e  CALL 0x007eed52
007efe33  POP EDI
007efe34  POP ESI
007efe35  POP EBX
007efe36  LEAVE
007efe37  RET
007efe38  PUSH EDX
007efe39  PUSH ESI
007efe3a  MOV ECX,0x9bb194
007efe3f  CALL 0x007eff01
007efe44  JMP 0x007efdd7
