006cd060  PUSH EBP
006cd061  MOV EBP,ESP
006cd063  SUB ESP,0x28
006cd066  PUSH ESI
006cd067  PUSH EAX
006cd068  MOV EAX,0xcfcecdcc
006cd06d  MOV EAX,0x6cd06d
006cd072  MOV EAX,0x1
006cd077  MOV EAX,0x0
006cd07c  MOV EAX,0xcfcecdcc
006cd081  POP EAX
006cd082  MOV EAX,dword ptr [EBP + 0x8]
006cd085  MOV ECX,dword ptr [EAX + 0x14]
006cd088  MOV dword ptr [EBP + -0x20],ECX
006cd08b  MOV EDX,dword ptr [EBP + 0x8]
006cd08e  MOV EAX,dword ptr [EDX + 0x18]
006cd091  MOV dword ptr [EBP + -0x1c],EAX
006cd094  MOV ECX,dword ptr [EBP + 0x8]
006cd097  MOV EDX,dword ptr [ECX + 0x1c]
006cd09a  MOV dword ptr [EBP + -0x18],EDX
006cd09d  MOV EAX,dword ptr [EBP + 0x8]
006cd0a0  MOV ECX,dword ptr [EAX + 0x20]
006cd0a3  MOV dword ptr [EBP + -0x14],ECX
006cd0a6  MOV EDX,dword ptr [EBP + 0x8]
006cd0a9  MOV EAX,dword ptr [EDX + 0x24]
006cd0ac  MOV dword ptr [EBP + -0xc],EAX
006cd0af  MOV ECX,dword ptr [EBP + 0x8]
006cd0b2  MOV EDX,dword ptr [ECX + 0x28]
006cd0b5  MOV dword ptr [EBP + -0x4],EDX
006cd0b8  MOV EAX,dword ptr [EBP + 0x8]
006cd0bb  MOV ECX,dword ptr [EAX + 0x2c]
006cd0be  MOV dword ptr [EBP + -0x28],ECX
006cd0c1  MOV EDX,dword ptr [EBP + 0x8]
006cd0c4  MOV EAX,dword ptr [EDX + 0x30]
006cd0c7  MOV dword ptr [EBP + -0x24],EAX
006cd0ca  MOV ECX,dword ptr [EBP + 0x8]
006cd0cd  MOV EDX,dword ptr [ECX + 0x34]
006cd0d0  MOV dword ptr [EBP + -0x8],EDX
006cd0d3  MOV EAX,dword ptr [EBP + 0xc]
006cd0d6  AND EAX,dword ptr [EBP + -0x20]
006cd0d9  MOV ECX,dword ptr [EBP + 0xc]
006cd0dc  AND ECX,dword ptr [EBP + -0x20]
006cd0df  ADD ECX,dword ptr [EBP + -0x4]
006cd0e2  IMUL ECX,dword ptr [EBP + -0x28]
006cd0e6  XOR EAX,ECX
006cd0e8  MOV EDX,dword ptr [EBP + 0xc]
006cd0eb  AND EDX,dword ptr [EBP + -0x20]
006cd0ee  ADD EDX,dword ptr [EBP + -0x24]
006cd0f1  IMUL EDX,dword ptr [EBP + -0x8]
006cd0f5  XOR EAX,EDX
006cd0f7  MOV ECX,dword ptr [EBP + -0x20]
006cd0fa  NOT ECX
006cd0fc  AND EAX,ECX
006cd0fe  XOR EAX,dword ptr [EBP + 0xc]
006cd101  MOV EDX,dword ptr [EBP + 0xc]
006cd104  AND EDX,dword ptr [EBP + -0x20]
006cd107  MOV ECX,dword ptr [EBP + 0xc]
006cd10a  AND ECX,dword ptr [EBP + -0x20]
006cd10d  ADD ECX,dword ptr [EBP + -0x4]
006cd110  IMUL ECX,dword ptr [EBP + -0x28]
006cd114  XOR EDX,ECX
006cd116  MOV ECX,dword ptr [EBP + 0xc]
006cd119  AND ECX,dword ptr [EBP + -0x20]
006cd11c  ADD ECX,dword ptr [EBP + -0x24]
006cd11f  IMUL ECX,dword ptr [EBP + -0x8]
006cd123  XOR EDX,ECX
006cd125  MOV ECX,dword ptr [EBP + -0x20]
006cd128  NOT ECX
006cd12a  AND EDX,ECX
006cd12c  XOR EDX,dword ptr [EBP + 0xc]
006cd12f  MOV ECX,dword ptr [EBP + -0x20]
006cd132  NOT ECX
006cd134  AND EDX,ECX
006cd136  MOV ECX,dword ptr [EBP + 0xc]
006cd139  AND ECX,dword ptr [EBP + -0x20]
006cd13c  MOV ESI,dword ptr [EBP + 0xc]
006cd13f  AND ESI,dword ptr [EBP + -0x20]
006cd142  ADD ESI,dword ptr [EBP + -0x4]
006cd145  IMUL ESI,dword ptr [EBP + -0x28]
006cd149  XOR ECX,ESI
006cd14b  MOV ESI,dword ptr [EBP + 0xc]
006cd14e  AND ESI,dword ptr [EBP + -0x20]
006cd151  ADD ESI,dword ptr [EBP + -0x24]
006cd154  IMUL ESI,dword ptr [EBP + -0x8]
006cd158  XOR ECX,ESI
006cd15a  MOV ESI,dword ptr [EBP + -0x20]
006cd15d  NOT ESI
006cd15f  AND ECX,ESI
006cd161  XOR ECX,dword ptr [EBP + 0xc]
006cd164  MOV ESI,dword ptr [EBP + -0x20]
006cd167  NOT ESI
006cd169  AND ECX,ESI
006cd16b  ADD ECX,dword ptr [EBP + -0x18]
006cd16e  IMUL ECX,dword ptr [EBP + -0x1c]
006cd172  XOR EDX,ECX
006cd174  MOV ECX,dword ptr [EBP + 0xc]
006cd177  AND ECX,dword ptr [EBP + -0x20]
006cd17a  MOV ESI,dword ptr [EBP + 0xc]
006cd17d  AND ESI,dword ptr [EBP + -0x20]
006cd180  ADD ESI,dword ptr [EBP + -0x4]
006cd183  IMUL ESI,dword ptr [EBP + -0x28]
006cd187  XOR ECX,ESI
006cd189  MOV ESI,dword ptr [EBP + 0xc]
006cd18c  AND ESI,dword ptr [EBP + -0x20]
006cd18f  ADD ESI,dword ptr [EBP + -0x24]
006cd192  IMUL ESI,dword ptr [EBP + -0x8]
006cd196  XOR ECX,ESI
006cd198  MOV ESI,dword ptr [EBP + -0x20]
006cd19b  NOT ESI
006cd19d  AND ECX,ESI
006cd19f  XOR ECX,dword ptr [EBP + 0xc]
006cd1a2  MOV ESI,dword ptr [EBP + -0x20]
006cd1a5  NOT ESI
006cd1a7  AND ECX,ESI
006cd1a9  ADD ECX,dword ptr [EBP + -0xc]
006cd1ac  IMUL ECX,dword ptr [EBP + -0x14]
006cd1b0  XOR EDX,ECX
006cd1b2  AND EDX,dword ptr [EBP + -0x20]
006cd1b5  XOR EAX,EDX
006cd1b7  MOV dword ptr [EBP + -0x10],EAX
006cd1ba  PUSH EAX
006cd1bb  MOV EAX,0xcfcecdcc
006cd1c0  MOV EAX,0x6cd06d
006cd1c5  MOV EAX,0x0
006cd1ca  MOV EAX,0x0
006cd1cf  MOV EAX,0xcecdcccb
006cd1d4  POP EAX
006cd1d5  MOV EAX,dword ptr [EBP + -0x10]
006cd1d8  POP ESI
006cd1d9  MOV ESP,EBP
006cd1db  POP EBP
006cd1dc  RET
