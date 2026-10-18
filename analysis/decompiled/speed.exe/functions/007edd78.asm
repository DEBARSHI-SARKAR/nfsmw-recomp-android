007edd78  PUSH EBP
007edd79  MOV EBP,ESP
007edd7b  SUB ESP,0x108
007edd81  OR dword ptr [EBP + -0x8],0xffffffff
007edd85  PUSH EBX
007edd86  MOV EBX,EAX
007edd88  MOV EAX,[0x009bb13c]
007edd8d  CMP EBX,dword ptr [EAX + 0x98]
007edd93  PUSH ESI
007edd94  PUSH EDI
007edd95  JNZ 0x007ede66
007edd9b  AND dword ptr [EBP + -0x4],0x0
007edd9f  CMP dword ptr [0x009076e8],0x0
007edda6  JLE 0x007edecc
007eddac  MOV EAX,[0x009bb13c]
007eddb1  MOV EAX,dword ptr [EAX + 0x88]
007eddb7  MOV ECX,dword ptr [EBP + -0x4]
007eddba  MOV EDI,dword ptr [EAX + ECX*0x4]
007eddbd  TEST EDI,EDI
007eddbf  JZ 0x007edecc
007eddc5  PUSH EDI
007eddc6  CALL 0x007edca5
007eddcb  MOV EBX,EAX
007eddcd  CMP dword ptr [EBX + 0x4],0x0
007eddd1  POP ECX
007eddd2  JNZ 0x007edddb
007eddd4  MOV ESI,EBX
007eddd6  CALL 0x007ed751
007edddb  LEA EDX,[EBP + 0xfffffef8]
007edde1  MOV EAX,EDI
007edde3  SUB EDX,EDI
007edde5  MOV CL,byte ptr [EAX]
007edde7  MOV byte ptr [EDX + EAX*0x1],CL
007eddea  INC EAX
007eddeb  TEST CL,CL
007edded  JNZ 0x007edde5
007eddef  LEA EDI,[EBP + 0xfffffef8]
007eddf5  DEC EDI
007eddf6  MOV AL,byte ptr [EDI + 0x1]
007eddf9  INC EDI
007eddfa  TEST AL,AL
007eddfc  JNZ 0x007eddf6
007eddfe  MOV EAX,dword ptr [EBP + 0x8]
007ede01  MOV ESI,0x8c20a8
007ede06  MOVSW ES:EDI,ESI
007ede08  MOV EDX,EAX
007ede0a  MOV CL,byte ptr [EAX]
007ede0c  INC EAX
007ede0d  TEST CL,CL
007ede0f  JNZ 0x007ede0a
007ede11  LEA EDI,[EBP + 0xfffffef8]
007ede17  SUB EAX,EDX
007ede19  DEC EDI
007ede1a  MOV CL,byte ptr [EDI + 0x1]
007ede1d  INC EDI
007ede1e  TEST CL,CL
007ede20  JNZ 0x007ede1a
007ede22  MOV ECX,EAX
007ede24  SHR ECX,0x2
007ede27  MOV ESI,EDX
007ede29  MOVSD.REP ES:EDI,ESI
007ede2b  MOV ECX,EAX
007ede2d  LEA EDX,[EBP + -0x8]
007ede30  PUSH EDX
007ede31  PUSH dword ptr [EBP + 0xc]
007ede34  AND ECX,0x3
007ede37  MOVSB.REP ES:EDI,ESI
007ede39  MOV ECX,dword ptr [EBX + 0x80]
007ede3f  MOV EAX,dword ptr [ECX]
007ede41  LEA EDX,[EBP + 0xfffffef8]
007ede47  PUSH EDX
007ede48  CALL dword ptr [EAX + 0xc]
007ede4b  MOV EDI,EAX
007ede4d  CMP EDI,-0x1
007ede50  JNZ 0x007ede82
007ede52  INC dword ptr [EBP + -0x4]
007ede55  MOV EAX,dword ptr [EBP + -0x4]
007ede58  CMP EAX,dword ptr [0x009076e8]
007ede5e  JL 0x007eddac
007ede64  JMP 0x007ede7d
007ede66  MOV ECX,dword ptr [EBX + 0x80]
007ede6c  MOV EAX,dword ptr [ECX]
007ede6e  LEA EDX,[EBP + -0x8]
007ede71  PUSH EDX
007ede72  PUSH dword ptr [EBP + 0xc]
007ede75  PUSH dword ptr [EBP + 0x8]
007ede78  CALL dword ptr [EAX + 0xc]
007ede7b  MOV EDI,EAX
007ede7d  CMP EDI,-0x1
007ede80  JZ 0x007edecc
007ede82  TEST byte ptr [EBP + 0xe],0x1
007ede86  JZ 0x007ede99
007ede88  MOV ECX,dword ptr [EBX + 0x80]
007ede8e  MOV EAX,dword ptr [ECX]
007ede90  PUSH EDI
007ede91  CALL dword ptr [EAX + 0x10]
007ede94  XOR EAX,EAX
007ede96  INC EAX
007ede97  JMP 0x007edecf
007ede99  CALL 0x007ed4db
007ede9e  MOV ESI,EAX
007edea0  MOV dword ptr [ESI + 0x8],EDI
007edea3  MOV dword ptr [ESI + 0xc],EBX
007edea6  MOV EBX,dword ptr [EBX + 0x80]
007edeac  MOV EAX,dword ptr [EBX]
007edeae  PUSH EDI
007edeaf  MOV ECX,EBX
007edeb1  CALL dword ptr [EAX + 0x20]
007edeb4  MOV dword ptr [ESI + 0x10],EAX
007edeb7  MOV dword ptr [ESI + 0x14],EDX
007edeba  MOV dword ptr [ESI + 0x4],ESI
007edebd  MOV EAX,dword ptr [EBP + -0x8]
007edec0  CMP EAX,-0x1
007edec3  JZ 0x007edec8
007edec5  MOV dword ptr [ESI + 0x4],EAX
007edec8  MOV EAX,ESI
007edeca  JMP 0x007edecf
007edecc  OR EAX,0xffffffff
007edecf  POP EDI
007eded0  POP ESI
007eded1  POP EBX
007eded2  LEAVE
007eded3  RET
