005e0a60  PUSH EBP
005e0a61  MOV EBP,ESP
005e0a63  SUB ESP,0x28
005e0a66  PUSH ESI
005e0a67  PUSH EAX
005e0a68  MOV EAX,0xcfcecdcc
005e0a6d  MOV EAX,0x5e0a6d
005e0a72  MOV EAX,0x1
005e0a77  MOV EAX,0x0
005e0a7c  MOV EAX,0xcfcecdcc
005e0a81  POP EAX
005e0a82  MOV EAX,dword ptr [EBP + 0x8]
005e0a85  MOV ECX,dword ptr [EAX + 0x14]
005e0a88  MOV dword ptr [EBP + -0x20],ECX
005e0a8b  MOV EDX,dword ptr [EBP + 0x8]
005e0a8e  MOV EAX,dword ptr [EDX + 0x18]
005e0a91  MOV dword ptr [EBP + -0x1c],EAX
005e0a94  MOV ECX,dword ptr [EBP + 0x8]
005e0a97  MOV EDX,dword ptr [ECX + 0x1c]
005e0a9a  MOV dword ptr [EBP + -0x18],EDX
005e0a9d  MOV EAX,dword ptr [EBP + 0x8]
005e0aa0  MOV ECX,dword ptr [EAX + 0x20]
005e0aa3  MOV dword ptr [EBP + -0x14],ECX
005e0aa6  MOV EDX,dword ptr [EBP + 0x8]
005e0aa9  MOV EAX,dword ptr [EDX + 0x24]
005e0aac  MOV dword ptr [EBP + -0xc],EAX
005e0aaf  MOV ECX,dword ptr [EBP + 0x8]
005e0ab2  MOV EDX,dword ptr [ECX + 0x28]
005e0ab5  MOV dword ptr [EBP + -0x4],EDX
005e0ab8  MOV EAX,dword ptr [EBP + 0x8]
005e0abb  MOV ECX,dword ptr [EAX + 0x2c]
005e0abe  MOV dword ptr [EBP + -0x28],ECX
005e0ac1  MOV EDX,dword ptr [EBP + 0x8]
005e0ac4  MOV EAX,dword ptr [EDX + 0x30]
005e0ac7  MOV dword ptr [EBP + -0x24],EAX
005e0aca  MOV ECX,dword ptr [EBP + 0x8]
005e0acd  MOV EDX,dword ptr [ECX + 0x34]
005e0ad0  MOV dword ptr [EBP + -0x8],EDX
005e0ad3  MOV EAX,dword ptr [EBP + 0xc]
005e0ad6  AND EAX,dword ptr [EBP + -0x20]
005e0ad9  MOV ECX,dword ptr [EBP + 0xc]
005e0adc  AND ECX,dword ptr [EBP + -0x20]
005e0adf  ADD ECX,dword ptr [EBP + -0x4]
005e0ae2  IMUL ECX,dword ptr [EBP + -0x28]
005e0ae6  XOR EAX,ECX
005e0ae8  MOV EDX,dword ptr [EBP + 0xc]
005e0aeb  AND EDX,dword ptr [EBP + -0x20]
005e0aee  ADD EDX,dword ptr [EBP + -0x24]
005e0af1  IMUL EDX,dword ptr [EBP + -0x8]
005e0af5  XOR EAX,EDX
005e0af7  MOV ECX,dword ptr [EBP + -0x20]
005e0afa  NOT ECX
005e0afc  AND EAX,ECX
005e0afe  XOR EAX,dword ptr [EBP + 0xc]
005e0b01  MOV EDX,dword ptr [EBP + 0xc]
005e0b04  AND EDX,dword ptr [EBP + -0x20]
005e0b07  MOV ECX,dword ptr [EBP + 0xc]
005e0b0a  AND ECX,dword ptr [EBP + -0x20]
005e0b0d  ADD ECX,dword ptr [EBP + -0x4]
005e0b10  IMUL ECX,dword ptr [EBP + -0x28]
005e0b14  XOR EDX,ECX
005e0b16  MOV ECX,dword ptr [EBP + 0xc]
005e0b19  AND ECX,dword ptr [EBP + -0x20]
005e0b1c  ADD ECX,dword ptr [EBP + -0x24]
005e0b1f  IMUL ECX,dword ptr [EBP + -0x8]
005e0b23  XOR EDX,ECX
005e0b25  MOV ECX,dword ptr [EBP + -0x20]
005e0b28  NOT ECX
005e0b2a  AND EDX,ECX
005e0b2c  XOR EDX,dword ptr [EBP + 0xc]
005e0b2f  MOV ECX,dword ptr [EBP + -0x20]
005e0b32  NOT ECX
005e0b34  AND EDX,ECX
005e0b36  MOV ECX,dword ptr [EBP + 0xc]
005e0b39  AND ECX,dword ptr [EBP + -0x20]
005e0b3c  MOV ESI,dword ptr [EBP + 0xc]
005e0b3f  AND ESI,dword ptr [EBP + -0x20]
005e0b42  ADD ESI,dword ptr [EBP + -0x4]
005e0b45  IMUL ESI,dword ptr [EBP + -0x28]
005e0b49  XOR ECX,ESI
005e0b4b  MOV ESI,dword ptr [EBP + 0xc]
005e0b4e  AND ESI,dword ptr [EBP + -0x20]
005e0b51  ADD ESI,dword ptr [EBP + -0x24]
005e0b54  IMUL ESI,dword ptr [EBP + -0x8]
005e0b58  XOR ECX,ESI
005e0b5a  MOV ESI,dword ptr [EBP + -0x20]
005e0b5d  NOT ESI
005e0b5f  AND ECX,ESI
005e0b61  XOR ECX,dword ptr [EBP + 0xc]
005e0b64  MOV ESI,dword ptr [EBP + -0x20]
005e0b67  NOT ESI
005e0b69  AND ECX,ESI
005e0b6b  ADD ECX,dword ptr [EBP + -0x18]
005e0b6e  IMUL ECX,dword ptr [EBP + -0x1c]
005e0b72  XOR EDX,ECX
005e0b74  MOV ECX,dword ptr [EBP + 0xc]
005e0b77  AND ECX,dword ptr [EBP + -0x20]
005e0b7a  MOV ESI,dword ptr [EBP + 0xc]
005e0b7d  AND ESI,dword ptr [EBP + -0x20]
005e0b80  ADD ESI,dword ptr [EBP + -0x4]
005e0b83  IMUL ESI,dword ptr [EBP + -0x28]
005e0b87  XOR ECX,ESI
005e0b89  MOV ESI,dword ptr [EBP + 0xc]
005e0b8c  AND ESI,dword ptr [EBP + -0x20]
005e0b8f  ADD ESI,dword ptr [EBP + -0x24]
005e0b92  IMUL ESI,dword ptr [EBP + -0x8]
005e0b96  XOR ECX,ESI
005e0b98  MOV ESI,dword ptr [EBP + -0x20]
005e0b9b  NOT ESI
005e0b9d  AND ECX,ESI
005e0b9f  XOR ECX,dword ptr [EBP + 0xc]
005e0ba2  MOV ESI,dword ptr [EBP + -0x20]
005e0ba5  NOT ESI
005e0ba7  AND ECX,ESI
005e0ba9  ADD ECX,dword ptr [EBP + -0xc]
005e0bac  IMUL ECX,dword ptr [EBP + -0x14]
005e0bb0  XOR EDX,ECX
005e0bb2  AND EDX,dword ptr [EBP + -0x20]
005e0bb5  XOR EAX,EDX
005e0bb7  MOV dword ptr [EBP + -0x10],EAX
005e0bba  PUSH EAX
005e0bbb  MOV EAX,0xcfcecdcc
005e0bc0  MOV EAX,0x5e0a6d
005e0bc5  MOV EAX,0x0
005e0bca  MOV EAX,0x0
005e0bcf  MOV EAX,0xcecdcccb
005e0bd4  POP EAX
005e0bd5  MOV EAX,dword ptr [EBP + -0x10]
005e0bd8  POP ESI
005e0bd9  MOV ESP,EBP
005e0bdb  POP EBP
005e0bdc  RET
