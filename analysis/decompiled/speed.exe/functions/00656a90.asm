00656a90  PUSH EBP
00656a91  MOV EBP,ESP
00656a93  SUB ESP,0x28
00656a96  PUSH ESI
00656a97  PUSH EAX
00656a98  MOV EAX,0xcfcecdcc
00656a9d  MOV EAX,0x656a9d
00656aa2  MOV EAX,0x1
00656aa7  MOV EAX,0x0
00656aac  MOV EAX,0xcfcecdcc
00656ab1  POP EAX
00656ab2  MOV EAX,dword ptr [EBP + 0x8]
00656ab5  MOV ECX,dword ptr [EAX + 0x14]
00656ab8  MOV dword ptr [EBP + -0x20],ECX
00656abb  MOV EDX,dword ptr [EBP + 0x8]
00656abe  MOV EAX,dword ptr [EDX + 0x18]
00656ac1  MOV dword ptr [EBP + -0x1c],EAX
00656ac4  MOV ECX,dword ptr [EBP + 0x8]
00656ac7  MOV EDX,dword ptr [ECX + 0x1c]
00656aca  MOV dword ptr [EBP + -0x18],EDX
00656acd  MOV EAX,dword ptr [EBP + 0x8]
00656ad0  MOV ECX,dword ptr [EAX + 0x20]
00656ad3  MOV dword ptr [EBP + -0x14],ECX
00656ad6  MOV EDX,dword ptr [EBP + 0x8]
00656ad9  MOV EAX,dword ptr [EDX + 0x24]
00656adc  MOV dword ptr [EBP + -0xc],EAX
00656adf  MOV ECX,dword ptr [EBP + 0x8]
00656ae2  MOV EDX,dword ptr [ECX + 0x28]
00656ae5  MOV dword ptr [EBP + -0x4],EDX
00656ae8  MOV EAX,dword ptr [EBP + 0x8]
00656aeb  MOV ECX,dword ptr [EAX + 0x2c]
00656aee  MOV dword ptr [EBP + -0x28],ECX
00656af1  MOV EDX,dword ptr [EBP + 0x8]
00656af4  MOV EAX,dword ptr [EDX + 0x30]
00656af7  MOV dword ptr [EBP + -0x24],EAX
00656afa  MOV ECX,dword ptr [EBP + 0x8]
00656afd  MOV EDX,dword ptr [ECX + 0x34]
00656b00  MOV dword ptr [EBP + -0x8],EDX
00656b03  MOV EAX,dword ptr [EBP + -0x20]
00656b06  NOT EAX
00656b08  AND EAX,dword ptr [EBP + 0xc]
00656b0b  MOV ECX,dword ptr [EBP + -0x20]
00656b0e  NOT ECX
00656b10  AND ECX,dword ptr [EBP + 0xc]
00656b13  ADD ECX,dword ptr [EBP + -0x18]
00656b16  IMUL ECX,dword ptr [EBP + -0x1c]
00656b1a  XOR EAX,ECX
00656b1c  MOV EDX,dword ptr [EBP + -0x20]
00656b1f  NOT EDX
00656b21  AND EDX,dword ptr [EBP + 0xc]
00656b24  ADD EDX,dword ptr [EBP + -0xc]
00656b27  IMUL EDX,dword ptr [EBP + -0x14]
00656b2b  XOR EAX,EDX
00656b2d  AND EAX,dword ptr [EBP + -0x20]
00656b30  XOR EAX,dword ptr [EBP + 0xc]
00656b33  MOV ECX,dword ptr [EBP + -0x20]
00656b36  NOT ECX
00656b38  AND ECX,dword ptr [EBP + 0xc]
00656b3b  MOV EDX,dword ptr [EBP + -0x20]
00656b3e  NOT EDX
00656b40  AND EDX,dword ptr [EBP + 0xc]
00656b43  ADD EDX,dword ptr [EBP + -0x18]
00656b46  IMUL EDX,dword ptr [EBP + -0x1c]
00656b4a  XOR ECX,EDX
00656b4c  MOV EDX,dword ptr [EBP + -0x20]
00656b4f  NOT EDX
00656b51  AND EDX,dword ptr [EBP + 0xc]
00656b54  ADD EDX,dword ptr [EBP + -0xc]
00656b57  IMUL EDX,dword ptr [EBP + -0x14]
00656b5b  XOR ECX,EDX
00656b5d  AND ECX,dword ptr [EBP + -0x20]
00656b60  XOR ECX,dword ptr [EBP + 0xc]
00656b63  AND ECX,dword ptr [EBP + -0x20]
00656b66  MOV EDX,dword ptr [EBP + -0x20]
00656b69  NOT EDX
00656b6b  AND EDX,dword ptr [EBP + 0xc]
00656b6e  MOV ESI,dword ptr [EBP + -0x20]
00656b71  NOT ESI
00656b73  AND ESI,dword ptr [EBP + 0xc]
00656b76  ADD ESI,dword ptr [EBP + -0x18]
00656b79  IMUL ESI,dword ptr [EBP + -0x1c]
00656b7d  XOR EDX,ESI
00656b7f  MOV ESI,dword ptr [EBP + -0x20]
00656b82  NOT ESI
00656b84  AND ESI,dword ptr [EBP + 0xc]
00656b87  ADD ESI,dword ptr [EBP + -0xc]
00656b8a  IMUL ESI,dword ptr [EBP + -0x14]
00656b8e  XOR EDX,ESI
00656b90  AND EDX,dword ptr [EBP + -0x20]
00656b93  XOR EDX,dword ptr [EBP + 0xc]
00656b96  AND EDX,dword ptr [EBP + -0x20]
00656b99  ADD EDX,dword ptr [EBP + -0x4]
00656b9c  IMUL EDX,dword ptr [EBP + -0x28]
00656ba0  XOR ECX,EDX
00656ba2  MOV EDX,dword ptr [EBP + -0x20]
00656ba5  NOT EDX
00656ba7  AND EDX,dword ptr [EBP + 0xc]
00656baa  MOV ESI,dword ptr [EBP + -0x20]
00656bad  NOT ESI
00656baf  AND ESI,dword ptr [EBP + 0xc]
00656bb2  ADD ESI,dword ptr [EBP + -0x18]
00656bb5  IMUL ESI,dword ptr [EBP + -0x1c]
00656bb9  XOR EDX,ESI
00656bbb  MOV ESI,dword ptr [EBP + -0x20]
00656bbe  NOT ESI
00656bc0  AND ESI,dword ptr [EBP + 0xc]
00656bc3  ADD ESI,dword ptr [EBP + -0xc]
00656bc6  IMUL ESI,dword ptr [EBP + -0x14]
00656bca  XOR EDX,ESI
00656bcc  AND EDX,dword ptr [EBP + -0x20]
00656bcf  XOR EDX,dword ptr [EBP + 0xc]
00656bd2  AND EDX,dword ptr [EBP + -0x20]
00656bd5  ADD EDX,dword ptr [EBP + -0x24]
00656bd8  IMUL EDX,dword ptr [EBP + -0x8]
00656bdc  XOR ECX,EDX
00656bde  MOV EDX,dword ptr [EBP + -0x20]
00656be1  NOT EDX
00656be3  AND ECX,EDX
00656be5  XOR EAX,ECX
00656be7  MOV dword ptr [EBP + -0x10],EAX
00656bea  PUSH EAX
00656beb  MOV EAX,0xcfcecdcc
00656bf0  MOV EAX,0x656a9d
00656bf5  MOV EAX,0x0
00656bfa  MOV EAX,0x0
00656bff  MOV EAX,0xcecdcccb
00656c04  POP EAX
00656c05  MOV EAX,dword ptr [EBP + -0x10]
00656c08  POP ESI
00656c09  MOV ESP,EBP
00656c0b  POP EBP
00656c0c  RET
