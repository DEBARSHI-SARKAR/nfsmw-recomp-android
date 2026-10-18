007dbcd0  PUSH EBP
007dbcd1  MOV EBP,ESP
007dbcd3  SUB ESP,0x42c
007dbcd9  MOV EAX,[0x00906980]
007dbcde  MOV dword ptr [EBP + -0x4],EAX
007dbce1  MOV dword ptr [EBP + 0xfffffbe8],0x0
007dbceb  MOV EAX,dword ptr [EBP + 0xfffffbe8]
007dbcf1  MOV dword ptr [EBP + 0xfffffbd8],EAX
007dbcf7  CMP dword ptr [EBP + 0x10],0x0
007dbcfb  JNZ 0x007dbd04
007dbcfd  XOR EAX,EAX
007dbcff  JMP 0x007dbfa7
007dbd04  MOV ECX,dword ptr [EBP + 0x8]
007dbd07  SAR ECX,0x5
007dbd0a  MOV EDX,dword ptr [EBP + 0x8]
007dbd0d  AND EDX,0x1f
007dbd10  IMUL EDX,EDX,0x24
007dbd13  MOV EAX,dword ptr [ECX*0x4 + 0x9c5340]
007dbd1a  MOVSX ECX,byte ptr [EAX + EDX*0x1 + 0x4]
007dbd1f  AND ECX,0x20
007dbd22  JZ 0x007dbd36
007dbd24  PUSH 0x2
007dbd26  PUSH 0x0
007dbd28  PUSH 0x0
007dbd2a  MOV EDX,dword ptr [EBP + 0x8]
007dbd2d  PUSH EDX
007dbd2e  CALL 0x007e5980
007dbd33  ADD ESP,0x10
007dbd36  MOV EAX,dword ptr [EBP + 0x8]
007dbd39  SAR EAX,0x5
007dbd3c  MOV ECX,dword ptr [EBP + 0x8]
007dbd3f  AND ECX,0x1f
007dbd42  IMUL ECX,ECX,0x24
007dbd45  MOV EDX,dword ptr [EAX*0x4 + 0x9c5340]
007dbd4c  MOVSX EAX,byte ptr [EDX + ECX*0x1 + 0x4]
007dbd51  AND EAX,0x80
007dbd56  JZ 0x007dbeab
007dbd5c  MOV ECX,dword ptr [EBP + 0xc]
007dbd5f  MOV dword ptr [EBP + 0xfffffbec],ECX
007dbd65  MOV dword ptr [EBP + 0xfffffbe4],0x0
007dbd6f  MOV EDX,dword ptr [EBP + 0xfffffbec]
007dbd75  SUB EDX,dword ptr [EBP + 0xc]
007dbd78  CMP EDX,dword ptr [EBP + 0x10]
007dbd7b  JNC 0x007dbea9
007dbd81  LEA EAX,[EBP + 0xfffffbf0]
007dbd87  MOV dword ptr [EBP + 0xfffffbdc],EAX
007dbd8d  MOV ECX,dword ptr [EBP + 0xfffffbdc]
007dbd93  LEA EDX,[EBP + 0xfffffbf0]
007dbd99  SUB ECX,EDX
007dbd9b  CMP ECX,0x400
007dbda1  JGE 0x007dbe27
007dbda7  MOV EAX,dword ptr [EBP + 0xfffffbec]
007dbdad  SUB EAX,dword ptr [EBP + 0xc]
007dbdb0  CMP EAX,dword ptr [EBP + 0x10]
007dbdb3  JNC 0x007dbe27
007dbdb5  MOV ECX,dword ptr [EBP + 0xfffffbec]
007dbdbb  MOV DL,byte ptr [ECX]
007dbdbd  MOV byte ptr [EBP + 0xfffffbd7],DL
007dbdc3  MOV EAX,dword ptr [EBP + 0xfffffbec]
007dbdc9  ADD EAX,0x1
007dbdcc  MOV dword ptr [EBP + 0xfffffbec],EAX
007dbdd2  MOVSX ECX,byte ptr [EBP + 0xfffffbd7]
007dbdd9  CMP ECX,0xa
007dbddc  JNZ 0x007dbe05
007dbdde  MOV EDX,dword ptr [EBP + 0xfffffbd8]
007dbde4  ADD EDX,0x1
007dbde7  MOV dword ptr [EBP + 0xfffffbd8],EDX
007dbded  MOV EAX,dword ptr [EBP + 0xfffffbdc]
007dbdf3  MOV byte ptr [EAX],0xd
007dbdf6  MOV ECX,dword ptr [EBP + 0xfffffbdc]
007dbdfc  ADD ECX,0x1
007dbdff  MOV dword ptr [EBP + 0xfffffbdc],ECX
007dbe05  MOV EDX,dword ptr [EBP + 0xfffffbdc]
007dbe0b  MOV AL,byte ptr [EBP + 0xfffffbd7]
007dbe11  MOV byte ptr [EDX],AL
007dbe13  MOV ECX,dword ptr [EBP + 0xfffffbdc]
007dbe19  ADD ECX,0x1
007dbe1c  MOV dword ptr [EBP + 0xfffffbdc],ECX
007dbe22  JMP 0x007dbd8d
007dbe27  PUSH 0x0
007dbe29  LEA EDX,[EBP + 0xfffffbe0]
007dbe2f  PUSH EDX
007dbe30  MOV EAX,dword ptr [EBP + 0xfffffbdc]
007dbe36  LEA ECX,[EBP + 0xfffffbf0]
007dbe3c  SUB EAX,ECX
007dbe3e  PUSH EAX
007dbe3f  LEA EDX,[EBP + 0xfffffbf0]
007dbe45  PUSH EDX
007dbe46  MOV EAX,dword ptr [EBP + 0x8]
007dbe49  SAR EAX,0x5
007dbe4c  MOV ECX,dword ptr [EBP + 0x8]
007dbe4f  AND ECX,0x1f
007dbe52  IMUL ECX,ECX,0x24
007dbe55  MOV EDX,dword ptr [EAX*0x4 + 0x9c5340]
007dbe5c  MOV EAX,dword ptr [EDX + ECX*0x1]
007dbe5f  PUSH EAX
007dbe60  CALL dword ptr [0x00890228]
007dbe66  TEST EAX,EAX
007dbe68  JZ 0x007dbe96
007dbe6a  MOV ECX,dword ptr [EBP + 0xfffffbe8]
007dbe70  ADD ECX,dword ptr [EBP + 0xfffffbe0]
007dbe76  MOV dword ptr [EBP + 0xfffffbe8],ECX
007dbe7c  MOV EDX,dword ptr [EBP + 0xfffffbdc]
007dbe82  LEA EAX,[EBP + 0xfffffbf0]
007dbe88  SUB EDX,EAX
007dbe8a  CMP dword ptr [EBP + 0xfffffbe0],EDX
007dbe90  JGE 0x007dbe94
007dbe92  JMP 0x007dbea9
007dbe94  JMP 0x007dbea4
007dbe96  CALL dword ptr [0x00890188]
007dbe9c  MOV dword ptr [EBP + 0xfffffbe4],EAX
007dbea2  JMP 0x007dbea9
007dbea4  JMP 0x007dbd6f
007dbea9  JMP 0x007dbf04
007dbeab  PUSH 0x0
007dbead  LEA ECX,[EBP + 0xfffffbe0]
007dbeb3  PUSH ECX
007dbeb4  MOV EDX,dword ptr [EBP + 0x10]
007dbeb7  PUSH EDX
007dbeb8  MOV EAX,dword ptr [EBP + 0xc]
007dbebb  PUSH EAX
007dbebc  MOV ECX,dword ptr [EBP + 0x8]
007dbebf  SAR ECX,0x5
007dbec2  MOV EDX,dword ptr [EBP + 0x8]
007dbec5  AND EDX,0x1f
007dbec8  IMUL EDX,EDX,0x24
007dbecb  MOV EAX,dword ptr [ECX*0x4 + 0x9c5340]
007dbed2  MOV ECX,dword ptr [EAX + EDX*0x1]
007dbed5  PUSH ECX
007dbed6  CALL dword ptr [0x00890228]
007dbedc  TEST EAX,EAX
007dbede  JZ 0x007dbef8
007dbee0  MOV dword ptr [EBP + 0xfffffbe4],0x0
007dbeea  MOV EDX,dword ptr [EBP + 0xfffffbe0]
007dbef0  MOV dword ptr [EBP + 0xfffffbe8],EDX
007dbef6  JMP 0x007dbf04
007dbef8  CALL dword ptr [0x00890188]
007dbefe  MOV dword ptr [EBP + 0xfffffbe4],EAX
007dbf04  CMP dword ptr [EBP + 0xfffffbe8],0x0
007dbf0b  JNZ 0x007dbf9b
007dbf11  CMP dword ptr [EBP + 0xfffffbe4],0x0
007dbf18  JZ 0x007dbf51
007dbf1a  CMP dword ptr [EBP + 0xfffffbe4],0x5
007dbf21  JNZ 0x007dbf3d
007dbf23  CALL 0x007cb270
007dbf28  MOV dword ptr [EAX],0x9
007dbf2e  CALL 0x007cb280
007dbf33  MOV ECX,dword ptr [EBP + 0xfffffbe4]
007dbf39  MOV dword ptr [EAX],ECX
007dbf3b  JMP 0x007dbf4c
007dbf3d  MOV EDX,dword ptr [EBP + 0xfffffbe4]
007dbf43  PUSH EDX
007dbf44  CALL 0x007cb1d0
007dbf49  ADD ESP,0x4
007dbf4c  OR EAX,0xffffffff
007dbf4f  JMP 0x007dbfa7
007dbf51  MOV EAX,dword ptr [EBP + 0x8]
007dbf54  SAR EAX,0x5
007dbf57  MOV ECX,dword ptr [EBP + 0x8]
007dbf5a  AND ECX,0x1f
007dbf5d  IMUL ECX,ECX,0x24
007dbf60  MOV EDX,dword ptr [EAX*0x4 + 0x9c5340]
007dbf67  MOVSX EAX,byte ptr [EDX + ECX*0x1 + 0x4]
007dbf6c  AND EAX,0x40
007dbf6f  JZ 0x007dbf80
007dbf71  MOV ECX,dword ptr [EBP + 0xc]
007dbf74  MOVSX EDX,byte ptr [ECX]
007dbf77  CMP EDX,0x1a
007dbf7a  JNZ 0x007dbf80
007dbf7c  XOR EAX,EAX
007dbf7e  JMP 0x007dbfa7
007dbf80  CALL 0x007cb270
007dbf85  MOV dword ptr [EAX],0x1c
007dbf8b  CALL 0x007cb280
007dbf90  MOV dword ptr [EAX],0x0
007dbf96  OR EAX,0xffffffff
007dbf99  JMP 0x007dbfa7
007dbf9b  MOV EAX,dword ptr [EBP + 0xfffffbe8]
007dbfa1  SUB EAX,dword ptr [EBP + 0xfffffbd8]
007dbfa7  MOV ECX,dword ptr [EBP + -0x4]
007dbfaa  CALL 0x007d6cb0
007dbfaf  MOV ESP,EBP
007dbfb1  POP EBP
007dbfb2  RET
