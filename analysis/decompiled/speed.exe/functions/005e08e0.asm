005e08e0  PUSH EBP
005e08e1  MOV EBP,ESP
005e08e3  SUB ESP,0x28
005e08e6  PUSH ESI
005e08e7  PUSH EAX
005e08e8  MOV EAX,0xcfcecdcc
005e08ed  MOV EAX,0x5e08ed
005e08f2  MOV EAX,0x1
005e08f7  MOV EAX,0x0
005e08fc  MOV EAX,0xcfcecdcc
005e0901  POP EAX
005e0902  MOV EAX,dword ptr [EBP + 0x8]
005e0905  MOV ECX,dword ptr [EAX + 0x14]
005e0908  MOV dword ptr [EBP + -0x20],ECX
005e090b  MOV EDX,dword ptr [EBP + 0x8]
005e090e  MOV EAX,dword ptr [EDX + 0x18]
005e0911  MOV dword ptr [EBP + -0x1c],EAX
005e0914  MOV ECX,dword ptr [EBP + 0x8]
005e0917  MOV EDX,dword ptr [ECX + 0x1c]
005e091a  MOV dword ptr [EBP + -0x18],EDX
005e091d  MOV EAX,dword ptr [EBP + 0x8]
005e0920  MOV ECX,dword ptr [EAX + 0x20]
005e0923  MOV dword ptr [EBP + -0x14],ECX
005e0926  MOV EDX,dword ptr [EBP + 0x8]
005e0929  MOV EAX,dword ptr [EDX + 0x24]
005e092c  MOV dword ptr [EBP + -0xc],EAX
005e092f  MOV ECX,dword ptr [EBP + 0x8]
005e0932  MOV EDX,dword ptr [ECX + 0x28]
005e0935  MOV dword ptr [EBP + -0x4],EDX
005e0938  MOV EAX,dword ptr [EBP + 0x8]
005e093b  MOV ECX,dword ptr [EAX + 0x2c]
005e093e  MOV dword ptr [EBP + -0x28],ECX
005e0941  MOV EDX,dword ptr [EBP + 0x8]
005e0944  MOV EAX,dword ptr [EDX + 0x30]
005e0947  MOV dword ptr [EBP + -0x24],EAX
005e094a  MOV ECX,dword ptr [EBP + 0x8]
005e094d  MOV EDX,dword ptr [ECX + 0x34]
005e0950  MOV dword ptr [EBP + -0x8],EDX
005e0953  MOV EAX,dword ptr [EBP + -0x20]
005e0956  NOT EAX
005e0958  AND EAX,dword ptr [EBP + 0xc]
005e095b  MOV ECX,dword ptr [EBP + -0x20]
005e095e  NOT ECX
005e0960  AND ECX,dword ptr [EBP + 0xc]
005e0963  ADD ECX,dword ptr [EBP + -0x18]
005e0966  IMUL ECX,dword ptr [EBP + -0x1c]
005e096a  XOR EAX,ECX
005e096c  MOV EDX,dword ptr [EBP + -0x20]
005e096f  NOT EDX
005e0971  AND EDX,dword ptr [EBP + 0xc]
005e0974  ADD EDX,dword ptr [EBP + -0xc]
005e0977  IMUL EDX,dword ptr [EBP + -0x14]
005e097b  XOR EAX,EDX
005e097d  AND EAX,dword ptr [EBP + -0x20]
005e0980  XOR EAX,dword ptr [EBP + 0xc]
005e0983  MOV ECX,dword ptr [EBP + -0x20]
005e0986  NOT ECX
005e0988  AND ECX,dword ptr [EBP + 0xc]
005e098b  MOV EDX,dword ptr [EBP + -0x20]
005e098e  NOT EDX
005e0990  AND EDX,dword ptr [EBP + 0xc]
005e0993  ADD EDX,dword ptr [EBP + -0x18]
005e0996  IMUL EDX,dword ptr [EBP + -0x1c]
005e099a  XOR ECX,EDX
005e099c  MOV EDX,dword ptr [EBP + -0x20]
005e099f  NOT EDX
005e09a1  AND EDX,dword ptr [EBP + 0xc]
005e09a4  ADD EDX,dword ptr [EBP + -0xc]
005e09a7  IMUL EDX,dword ptr [EBP + -0x14]
005e09ab  XOR ECX,EDX
005e09ad  AND ECX,dword ptr [EBP + -0x20]
005e09b0  XOR ECX,dword ptr [EBP + 0xc]
005e09b3  AND ECX,dword ptr [EBP + -0x20]
005e09b6  MOV EDX,dword ptr [EBP + -0x20]
005e09b9  NOT EDX
005e09bb  AND EDX,dword ptr [EBP + 0xc]
005e09be  MOV ESI,dword ptr [EBP + -0x20]
005e09c1  NOT ESI
005e09c3  AND ESI,dword ptr [EBP + 0xc]
005e09c6  ADD ESI,dword ptr [EBP + -0x18]
005e09c9  IMUL ESI,dword ptr [EBP + -0x1c]
005e09cd  XOR EDX,ESI
005e09cf  MOV ESI,dword ptr [EBP + -0x20]
005e09d2  NOT ESI
005e09d4  AND ESI,dword ptr [EBP + 0xc]
005e09d7  ADD ESI,dword ptr [EBP + -0xc]
005e09da  IMUL ESI,dword ptr [EBP + -0x14]
005e09de  XOR EDX,ESI
005e09e0  AND EDX,dword ptr [EBP + -0x20]
005e09e3  XOR EDX,dword ptr [EBP + 0xc]
005e09e6  AND EDX,dword ptr [EBP + -0x20]
005e09e9  ADD EDX,dword ptr [EBP + -0x4]
005e09ec  IMUL EDX,dword ptr [EBP + -0x28]
005e09f0  XOR ECX,EDX
005e09f2  MOV EDX,dword ptr [EBP + -0x20]
005e09f5  NOT EDX
005e09f7  AND EDX,dword ptr [EBP + 0xc]
005e09fa  MOV ESI,dword ptr [EBP + -0x20]
005e09fd  NOT ESI
005e09ff  AND ESI,dword ptr [EBP + 0xc]
005e0a02  ADD ESI,dword ptr [EBP + -0x18]
005e0a05  IMUL ESI,dword ptr [EBP + -0x1c]
005e0a09  XOR EDX,ESI
005e0a0b  MOV ESI,dword ptr [EBP + -0x20]
005e0a0e  NOT ESI
005e0a10  AND ESI,dword ptr [EBP + 0xc]
005e0a13  ADD ESI,dword ptr [EBP + -0xc]
005e0a16  IMUL ESI,dword ptr [EBP + -0x14]
005e0a1a  XOR EDX,ESI
005e0a1c  AND EDX,dword ptr [EBP + -0x20]
005e0a1f  XOR EDX,dword ptr [EBP + 0xc]
005e0a22  AND EDX,dword ptr [EBP + -0x20]
005e0a25  ADD EDX,dword ptr [EBP + -0x24]
005e0a28  IMUL EDX,dword ptr [EBP + -0x8]
005e0a2c  XOR ECX,EDX
005e0a2e  MOV EDX,dword ptr [EBP + -0x20]
005e0a31  NOT EDX
005e0a33  AND ECX,EDX
005e0a35  XOR EAX,ECX
005e0a37  MOV dword ptr [EBP + -0x10],EAX
005e0a3a  PUSH EAX
005e0a3b  MOV EAX,0xcfcecdcc
005e0a40  MOV EAX,0x5e08ed
005e0a45  MOV EAX,0x0
005e0a4a  MOV EAX,0x0
005e0a4f  MOV EAX,0xcecdcccb
005e0a54  POP EAX
005e0a55  MOV EAX,dword ptr [EBP + -0x10]
005e0a58  POP ESI
005e0a59  MOV ESP,EBP
005e0a5b  POP EBP
005e0a5c  RET
