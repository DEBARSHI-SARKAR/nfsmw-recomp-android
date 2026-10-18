006cd810  PUSH EBP
006cd811  MOV EBP,ESP
006cd813  SUB ESP,0x28
006cd816  PUSH ESI
006cd817  PUSH EAX
006cd818  MOV EAX,0xcfcecdcc
006cd81d  MOV EAX,0x6cd81d
006cd822  MOV EAX,0x1
006cd827  MOV EAX,0x0
006cd82c  MOV EAX,0xcfcecdcc
006cd831  POP EAX
006cd832  MOV EAX,dword ptr [EBP + 0x8]
006cd835  MOV ECX,dword ptr [EAX + 0x14]
006cd838  MOV dword ptr [EBP + -0x20],ECX
006cd83b  MOV EDX,dword ptr [EBP + 0x8]
006cd83e  MOV EAX,dword ptr [EDX + 0x18]
006cd841  MOV dword ptr [EBP + -0x1c],EAX
006cd844  MOV ECX,dword ptr [EBP + 0x8]
006cd847  MOV EDX,dword ptr [ECX + 0x1c]
006cd84a  MOV dword ptr [EBP + -0x18],EDX
006cd84d  MOV EAX,dword ptr [EBP + 0x8]
006cd850  MOV ECX,dword ptr [EAX + 0x20]
006cd853  MOV dword ptr [EBP + -0x14],ECX
006cd856  MOV EDX,dword ptr [EBP + 0x8]
006cd859  MOV EAX,dword ptr [EDX + 0x24]
006cd85c  MOV dword ptr [EBP + -0xc],EAX
006cd85f  MOV ECX,dword ptr [EBP + 0x8]
006cd862  MOV EDX,dword ptr [ECX + 0x28]
006cd865  MOV dword ptr [EBP + -0x4],EDX
006cd868  MOV EAX,dword ptr [EBP + 0x8]
006cd86b  MOV ECX,dword ptr [EAX + 0x2c]
006cd86e  MOV dword ptr [EBP + -0x28],ECX
006cd871  MOV EDX,dword ptr [EBP + 0x8]
006cd874  MOV EAX,dword ptr [EDX + 0x30]
006cd877  MOV dword ptr [EBP + -0x24],EAX
006cd87a  MOV ECX,dword ptr [EBP + 0x8]
006cd87d  MOV EDX,dword ptr [ECX + 0x34]
006cd880  MOV dword ptr [EBP + -0x8],EDX
006cd883  MOV EAX,dword ptr [EBP + -0x20]
006cd886  NOT EAX
006cd888  AND EAX,dword ptr [EBP + 0xc]
006cd88b  MOV ECX,dword ptr [EBP + -0x20]
006cd88e  NOT ECX
006cd890  AND ECX,dword ptr [EBP + 0xc]
006cd893  ADD ECX,dword ptr [EBP + -0x18]
006cd896  IMUL ECX,dword ptr [EBP + -0x1c]
006cd89a  XOR EAX,ECX
006cd89c  MOV EDX,dword ptr [EBP + -0x20]
006cd89f  NOT EDX
006cd8a1  AND EDX,dword ptr [EBP + 0xc]
006cd8a4  ADD EDX,dword ptr [EBP + -0xc]
006cd8a7  IMUL EDX,dword ptr [EBP + -0x14]
006cd8ab  XOR EAX,EDX
006cd8ad  AND EAX,dword ptr [EBP + -0x20]
006cd8b0  XOR EAX,dword ptr [EBP + 0xc]
006cd8b3  MOV ECX,dword ptr [EBP + -0x20]
006cd8b6  NOT ECX
006cd8b8  AND ECX,dword ptr [EBP + 0xc]
006cd8bb  MOV EDX,dword ptr [EBP + -0x20]
006cd8be  NOT EDX
006cd8c0  AND EDX,dword ptr [EBP + 0xc]
006cd8c3  ADD EDX,dword ptr [EBP + -0x18]
006cd8c6  IMUL EDX,dword ptr [EBP + -0x1c]
006cd8ca  XOR ECX,EDX
006cd8cc  MOV EDX,dword ptr [EBP + -0x20]
006cd8cf  NOT EDX
006cd8d1  AND EDX,dword ptr [EBP + 0xc]
006cd8d4  ADD EDX,dword ptr [EBP + -0xc]
006cd8d7  IMUL EDX,dword ptr [EBP + -0x14]
006cd8db  XOR ECX,EDX
006cd8dd  AND ECX,dword ptr [EBP + -0x20]
006cd8e0  XOR ECX,dword ptr [EBP + 0xc]
006cd8e3  AND ECX,dword ptr [EBP + -0x20]
006cd8e6  MOV EDX,dword ptr [EBP + -0x20]
006cd8e9  NOT EDX
006cd8eb  AND EDX,dword ptr [EBP + 0xc]
006cd8ee  MOV ESI,dword ptr [EBP + -0x20]
006cd8f1  NOT ESI
006cd8f3  AND ESI,dword ptr [EBP + 0xc]
006cd8f6  ADD ESI,dword ptr [EBP + -0x18]
006cd8f9  IMUL ESI,dword ptr [EBP + -0x1c]
006cd8fd  XOR EDX,ESI
006cd8ff  MOV ESI,dword ptr [EBP + -0x20]
006cd902  NOT ESI
006cd904  AND ESI,dword ptr [EBP + 0xc]
006cd907  ADD ESI,dword ptr [EBP + -0xc]
006cd90a  IMUL ESI,dword ptr [EBP + -0x14]
006cd90e  XOR EDX,ESI
006cd910  AND EDX,dword ptr [EBP + -0x20]
006cd913  XOR EDX,dword ptr [EBP + 0xc]
006cd916  AND EDX,dword ptr [EBP + -0x20]
006cd919  ADD EDX,dword ptr [EBP + -0x4]
006cd91c  IMUL EDX,dword ptr [EBP + -0x28]
006cd920  XOR ECX,EDX
006cd922  MOV EDX,dword ptr [EBP + -0x20]
006cd925  NOT EDX
006cd927  AND EDX,dword ptr [EBP + 0xc]
006cd92a  MOV ESI,dword ptr [EBP + -0x20]
006cd92d  NOT ESI
006cd92f  AND ESI,dword ptr [EBP + 0xc]
006cd932  ADD ESI,dword ptr [EBP + -0x18]
006cd935  IMUL ESI,dword ptr [EBP + -0x1c]
006cd939  XOR EDX,ESI
006cd93b  MOV ESI,dword ptr [EBP + -0x20]
006cd93e  NOT ESI
006cd940  AND ESI,dword ptr [EBP + 0xc]
006cd943  ADD ESI,dword ptr [EBP + -0xc]
006cd946  IMUL ESI,dword ptr [EBP + -0x14]
006cd94a  XOR EDX,ESI
006cd94c  AND EDX,dword ptr [EBP + -0x20]
006cd94f  XOR EDX,dword ptr [EBP + 0xc]
006cd952  AND EDX,dword ptr [EBP + -0x20]
006cd955  ADD EDX,dword ptr [EBP + -0x24]
006cd958  IMUL EDX,dword ptr [EBP + -0x8]
006cd95c  XOR ECX,EDX
006cd95e  MOV EDX,dword ptr [EBP + -0x20]
006cd961  NOT EDX
006cd963  AND ECX,EDX
006cd965  XOR EAX,ECX
006cd967  MOV dword ptr [EBP + -0x10],EAX
006cd96a  PUSH EAX
006cd96b  MOV EAX,0xcfcecdcc
006cd970  MOV EAX,0x6cd81d
006cd975  MOV EAX,0x0
006cd97a  MOV EAX,0x0
006cd97f  MOV EAX,0xcecdcccb
006cd984  POP EAX
006cd985  MOV EAX,dword ptr [EBP + -0x10]
006cd988  POP ESI
006cd989  MOV ESP,EBP
006cd98b  POP EBP
006cd98c  RET
