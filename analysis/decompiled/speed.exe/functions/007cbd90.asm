007cbd90  PUSH EBP
007cbd91  MOV EBP,ESP
007cbd93  SUB ESP,0xc
007cbd96  MOV word ptr [EBP + -0x4],0x0
007cbd9c  MOV EAX,dword ptr [EBP + 0x8]
007cbd9f  AND EAX,0x10
007cbda2  JZ 0x007cbdaf
007cbda4  MOVZX ECX,word ptr [EBP + -0x4]
007cbda8  OR ECX,0x1
007cbdab  MOV word ptr [EBP + -0x4],CX
007cbdaf  MOV EDX,dword ptr [EBP + 0x8]
007cbdb2  AND EDX,0x8
007cbdb5  JZ 0x007cbdc2
007cbdb7  MOVZX EAX,word ptr [EBP + -0x4]
007cbdbb  OR EAX,0x4
007cbdbe  MOV word ptr [EBP + -0x4],AX
007cbdc2  MOV ECX,dword ptr [EBP + 0x8]
007cbdc5  AND ECX,0x4
007cbdc8  JZ 0x007cbdd5
007cbdca  MOVZX EDX,word ptr [EBP + -0x4]
007cbdce  OR EDX,0x8
007cbdd1  MOV word ptr [EBP + -0x4],DX
007cbdd5  MOV EAX,dword ptr [EBP + 0x8]
007cbdd8  AND EAX,0x2
007cbddb  JZ 0x007cbde8
007cbddd  MOVZX ECX,word ptr [EBP + -0x4]
007cbde1  OR ECX,0x10
007cbde4  MOV word ptr [EBP + -0x4],CX
007cbde8  MOV EDX,dword ptr [EBP + 0x8]
007cbdeb  AND EDX,0x1
007cbdee  JZ 0x007cbdfb
007cbdf0  MOVZX EAX,word ptr [EBP + -0x4]
007cbdf4  OR EAX,0x20
007cbdf7  MOV word ptr [EBP + -0x4],AX
007cbdfb  MOV ECX,dword ptr [EBP + 0x8]
007cbdfe  AND ECX,0x80000
007cbe04  JZ 0x007cbe11
007cbe06  MOVZX EDX,word ptr [EBP + -0x4]
007cbe0a  OR EDX,0x2
007cbe0d  MOV word ptr [EBP + -0x4],DX
007cbe11  MOV EAX,dword ptr [EBP + 0x8]
007cbe14  AND EAX,0x300
007cbe19  MOV dword ptr [EBP + -0x8],EAX
007cbe1c  CMP dword ptr [EBP + -0x8],0x200
007cbe23  JA 0x007cbe3f
007cbe25  CMP dword ptr [EBP + -0x8],0x200
007cbe2c  JZ 0x007cbe54
007cbe2e  CMP dword ptr [EBP + -0x8],0x0
007cbe32  JZ 0x007cbe4a
007cbe34  CMP dword ptr [EBP + -0x8],0x100
007cbe3b  JZ 0x007cbe64
007cbe3d  JMP 0x007cbe81
007cbe3f  CMP dword ptr [EBP + -0x8],0x300
007cbe46  JZ 0x007cbe73
007cbe48  JMP 0x007cbe81
007cbe4a  MOV CX,word ptr [EBP + -0x4]
007cbe4e  MOV word ptr [EBP + -0x4],CX
007cbe52  JMP 0x007cbe81
007cbe54  MOVZX EDX,word ptr [EBP + -0x4]
007cbe58  OR EDX,0x800
007cbe5e  MOV word ptr [EBP + -0x4],DX
007cbe62  JMP 0x007cbe81
007cbe64  MOVZX EAX,word ptr [EBP + -0x4]
007cbe68  OR EAX,0x400
007cbe6d  MOV word ptr [EBP + -0x4],AX
007cbe71  JMP 0x007cbe81
007cbe73  MOVZX ECX,word ptr [EBP + -0x4]
007cbe77  OR ECX,0xc00
007cbe7d  MOV word ptr [EBP + -0x4],CX
007cbe81  MOV EDX,dword ptr [EBP + 0x8]
007cbe84  AND EDX,0x30000
007cbe8a  MOV dword ptr [EBP + -0xc],EDX
007cbe8d  JZ 0x007cbea3
007cbe8f  CMP dword ptr [EBP + -0xc],0x10000
007cbe96  JZ 0x007cbeb2
007cbe98  CMP dword ptr [EBP + -0xc],0x20000
007cbe9f  JZ 0x007cbec2
007cbea1  JMP 0x007cbeca
007cbea3  MOVZX EAX,word ptr [EBP + -0x4]
007cbea7  OR EAX,0x300
007cbeac  MOV word ptr [EBP + -0x4],AX
007cbeb0  JMP 0x007cbeca
007cbeb2  MOVZX ECX,word ptr [EBP + -0x4]
007cbeb6  OR ECX,0x200
007cbebc  MOV word ptr [EBP + -0x4],CX
007cbec0  JMP 0x007cbeca
007cbec2  MOV DX,word ptr [EBP + -0x4]
007cbec6  MOV word ptr [EBP + -0x4],DX
007cbeca  MOV EAX,dword ptr [EBP + 0x8]
007cbecd  AND EAX,0x40000
007cbed2  JZ 0x007cbee2
007cbed4  MOVZX ECX,word ptr [EBP + -0x4]
007cbed8  OR ECX,0x1000
007cbede  MOV word ptr [EBP + -0x4],CX
007cbee2  MOV AX,word ptr [EBP + -0x4]
007cbee6  MOV ESP,EBP
007cbee8  POP EBP
007cbee9  RET
