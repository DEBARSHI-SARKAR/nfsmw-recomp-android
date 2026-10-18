006ce4e0  PUSH EBP
006ce4e1  MOV EBP,ESP
006ce4e3  SUB ESP,0x28
006ce4e6  PUSH ESI
006ce4e7  PUSH EAX
006ce4e8  MOV EAX,0xcfcecdcc
006ce4ed  MOV EAX,0x6ce4ed
006ce4f2  MOV EAX,0x1
006ce4f7  MOV EAX,0x0
006ce4fc  MOV EAX,0xcfcecdcc
006ce501  POP EAX
006ce502  MOV EAX,dword ptr [EBP + 0x8]
006ce505  MOV ECX,dword ptr [EAX + 0x14]
006ce508  MOV dword ptr [EBP + -0x20],ECX
006ce50b  MOV EDX,dword ptr [EBP + 0x8]
006ce50e  MOV EAX,dword ptr [EDX + 0x18]
006ce511  MOV dword ptr [EBP + -0x1c],EAX
006ce514  MOV ECX,dword ptr [EBP + 0x8]
006ce517  MOV EDX,dword ptr [ECX + 0x1c]
006ce51a  MOV dword ptr [EBP + -0x18],EDX
006ce51d  MOV EAX,dword ptr [EBP + 0x8]
006ce520  MOV ECX,dword ptr [EAX + 0x20]
006ce523  MOV dword ptr [EBP + -0x14],ECX
006ce526  MOV EDX,dword ptr [EBP + 0x8]
006ce529  MOV EAX,dword ptr [EDX + 0x24]
006ce52c  MOV dword ptr [EBP + -0xc],EAX
006ce52f  MOV ECX,dword ptr [EBP + 0x8]
006ce532  MOV EDX,dword ptr [ECX + 0x28]
006ce535  MOV dword ptr [EBP + -0x4],EDX
006ce538  MOV EAX,dword ptr [EBP + 0x8]
006ce53b  MOV ECX,dword ptr [EAX + 0x2c]
006ce53e  MOV dword ptr [EBP + -0x28],ECX
006ce541  MOV EDX,dword ptr [EBP + 0x8]
006ce544  MOV EAX,dword ptr [EDX + 0x30]
006ce547  MOV dword ptr [EBP + -0x24],EAX
006ce54a  MOV ECX,dword ptr [EBP + 0x8]
006ce54d  MOV EDX,dword ptr [ECX + 0x34]
006ce550  MOV dword ptr [EBP + -0x8],EDX
006ce553  MOV EAX,dword ptr [EBP + -0x20]
006ce556  NOT EAX
006ce558  AND EAX,dword ptr [EBP + 0xc]
006ce55b  MOV ECX,dword ptr [EBP + -0x20]
006ce55e  NOT ECX
006ce560  AND ECX,dword ptr [EBP + 0xc]
006ce563  ADD ECX,dword ptr [EBP + -0x18]
006ce566  IMUL ECX,dword ptr [EBP + -0x1c]
006ce56a  XOR EAX,ECX
006ce56c  MOV EDX,dword ptr [EBP + -0x20]
006ce56f  NOT EDX
006ce571  AND EDX,dword ptr [EBP + 0xc]
006ce574  ADD EDX,dword ptr [EBP + -0xc]
006ce577  IMUL EDX,dword ptr [EBP + -0x14]
006ce57b  XOR EAX,EDX
006ce57d  AND EAX,dword ptr [EBP + -0x20]
006ce580  XOR EAX,dword ptr [EBP + 0xc]
006ce583  MOV ECX,dword ptr [EBP + -0x20]
006ce586  NOT ECX
006ce588  AND ECX,dword ptr [EBP + 0xc]
006ce58b  MOV EDX,dword ptr [EBP + -0x20]
006ce58e  NOT EDX
006ce590  AND EDX,dword ptr [EBP + 0xc]
006ce593  ADD EDX,dword ptr [EBP + -0x18]
006ce596  IMUL EDX,dword ptr [EBP + -0x1c]
006ce59a  XOR ECX,EDX
006ce59c  MOV EDX,dword ptr [EBP + -0x20]
006ce59f  NOT EDX
006ce5a1  AND EDX,dword ptr [EBP + 0xc]
006ce5a4  ADD EDX,dword ptr [EBP + -0xc]
006ce5a7  IMUL EDX,dword ptr [EBP + -0x14]
006ce5ab  XOR ECX,EDX
006ce5ad  AND ECX,dword ptr [EBP + -0x20]
006ce5b0  XOR ECX,dword ptr [EBP + 0xc]
006ce5b3  AND ECX,dword ptr [EBP + -0x20]
006ce5b6  MOV EDX,dword ptr [EBP + -0x20]
006ce5b9  NOT EDX
006ce5bb  AND EDX,dword ptr [EBP + 0xc]
006ce5be  MOV ESI,dword ptr [EBP + -0x20]
006ce5c1  NOT ESI
006ce5c3  AND ESI,dword ptr [EBP + 0xc]
006ce5c6  ADD ESI,dword ptr [EBP + -0x18]
006ce5c9  IMUL ESI,dword ptr [EBP + -0x1c]
006ce5cd  XOR EDX,ESI
006ce5cf  MOV ESI,dword ptr [EBP + -0x20]
006ce5d2  NOT ESI
006ce5d4  AND ESI,dword ptr [EBP + 0xc]
006ce5d7  ADD ESI,dword ptr [EBP + -0xc]
006ce5da  IMUL ESI,dword ptr [EBP + -0x14]
006ce5de  XOR EDX,ESI
006ce5e0  AND EDX,dword ptr [EBP + -0x20]
006ce5e3  XOR EDX,dword ptr [EBP + 0xc]
006ce5e6  AND EDX,dword ptr [EBP + -0x20]
006ce5e9  ADD EDX,dword ptr [EBP + -0x4]
006ce5ec  IMUL EDX,dword ptr [EBP + -0x28]
006ce5f0  XOR ECX,EDX
006ce5f2  MOV EDX,dword ptr [EBP + -0x20]
006ce5f5  NOT EDX
006ce5f7  AND EDX,dword ptr [EBP + 0xc]
006ce5fa  MOV ESI,dword ptr [EBP + -0x20]
006ce5fd  NOT ESI
006ce5ff  AND ESI,dword ptr [EBP + 0xc]
006ce602  ADD ESI,dword ptr [EBP + -0x18]
006ce605  IMUL ESI,dword ptr [EBP + -0x1c]
006ce609  XOR EDX,ESI
006ce60b  MOV ESI,dword ptr [EBP + -0x20]
006ce60e  NOT ESI
006ce610  AND ESI,dword ptr [EBP + 0xc]
006ce613  ADD ESI,dword ptr [EBP + -0xc]
006ce616  IMUL ESI,dword ptr [EBP + -0x14]
006ce61a  XOR EDX,ESI
006ce61c  AND EDX,dword ptr [EBP + -0x20]
006ce61f  XOR EDX,dword ptr [EBP + 0xc]
006ce622  AND EDX,dword ptr [EBP + -0x20]
006ce625  ADD EDX,dword ptr [EBP + -0x24]
006ce628  IMUL EDX,dword ptr [EBP + -0x8]
006ce62c  XOR ECX,EDX
006ce62e  MOV EDX,dword ptr [EBP + -0x20]
006ce631  NOT EDX
006ce633  AND ECX,EDX
006ce635  XOR EAX,ECX
006ce637  MOV dword ptr [EBP + -0x10],EAX
006ce63a  PUSH EAX
006ce63b  MOV EAX,0xcfcecdcc
006ce640  MOV EAX,0x6ce4ed
006ce645  MOV EAX,0x0
006ce64a  MOV EAX,0x0
006ce64f  MOV EAX,0xcecdcccb
006ce654  POP EAX
006ce655  MOV EAX,dword ptr [EBP + -0x10]
006ce658  POP ESI
006ce659  MOV ESP,EBP
006ce65b  POP EBP
006ce65c  RET
