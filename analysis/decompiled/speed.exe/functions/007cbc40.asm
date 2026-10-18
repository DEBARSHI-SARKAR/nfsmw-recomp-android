007cbc40  PUSH EBP
007cbc41  MOV EBP,ESP
007cbc43  SUB ESP,0xc
007cbc46  MOV dword ptr [EBP + -0x4],0x0
007cbc4d  MOVZX EAX,word ptr [EBP + 0x8]
007cbc51  AND EAX,0x1
007cbc54  JZ 0x007cbc5f
007cbc56  MOV ECX,dword ptr [EBP + -0x4]
007cbc59  OR ECX,0x10
007cbc5c  MOV dword ptr [EBP + -0x4],ECX
007cbc5f  MOVZX EDX,word ptr [EBP + 0x8]
007cbc63  AND EDX,0x4
007cbc66  JZ 0x007cbc71
007cbc68  MOV EAX,dword ptr [EBP + -0x4]
007cbc6b  OR EAX,0x8
007cbc6e  MOV dword ptr [EBP + -0x4],EAX
007cbc71  MOVZX ECX,word ptr [EBP + 0x8]
007cbc75  AND ECX,0x8
007cbc78  JZ 0x007cbc83
007cbc7a  MOV EDX,dword ptr [EBP + -0x4]
007cbc7d  OR EDX,0x4
007cbc80  MOV dword ptr [EBP + -0x4],EDX
007cbc83  MOVZX EAX,word ptr [EBP + 0x8]
007cbc87  AND EAX,0x10
007cbc8a  JZ 0x007cbc95
007cbc8c  MOV ECX,dword ptr [EBP + -0x4]
007cbc8f  OR ECX,0x2
007cbc92  MOV dword ptr [EBP + -0x4],ECX
007cbc95  MOVZX EDX,word ptr [EBP + 0x8]
007cbc99  AND EDX,0x20
007cbc9c  JZ 0x007cbca7
007cbc9e  MOV EAX,dword ptr [EBP + -0x4]
007cbca1  OR EAX,0x1
007cbca4  MOV dword ptr [EBP + -0x4],EAX
007cbca7  MOVZX ECX,word ptr [EBP + 0x8]
007cbcab  AND ECX,0x2
007cbcae  JZ 0x007cbcbc
007cbcb0  MOV EDX,dword ptr [EBP + -0x4]
007cbcb3  OR EDX,0x80000
007cbcb9  MOV dword ptr [EBP + -0x4],EDX
007cbcbc  MOVZX EAX,word ptr [EBP + 0x8]
007cbcc0  AND EAX,0xc00
007cbcc5  MOV dword ptr [EBP + -0x8],EAX
007cbcc8  CMP dword ptr [EBP + -0x8],0x800
007cbccf  JG 0x007cbceb
007cbcd1  CMP dword ptr [EBP + -0x8],0x800
007cbcd8  JZ 0x007cbcfe
007cbcda  CMP dword ptr [EBP + -0x8],0x0
007cbcde  JZ 0x007cbcf6
007cbce0  CMP dword ptr [EBP + -0x8],0x400
007cbce7  JZ 0x007cbd0c
007cbce9  JMP 0x007cbd25
007cbceb  CMP dword ptr [EBP + -0x8],0xc00
007cbcf2  JZ 0x007cbd19
007cbcf4  JMP 0x007cbd25
007cbcf6  MOV ECX,dword ptr [EBP + -0x4]
007cbcf9  MOV dword ptr [EBP + -0x4],ECX
007cbcfc  JMP 0x007cbd25
007cbcfe  MOV EDX,dword ptr [EBP + -0x4]
007cbd01  OR EDX,0x200
007cbd07  MOV dword ptr [EBP + -0x4],EDX
007cbd0a  JMP 0x007cbd25
007cbd0c  MOV EAX,dword ptr [EBP + -0x4]
007cbd0f  OR EAX,0x100
007cbd14  MOV dword ptr [EBP + -0x4],EAX
007cbd17  JMP 0x007cbd25
007cbd19  MOV ECX,dword ptr [EBP + -0x4]
007cbd1c  OR ECX,0x300
007cbd22  MOV dword ptr [EBP + -0x4],ECX
007cbd25  MOVZX EDX,word ptr [EBP + 0x8]
007cbd29  AND EDX,0x300
007cbd2f  MOV dword ptr [EBP + -0xc],EDX
007cbd32  JZ 0x007cbd5e
007cbd34  CMP dword ptr [EBP + -0xc],0x200
007cbd3b  JZ 0x007cbd50
007cbd3d  CMP dword ptr [EBP + -0xc],0x300
007cbd44  JZ 0x007cbd48
007cbd46  JMP 0x007cbd6a
007cbd48  MOV EAX,dword ptr [EBP + -0x4]
007cbd4b  MOV dword ptr [EBP + -0x4],EAX
007cbd4e  JMP 0x007cbd6a
007cbd50  MOV ECX,dword ptr [EBP + -0x4]
007cbd53  OR ECX,0x10000
007cbd59  MOV dword ptr [EBP + -0x4],ECX
007cbd5c  JMP 0x007cbd6a
007cbd5e  MOV EDX,dword ptr [EBP + -0x4]
007cbd61  OR EDX,0x20000
007cbd67  MOV dword ptr [EBP + -0x4],EDX
007cbd6a  MOVZX EAX,word ptr [EBP + 0x8]
007cbd6e  AND EAX,0x1000
007cbd73  JZ 0x007cbd81
007cbd75  MOV ECX,dword ptr [EBP + -0x4]
007cbd78  OR ECX,0x40000
007cbd7e  MOV dword ptr [EBP + -0x4],ECX
007cbd81  MOV EAX,dword ptr [EBP + -0x4]
007cbd84  MOV ESP,EBP
007cbd86  POP EBP
007cbd87  RET
