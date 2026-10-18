00655db0  PUSH EBP
00655db1  MOV EBP,ESP
00655db3  SUB ESP,0x28
00655db6  PUSH ESI
00655db7  PUSH EAX
00655db8  MOV EAX,0xcfcecdcc
00655dbd  MOV EAX,0x655dbd
00655dc2  MOV EAX,0x1
00655dc7  MOV EAX,0x0
00655dcc  MOV EAX,0xcfcecdcc
00655dd1  POP EAX
00655dd2  MOV EAX,dword ptr [EBP + 0x8]
00655dd5  MOV ECX,dword ptr [EAX + 0x14]
00655dd8  MOV dword ptr [EBP + -0x20],ECX
00655ddb  MOV EDX,dword ptr [EBP + 0x8]
00655dde  MOV EAX,dword ptr [EDX + 0x18]
00655de1  MOV dword ptr [EBP + -0x1c],EAX
00655de4  MOV ECX,dword ptr [EBP + 0x8]
00655de7  MOV EDX,dword ptr [ECX + 0x1c]
00655dea  MOV dword ptr [EBP + -0x18],EDX
00655ded  MOV EAX,dword ptr [EBP + 0x8]
00655df0  MOV ECX,dword ptr [EAX + 0x20]
00655df3  MOV dword ptr [EBP + -0x14],ECX
00655df6  MOV EDX,dword ptr [EBP + 0x8]
00655df9  MOV EAX,dword ptr [EDX + 0x24]
00655dfc  MOV dword ptr [EBP + -0xc],EAX
00655dff  MOV ECX,dword ptr [EBP + 0x8]
00655e02  MOV EDX,dword ptr [ECX + 0x28]
00655e05  MOV dword ptr [EBP + -0x4],EDX
00655e08  MOV EAX,dword ptr [EBP + 0x8]
00655e0b  MOV ECX,dword ptr [EAX + 0x2c]
00655e0e  MOV dword ptr [EBP + -0x28],ECX
00655e11  MOV EDX,dword ptr [EBP + 0x8]
00655e14  MOV EAX,dword ptr [EDX + 0x30]
00655e17  MOV dword ptr [EBP + -0x24],EAX
00655e1a  MOV ECX,dword ptr [EBP + 0x8]
00655e1d  MOV EDX,dword ptr [ECX + 0x34]
00655e20  MOV dword ptr [EBP + -0x8],EDX
00655e23  MOV EAX,dword ptr [EBP + -0x20]
00655e26  NOT EAX
00655e28  AND EAX,dword ptr [EBP + 0xc]
00655e2b  MOV ECX,dword ptr [EBP + -0x20]
00655e2e  NOT ECX
00655e30  AND ECX,dword ptr [EBP + 0xc]
00655e33  ADD ECX,dword ptr [EBP + -0x18]
00655e36  IMUL ECX,dword ptr [EBP + -0x1c]
00655e3a  XOR EAX,ECX
00655e3c  MOV EDX,dword ptr [EBP + -0x20]
00655e3f  NOT EDX
00655e41  AND EDX,dword ptr [EBP + 0xc]
00655e44  ADD EDX,dword ptr [EBP + -0xc]
00655e47  IMUL EDX,dword ptr [EBP + -0x14]
00655e4b  XOR EAX,EDX
00655e4d  AND EAX,dword ptr [EBP + -0x20]
00655e50  XOR EAX,dword ptr [EBP + 0xc]
00655e53  MOV ECX,dword ptr [EBP + -0x20]
00655e56  NOT ECX
00655e58  AND ECX,dword ptr [EBP + 0xc]
00655e5b  MOV EDX,dword ptr [EBP + -0x20]
00655e5e  NOT EDX
00655e60  AND EDX,dword ptr [EBP + 0xc]
00655e63  ADD EDX,dword ptr [EBP + -0x18]
00655e66  IMUL EDX,dword ptr [EBP + -0x1c]
00655e6a  XOR ECX,EDX
00655e6c  MOV EDX,dword ptr [EBP + -0x20]
00655e6f  NOT EDX
00655e71  AND EDX,dword ptr [EBP + 0xc]
00655e74  ADD EDX,dword ptr [EBP + -0xc]
00655e77  IMUL EDX,dword ptr [EBP + -0x14]
00655e7b  XOR ECX,EDX
00655e7d  AND ECX,dword ptr [EBP + -0x20]
00655e80  XOR ECX,dword ptr [EBP + 0xc]
00655e83  AND ECX,dword ptr [EBP + -0x20]
00655e86  MOV EDX,dword ptr [EBP + -0x20]
00655e89  NOT EDX
00655e8b  AND EDX,dword ptr [EBP + 0xc]
00655e8e  MOV ESI,dword ptr [EBP + -0x20]
00655e91  NOT ESI
00655e93  AND ESI,dword ptr [EBP + 0xc]
00655e96  ADD ESI,dword ptr [EBP + -0x18]
00655e99  IMUL ESI,dword ptr [EBP + -0x1c]
00655e9d  XOR EDX,ESI
00655e9f  MOV ESI,dword ptr [EBP + -0x20]
00655ea2  NOT ESI
00655ea4  AND ESI,dword ptr [EBP + 0xc]
00655ea7  ADD ESI,dword ptr [EBP + -0xc]
00655eaa  IMUL ESI,dword ptr [EBP + -0x14]
00655eae  XOR EDX,ESI
00655eb0  AND EDX,dword ptr [EBP + -0x20]
00655eb3  XOR EDX,dword ptr [EBP + 0xc]
00655eb6  AND EDX,dword ptr [EBP + -0x20]
00655eb9  ADD EDX,dword ptr [EBP + -0x4]
00655ebc  IMUL EDX,dword ptr [EBP + -0x28]
00655ec0  XOR ECX,EDX
00655ec2  MOV EDX,dword ptr [EBP + -0x20]
00655ec5  NOT EDX
00655ec7  AND EDX,dword ptr [EBP + 0xc]
00655eca  MOV ESI,dword ptr [EBP + -0x20]
00655ecd  NOT ESI
00655ecf  AND ESI,dword ptr [EBP + 0xc]
00655ed2  ADD ESI,dword ptr [EBP + -0x18]
00655ed5  IMUL ESI,dword ptr [EBP + -0x1c]
00655ed9  XOR EDX,ESI
00655edb  MOV ESI,dword ptr [EBP + -0x20]
00655ede  NOT ESI
00655ee0  AND ESI,dword ptr [EBP + 0xc]
00655ee3  ADD ESI,dword ptr [EBP + -0xc]
00655ee6  IMUL ESI,dword ptr [EBP + -0x14]
00655eea  XOR EDX,ESI
00655eec  AND EDX,dword ptr [EBP + -0x20]
00655eef  XOR EDX,dword ptr [EBP + 0xc]
00655ef2  AND EDX,dword ptr [EBP + -0x20]
00655ef5  ADD EDX,dword ptr [EBP + -0x24]
00655ef8  IMUL EDX,dword ptr [EBP + -0x8]
00655efc  XOR ECX,EDX
00655efe  MOV EDX,dword ptr [EBP + -0x20]
00655f01  NOT EDX
00655f03  AND ECX,EDX
00655f05  XOR EAX,ECX
00655f07  MOV dword ptr [EBP + -0x10],EAX
00655f0a  PUSH EAX
00655f0b  MOV EAX,0xcfcecdcc
00655f10  MOV EAX,0x655dbd
00655f15  MOV EAX,0x0
00655f1a  MOV EAX,0x0
00655f1f  MOV EAX,0xcecdcccb
00655f24  POP EAX
00655f25  MOV EAX,dword ptr [EBP + -0x10]
00655f28  POP ESI
00655f29  MOV ESP,EBP
00655f2b  POP EBP
00655f2c  RET
