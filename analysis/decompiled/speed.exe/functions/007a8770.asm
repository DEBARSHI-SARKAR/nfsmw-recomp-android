007a8770  PUSH EBP
007a8771  MOV EBP,ESP
007a8773  SUB ESP,0x28
007a8776  PUSH ESI
007a8777  PUSH EAX
007a8778  MOV EAX,0xcfcecdcc
007a877d  MOV EAX,0x7a877d
007a8782  MOV EAX,0x1
007a8787  MOV EAX,0x0
007a878c  MOV EAX,0xcfcecdcc
007a8791  POP EAX
007a8792  MOV EAX,dword ptr [EBP + 0x8]
007a8795  MOV ECX,dword ptr [EAX + 0x14]
007a8798  MOV dword ptr [EBP + -0x20],ECX
007a879b  MOV EDX,dword ptr [EBP + 0x8]
007a879e  MOV EAX,dword ptr [EDX + 0x18]
007a87a1  MOV dword ptr [EBP + -0x1c],EAX
007a87a4  MOV ECX,dword ptr [EBP + 0x8]
007a87a7  MOV EDX,dword ptr [ECX + 0x1c]
007a87aa  MOV dword ptr [EBP + -0x18],EDX
007a87ad  MOV EAX,dword ptr [EBP + 0x8]
007a87b0  MOV ECX,dword ptr [EAX + 0x20]
007a87b3  MOV dword ptr [EBP + -0x14],ECX
007a87b6  MOV EDX,dword ptr [EBP + 0x8]
007a87b9  MOV EAX,dword ptr [EDX + 0x24]
007a87bc  MOV dword ptr [EBP + -0xc],EAX
007a87bf  MOV ECX,dword ptr [EBP + 0x8]
007a87c2  MOV EDX,dword ptr [ECX + 0x28]
007a87c5  MOV dword ptr [EBP + -0x4],EDX
007a87c8  MOV EAX,dword ptr [EBP + 0x8]
007a87cb  MOV ECX,dword ptr [EAX + 0x2c]
007a87ce  MOV dword ptr [EBP + -0x28],ECX
007a87d1  MOV EDX,dword ptr [EBP + 0x8]
007a87d4  MOV EAX,dword ptr [EDX + 0x30]
007a87d7  MOV dword ptr [EBP + -0x24],EAX
007a87da  MOV ECX,dword ptr [EBP + 0x8]
007a87dd  MOV EDX,dword ptr [ECX + 0x34]
007a87e0  MOV dword ptr [EBP + -0x8],EDX
007a87e3  MOV EAX,dword ptr [EBP + 0xc]
007a87e6  AND EAX,dword ptr [EBP + -0x20]
007a87e9  MOV ECX,dword ptr [EBP + 0xc]
007a87ec  AND ECX,dword ptr [EBP + -0x20]
007a87ef  ADD ECX,dword ptr [EBP + -0x4]
007a87f2  IMUL ECX,dword ptr [EBP + -0x28]
007a87f6  XOR EAX,ECX
007a87f8  MOV EDX,dword ptr [EBP + 0xc]
007a87fb  AND EDX,dword ptr [EBP + -0x20]
007a87fe  ADD EDX,dword ptr [EBP + -0x24]
007a8801  IMUL EDX,dword ptr [EBP + -0x8]
007a8805  XOR EAX,EDX
007a8807  MOV ECX,dword ptr [EBP + -0x20]
007a880a  NOT ECX
007a880c  AND EAX,ECX
007a880e  XOR EAX,dword ptr [EBP + 0xc]
007a8811  MOV EDX,dword ptr [EBP + 0xc]
007a8814  AND EDX,dword ptr [EBP + -0x20]
007a8817  MOV ECX,dword ptr [EBP + 0xc]
007a881a  AND ECX,dword ptr [EBP + -0x20]
007a881d  ADD ECX,dword ptr [EBP + -0x4]
007a8820  IMUL ECX,dword ptr [EBP + -0x28]
007a8824  XOR EDX,ECX
007a8826  MOV ECX,dword ptr [EBP + 0xc]
007a8829  AND ECX,dword ptr [EBP + -0x20]
007a882c  ADD ECX,dword ptr [EBP + -0x24]
007a882f  IMUL ECX,dword ptr [EBP + -0x8]
007a8833  XOR EDX,ECX
007a8835  MOV ECX,dword ptr [EBP + -0x20]
007a8838  NOT ECX
007a883a  AND EDX,ECX
007a883c  XOR EDX,dword ptr [EBP + 0xc]
007a883f  MOV ECX,dword ptr [EBP + -0x20]
007a8842  NOT ECX
007a8844  AND EDX,ECX
007a8846  MOV ECX,dword ptr [EBP + 0xc]
007a8849  AND ECX,dword ptr [EBP + -0x20]
007a884c  MOV ESI,dword ptr [EBP + 0xc]
007a884f  AND ESI,dword ptr [EBP + -0x20]
007a8852  ADD ESI,dword ptr [EBP + -0x4]
007a8855  IMUL ESI,dword ptr [EBP + -0x28]
007a8859  XOR ECX,ESI
007a885b  MOV ESI,dword ptr [EBP + 0xc]
007a885e  AND ESI,dword ptr [EBP + -0x20]
007a8861  ADD ESI,dword ptr [EBP + -0x24]
007a8864  IMUL ESI,dword ptr [EBP + -0x8]
007a8868  XOR ECX,ESI
007a886a  MOV ESI,dword ptr [EBP + -0x20]
007a886d  NOT ESI
007a886f  AND ECX,ESI
007a8871  XOR ECX,dword ptr [EBP + 0xc]
007a8874  MOV ESI,dword ptr [EBP + -0x20]
007a8877  NOT ESI
007a8879  AND ECX,ESI
007a887b  ADD ECX,dword ptr [EBP + -0x18]
007a887e  IMUL ECX,dword ptr [EBP + -0x1c]
007a8882  XOR EDX,ECX
007a8884  MOV ECX,dword ptr [EBP + 0xc]
007a8887  AND ECX,dword ptr [EBP + -0x20]
007a888a  MOV ESI,dword ptr [EBP + 0xc]
007a888d  AND ESI,dword ptr [EBP + -0x20]
007a8890  ADD ESI,dword ptr [EBP + -0x4]
007a8893  IMUL ESI,dword ptr [EBP + -0x28]
007a8897  XOR ECX,ESI
007a8899  MOV ESI,dword ptr [EBP + 0xc]
007a889c  AND ESI,dword ptr [EBP + -0x20]
007a889f  ADD ESI,dword ptr [EBP + -0x24]
007a88a2  IMUL ESI,dword ptr [EBP + -0x8]
007a88a6  XOR ECX,ESI
007a88a8  MOV ESI,dword ptr [EBP + -0x20]
007a88ab  NOT ESI
007a88ad  AND ECX,ESI
007a88af  XOR ECX,dword ptr [EBP + 0xc]
007a88b2  MOV ESI,dword ptr [EBP + -0x20]
007a88b5  NOT ESI
007a88b7  AND ECX,ESI
007a88b9  ADD ECX,dword ptr [EBP + -0xc]
007a88bc  IMUL ECX,dword ptr [EBP + -0x14]
007a88c0  XOR EDX,ECX
007a88c2  AND EDX,dword ptr [EBP + -0x20]
007a88c5  XOR EAX,EDX
007a88c7  MOV dword ptr [EBP + -0x10],EAX
007a88ca  PUSH EAX
007a88cb  MOV EAX,0xcfcecdcc
007a88d0  MOV EAX,0x7a877d
007a88d5  MOV EAX,0x0
007a88da  MOV EAX,0x0
007a88df  MOV EAX,0xcecdcccb
007a88e4  POP EAX
007a88e5  MOV EAX,dword ptr [EBP + -0x10]
007a88e8  POP ESI
007a88e9  MOV ESP,EBP
007a88eb  POP EBP
007a88ec  RET
