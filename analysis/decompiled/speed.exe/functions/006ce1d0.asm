006ce1d0  PUSH EBP
006ce1d1  MOV EBP,ESP
006ce1d3  SUB ESP,0x28
006ce1d6  PUSH ESI
006ce1d7  PUSH EAX
006ce1d8  MOV EAX,0xcfcecdcc
006ce1dd  MOV EAX,0x6ce1dd
006ce1e2  MOV EAX,0x1
006ce1e7  MOV EAX,0x0
006ce1ec  MOV EAX,0xcfcecdcc
006ce1f1  POP EAX
006ce1f2  MOV EAX,dword ptr [EBP + 0x8]
006ce1f5  MOV ECX,dword ptr [EAX + 0x14]
006ce1f8  MOV dword ptr [EBP + -0x20],ECX
006ce1fb  MOV EDX,dword ptr [EBP + 0x8]
006ce1fe  MOV EAX,dword ptr [EDX + 0x18]
006ce201  MOV dword ptr [EBP + -0x1c],EAX
006ce204  MOV ECX,dword ptr [EBP + 0x8]
006ce207  MOV EDX,dword ptr [ECX + 0x1c]
006ce20a  MOV dword ptr [EBP + -0x18],EDX
006ce20d  MOV EAX,dword ptr [EBP + 0x8]
006ce210  MOV ECX,dword ptr [EAX + 0x20]
006ce213  MOV dword ptr [EBP + -0x14],ECX
006ce216  MOV EDX,dword ptr [EBP + 0x8]
006ce219  MOV EAX,dword ptr [EDX + 0x24]
006ce21c  MOV dword ptr [EBP + -0xc],EAX
006ce21f  MOV ECX,dword ptr [EBP + 0x8]
006ce222  MOV EDX,dword ptr [ECX + 0x28]
006ce225  MOV dword ptr [EBP + -0x4],EDX
006ce228  MOV EAX,dword ptr [EBP + 0x8]
006ce22b  MOV ECX,dword ptr [EAX + 0x2c]
006ce22e  MOV dword ptr [EBP + -0x28],ECX
006ce231  MOV EDX,dword ptr [EBP + 0x8]
006ce234  MOV EAX,dword ptr [EDX + 0x30]
006ce237  MOV dword ptr [EBP + -0x24],EAX
006ce23a  MOV ECX,dword ptr [EBP + 0x8]
006ce23d  MOV EDX,dword ptr [ECX + 0x34]
006ce240  MOV dword ptr [EBP + -0x8],EDX
006ce243  MOV EAX,dword ptr [EBP + -0x20]
006ce246  NOT EAX
006ce248  AND EAX,dword ptr [EBP + 0xc]
006ce24b  MOV ECX,dword ptr [EBP + -0x20]
006ce24e  NOT ECX
006ce250  AND ECX,dword ptr [EBP + 0xc]
006ce253  ADD ECX,dword ptr [EBP + -0x18]
006ce256  IMUL ECX,dword ptr [EBP + -0x1c]
006ce25a  XOR EAX,ECX
006ce25c  MOV EDX,dword ptr [EBP + -0x20]
006ce25f  NOT EDX
006ce261  AND EDX,dword ptr [EBP + 0xc]
006ce264  ADD EDX,dword ptr [EBP + -0xc]
006ce267  IMUL EDX,dword ptr [EBP + -0x14]
006ce26b  XOR EAX,EDX
006ce26d  AND EAX,dword ptr [EBP + -0x20]
006ce270  XOR EAX,dword ptr [EBP + 0xc]
006ce273  MOV ECX,dword ptr [EBP + -0x20]
006ce276  NOT ECX
006ce278  AND ECX,dword ptr [EBP + 0xc]
006ce27b  MOV EDX,dword ptr [EBP + -0x20]
006ce27e  NOT EDX
006ce280  AND EDX,dword ptr [EBP + 0xc]
006ce283  ADD EDX,dword ptr [EBP + -0x18]
006ce286  IMUL EDX,dword ptr [EBP + -0x1c]
006ce28a  XOR ECX,EDX
006ce28c  MOV EDX,dword ptr [EBP + -0x20]
006ce28f  NOT EDX
006ce291  AND EDX,dword ptr [EBP + 0xc]
006ce294  ADD EDX,dword ptr [EBP + -0xc]
006ce297  IMUL EDX,dword ptr [EBP + -0x14]
006ce29b  XOR ECX,EDX
006ce29d  AND ECX,dword ptr [EBP + -0x20]
006ce2a0  XOR ECX,dword ptr [EBP + 0xc]
006ce2a3  AND ECX,dword ptr [EBP + -0x20]
006ce2a6  MOV EDX,dword ptr [EBP + -0x20]
006ce2a9  NOT EDX
006ce2ab  AND EDX,dword ptr [EBP + 0xc]
006ce2ae  MOV ESI,dword ptr [EBP + -0x20]
006ce2b1  NOT ESI
006ce2b3  AND ESI,dword ptr [EBP + 0xc]
006ce2b6  ADD ESI,dword ptr [EBP + -0x18]
006ce2b9  IMUL ESI,dword ptr [EBP + -0x1c]
006ce2bd  XOR EDX,ESI
006ce2bf  MOV ESI,dword ptr [EBP + -0x20]
006ce2c2  NOT ESI
006ce2c4  AND ESI,dword ptr [EBP + 0xc]
006ce2c7  ADD ESI,dword ptr [EBP + -0xc]
006ce2ca  IMUL ESI,dword ptr [EBP + -0x14]
006ce2ce  XOR EDX,ESI
006ce2d0  AND EDX,dword ptr [EBP + -0x20]
006ce2d3  XOR EDX,dword ptr [EBP + 0xc]
006ce2d6  AND EDX,dword ptr [EBP + -0x20]
006ce2d9  ADD EDX,dword ptr [EBP + -0x4]
006ce2dc  IMUL EDX,dword ptr [EBP + -0x28]
006ce2e0  XOR ECX,EDX
006ce2e2  MOV EDX,dword ptr [EBP + -0x20]
006ce2e5  NOT EDX
006ce2e7  AND EDX,dword ptr [EBP + 0xc]
006ce2ea  MOV ESI,dword ptr [EBP + -0x20]
006ce2ed  NOT ESI
006ce2ef  AND ESI,dword ptr [EBP + 0xc]
006ce2f2  ADD ESI,dword ptr [EBP + -0x18]
006ce2f5  IMUL ESI,dword ptr [EBP + -0x1c]
006ce2f9  XOR EDX,ESI
006ce2fb  MOV ESI,dword ptr [EBP + -0x20]
006ce2fe  NOT ESI
006ce300  AND ESI,dword ptr [EBP + 0xc]
006ce303  ADD ESI,dword ptr [EBP + -0xc]
006ce306  IMUL ESI,dword ptr [EBP + -0x14]
006ce30a  XOR EDX,ESI
006ce30c  AND EDX,dword ptr [EBP + -0x20]
006ce30f  XOR EDX,dword ptr [EBP + 0xc]
006ce312  AND EDX,dword ptr [EBP + -0x20]
006ce315  ADD EDX,dword ptr [EBP + -0x24]
006ce318  IMUL EDX,dword ptr [EBP + -0x8]
006ce31c  XOR ECX,EDX
006ce31e  MOV EDX,dword ptr [EBP + -0x20]
006ce321  NOT EDX
006ce323  AND ECX,EDX
006ce325  XOR EAX,ECX
006ce327  MOV dword ptr [EBP + -0x10],EAX
006ce32a  PUSH EAX
006ce32b  MOV EAX,0xcfcecdcc
006ce330  MOV EAX,0x6ce1dd
006ce335  MOV EAX,0x0
006ce33a  MOV EAX,0x0
006ce33f  MOV EAX,0xcecdcccb
006ce344  POP EAX
006ce345  MOV EAX,dword ptr [EBP + -0x10]
006ce348  POP ESI
006ce349  MOV ESP,EBP
006ce34b  POP EBP
006ce34c  RET
