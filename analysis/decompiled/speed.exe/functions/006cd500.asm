006cd500  PUSH EBP
006cd501  MOV EBP,ESP
006cd503  SUB ESP,0x28
006cd506  PUSH ESI
006cd507  PUSH EAX
006cd508  MOV EAX,0xcfcecdcc
006cd50d  MOV EAX,0x6cd50d
006cd512  MOV EAX,0x1
006cd517  MOV EAX,0x0
006cd51c  MOV EAX,0xcfcecdcc
006cd521  POP EAX
006cd522  MOV EAX,dword ptr [EBP + 0x8]
006cd525  MOV ECX,dword ptr [EAX + 0x14]
006cd528  MOV dword ptr [EBP + -0x20],ECX
006cd52b  MOV EDX,dword ptr [EBP + 0x8]
006cd52e  MOV EAX,dword ptr [EDX + 0x18]
006cd531  MOV dword ptr [EBP + -0x1c],EAX
006cd534  MOV ECX,dword ptr [EBP + 0x8]
006cd537  MOV EDX,dword ptr [ECX + 0x1c]
006cd53a  MOV dword ptr [EBP + -0x18],EDX
006cd53d  MOV EAX,dword ptr [EBP + 0x8]
006cd540  MOV ECX,dword ptr [EAX + 0x20]
006cd543  MOV dword ptr [EBP + -0x14],ECX
006cd546  MOV EDX,dword ptr [EBP + 0x8]
006cd549  MOV EAX,dword ptr [EDX + 0x24]
006cd54c  MOV dword ptr [EBP + -0xc],EAX
006cd54f  MOV ECX,dword ptr [EBP + 0x8]
006cd552  MOV EDX,dword ptr [ECX + 0x28]
006cd555  MOV dword ptr [EBP + -0x4],EDX
006cd558  MOV EAX,dword ptr [EBP + 0x8]
006cd55b  MOV ECX,dword ptr [EAX + 0x2c]
006cd55e  MOV dword ptr [EBP + -0x28],ECX
006cd561  MOV EDX,dword ptr [EBP + 0x8]
006cd564  MOV EAX,dword ptr [EDX + 0x30]
006cd567  MOV dword ptr [EBP + -0x24],EAX
006cd56a  MOV ECX,dword ptr [EBP + 0x8]
006cd56d  MOV EDX,dword ptr [ECX + 0x34]
006cd570  MOV dword ptr [EBP + -0x8],EDX
006cd573  MOV EAX,dword ptr [EBP + -0x20]
006cd576  NOT EAX
006cd578  AND EAX,dword ptr [EBP + 0xc]
006cd57b  MOV ECX,dword ptr [EBP + -0x20]
006cd57e  NOT ECX
006cd580  AND ECX,dword ptr [EBP + 0xc]
006cd583  ADD ECX,dword ptr [EBP + -0x18]
006cd586  IMUL ECX,dword ptr [EBP + -0x1c]
006cd58a  XOR EAX,ECX
006cd58c  MOV EDX,dword ptr [EBP + -0x20]
006cd58f  NOT EDX
006cd591  AND EDX,dword ptr [EBP + 0xc]
006cd594  ADD EDX,dword ptr [EBP + -0xc]
006cd597  IMUL EDX,dword ptr [EBP + -0x14]
006cd59b  XOR EAX,EDX
006cd59d  AND EAX,dword ptr [EBP + -0x20]
006cd5a0  XOR EAX,dword ptr [EBP + 0xc]
006cd5a3  MOV ECX,dword ptr [EBP + -0x20]
006cd5a6  NOT ECX
006cd5a8  AND ECX,dword ptr [EBP + 0xc]
006cd5ab  MOV EDX,dword ptr [EBP + -0x20]
006cd5ae  NOT EDX
006cd5b0  AND EDX,dword ptr [EBP + 0xc]
006cd5b3  ADD EDX,dword ptr [EBP + -0x18]
006cd5b6  IMUL EDX,dword ptr [EBP + -0x1c]
006cd5ba  XOR ECX,EDX
006cd5bc  MOV EDX,dword ptr [EBP + -0x20]
006cd5bf  NOT EDX
006cd5c1  AND EDX,dword ptr [EBP + 0xc]
006cd5c4  ADD EDX,dword ptr [EBP + -0xc]
006cd5c7  IMUL EDX,dword ptr [EBP + -0x14]
006cd5cb  XOR ECX,EDX
006cd5cd  AND ECX,dword ptr [EBP + -0x20]
006cd5d0  XOR ECX,dword ptr [EBP + 0xc]
006cd5d3  AND ECX,dword ptr [EBP + -0x20]
006cd5d6  MOV EDX,dword ptr [EBP + -0x20]
006cd5d9  NOT EDX
006cd5db  AND EDX,dword ptr [EBP + 0xc]
006cd5de  MOV ESI,dword ptr [EBP + -0x20]
006cd5e1  NOT ESI
006cd5e3  AND ESI,dword ptr [EBP + 0xc]
006cd5e6  ADD ESI,dword ptr [EBP + -0x18]
006cd5e9  IMUL ESI,dword ptr [EBP + -0x1c]
006cd5ed  XOR EDX,ESI
006cd5ef  MOV ESI,dword ptr [EBP + -0x20]
006cd5f2  NOT ESI
006cd5f4  AND ESI,dword ptr [EBP + 0xc]
006cd5f7  ADD ESI,dword ptr [EBP + -0xc]
006cd5fa  IMUL ESI,dword ptr [EBP + -0x14]
006cd5fe  XOR EDX,ESI
006cd600  AND EDX,dword ptr [EBP + -0x20]
006cd603  XOR EDX,dword ptr [EBP + 0xc]
006cd606  AND EDX,dword ptr [EBP + -0x20]
006cd609  ADD EDX,dword ptr [EBP + -0x4]
006cd60c  IMUL EDX,dword ptr [EBP + -0x28]
006cd610  XOR ECX,EDX
006cd612  MOV EDX,dword ptr [EBP + -0x20]
006cd615  NOT EDX
006cd617  AND EDX,dword ptr [EBP + 0xc]
006cd61a  MOV ESI,dword ptr [EBP + -0x20]
006cd61d  NOT ESI
006cd61f  AND ESI,dword ptr [EBP + 0xc]
006cd622  ADD ESI,dword ptr [EBP + -0x18]
006cd625  IMUL ESI,dword ptr [EBP + -0x1c]
006cd629  XOR EDX,ESI
006cd62b  MOV ESI,dword ptr [EBP + -0x20]
006cd62e  NOT ESI
006cd630  AND ESI,dword ptr [EBP + 0xc]
006cd633  ADD ESI,dword ptr [EBP + -0xc]
006cd636  IMUL ESI,dword ptr [EBP + -0x14]
006cd63a  XOR EDX,ESI
006cd63c  AND EDX,dword ptr [EBP + -0x20]
006cd63f  XOR EDX,dword ptr [EBP + 0xc]
006cd642  AND EDX,dword ptr [EBP + -0x20]
006cd645  ADD EDX,dword ptr [EBP + -0x24]
006cd648  IMUL EDX,dword ptr [EBP + -0x8]
006cd64c  XOR ECX,EDX
006cd64e  MOV EDX,dword ptr [EBP + -0x20]
006cd651  NOT EDX
006cd653  AND ECX,EDX
006cd655  XOR EAX,ECX
006cd657  MOV dword ptr [EBP + -0x10],EAX
006cd65a  PUSH EAX
006cd65b  MOV EAX,0xcfcecdcc
006cd660  MOV EAX,0x6cd50d
006cd665  MOV EAX,0x0
006cd66a  MOV EAX,0x0
006cd66f  MOV EAX,0xcecdcccb
006cd674  POP EAX
006cd675  MOV EAX,dword ptr [EBP + -0x10]
006cd678  POP ESI
006cd679  MOV ESP,EBP
006cd67b  POP EBP
006cd67c  RET
