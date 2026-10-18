006ccee0  PUSH EBP
006ccee1  MOV EBP,ESP
006ccee3  SUB ESP,0x28
006ccee6  PUSH ESI
006ccee7  PUSH EAX
006ccee8  MOV EAX,0xcfcecdcc
006cceed  MOV EAX,0x6cceed
006ccef2  MOV EAX,0x1
006ccef7  MOV EAX,0x0
006ccefc  MOV EAX,0xcfcecdcc
006ccf01  POP EAX
006ccf02  MOV EAX,dword ptr [EBP + 0x8]
006ccf05  MOV ECX,dword ptr [EAX + 0x14]
006ccf08  MOV dword ptr [EBP + -0x20],ECX
006ccf0b  MOV EDX,dword ptr [EBP + 0x8]
006ccf0e  MOV EAX,dword ptr [EDX + 0x18]
006ccf11  MOV dword ptr [EBP + -0x1c],EAX
006ccf14  MOV ECX,dword ptr [EBP + 0x8]
006ccf17  MOV EDX,dword ptr [ECX + 0x1c]
006ccf1a  MOV dword ptr [EBP + -0x18],EDX
006ccf1d  MOV EAX,dword ptr [EBP + 0x8]
006ccf20  MOV ECX,dword ptr [EAX + 0x20]
006ccf23  MOV dword ptr [EBP + -0x14],ECX
006ccf26  MOV EDX,dword ptr [EBP + 0x8]
006ccf29  MOV EAX,dword ptr [EDX + 0x24]
006ccf2c  MOV dword ptr [EBP + -0xc],EAX
006ccf2f  MOV ECX,dword ptr [EBP + 0x8]
006ccf32  MOV EDX,dword ptr [ECX + 0x28]
006ccf35  MOV dword ptr [EBP + -0x4],EDX
006ccf38  MOV EAX,dword ptr [EBP + 0x8]
006ccf3b  MOV ECX,dword ptr [EAX + 0x2c]
006ccf3e  MOV dword ptr [EBP + -0x28],ECX
006ccf41  MOV EDX,dword ptr [EBP + 0x8]
006ccf44  MOV EAX,dword ptr [EDX + 0x30]
006ccf47  MOV dword ptr [EBP + -0x24],EAX
006ccf4a  MOV ECX,dword ptr [EBP + 0x8]
006ccf4d  MOV EDX,dword ptr [ECX + 0x34]
006ccf50  MOV dword ptr [EBP + -0x8],EDX
006ccf53  MOV EAX,dword ptr [EBP + -0x20]
006ccf56  NOT EAX
006ccf58  AND EAX,dword ptr [EBP + 0xc]
006ccf5b  MOV ECX,dword ptr [EBP + -0x20]
006ccf5e  NOT ECX
006ccf60  AND ECX,dword ptr [EBP + 0xc]
006ccf63  ADD ECX,dword ptr [EBP + -0x18]
006ccf66  IMUL ECX,dword ptr [EBP + -0x1c]
006ccf6a  XOR EAX,ECX
006ccf6c  MOV EDX,dword ptr [EBP + -0x20]
006ccf6f  NOT EDX
006ccf71  AND EDX,dword ptr [EBP + 0xc]
006ccf74  ADD EDX,dword ptr [EBP + -0xc]
006ccf77  IMUL EDX,dword ptr [EBP + -0x14]
006ccf7b  XOR EAX,EDX
006ccf7d  AND EAX,dword ptr [EBP + -0x20]
006ccf80  XOR EAX,dword ptr [EBP + 0xc]
006ccf83  MOV ECX,dword ptr [EBP + -0x20]
006ccf86  NOT ECX
006ccf88  AND ECX,dword ptr [EBP + 0xc]
006ccf8b  MOV EDX,dword ptr [EBP + -0x20]
006ccf8e  NOT EDX
006ccf90  AND EDX,dword ptr [EBP + 0xc]
006ccf93  ADD EDX,dword ptr [EBP + -0x18]
006ccf96  IMUL EDX,dword ptr [EBP + -0x1c]
006ccf9a  XOR ECX,EDX
006ccf9c  MOV EDX,dword ptr [EBP + -0x20]
006ccf9f  NOT EDX
006ccfa1  AND EDX,dword ptr [EBP + 0xc]
006ccfa4  ADD EDX,dword ptr [EBP + -0xc]
006ccfa7  IMUL EDX,dword ptr [EBP + -0x14]
006ccfab  XOR ECX,EDX
006ccfad  AND ECX,dword ptr [EBP + -0x20]
006ccfb0  XOR ECX,dword ptr [EBP + 0xc]
006ccfb3  AND ECX,dword ptr [EBP + -0x20]
006ccfb6  MOV EDX,dword ptr [EBP + -0x20]
006ccfb9  NOT EDX
006ccfbb  AND EDX,dword ptr [EBP + 0xc]
006ccfbe  MOV ESI,dword ptr [EBP + -0x20]
006ccfc1  NOT ESI
006ccfc3  AND ESI,dword ptr [EBP + 0xc]
006ccfc6  ADD ESI,dword ptr [EBP + -0x18]
006ccfc9  IMUL ESI,dword ptr [EBP + -0x1c]
006ccfcd  XOR EDX,ESI
006ccfcf  MOV ESI,dword ptr [EBP + -0x20]
006ccfd2  NOT ESI
006ccfd4  AND ESI,dword ptr [EBP + 0xc]
006ccfd7  ADD ESI,dword ptr [EBP + -0xc]
006ccfda  IMUL ESI,dword ptr [EBP + -0x14]
006ccfde  XOR EDX,ESI
006ccfe0  AND EDX,dword ptr [EBP + -0x20]
006ccfe3  XOR EDX,dword ptr [EBP + 0xc]
006ccfe6  AND EDX,dword ptr [EBP + -0x20]
006ccfe9  ADD EDX,dword ptr [EBP + -0x4]
006ccfec  IMUL EDX,dword ptr [EBP + -0x28]
006ccff0  XOR ECX,EDX
006ccff2  MOV EDX,dword ptr [EBP + -0x20]
006ccff5  NOT EDX
006ccff7  AND EDX,dword ptr [EBP + 0xc]
006ccffa  MOV ESI,dword ptr [EBP + -0x20]
006ccffd  NOT ESI
006ccfff  AND ESI,dword ptr [EBP + 0xc]
006cd002  ADD ESI,dword ptr [EBP + -0x18]
006cd005  IMUL ESI,dword ptr [EBP + -0x1c]
006cd009  XOR EDX,ESI
006cd00b  MOV ESI,dword ptr [EBP + -0x20]
006cd00e  NOT ESI
006cd010  AND ESI,dword ptr [EBP + 0xc]
006cd013  ADD ESI,dword ptr [EBP + -0xc]
006cd016  IMUL ESI,dword ptr [EBP + -0x14]
006cd01a  XOR EDX,ESI
006cd01c  AND EDX,dword ptr [EBP + -0x20]
006cd01f  XOR EDX,dword ptr [EBP + 0xc]
006cd022  AND EDX,dword ptr [EBP + -0x20]
006cd025  ADD EDX,dword ptr [EBP + -0x24]
006cd028  IMUL EDX,dword ptr [EBP + -0x8]
006cd02c  XOR ECX,EDX
006cd02e  MOV EDX,dword ptr [EBP + -0x20]
006cd031  NOT EDX
006cd033  AND ECX,EDX
006cd035  XOR EAX,ECX
006cd037  MOV dword ptr [EBP + -0x10],EAX
006cd03a  PUSH EAX
006cd03b  MOV EAX,0xcfcecdcc
006cd040  MOV EAX,0x6cceed
006cd045  MOV EAX,0x0
006cd04a  MOV EAX,0x0
006cd04f  MOV EAX,0xcecdcccb
006cd054  POP EAX
006cd055  MOV EAX,dword ptr [EBP + -0x10]
006cd058  POP ESI
006cd059  MOV ESP,EBP
006cd05b  POP EBP
006cd05c  RET
