00578c60  PUSH EBP
00578c61  MOV EBP,ESP
00578c63  SUB ESP,0x28
00578c66  PUSH ESI
00578c67  PUSH EAX
00578c68  MOV EAX,0xcfcecdcc
00578c6d  MOV EAX,0x578c6d
00578c72  MOV EAX,0x1
00578c77  MOV EAX,0x0
00578c7c  MOV EAX,0xcfcecdcc
00578c81  POP EAX
00578c82  MOV EAX,dword ptr [EBP + 0x8]
00578c85  MOV ECX,dword ptr [EAX + 0x14]
00578c88  MOV dword ptr [EBP + -0x20],ECX
00578c8b  MOV EDX,dword ptr [EBP + 0x8]
00578c8e  MOV EAX,dword ptr [EDX + 0x18]
00578c91  MOV dword ptr [EBP + -0x1c],EAX
00578c94  MOV ECX,dword ptr [EBP + 0x8]
00578c97  MOV EDX,dword ptr [ECX + 0x1c]
00578c9a  MOV dword ptr [EBP + -0x18],EDX
00578c9d  MOV EAX,dword ptr [EBP + 0x8]
00578ca0  MOV ECX,dword ptr [EAX + 0x20]
00578ca3  MOV dword ptr [EBP + -0x14],ECX
00578ca6  MOV EDX,dword ptr [EBP + 0x8]
00578ca9  MOV EAX,dword ptr [EDX + 0x24]
00578cac  MOV dword ptr [EBP + -0xc],EAX
00578caf  MOV ECX,dword ptr [EBP + 0x8]
00578cb2  MOV EDX,dword ptr [ECX + 0x28]
00578cb5  MOV dword ptr [EBP + -0x4],EDX
00578cb8  MOV EAX,dword ptr [EBP + 0x8]
00578cbb  MOV ECX,dword ptr [EAX + 0x2c]
00578cbe  MOV dword ptr [EBP + -0x28],ECX
00578cc1  MOV EDX,dword ptr [EBP + 0x8]
00578cc4  MOV EAX,dword ptr [EDX + 0x30]
00578cc7  MOV dword ptr [EBP + -0x24],EAX
00578cca  MOV ECX,dword ptr [EBP + 0x8]
00578ccd  MOV EDX,dword ptr [ECX + 0x34]
00578cd0  MOV dword ptr [EBP + -0x8],EDX
00578cd3  MOV EAX,dword ptr [EBP + -0x20]
00578cd6  NOT EAX
00578cd8  AND EAX,dword ptr [EBP + 0xc]
00578cdb  MOV ECX,dword ptr [EBP + -0x20]
00578cde  NOT ECX
00578ce0  AND ECX,dword ptr [EBP + 0xc]
00578ce3  ADD ECX,dword ptr [EBP + -0x18]
00578ce6  IMUL ECX,dword ptr [EBP + -0x1c]
00578cea  XOR EAX,ECX
00578cec  MOV EDX,dword ptr [EBP + -0x20]
00578cef  NOT EDX
00578cf1  AND EDX,dword ptr [EBP + 0xc]
00578cf4  ADD EDX,dword ptr [EBP + -0xc]
00578cf7  IMUL EDX,dword ptr [EBP + -0x14]
00578cfb  XOR EAX,EDX
00578cfd  AND EAX,dword ptr [EBP + -0x20]
00578d00  XOR EAX,dword ptr [EBP + 0xc]
00578d03  MOV ECX,dword ptr [EBP + -0x20]
00578d06  NOT ECX
00578d08  AND ECX,dword ptr [EBP + 0xc]
00578d0b  MOV EDX,dword ptr [EBP + -0x20]
00578d0e  NOT EDX
00578d10  AND EDX,dword ptr [EBP + 0xc]
00578d13  ADD EDX,dword ptr [EBP + -0x18]
00578d16  IMUL EDX,dword ptr [EBP + -0x1c]
00578d1a  XOR ECX,EDX
00578d1c  MOV EDX,dword ptr [EBP + -0x20]
00578d1f  NOT EDX
00578d21  AND EDX,dword ptr [EBP + 0xc]
00578d24  ADD EDX,dword ptr [EBP + -0xc]
00578d27  IMUL EDX,dword ptr [EBP + -0x14]
00578d2b  XOR ECX,EDX
00578d2d  AND ECX,dword ptr [EBP + -0x20]
00578d30  XOR ECX,dword ptr [EBP + 0xc]
00578d33  AND ECX,dword ptr [EBP + -0x20]
00578d36  MOV EDX,dword ptr [EBP + -0x20]
00578d39  NOT EDX
00578d3b  AND EDX,dword ptr [EBP + 0xc]
00578d3e  MOV ESI,dword ptr [EBP + -0x20]
00578d41  NOT ESI
00578d43  AND ESI,dword ptr [EBP + 0xc]
00578d46  ADD ESI,dword ptr [EBP + -0x18]
00578d49  IMUL ESI,dword ptr [EBP + -0x1c]
00578d4d  XOR EDX,ESI
00578d4f  MOV ESI,dword ptr [EBP + -0x20]
00578d52  NOT ESI
00578d54  AND ESI,dword ptr [EBP + 0xc]
00578d57  ADD ESI,dword ptr [EBP + -0xc]
00578d5a  IMUL ESI,dword ptr [EBP + -0x14]
00578d5e  XOR EDX,ESI
00578d60  AND EDX,dword ptr [EBP + -0x20]
00578d63  XOR EDX,dword ptr [EBP + 0xc]
00578d66  AND EDX,dword ptr [EBP + -0x20]
00578d69  ADD EDX,dword ptr [EBP + -0x4]
00578d6c  IMUL EDX,dword ptr [EBP + -0x28]
00578d70  XOR ECX,EDX
00578d72  MOV EDX,dword ptr [EBP + -0x20]
00578d75  NOT EDX
00578d77  AND EDX,dword ptr [EBP + 0xc]
00578d7a  MOV ESI,dword ptr [EBP + -0x20]
00578d7d  NOT ESI
00578d7f  AND ESI,dword ptr [EBP + 0xc]
00578d82  ADD ESI,dword ptr [EBP + -0x18]
00578d85  IMUL ESI,dword ptr [EBP + -0x1c]
00578d89  XOR EDX,ESI
00578d8b  MOV ESI,dword ptr [EBP + -0x20]
00578d8e  NOT ESI
00578d90  AND ESI,dword ptr [EBP + 0xc]
00578d93  ADD ESI,dword ptr [EBP + -0xc]
00578d96  IMUL ESI,dword ptr [EBP + -0x14]
00578d9a  XOR EDX,ESI
00578d9c  AND EDX,dword ptr [EBP + -0x20]
00578d9f  XOR EDX,dword ptr [EBP + 0xc]
00578da2  AND EDX,dword ptr [EBP + -0x20]
00578da5  ADD EDX,dword ptr [EBP + -0x24]
00578da8  IMUL EDX,dword ptr [EBP + -0x8]
00578dac  XOR ECX,EDX
00578dae  MOV EDX,dword ptr [EBP + -0x20]
00578db1  NOT EDX
00578db3  AND ECX,EDX
00578db5  XOR EAX,ECX
00578db7  MOV dword ptr [EBP + -0x10],EAX
00578dba  PUSH EAX
00578dbb  MOV EAX,0xcfcecdcc
00578dc0  MOV EAX,0x578c6d
00578dc5  MOV EAX,0x0
00578dca  MOV EAX,0x0
00578dcf  MOV EAX,0xcecdcccb
00578dd4  POP EAX
00578dd5  MOV EAX,dword ptr [EBP + -0x10]
00578dd8  POP ESI
00578dd9  MOV ESP,EBP
00578ddb  POP EBP
00578ddc  RET
