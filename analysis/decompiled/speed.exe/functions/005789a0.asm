005789a0  PUSH EBP
005789a1  MOV EBP,ESP
005789a3  SUB ESP,0x28
005789a6  PUSH ESI
005789a7  PUSH EAX
005789a8  MOV EAX,0xcfcecdcc
005789ad  MOV EAX,0x5789ad
005789b2  MOV EAX,0x1
005789b7  MOV EAX,0x0
005789bc  MOV EAX,0xcfcecdcc
005789c1  POP EAX
005789c2  MOV EAX,dword ptr [EBP + 0x8]
005789c5  MOV ECX,dword ptr [EAX + 0x14]
005789c8  MOV dword ptr [EBP + -0x20],ECX
005789cb  MOV EDX,dword ptr [EBP + 0x8]
005789ce  MOV EAX,dword ptr [EDX + 0x18]
005789d1  MOV dword ptr [EBP + -0x1c],EAX
005789d4  MOV ECX,dword ptr [EBP + 0x8]
005789d7  MOV EDX,dword ptr [ECX + 0x1c]
005789da  MOV dword ptr [EBP + -0x18],EDX
005789dd  MOV EAX,dword ptr [EBP + 0x8]
005789e0  MOV ECX,dword ptr [EAX + 0x20]
005789e3  MOV dword ptr [EBP + -0x14],ECX
005789e6  MOV EDX,dword ptr [EBP + 0x8]
005789e9  MOV EAX,dword ptr [EDX + 0x24]
005789ec  MOV dword ptr [EBP + -0xc],EAX
005789ef  MOV ECX,dword ptr [EBP + 0x8]
005789f2  MOV EDX,dword ptr [ECX + 0x28]
005789f5  MOV dword ptr [EBP + -0x4],EDX
005789f8  MOV EAX,dword ptr [EBP + 0x8]
005789fb  MOV ECX,dword ptr [EAX + 0x2c]
005789fe  MOV dword ptr [EBP + -0x28],ECX
00578a01  MOV EDX,dword ptr [EBP + 0x8]
00578a04  MOV EAX,dword ptr [EDX + 0x30]
00578a07  MOV dword ptr [EBP + -0x24],EAX
00578a0a  MOV ECX,dword ptr [EBP + 0x8]
00578a0d  MOV EDX,dword ptr [ECX + 0x34]
00578a10  MOV dword ptr [EBP + -0x8],EDX
00578a13  MOV EAX,dword ptr [EBP + 0xc]
00578a16  AND EAX,dword ptr [EBP + -0x20]
00578a19  MOV ECX,dword ptr [EBP + 0xc]
00578a1c  AND ECX,dword ptr [EBP + -0x20]
00578a1f  ADD ECX,dword ptr [EBP + -0x4]
00578a22  IMUL ECX,dword ptr [EBP + -0x28]
00578a26  XOR EAX,ECX
00578a28  MOV EDX,dword ptr [EBP + 0xc]
00578a2b  AND EDX,dword ptr [EBP + -0x20]
00578a2e  ADD EDX,dword ptr [EBP + -0x24]
00578a31  IMUL EDX,dword ptr [EBP + -0x8]
00578a35  XOR EAX,EDX
00578a37  MOV ECX,dword ptr [EBP + -0x20]
00578a3a  NOT ECX
00578a3c  AND EAX,ECX
00578a3e  XOR EAX,dword ptr [EBP + 0xc]
00578a41  MOV EDX,dword ptr [EBP + 0xc]
00578a44  AND EDX,dword ptr [EBP + -0x20]
00578a47  MOV ECX,dword ptr [EBP + 0xc]
00578a4a  AND ECX,dword ptr [EBP + -0x20]
00578a4d  ADD ECX,dword ptr [EBP + -0x4]
00578a50  IMUL ECX,dword ptr [EBP + -0x28]
00578a54  XOR EDX,ECX
00578a56  MOV ECX,dword ptr [EBP + 0xc]
00578a59  AND ECX,dword ptr [EBP + -0x20]
00578a5c  ADD ECX,dword ptr [EBP + -0x24]
00578a5f  IMUL ECX,dword ptr [EBP + -0x8]
00578a63  XOR EDX,ECX
00578a65  MOV ECX,dword ptr [EBP + -0x20]
00578a68  NOT ECX
00578a6a  AND EDX,ECX
00578a6c  XOR EDX,dword ptr [EBP + 0xc]
00578a6f  MOV ECX,dword ptr [EBP + -0x20]
00578a72  NOT ECX
00578a74  AND EDX,ECX
00578a76  MOV ECX,dword ptr [EBP + 0xc]
00578a79  AND ECX,dword ptr [EBP + -0x20]
00578a7c  MOV ESI,dword ptr [EBP + 0xc]
00578a7f  AND ESI,dword ptr [EBP + -0x20]
00578a82  ADD ESI,dword ptr [EBP + -0x4]
00578a85  IMUL ESI,dword ptr [EBP + -0x28]
00578a89  XOR ECX,ESI
00578a8b  MOV ESI,dword ptr [EBP + 0xc]
00578a8e  AND ESI,dword ptr [EBP + -0x20]
00578a91  ADD ESI,dword ptr [EBP + -0x24]
00578a94  IMUL ESI,dword ptr [EBP + -0x8]
00578a98  XOR ECX,ESI
00578a9a  MOV ESI,dword ptr [EBP + -0x20]
00578a9d  NOT ESI
00578a9f  AND ECX,ESI
00578aa1  XOR ECX,dword ptr [EBP + 0xc]
00578aa4  MOV ESI,dword ptr [EBP + -0x20]
00578aa7  NOT ESI
00578aa9  AND ECX,ESI
00578aab  ADD ECX,dword ptr [EBP + -0x18]
00578aae  IMUL ECX,dword ptr [EBP + -0x1c]
00578ab2  XOR EDX,ECX
00578ab4  MOV ECX,dword ptr [EBP + 0xc]
00578ab7  AND ECX,dword ptr [EBP + -0x20]
00578aba  MOV ESI,dword ptr [EBP + 0xc]
00578abd  AND ESI,dword ptr [EBP + -0x20]
00578ac0  ADD ESI,dword ptr [EBP + -0x4]
00578ac3  IMUL ESI,dword ptr [EBP + -0x28]
00578ac7  XOR ECX,ESI
00578ac9  MOV ESI,dword ptr [EBP + 0xc]
00578acc  AND ESI,dword ptr [EBP + -0x20]
00578acf  ADD ESI,dword ptr [EBP + -0x24]
00578ad2  IMUL ESI,dword ptr [EBP + -0x8]
00578ad6  XOR ECX,ESI
00578ad8  MOV ESI,dword ptr [EBP + -0x20]
00578adb  NOT ESI
00578add  AND ECX,ESI
00578adf  XOR ECX,dword ptr [EBP + 0xc]
00578ae2  MOV ESI,dword ptr [EBP + -0x20]
00578ae5  NOT ESI
00578ae7  AND ECX,ESI
00578ae9  ADD ECX,dword ptr [EBP + -0xc]
00578aec  IMUL ECX,dword ptr [EBP + -0x14]
00578af0  XOR EDX,ECX
00578af2  AND EDX,dword ptr [EBP + -0x20]
00578af5  XOR EAX,EDX
00578af7  MOV dword ptr [EBP + -0x10],EAX
00578afa  PUSH EAX
00578afb  MOV EAX,0xcfcecdcc
00578b00  MOV EAX,0x5789ad
00578b05  MOV EAX,0x0
00578b0a  MOV EAX,0x0
00578b0f  MOV EAX,0xcecdcccb
00578b14  POP EAX
00578b15  MOV EAX,dword ptr [EBP + -0x10]
00578b18  POP ESI
00578b19  MOV ESP,EBP
00578b1b  POP EBP
00578b1c  RET
