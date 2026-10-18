005e0bf0  PUSH EBP
005e0bf1  MOV EBP,ESP
005e0bf3  SUB ESP,0x28
005e0bf6  PUSH ESI
005e0bf7  PUSH EAX
005e0bf8  MOV EAX,0xcfcecdcc
005e0bfd  MOV EAX,0x5e0bfd
005e0c02  MOV EAX,0x1
005e0c07  MOV EAX,0x0
005e0c0c  MOV EAX,0xcfcecdcc
005e0c11  POP EAX
005e0c12  MOV EAX,dword ptr [EBP + 0x8]
005e0c15  MOV ECX,dword ptr [EAX + 0x14]
005e0c18  MOV dword ptr [EBP + -0x20],ECX
005e0c1b  MOV EDX,dword ptr [EBP + 0x8]
005e0c1e  MOV EAX,dword ptr [EDX + 0x18]
005e0c21  MOV dword ptr [EBP + -0x1c],EAX
005e0c24  MOV ECX,dword ptr [EBP + 0x8]
005e0c27  MOV EDX,dword ptr [ECX + 0x1c]
005e0c2a  MOV dword ptr [EBP + -0x18],EDX
005e0c2d  MOV EAX,dword ptr [EBP + 0x8]
005e0c30  MOV ECX,dword ptr [EAX + 0x20]
005e0c33  MOV dword ptr [EBP + -0x14],ECX
005e0c36  MOV EDX,dword ptr [EBP + 0x8]
005e0c39  MOV EAX,dword ptr [EDX + 0x24]
005e0c3c  MOV dword ptr [EBP + -0xc],EAX
005e0c3f  MOV ECX,dword ptr [EBP + 0x8]
005e0c42  MOV EDX,dword ptr [ECX + 0x28]
005e0c45  MOV dword ptr [EBP + -0x4],EDX
005e0c48  MOV EAX,dword ptr [EBP + 0x8]
005e0c4b  MOV ECX,dword ptr [EAX + 0x2c]
005e0c4e  MOV dword ptr [EBP + -0x28],ECX
005e0c51  MOV EDX,dword ptr [EBP + 0x8]
005e0c54  MOV EAX,dword ptr [EDX + 0x30]
005e0c57  MOV dword ptr [EBP + -0x24],EAX
005e0c5a  MOV ECX,dword ptr [EBP + 0x8]
005e0c5d  MOV EDX,dword ptr [ECX + 0x34]
005e0c60  MOV dword ptr [EBP + -0x8],EDX
005e0c63  MOV EAX,dword ptr [EBP + -0x20]
005e0c66  NOT EAX
005e0c68  AND EAX,dword ptr [EBP + 0xc]
005e0c6b  MOV ECX,dword ptr [EBP + -0x20]
005e0c6e  NOT ECX
005e0c70  AND ECX,dword ptr [EBP + 0xc]
005e0c73  ADD ECX,dword ptr [EBP + -0x18]
005e0c76  IMUL ECX,dword ptr [EBP + -0x1c]
005e0c7a  XOR EAX,ECX
005e0c7c  MOV EDX,dword ptr [EBP + -0x20]
005e0c7f  NOT EDX
005e0c81  AND EDX,dword ptr [EBP + 0xc]
005e0c84  ADD EDX,dword ptr [EBP + -0xc]
005e0c87  IMUL EDX,dword ptr [EBP + -0x14]
005e0c8b  XOR EAX,EDX
005e0c8d  AND EAX,dword ptr [EBP + -0x20]
005e0c90  XOR EAX,dword ptr [EBP + 0xc]
005e0c93  MOV ECX,dword ptr [EBP + -0x20]
005e0c96  NOT ECX
005e0c98  AND ECX,dword ptr [EBP + 0xc]
005e0c9b  MOV EDX,dword ptr [EBP + -0x20]
005e0c9e  NOT EDX
005e0ca0  AND EDX,dword ptr [EBP + 0xc]
005e0ca3  ADD EDX,dword ptr [EBP + -0x18]
005e0ca6  IMUL EDX,dword ptr [EBP + -0x1c]
005e0caa  XOR ECX,EDX
005e0cac  MOV EDX,dword ptr [EBP + -0x20]
005e0caf  NOT EDX
005e0cb1  AND EDX,dword ptr [EBP + 0xc]
005e0cb4  ADD EDX,dword ptr [EBP + -0xc]
005e0cb7  IMUL EDX,dword ptr [EBP + -0x14]
005e0cbb  XOR ECX,EDX
005e0cbd  AND ECX,dword ptr [EBP + -0x20]
005e0cc0  XOR ECX,dword ptr [EBP + 0xc]
005e0cc3  AND ECX,dword ptr [EBP + -0x20]
005e0cc6  MOV EDX,dword ptr [EBP + -0x20]
005e0cc9  NOT EDX
005e0ccb  AND EDX,dword ptr [EBP + 0xc]
005e0cce  MOV ESI,dword ptr [EBP + -0x20]
005e0cd1  NOT ESI
005e0cd3  AND ESI,dword ptr [EBP + 0xc]
005e0cd6  ADD ESI,dword ptr [EBP + -0x18]
005e0cd9  IMUL ESI,dword ptr [EBP + -0x1c]
005e0cdd  XOR EDX,ESI
005e0cdf  MOV ESI,dword ptr [EBP + -0x20]
005e0ce2  NOT ESI
005e0ce4  AND ESI,dword ptr [EBP + 0xc]
005e0ce7  ADD ESI,dword ptr [EBP + -0xc]
005e0cea  IMUL ESI,dword ptr [EBP + -0x14]
005e0cee  XOR EDX,ESI
005e0cf0  AND EDX,dword ptr [EBP + -0x20]
005e0cf3  XOR EDX,dword ptr [EBP + 0xc]
005e0cf6  AND EDX,dword ptr [EBP + -0x20]
005e0cf9  ADD EDX,dword ptr [EBP + -0x4]
005e0cfc  IMUL EDX,dword ptr [EBP + -0x28]
005e0d00  XOR ECX,EDX
005e0d02  MOV EDX,dword ptr [EBP + -0x20]
005e0d05  NOT EDX
005e0d07  AND EDX,dword ptr [EBP + 0xc]
005e0d0a  MOV ESI,dword ptr [EBP + -0x20]
005e0d0d  NOT ESI
005e0d0f  AND ESI,dword ptr [EBP + 0xc]
005e0d12  ADD ESI,dword ptr [EBP + -0x18]
005e0d15  IMUL ESI,dword ptr [EBP + -0x1c]
005e0d19  XOR EDX,ESI
005e0d1b  MOV ESI,dword ptr [EBP + -0x20]
005e0d1e  NOT ESI
005e0d20  AND ESI,dword ptr [EBP + 0xc]
005e0d23  ADD ESI,dword ptr [EBP + -0xc]
005e0d26  IMUL ESI,dword ptr [EBP + -0x14]
005e0d2a  XOR EDX,ESI
005e0d2c  AND EDX,dword ptr [EBP + -0x20]
005e0d2f  XOR EDX,dword ptr [EBP + 0xc]
005e0d32  AND EDX,dword ptr [EBP + -0x20]
005e0d35  ADD EDX,dword ptr [EBP + -0x24]
005e0d38  IMUL EDX,dword ptr [EBP + -0x8]
005e0d3c  XOR ECX,EDX
005e0d3e  MOV EDX,dword ptr [EBP + -0x20]
005e0d41  NOT EDX
005e0d43  AND ECX,EDX
005e0d45  XOR EAX,ECX
005e0d47  MOV dword ptr [EBP + -0x10],EAX
005e0d4a  PUSH EAX
005e0d4b  MOV EAX,0xcfcecdcc
005e0d50  MOV EAX,0x5e0bfd
005e0d55  MOV EAX,0x0
005e0d5a  MOV EAX,0x0
005e0d5f  MOV EAX,0xcecdcccb
005e0d64  POP EAX
005e0d65  MOV EAX,dword ptr [EBP + -0x10]
005e0d68  POP ESI
005e0d69  MOV ESP,EBP
005e0d6b  POP EBP
005e0d6c  RET
