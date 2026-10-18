006ce040  PUSH EBP
006ce041  MOV EBP,ESP
006ce043  SUB ESP,0x28
006ce046  PUSH ESI
006ce047  PUSH EAX
006ce048  MOV EAX,0xcfcecdcc
006ce04d  MOV EAX,0x6ce04d
006ce052  MOV EAX,0x1
006ce057  MOV EAX,0x0
006ce05c  MOV EAX,0xcfcecdcc
006ce061  POP EAX
006ce062  MOV EAX,dword ptr [EBP + 0x8]
006ce065  MOV ECX,dword ptr [EAX + 0x14]
006ce068  MOV dword ptr [EBP + -0x20],ECX
006ce06b  MOV EDX,dword ptr [EBP + 0x8]
006ce06e  MOV EAX,dword ptr [EDX + 0x18]
006ce071  MOV dword ptr [EBP + -0x1c],EAX
006ce074  MOV ECX,dword ptr [EBP + 0x8]
006ce077  MOV EDX,dword ptr [ECX + 0x1c]
006ce07a  MOV dword ptr [EBP + -0x18],EDX
006ce07d  MOV EAX,dword ptr [EBP + 0x8]
006ce080  MOV ECX,dword ptr [EAX + 0x20]
006ce083  MOV dword ptr [EBP + -0x14],ECX
006ce086  MOV EDX,dword ptr [EBP + 0x8]
006ce089  MOV EAX,dword ptr [EDX + 0x24]
006ce08c  MOV dword ptr [EBP + -0xc],EAX
006ce08f  MOV ECX,dword ptr [EBP + 0x8]
006ce092  MOV EDX,dword ptr [ECX + 0x28]
006ce095  MOV dword ptr [EBP + -0x4],EDX
006ce098  MOV EAX,dword ptr [EBP + 0x8]
006ce09b  MOV ECX,dword ptr [EAX + 0x2c]
006ce09e  MOV dword ptr [EBP + -0x28],ECX
006ce0a1  MOV EDX,dword ptr [EBP + 0x8]
006ce0a4  MOV EAX,dword ptr [EDX + 0x30]
006ce0a7  MOV dword ptr [EBP + -0x24],EAX
006ce0aa  MOV ECX,dword ptr [EBP + 0x8]
006ce0ad  MOV EDX,dword ptr [ECX + 0x34]
006ce0b0  MOV dword ptr [EBP + -0x8],EDX
006ce0b3  MOV EAX,dword ptr [EBP + 0xc]
006ce0b6  AND EAX,dword ptr [EBP + -0x20]
006ce0b9  MOV ECX,dword ptr [EBP + 0xc]
006ce0bc  AND ECX,dword ptr [EBP + -0x20]
006ce0bf  ADD ECX,dword ptr [EBP + -0x4]
006ce0c2  IMUL ECX,dword ptr [EBP + -0x28]
006ce0c6  XOR EAX,ECX
006ce0c8  MOV EDX,dword ptr [EBP + 0xc]
006ce0cb  AND EDX,dword ptr [EBP + -0x20]
006ce0ce  ADD EDX,dword ptr [EBP + -0x24]
006ce0d1  IMUL EDX,dword ptr [EBP + -0x8]
006ce0d5  XOR EAX,EDX
006ce0d7  MOV ECX,dword ptr [EBP + -0x20]
006ce0da  NOT ECX
006ce0dc  AND EAX,ECX
006ce0de  XOR EAX,dword ptr [EBP + 0xc]
006ce0e1  MOV EDX,dword ptr [EBP + 0xc]
006ce0e4  AND EDX,dword ptr [EBP + -0x20]
006ce0e7  MOV ECX,dword ptr [EBP + 0xc]
006ce0ea  AND ECX,dword ptr [EBP + -0x20]
006ce0ed  ADD ECX,dword ptr [EBP + -0x4]
006ce0f0  IMUL ECX,dword ptr [EBP + -0x28]
006ce0f4  XOR EDX,ECX
006ce0f6  MOV ECX,dword ptr [EBP + 0xc]
006ce0f9  AND ECX,dword ptr [EBP + -0x20]
006ce0fc  ADD ECX,dword ptr [EBP + -0x24]
006ce0ff  IMUL ECX,dword ptr [EBP + -0x8]
006ce103  XOR EDX,ECX
006ce105  MOV ECX,dword ptr [EBP + -0x20]
006ce108  NOT ECX
006ce10a  AND EDX,ECX
006ce10c  XOR EDX,dword ptr [EBP + 0xc]
006ce10f  MOV ECX,dword ptr [EBP + -0x20]
006ce112  NOT ECX
006ce114  AND EDX,ECX
006ce116  MOV ECX,dword ptr [EBP + 0xc]
006ce119  AND ECX,dword ptr [EBP + -0x20]
006ce11c  MOV ESI,dword ptr [EBP + 0xc]
006ce11f  AND ESI,dword ptr [EBP + -0x20]
006ce122  ADD ESI,dword ptr [EBP + -0x4]
006ce125  IMUL ESI,dword ptr [EBP + -0x28]
006ce129  XOR ECX,ESI
006ce12b  MOV ESI,dword ptr [EBP + 0xc]
006ce12e  AND ESI,dword ptr [EBP + -0x20]
006ce131  ADD ESI,dword ptr [EBP + -0x24]
006ce134  IMUL ESI,dword ptr [EBP + -0x8]
006ce138  XOR ECX,ESI
006ce13a  MOV ESI,dword ptr [EBP + -0x20]
006ce13d  NOT ESI
006ce13f  AND ECX,ESI
006ce141  XOR ECX,dword ptr [EBP + 0xc]
006ce144  MOV ESI,dword ptr [EBP + -0x20]
006ce147  NOT ESI
006ce149  AND ECX,ESI
006ce14b  ADD ECX,dword ptr [EBP + -0x18]
006ce14e  IMUL ECX,dword ptr [EBP + -0x1c]
006ce152  XOR EDX,ECX
006ce154  MOV ECX,dword ptr [EBP + 0xc]
006ce157  AND ECX,dword ptr [EBP + -0x20]
006ce15a  MOV ESI,dword ptr [EBP + 0xc]
006ce15d  AND ESI,dword ptr [EBP + -0x20]
006ce160  ADD ESI,dword ptr [EBP + -0x4]
006ce163  IMUL ESI,dword ptr [EBP + -0x28]
006ce167  XOR ECX,ESI
006ce169  MOV ESI,dword ptr [EBP + 0xc]
006ce16c  AND ESI,dword ptr [EBP + -0x20]
006ce16f  ADD ESI,dword ptr [EBP + -0x24]
006ce172  IMUL ESI,dword ptr [EBP + -0x8]
006ce176  XOR ECX,ESI
006ce178  MOV ESI,dword ptr [EBP + -0x20]
006ce17b  NOT ESI
006ce17d  AND ECX,ESI
006ce17f  XOR ECX,dword ptr [EBP + 0xc]
006ce182  MOV ESI,dword ptr [EBP + -0x20]
006ce185  NOT ESI
006ce187  AND ECX,ESI
006ce189  ADD ECX,dword ptr [EBP + -0xc]
006ce18c  IMUL ECX,dword ptr [EBP + -0x14]
006ce190  XOR EDX,ECX
006ce192  AND EDX,dword ptr [EBP + -0x20]
006ce195  XOR EAX,EDX
006ce197  MOV dword ptr [EBP + -0x10],EAX
006ce19a  PUSH EAX
006ce19b  MOV EAX,0xcfcecdcc
006ce1a0  MOV EAX,0x6ce04d
006ce1a5  MOV EAX,0x0
006ce1aa  MOV EAX,0x0
006ce1af  MOV EAX,0xcecdcccb
006ce1b4  POP EAX
006ce1b5  MOV EAX,dword ptr [EBP + -0x10]
006ce1b8  POP ESI
006ce1b9  MOV ESP,EBP
006ce1bb  POP EBP
006ce1bc  RET
