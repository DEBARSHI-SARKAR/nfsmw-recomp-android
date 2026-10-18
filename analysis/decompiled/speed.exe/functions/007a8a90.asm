007a8a90  PUSH EBP
007a8a91  MOV EBP,ESP
007a8a93  SUB ESP,0x28
007a8a96  PUSH ESI
007a8a97  PUSH EAX
007a8a98  MOV EAX,0xcfcecdcc
007a8a9d  MOV EAX,0x7a8a9d
007a8aa2  MOV EAX,0x1
007a8aa7  MOV EAX,0x0
007a8aac  MOV EAX,0xcfcecdcc
007a8ab1  POP EAX
007a8ab2  MOV EAX,dword ptr [EBP + 0x8]
007a8ab5  MOV ECX,dword ptr [EAX + 0x14]
007a8ab8  MOV dword ptr [EBP + -0x20],ECX
007a8abb  MOV EDX,dword ptr [EBP + 0x8]
007a8abe  MOV EAX,dword ptr [EDX + 0x18]
007a8ac1  MOV dword ptr [EBP + -0x1c],EAX
007a8ac4  MOV ECX,dword ptr [EBP + 0x8]
007a8ac7  MOV EDX,dword ptr [ECX + 0x1c]
007a8aca  MOV dword ptr [EBP + -0x18],EDX
007a8acd  MOV EAX,dword ptr [EBP + 0x8]
007a8ad0  MOV ECX,dword ptr [EAX + 0x20]
007a8ad3  MOV dword ptr [EBP + -0x14],ECX
007a8ad6  MOV EDX,dword ptr [EBP + 0x8]
007a8ad9  MOV EAX,dword ptr [EDX + 0x24]
007a8adc  MOV dword ptr [EBP + -0xc],EAX
007a8adf  MOV ECX,dword ptr [EBP + 0x8]
007a8ae2  MOV EDX,dword ptr [ECX + 0x28]
007a8ae5  MOV dword ptr [EBP + -0x4],EDX
007a8ae8  MOV EAX,dword ptr [EBP + 0x8]
007a8aeb  MOV ECX,dword ptr [EAX + 0x2c]
007a8aee  MOV dword ptr [EBP + -0x28],ECX
007a8af1  MOV EDX,dword ptr [EBP + 0x8]
007a8af4  MOV EAX,dword ptr [EDX + 0x30]
007a8af7  MOV dword ptr [EBP + -0x24],EAX
007a8afa  MOV ECX,dword ptr [EBP + 0x8]
007a8afd  MOV EDX,dword ptr [ECX + 0x34]
007a8b00  MOV dword ptr [EBP + -0x8],EDX
007a8b03  MOV EAX,dword ptr [EBP + 0xc]
007a8b06  AND EAX,dword ptr [EBP + -0x20]
007a8b09  MOV ECX,dword ptr [EBP + 0xc]
007a8b0c  AND ECX,dword ptr [EBP + -0x20]
007a8b0f  ADD ECX,dword ptr [EBP + -0x4]
007a8b12  IMUL ECX,dword ptr [EBP + -0x28]
007a8b16  XOR EAX,ECX
007a8b18  MOV EDX,dword ptr [EBP + 0xc]
007a8b1b  AND EDX,dword ptr [EBP + -0x20]
007a8b1e  ADD EDX,dword ptr [EBP + -0x24]
007a8b21  IMUL EDX,dword ptr [EBP + -0x8]
007a8b25  XOR EAX,EDX
007a8b27  MOV ECX,dword ptr [EBP + -0x20]
007a8b2a  NOT ECX
007a8b2c  AND EAX,ECX
007a8b2e  XOR EAX,dword ptr [EBP + 0xc]
007a8b31  MOV EDX,dword ptr [EBP + 0xc]
007a8b34  AND EDX,dword ptr [EBP + -0x20]
007a8b37  MOV ECX,dword ptr [EBP + 0xc]
007a8b3a  AND ECX,dword ptr [EBP + -0x20]
007a8b3d  ADD ECX,dword ptr [EBP + -0x4]
007a8b40  IMUL ECX,dword ptr [EBP + -0x28]
007a8b44  XOR EDX,ECX
007a8b46  MOV ECX,dword ptr [EBP + 0xc]
007a8b49  AND ECX,dword ptr [EBP + -0x20]
007a8b4c  ADD ECX,dword ptr [EBP + -0x24]
007a8b4f  IMUL ECX,dword ptr [EBP + -0x8]
007a8b53  XOR EDX,ECX
007a8b55  MOV ECX,dword ptr [EBP + -0x20]
007a8b58  NOT ECX
007a8b5a  AND EDX,ECX
007a8b5c  XOR EDX,dword ptr [EBP + 0xc]
007a8b5f  MOV ECX,dword ptr [EBP + -0x20]
007a8b62  NOT ECX
007a8b64  AND EDX,ECX
007a8b66  MOV ECX,dword ptr [EBP + 0xc]
007a8b69  AND ECX,dword ptr [EBP + -0x20]
007a8b6c  MOV ESI,dword ptr [EBP + 0xc]
007a8b6f  AND ESI,dword ptr [EBP + -0x20]
007a8b72  ADD ESI,dword ptr [EBP + -0x4]
007a8b75  IMUL ESI,dword ptr [EBP + -0x28]
007a8b79  XOR ECX,ESI
007a8b7b  MOV ESI,dword ptr [EBP + 0xc]
007a8b7e  AND ESI,dword ptr [EBP + -0x20]
007a8b81  ADD ESI,dword ptr [EBP + -0x24]
007a8b84  IMUL ESI,dword ptr [EBP + -0x8]
007a8b88  XOR ECX,ESI
007a8b8a  MOV ESI,dword ptr [EBP + -0x20]
007a8b8d  NOT ESI
007a8b8f  AND ECX,ESI
007a8b91  XOR ECX,dword ptr [EBP + 0xc]
007a8b94  MOV ESI,dword ptr [EBP + -0x20]
007a8b97  NOT ESI
007a8b99  AND ECX,ESI
007a8b9b  ADD ECX,dword ptr [EBP + -0x18]
007a8b9e  IMUL ECX,dword ptr [EBP + -0x1c]
007a8ba2  XOR EDX,ECX
007a8ba4  MOV ECX,dword ptr [EBP + 0xc]
007a8ba7  AND ECX,dword ptr [EBP + -0x20]
007a8baa  MOV ESI,dword ptr [EBP + 0xc]
007a8bad  AND ESI,dword ptr [EBP + -0x20]
007a8bb0  ADD ESI,dword ptr [EBP + -0x4]
007a8bb3  IMUL ESI,dword ptr [EBP + -0x28]
007a8bb7  XOR ECX,ESI
007a8bb9  MOV ESI,dword ptr [EBP + 0xc]
007a8bbc  AND ESI,dword ptr [EBP + -0x20]
007a8bbf  ADD ESI,dword ptr [EBP + -0x24]
007a8bc2  IMUL ESI,dword ptr [EBP + -0x8]
007a8bc6  XOR ECX,ESI
007a8bc8  MOV ESI,dword ptr [EBP + -0x20]
007a8bcb  NOT ESI
007a8bcd  AND ECX,ESI
007a8bcf  XOR ECX,dword ptr [EBP + 0xc]
007a8bd2  MOV ESI,dword ptr [EBP + -0x20]
007a8bd5  NOT ESI
007a8bd7  AND ECX,ESI
007a8bd9  ADD ECX,dword ptr [EBP + -0xc]
007a8bdc  IMUL ECX,dword ptr [EBP + -0x14]
007a8be0  XOR EDX,ECX
007a8be2  AND EDX,dword ptr [EBP + -0x20]
007a8be5  XOR EAX,EDX
007a8be7  MOV dword ptr [EBP + -0x10],EAX
007a8bea  PUSH EAX
007a8beb  MOV EAX,0xcfcecdcc
007a8bf0  MOV EAX,0x7a8a9d
007a8bf5  MOV EAX,0x0
007a8bfa  MOV EAX,0x0
007a8bff  MOV EAX,0xcecdcccb
007a8c04  POP EAX
007a8c05  MOV EAX,dword ptr [EBP + -0x10]
007a8c08  POP ESI
007a8c09  MOV ESP,EBP
007a8c0b  POP EBP
007a8c0c  RET
