006cd1f0  PUSH EBP
006cd1f1  MOV EBP,ESP
006cd1f3  SUB ESP,0x28
006cd1f6  PUSH ESI
006cd1f7  PUSH EAX
006cd1f8  MOV EAX,0xcfcecdcc
006cd1fd  MOV EAX,0x6cd1fd
006cd202  MOV EAX,0x1
006cd207  MOV EAX,0x0
006cd20c  MOV EAX,0xcfcecdcc
006cd211  POP EAX
006cd212  MOV EAX,dword ptr [EBP + 0x8]
006cd215  MOV ECX,dword ptr [EAX + 0x14]
006cd218  MOV dword ptr [EBP + -0x20],ECX
006cd21b  MOV EDX,dword ptr [EBP + 0x8]
006cd21e  MOV EAX,dword ptr [EDX + 0x18]
006cd221  MOV dword ptr [EBP + -0x1c],EAX
006cd224  MOV ECX,dword ptr [EBP + 0x8]
006cd227  MOV EDX,dword ptr [ECX + 0x1c]
006cd22a  MOV dword ptr [EBP + -0x18],EDX
006cd22d  MOV EAX,dword ptr [EBP + 0x8]
006cd230  MOV ECX,dword ptr [EAX + 0x20]
006cd233  MOV dword ptr [EBP + -0x14],ECX
006cd236  MOV EDX,dword ptr [EBP + 0x8]
006cd239  MOV EAX,dword ptr [EDX + 0x24]
006cd23c  MOV dword ptr [EBP + -0xc],EAX
006cd23f  MOV ECX,dword ptr [EBP + 0x8]
006cd242  MOV EDX,dword ptr [ECX + 0x28]
006cd245  MOV dword ptr [EBP + -0x4],EDX
006cd248  MOV EAX,dword ptr [EBP + 0x8]
006cd24b  MOV ECX,dword ptr [EAX + 0x2c]
006cd24e  MOV dword ptr [EBP + -0x28],ECX
006cd251  MOV EDX,dword ptr [EBP + 0x8]
006cd254  MOV EAX,dword ptr [EDX + 0x30]
006cd257  MOV dword ptr [EBP + -0x24],EAX
006cd25a  MOV ECX,dword ptr [EBP + 0x8]
006cd25d  MOV EDX,dword ptr [ECX + 0x34]
006cd260  MOV dword ptr [EBP + -0x8],EDX
006cd263  MOV EAX,dword ptr [EBP + -0x20]
006cd266  NOT EAX
006cd268  AND EAX,dword ptr [EBP + 0xc]
006cd26b  MOV ECX,dword ptr [EBP + -0x20]
006cd26e  NOT ECX
006cd270  AND ECX,dword ptr [EBP + 0xc]
006cd273  ADD ECX,dword ptr [EBP + -0x18]
006cd276  IMUL ECX,dword ptr [EBP + -0x1c]
006cd27a  XOR EAX,ECX
006cd27c  MOV EDX,dword ptr [EBP + -0x20]
006cd27f  NOT EDX
006cd281  AND EDX,dword ptr [EBP + 0xc]
006cd284  ADD EDX,dword ptr [EBP + -0xc]
006cd287  IMUL EDX,dword ptr [EBP + -0x14]
006cd28b  XOR EAX,EDX
006cd28d  AND EAX,dword ptr [EBP + -0x20]
006cd290  XOR EAX,dword ptr [EBP + 0xc]
006cd293  MOV ECX,dword ptr [EBP + -0x20]
006cd296  NOT ECX
006cd298  AND ECX,dword ptr [EBP + 0xc]
006cd29b  MOV EDX,dword ptr [EBP + -0x20]
006cd29e  NOT EDX
006cd2a0  AND EDX,dword ptr [EBP + 0xc]
006cd2a3  ADD EDX,dword ptr [EBP + -0x18]
006cd2a6  IMUL EDX,dword ptr [EBP + -0x1c]
006cd2aa  XOR ECX,EDX
006cd2ac  MOV EDX,dword ptr [EBP + -0x20]
006cd2af  NOT EDX
006cd2b1  AND EDX,dword ptr [EBP + 0xc]
006cd2b4  ADD EDX,dword ptr [EBP + -0xc]
006cd2b7  IMUL EDX,dword ptr [EBP + -0x14]
006cd2bb  XOR ECX,EDX
006cd2bd  AND ECX,dword ptr [EBP + -0x20]
006cd2c0  XOR ECX,dword ptr [EBP + 0xc]
006cd2c3  AND ECX,dword ptr [EBP + -0x20]
006cd2c6  MOV EDX,dword ptr [EBP + -0x20]
006cd2c9  NOT EDX
006cd2cb  AND EDX,dword ptr [EBP + 0xc]
006cd2ce  MOV ESI,dword ptr [EBP + -0x20]
006cd2d1  NOT ESI
006cd2d3  AND ESI,dword ptr [EBP + 0xc]
006cd2d6  ADD ESI,dword ptr [EBP + -0x18]
006cd2d9  IMUL ESI,dword ptr [EBP + -0x1c]
006cd2dd  XOR EDX,ESI
006cd2df  MOV ESI,dword ptr [EBP + -0x20]
006cd2e2  NOT ESI
006cd2e4  AND ESI,dword ptr [EBP + 0xc]
006cd2e7  ADD ESI,dword ptr [EBP + -0xc]
006cd2ea  IMUL ESI,dword ptr [EBP + -0x14]
006cd2ee  XOR EDX,ESI
006cd2f0  AND EDX,dword ptr [EBP + -0x20]
006cd2f3  XOR EDX,dword ptr [EBP + 0xc]
006cd2f6  AND EDX,dword ptr [EBP + -0x20]
006cd2f9  ADD EDX,dword ptr [EBP + -0x4]
006cd2fc  IMUL EDX,dword ptr [EBP + -0x28]
006cd300  XOR ECX,EDX
006cd302  MOV EDX,dword ptr [EBP + -0x20]
006cd305  NOT EDX
006cd307  AND EDX,dword ptr [EBP + 0xc]
006cd30a  MOV ESI,dword ptr [EBP + -0x20]
006cd30d  NOT ESI
006cd30f  AND ESI,dword ptr [EBP + 0xc]
006cd312  ADD ESI,dword ptr [EBP + -0x18]
006cd315  IMUL ESI,dword ptr [EBP + -0x1c]
006cd319  XOR EDX,ESI
006cd31b  MOV ESI,dword ptr [EBP + -0x20]
006cd31e  NOT ESI
006cd320  AND ESI,dword ptr [EBP + 0xc]
006cd323  ADD ESI,dword ptr [EBP + -0xc]
006cd326  IMUL ESI,dword ptr [EBP + -0x14]
006cd32a  XOR EDX,ESI
006cd32c  AND EDX,dword ptr [EBP + -0x20]
006cd32f  XOR EDX,dword ptr [EBP + 0xc]
006cd332  AND EDX,dword ptr [EBP + -0x20]
006cd335  ADD EDX,dword ptr [EBP + -0x24]
006cd338  IMUL EDX,dword ptr [EBP + -0x8]
006cd33c  XOR ECX,EDX
006cd33e  MOV EDX,dword ptr [EBP + -0x20]
006cd341  NOT EDX
006cd343  AND ECX,EDX
006cd345  XOR EAX,ECX
006cd347  MOV dword ptr [EBP + -0x10],EAX
006cd34a  PUSH EAX
006cd34b  MOV EAX,0xcfcecdcc
006cd350  MOV EAX,0x6cd1fd
006cd355  MOV EAX,0x0
006cd35a  MOV EAX,0x0
006cd35f  MOV EAX,0xcecdcccb
006cd364  POP EAX
006cd365  MOV EAX,dword ptr [EBP + -0x10]
006cd368  POP ESI
006cd369  MOV ESP,EBP
006cd36b  POP EBP
006cd36c  RET
