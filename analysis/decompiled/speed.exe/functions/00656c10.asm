00656c10  PUSH EBP
00656c11  MOV EBP,ESP
00656c13  SUB ESP,0x28
00656c16  PUSH ESI
00656c17  PUSH EAX
00656c18  MOV EAX,0xcfcecdcc
00656c1d  MOV EAX,0x656c1d
00656c22  MOV EAX,0x1
00656c27  MOV EAX,0x0
00656c2c  MOV EAX,0xcfcecdcc
00656c31  POP EAX
00656c32  MOV EAX,dword ptr [EBP + 0x8]
00656c35  MOV ECX,dword ptr [EAX + 0x14]
00656c38  MOV dword ptr [EBP + -0x20],ECX
00656c3b  MOV EDX,dword ptr [EBP + 0x8]
00656c3e  MOV EAX,dword ptr [EDX + 0x18]
00656c41  MOV dword ptr [EBP + -0x1c],EAX
00656c44  MOV ECX,dword ptr [EBP + 0x8]
00656c47  MOV EDX,dword ptr [ECX + 0x1c]
00656c4a  MOV dword ptr [EBP + -0x18],EDX
00656c4d  MOV EAX,dword ptr [EBP + 0x8]
00656c50  MOV ECX,dword ptr [EAX + 0x20]
00656c53  MOV dword ptr [EBP + -0x14],ECX
00656c56  MOV EDX,dword ptr [EBP + 0x8]
00656c59  MOV EAX,dword ptr [EDX + 0x24]
00656c5c  MOV dword ptr [EBP + -0xc],EAX
00656c5f  MOV ECX,dword ptr [EBP + 0x8]
00656c62  MOV EDX,dword ptr [ECX + 0x28]
00656c65  MOV dword ptr [EBP + -0x4],EDX
00656c68  MOV EAX,dword ptr [EBP + 0x8]
00656c6b  MOV ECX,dword ptr [EAX + 0x2c]
00656c6e  MOV dword ptr [EBP + -0x28],ECX
00656c71  MOV EDX,dword ptr [EBP + 0x8]
00656c74  MOV EAX,dword ptr [EDX + 0x30]
00656c77  MOV dword ptr [EBP + -0x24],EAX
00656c7a  MOV ECX,dword ptr [EBP + 0x8]
00656c7d  MOV EDX,dword ptr [ECX + 0x34]
00656c80  MOV dword ptr [EBP + -0x8],EDX
00656c83  MOV EAX,dword ptr [EBP + 0xc]
00656c86  AND EAX,dword ptr [EBP + -0x20]
00656c89  MOV ECX,dword ptr [EBP + 0xc]
00656c8c  AND ECX,dword ptr [EBP + -0x20]
00656c8f  ADD ECX,dword ptr [EBP + -0x4]
00656c92  IMUL ECX,dword ptr [EBP + -0x28]
00656c96  XOR EAX,ECX
00656c98  MOV EDX,dword ptr [EBP + 0xc]
00656c9b  AND EDX,dword ptr [EBP + -0x20]
00656c9e  ADD EDX,dword ptr [EBP + -0x24]
00656ca1  IMUL EDX,dword ptr [EBP + -0x8]
00656ca5  XOR EAX,EDX
00656ca7  MOV ECX,dword ptr [EBP + -0x20]
00656caa  NOT ECX
00656cac  AND EAX,ECX
00656cae  XOR EAX,dword ptr [EBP + 0xc]
00656cb1  MOV EDX,dword ptr [EBP + 0xc]
00656cb4  AND EDX,dword ptr [EBP + -0x20]
00656cb7  MOV ECX,dword ptr [EBP + 0xc]
00656cba  AND ECX,dword ptr [EBP + -0x20]
00656cbd  ADD ECX,dword ptr [EBP + -0x4]
00656cc0  IMUL ECX,dword ptr [EBP + -0x28]
00656cc4  XOR EDX,ECX
00656cc6  MOV ECX,dword ptr [EBP + 0xc]
00656cc9  AND ECX,dword ptr [EBP + -0x20]
00656ccc  ADD ECX,dword ptr [EBP + -0x24]
00656ccf  IMUL ECX,dword ptr [EBP + -0x8]
00656cd3  XOR EDX,ECX
00656cd5  MOV ECX,dword ptr [EBP + -0x20]
00656cd8  NOT ECX
00656cda  AND EDX,ECX
00656cdc  XOR EDX,dword ptr [EBP + 0xc]
00656cdf  MOV ECX,dword ptr [EBP + -0x20]
00656ce2  NOT ECX
00656ce4  AND EDX,ECX
00656ce6  MOV ECX,dword ptr [EBP + 0xc]
00656ce9  AND ECX,dword ptr [EBP + -0x20]
00656cec  MOV ESI,dword ptr [EBP + 0xc]
00656cef  AND ESI,dword ptr [EBP + -0x20]
00656cf2  ADD ESI,dword ptr [EBP + -0x4]
00656cf5  IMUL ESI,dword ptr [EBP + -0x28]
00656cf9  XOR ECX,ESI
00656cfb  MOV ESI,dword ptr [EBP + 0xc]
00656cfe  AND ESI,dword ptr [EBP + -0x20]
00656d01  ADD ESI,dword ptr [EBP + -0x24]
00656d04  IMUL ESI,dword ptr [EBP + -0x8]
00656d08  XOR ECX,ESI
00656d0a  MOV ESI,dword ptr [EBP + -0x20]
00656d0d  NOT ESI
00656d0f  AND ECX,ESI
00656d11  XOR ECX,dword ptr [EBP + 0xc]
00656d14  MOV ESI,dword ptr [EBP + -0x20]
00656d17  NOT ESI
00656d19  AND ECX,ESI
00656d1b  ADD ECX,dword ptr [EBP + -0x18]
00656d1e  IMUL ECX,dword ptr [EBP + -0x1c]
00656d22  XOR EDX,ECX
00656d24  MOV ECX,dword ptr [EBP + 0xc]
00656d27  AND ECX,dword ptr [EBP + -0x20]
00656d2a  MOV ESI,dword ptr [EBP + 0xc]
00656d2d  AND ESI,dword ptr [EBP + -0x20]
00656d30  ADD ESI,dword ptr [EBP + -0x4]
00656d33  IMUL ESI,dword ptr [EBP + -0x28]
00656d37  XOR ECX,ESI
00656d39  MOV ESI,dword ptr [EBP + 0xc]
00656d3c  AND ESI,dword ptr [EBP + -0x20]
00656d3f  ADD ESI,dword ptr [EBP + -0x24]
00656d42  IMUL ESI,dword ptr [EBP + -0x8]
00656d46  XOR ECX,ESI
00656d48  MOV ESI,dword ptr [EBP + -0x20]
00656d4b  NOT ESI
00656d4d  AND ECX,ESI
00656d4f  XOR ECX,dword ptr [EBP + 0xc]
00656d52  MOV ESI,dword ptr [EBP + -0x20]
00656d55  NOT ESI
00656d57  AND ECX,ESI
00656d59  ADD ECX,dword ptr [EBP + -0xc]
00656d5c  IMUL ECX,dword ptr [EBP + -0x14]
00656d60  XOR EDX,ECX
00656d62  AND EDX,dword ptr [EBP + -0x20]
00656d65  XOR EAX,EDX
00656d67  MOV dword ptr [EBP + -0x10],EAX
00656d6a  PUSH EAX
00656d6b  MOV EAX,0xcfcecdcc
00656d70  MOV EAX,0x656c1d
00656d75  MOV EAX,0x0
00656d7a  MOV EAX,0x0
00656d7f  MOV EAX,0xcecdcccb
00656d84  POP EAX
00656d85  MOV EAX,dword ptr [EBP + -0x10]
00656d88  POP ESI
00656d89  MOV ESP,EBP
00656d8b  POP EBP
00656d8c  RET
