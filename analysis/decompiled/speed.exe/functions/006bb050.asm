006bb050  MOV EAX,FS:[0x0]
006bb056  PUSH -0x1
006bb058  PUSH 0x87e118
006bb05d  PUSH EAX
006bb05e  MOV EAX,dword ptr [ESP + 0x14]
006bb062  MOV dword ptr FS:[0x0],ESP
006bb069  SUB ESP,0x48
006bb06c  PUSH EBP
006bb06d  MOV EBP,ECX
006bb06f  MOV CL,byte ptr [EAX + 0x15]
006bb072  TEST CL,CL
006bb074  PUSH ESI
006bb075  JZ 0x006bb0c3
006bb077  PUSH 0x1b
006bb079  XOR ESI,ESI
006bb07b  PUSH 0x892920
006bb080  LEA ECX,[ESP + 0x14]
006bb084  MOV dword ptr [ESP + 0x2c],0xf
006bb08c  MOV dword ptr [ESP + 0x28],ESI
006bb090  MOV byte ptr [ESP + 0x18],0x0
006bb095  CALL 0x004303b0
006bb09a  LEA EAX,[ESP + 0xc]
006bb09e  PUSH EAX
006bb09f  LEA ECX,[ESP + 0x2c]
006bb0a3  MOV dword ptr [ESP + 0x5c],ESI
006bb0a7  CALL 0x00432d50
006bb0ac  PUSH 0x8c9f78
006bb0b1  LEA ECX,[ESP + 0x2c]
006bb0b5  PUSH ECX
006bb0b6  MOV dword ptr [ESP + 0x30],0x8bf2c0
006bb0be  CALL 0x007c56b0
006bb0c3  PUSH EBX
006bb0c4  MOV EBX,EAX
006bb0c6  PUSH EDI
006bb0c7  LEA ECX,[ESP + 0x6c]
006bb0cb  MOV dword ptr [ESP + 0x10],EBX
006bb0cf  CALL 0x006955b0
006bb0d4  MOV EAX,dword ptr [EBX]
006bb0d6  MOV CL,byte ptr [EAX + 0x15]
006bb0d9  TEST CL,CL
006bb0db  JZ 0x006bb0e2
006bb0dd  MOV EDI,dword ptr [EBX + 0x8]
006bb0e0  JMP 0x006bb0fb
006bb0e2  MOV EDX,dword ptr [EBX + 0x8]
006bb0e5  MOV CL,byte ptr [EDX + 0x15]
006bb0e8  TEST CL,CL
006bb0ea  JZ 0x006bb0f0
006bb0ec  MOV EDI,EAX
006bb0ee  JMP 0x006bb0fb
006bb0f0  MOV ECX,dword ptr [ESP + 0x6c]
006bb0f4  CMP ECX,EBX
006bb0f6  MOV EDI,dword ptr [ECX + 0x8]
006bb0f9  JNZ 0x006bb169
006bb0fb  MOV AL,byte ptr [EDI + 0x15]
006bb0fe  TEST AL,AL
006bb100  MOV ESI,dword ptr [EBX + 0x4]
006bb103  JNZ 0x006bb108
006bb105  MOV dword ptr [EDI + 0x4],ESI
006bb108  MOV EAX,dword ptr [EBP + 0x4]
006bb10b  CMP dword ptr [EAX + 0x4],EBX
006bb10e  JNZ 0x006bb115
006bb110  MOV dword ptr [EAX + 0x4],EDI
006bb113  JMP 0x006bb120
006bb115  CMP dword ptr [ESI],EBX
006bb117  JNZ 0x006bb11d
006bb119  MOV dword ptr [ESI],EDI
006bb11b  JMP 0x006bb120
006bb11d  MOV dword ptr [ESI + 0x8],EDI
006bb120  MOV EBX,dword ptr [EBP + 0x4]
006bb123  MOV EAX,dword ptr [EBX]
006bb125  CMP EAX,dword ptr [ESP + 0x10]
006bb129  JNZ 0x006bb141
006bb12b  MOV AL,byte ptr [EDI + 0x15]
006bb12e  TEST AL,AL
006bb130  JZ 0x006bb136
006bb132  MOV EAX,ESI
006bb134  JMP 0x006bb13f
006bb136  PUSH EDI
006bb137  CALL 0x00695140
006bb13c  ADD ESP,0x4
006bb13f  MOV dword ptr [EBX],EAX
006bb141  MOV EBX,dword ptr [EBP + 0x4]
006bb144  MOV ECX,dword ptr [ESP + 0x10]
006bb148  CMP dword ptr [EBX + 0x8],ECX
006bb14b  JNZ 0x006bb1c1
006bb14d  MOV AL,byte ptr [EDI + 0x15]
006bb150  TEST AL,AL
006bb152  JZ 0x006bb15b
006bb154  MOV EAX,ESI
006bb156  MOV dword ptr [EBX + 0x8],EAX
006bb159  JMP 0x006bb1c1
006bb15b  PUSH EDI
006bb15c  CALL 0x00695120
006bb161  ADD ESP,0x4
006bb164  MOV dword ptr [EBX + 0x8],EAX
006bb167  JMP 0x006bb1c1
006bb169  MOV dword ptr [EAX + 0x4],ECX
006bb16c  MOV EDX,dword ptr [EBX]
006bb16e  MOV dword ptr [ECX],EDX
006bb170  CMP ECX,dword ptr [EBX + 0x8]
006bb173  JNZ 0x006bb179
006bb175  MOV ESI,ECX
006bb177  JMP 0x006bb194
006bb179  MOV AL,byte ptr [EDI + 0x15]
006bb17c  TEST AL,AL
006bb17e  MOV ESI,dword ptr [ECX + 0x4]
006bb181  JNZ 0x006bb186
006bb183  MOV dword ptr [EDI + 0x4],ESI
006bb186  MOV dword ptr [ESI],EDI
006bb188  MOV EAX,dword ptr [EBX + 0x8]
006bb18b  MOV dword ptr [ECX + 0x8],EAX
006bb18e  MOV EDX,dword ptr [EBX + 0x8]
006bb191  MOV dword ptr [EDX + 0x4],ECX
006bb194  MOV EAX,dword ptr [EBP + 0x4]
006bb197  CMP dword ptr [EAX + 0x4],EBX
006bb19a  JNZ 0x006bb1a1
006bb19c  MOV dword ptr [EAX + 0x4],ECX
006bb19f  JMP 0x006bb1af
006bb1a1  MOV EAX,dword ptr [EBX + 0x4]
006bb1a4  CMP dword ptr [EAX],EBX
006bb1a6  JNZ 0x006bb1ac
006bb1a8  MOV dword ptr [EAX],ECX
006bb1aa  JMP 0x006bb1af
006bb1ac  MOV dword ptr [EAX + 0x8],ECX
006bb1af  MOV EAX,dword ptr [EBX + 0x4]
006bb1b2  MOV dword ptr [ECX + 0x4],EAX
006bb1b5  MOV DL,byte ptr [EBX + 0x14]
006bb1b8  MOV AL,byte ptr [ECX + 0x14]
006bb1bb  MOV byte ptr [ECX + 0x14],DL
006bb1be  MOV byte ptr [EBX + 0x14],AL
006bb1c1  MOV EAX,dword ptr [ESP + 0x10]
006bb1c5  MOV CL,byte ptr [EAX + 0x14]
006bb1c8  MOV BL,0x1
006bb1ca  CMP CL,BL
006bb1cc  JNZ 0x006bb2d1
006bb1d2  MOV ECX,dword ptr [EBP + 0x4]
006bb1d5  CMP EDI,dword ptr [ECX + 0x4]
006bb1d8  JZ 0x006bb2ce
006bb1de  MOV EDI,EDI
006bb1e0  CMP byte ptr [EDI + 0x14],BL
006bb1e3  JNZ 0x006bb2ce
006bb1e9  MOV EAX,dword ptr [ESI]
006bb1eb  CMP EDI,EAX
006bb1ed  JNZ 0x006bb256
006bb1ef  MOV EAX,dword ptr [ESI + 0x8]
006bb1f2  MOV CL,byte ptr [EAX + 0x14]
006bb1f5  TEST CL,CL
006bb1f7  JNZ 0x006bb20b
006bb1f9  MOV byte ptr [EAX + 0x14],BL
006bb1fc  PUSH ESI
006bb1fd  MOV ECX,EBP
006bb1ff  MOV byte ptr [ESI + 0x14],0x0
006bb203  CALL 0x006a60c0
006bb208  MOV EAX,dword ptr [ESI + 0x8]
006bb20b  MOV CL,byte ptr [EAX + 0x15]
006bb20e  TEST CL,CL
006bb210  JNZ 0x006bb288
006bb212  MOV EDX,dword ptr [EAX]
006bb214  CMP byte ptr [EDX + 0x14],BL
006bb217  JNZ 0x006bb221
006bb219  MOV ECX,dword ptr [EAX + 0x8]
006bb21c  CMP byte ptr [ECX + 0x14],BL
006bb21f  JZ 0x006bb284
006bb221  MOV ECX,dword ptr [EAX + 0x8]
006bb224  CMP byte ptr [ECX + 0x14],BL
006bb227  JNZ 0x006bb23d
006bb229  MOV EDX,dword ptr [EAX]
006bb22b  MOV byte ptr [EDX + 0x14],BL
006bb22e  PUSH EAX
006bb22f  MOV ECX,EBP
006bb231  MOV byte ptr [EAX + 0x14],0x0
006bb235  CALL 0x00695180
006bb23a  MOV EAX,dword ptr [ESI + 0x8]
006bb23d  MOV CL,byte ptr [ESI + 0x14]
006bb240  MOV byte ptr [EAX + 0x14],CL
006bb243  MOV byte ptr [ESI + 0x14],BL
006bb246  MOV EDX,dword ptr [EAX + 0x8]
006bb249  PUSH ESI
006bb24a  MOV ECX,EBP
006bb24c  MOV byte ptr [EDX + 0x14],BL
006bb24f  CALL 0x006a60c0
006bb254  JMP 0x006bb2ce
006bb256  MOV CL,byte ptr [EAX + 0x14]
006bb259  TEST CL,CL
006bb25b  JNZ 0x006bb26e
006bb25d  MOV byte ptr [EAX + 0x14],BL
006bb260  PUSH ESI
006bb261  MOV ECX,EBP
006bb263  MOV byte ptr [ESI + 0x14],0x0
006bb267  CALL 0x00695180
006bb26c  MOV EAX,dword ptr [ESI]
006bb26e  MOV CL,byte ptr [EAX + 0x15]
006bb271  TEST CL,CL
006bb273  JNZ 0x006bb288
006bb275  MOV EDX,dword ptr [EAX + 0x8]
006bb278  CMP byte ptr [EDX + 0x14],BL
006bb27b  JNZ 0x006bb29d
006bb27d  MOV ECX,dword ptr [EAX]
006bb27f  CMP byte ptr [ECX + 0x14],BL
006bb282  JNZ 0x006bb29d
006bb284  MOV byte ptr [EAX + 0x14],0x0
006bb288  MOV EDX,dword ptr [EBP + 0x4]
006bb28b  MOV EAX,dword ptr [EDX + 0x4]
006bb28e  MOV EDI,ESI
006bb290  CMP EDI,EAX
006bb292  MOV ESI,dword ptr [ESI + 0x4]
006bb295  JNZ 0x006bb1e0
006bb29b  JMP 0x006bb2ce
006bb29d  MOV ECX,dword ptr [EAX]
006bb29f  CMP byte ptr [ECX + 0x14],BL
006bb2a2  JNZ 0x006bb2b8
006bb2a4  MOV EDX,dword ptr [EAX + 0x8]
006bb2a7  MOV byte ptr [EDX + 0x14],BL
006bb2aa  PUSH EAX
006bb2ab  MOV ECX,EBP
006bb2ad  MOV byte ptr [EAX + 0x14],0x0
006bb2b1  CALL 0x006a60c0
006bb2b6  MOV EAX,dword ptr [ESI]
006bb2b8  MOV CL,byte ptr [ESI + 0x14]
006bb2bb  MOV byte ptr [EAX + 0x14],CL
006bb2be  MOV byte ptr [ESI + 0x14],BL
006bb2c1  MOV EDX,dword ptr [EAX]
006bb2c3  PUSH ESI
006bb2c4  MOV ECX,EBP
006bb2c6  MOV byte ptr [EDX + 0x14],BL
006bb2c9  CALL 0x00695180
006bb2ce  MOV byte ptr [EDI + 0x14],BL
006bb2d1  MOV EAX,dword ptr [ESP + 0x10]
006bb2d5  PUSH 0x0
006bb2d7  PUSH 0x18
006bb2d9  PUSH EAX
006bb2da  MOV ECX,0x925b30
006bb2df  CALL 0x005d0370
006bb2e4  MOV EAX,dword ptr [EBP + 0x8]
006bb2e7  TEST EAX,EAX
006bb2e9  POP EDI
006bb2ea  POP EBX
006bb2eb  JBE 0x006bb2f1
006bb2ed  DEC EAX
006bb2ee  MOV dword ptr [EBP + 0x8],EAX
006bb2f1  MOV ECX,dword ptr [ESP + 0x64]
006bb2f5  MOV EAX,dword ptr [ESP + 0x60]
006bb2f9  MOV dword ptr [EAX],ECX
006bb2fb  MOV ECX,dword ptr [ESP + 0x50]
006bb2ff  POP ESI
006bb300  POP EBP
006bb301  MOV dword ptr FS:[0x0],ECX
006bb308  ADD ESP,0x54
006bb30b  RET 0x8
