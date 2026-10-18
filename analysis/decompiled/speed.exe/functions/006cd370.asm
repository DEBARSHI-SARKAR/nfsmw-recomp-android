006cd370  PUSH EBP
006cd371  MOV EBP,ESP
006cd373  SUB ESP,0x28
006cd376  PUSH ESI
006cd377  PUSH EAX
006cd378  MOV EAX,0xcfcecdcc
006cd37d  MOV EAX,0x6cd37d
006cd382  MOV EAX,0x1
006cd387  MOV EAX,0x0
006cd38c  MOV EAX,0xcfcecdcc
006cd391  POP EAX
006cd392  MOV EAX,dword ptr [EBP + 0x8]
006cd395  MOV ECX,dword ptr [EAX + 0x14]
006cd398  MOV dword ptr [EBP + -0x20],ECX
006cd39b  MOV EDX,dword ptr [EBP + 0x8]
006cd39e  MOV EAX,dword ptr [EDX + 0x18]
006cd3a1  MOV dword ptr [EBP + -0x1c],EAX
006cd3a4  MOV ECX,dword ptr [EBP + 0x8]
006cd3a7  MOV EDX,dword ptr [ECX + 0x1c]
006cd3aa  MOV dword ptr [EBP + -0x18],EDX
006cd3ad  MOV EAX,dword ptr [EBP + 0x8]
006cd3b0  MOV ECX,dword ptr [EAX + 0x20]
006cd3b3  MOV dword ptr [EBP + -0x14],ECX
006cd3b6  MOV EDX,dword ptr [EBP + 0x8]
006cd3b9  MOV EAX,dword ptr [EDX + 0x24]
006cd3bc  MOV dword ptr [EBP + -0xc],EAX
006cd3bf  MOV ECX,dword ptr [EBP + 0x8]
006cd3c2  MOV EDX,dword ptr [ECX + 0x28]
006cd3c5  MOV dword ptr [EBP + -0x4],EDX
006cd3c8  MOV EAX,dword ptr [EBP + 0x8]
006cd3cb  MOV ECX,dword ptr [EAX + 0x2c]
006cd3ce  MOV dword ptr [EBP + -0x28],ECX
006cd3d1  MOV EDX,dword ptr [EBP + 0x8]
006cd3d4  MOV EAX,dword ptr [EDX + 0x30]
006cd3d7  MOV dword ptr [EBP + -0x24],EAX
006cd3da  MOV ECX,dword ptr [EBP + 0x8]
006cd3dd  MOV EDX,dword ptr [ECX + 0x34]
006cd3e0  MOV dword ptr [EBP + -0x8],EDX
006cd3e3  MOV EAX,dword ptr [EBP + 0xc]
006cd3e6  AND EAX,dword ptr [EBP + -0x20]
006cd3e9  MOV ECX,dword ptr [EBP + 0xc]
006cd3ec  AND ECX,dword ptr [EBP + -0x20]
006cd3ef  ADD ECX,dword ptr [EBP + -0x4]
006cd3f2  IMUL ECX,dword ptr [EBP + -0x28]
006cd3f6  XOR EAX,ECX
006cd3f8  MOV EDX,dword ptr [EBP + 0xc]
006cd3fb  AND EDX,dword ptr [EBP + -0x20]
006cd3fe  ADD EDX,dword ptr [EBP + -0x24]
006cd401  IMUL EDX,dword ptr [EBP + -0x8]
006cd405  XOR EAX,EDX
006cd407  MOV ECX,dword ptr [EBP + -0x20]
006cd40a  NOT ECX
006cd40c  AND EAX,ECX
006cd40e  XOR EAX,dword ptr [EBP + 0xc]
006cd411  MOV EDX,dword ptr [EBP + 0xc]
006cd414  AND EDX,dword ptr [EBP + -0x20]
006cd417  MOV ECX,dword ptr [EBP + 0xc]
006cd41a  AND ECX,dword ptr [EBP + -0x20]
006cd41d  ADD ECX,dword ptr [EBP + -0x4]
006cd420  IMUL ECX,dword ptr [EBP + -0x28]
006cd424  XOR EDX,ECX
006cd426  MOV ECX,dword ptr [EBP + 0xc]
006cd429  AND ECX,dword ptr [EBP + -0x20]
006cd42c  ADD ECX,dword ptr [EBP + -0x24]
006cd42f  IMUL ECX,dword ptr [EBP + -0x8]
006cd433  XOR EDX,ECX
006cd435  MOV ECX,dword ptr [EBP + -0x20]
006cd438  NOT ECX
006cd43a  AND EDX,ECX
006cd43c  XOR EDX,dword ptr [EBP + 0xc]
006cd43f  MOV ECX,dword ptr [EBP + -0x20]
006cd442  NOT ECX
006cd444  AND EDX,ECX
006cd446  MOV ECX,dword ptr [EBP + 0xc]
006cd449  AND ECX,dword ptr [EBP + -0x20]
006cd44c  MOV ESI,dword ptr [EBP + 0xc]
006cd44f  AND ESI,dword ptr [EBP + -0x20]
006cd452  ADD ESI,dword ptr [EBP + -0x4]
006cd455  IMUL ESI,dword ptr [EBP + -0x28]
006cd459  XOR ECX,ESI
006cd45b  MOV ESI,dword ptr [EBP + 0xc]
006cd45e  AND ESI,dword ptr [EBP + -0x20]
006cd461  ADD ESI,dword ptr [EBP + -0x24]
006cd464  IMUL ESI,dword ptr [EBP + -0x8]
006cd468  XOR ECX,ESI
006cd46a  MOV ESI,dword ptr [EBP + -0x20]
006cd46d  NOT ESI
006cd46f  AND ECX,ESI
006cd471  XOR ECX,dword ptr [EBP + 0xc]
006cd474  MOV ESI,dword ptr [EBP + -0x20]
006cd477  NOT ESI
006cd479  AND ECX,ESI
006cd47b  ADD ECX,dword ptr [EBP + -0x18]
006cd47e  IMUL ECX,dword ptr [EBP + -0x1c]
006cd482  XOR EDX,ECX
006cd484  MOV ECX,dword ptr [EBP + 0xc]
006cd487  AND ECX,dword ptr [EBP + -0x20]
006cd48a  MOV ESI,dword ptr [EBP + 0xc]
006cd48d  AND ESI,dword ptr [EBP + -0x20]
006cd490  ADD ESI,dword ptr [EBP + -0x4]
006cd493  IMUL ESI,dword ptr [EBP + -0x28]
006cd497  XOR ECX,ESI
006cd499  MOV ESI,dword ptr [EBP + 0xc]
006cd49c  AND ESI,dword ptr [EBP + -0x20]
006cd49f  ADD ESI,dword ptr [EBP + -0x24]
006cd4a2  IMUL ESI,dword ptr [EBP + -0x8]
006cd4a6  XOR ECX,ESI
006cd4a8  MOV ESI,dword ptr [EBP + -0x20]
006cd4ab  NOT ESI
006cd4ad  AND ECX,ESI
006cd4af  XOR ECX,dword ptr [EBP + 0xc]
006cd4b2  MOV ESI,dword ptr [EBP + -0x20]
006cd4b5  NOT ESI
006cd4b7  AND ECX,ESI
006cd4b9  ADD ECX,dword ptr [EBP + -0xc]
006cd4bc  IMUL ECX,dword ptr [EBP + -0x14]
006cd4c0  XOR EDX,ECX
006cd4c2  AND EDX,dword ptr [EBP + -0x20]
006cd4c5  XOR EAX,EDX
006cd4c7  MOV dword ptr [EBP + -0x10],EAX
006cd4ca  PUSH EAX
006cd4cb  MOV EAX,0xcfcecdcc
006cd4d0  MOV EAX,0x6cd37d
006cd4d5  MOV EAX,0x0
006cd4da  MOV EAX,0x0
006cd4df  MOV EAX,0xcecdcccb
006cd4e4  POP EAX
006cd4e5  MOV EAX,dword ptr [EBP + -0x10]
006cd4e8  POP ESI
006cd4e9  MOV ESP,EBP
006cd4eb  POP EBP
006cd4ec  RET
