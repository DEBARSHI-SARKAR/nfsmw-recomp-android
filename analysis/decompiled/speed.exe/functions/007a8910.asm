007a8910  PUSH EBP
007a8911  MOV EBP,ESP
007a8913  SUB ESP,0x28
007a8916  PUSH ESI
007a8917  PUSH EAX
007a8918  MOV EAX,0xcfcecdcc
007a891d  MOV EAX,0x7a891d
007a8922  MOV EAX,0x1
007a8927  MOV EAX,0x0
007a892c  MOV EAX,0xcfcecdcc
007a8931  POP EAX
007a8932  MOV EAX,dword ptr [EBP + 0x8]
007a8935  MOV ECX,dword ptr [EAX + 0x14]
007a8938  MOV dword ptr [EBP + -0x20],ECX
007a893b  MOV EDX,dword ptr [EBP + 0x8]
007a893e  MOV EAX,dword ptr [EDX + 0x18]
007a8941  MOV dword ptr [EBP + -0x1c],EAX
007a8944  MOV ECX,dword ptr [EBP + 0x8]
007a8947  MOV EDX,dword ptr [ECX + 0x1c]
007a894a  MOV dword ptr [EBP + -0x18],EDX
007a894d  MOV EAX,dword ptr [EBP + 0x8]
007a8950  MOV ECX,dword ptr [EAX + 0x20]
007a8953  MOV dword ptr [EBP + -0x14],ECX
007a8956  MOV EDX,dword ptr [EBP + 0x8]
007a8959  MOV EAX,dword ptr [EDX + 0x24]
007a895c  MOV dword ptr [EBP + -0xc],EAX
007a895f  MOV ECX,dword ptr [EBP + 0x8]
007a8962  MOV EDX,dword ptr [ECX + 0x28]
007a8965  MOV dword ptr [EBP + -0x4],EDX
007a8968  MOV EAX,dword ptr [EBP + 0x8]
007a896b  MOV ECX,dword ptr [EAX + 0x2c]
007a896e  MOV dword ptr [EBP + -0x28],ECX
007a8971  MOV EDX,dword ptr [EBP + 0x8]
007a8974  MOV EAX,dword ptr [EDX + 0x30]
007a8977  MOV dword ptr [EBP + -0x24],EAX
007a897a  MOV ECX,dword ptr [EBP + 0x8]
007a897d  MOV EDX,dword ptr [ECX + 0x34]
007a8980  MOV dword ptr [EBP + -0x8],EDX
007a8983  MOV EAX,dword ptr [EBP + -0x20]
007a8986  NOT EAX
007a8988  AND EAX,dword ptr [EBP + 0xc]
007a898b  MOV ECX,dword ptr [EBP + -0x20]
007a898e  NOT ECX
007a8990  AND ECX,dword ptr [EBP + 0xc]
007a8993  ADD ECX,dword ptr [EBP + -0x18]
007a8996  IMUL ECX,dword ptr [EBP + -0x1c]
007a899a  XOR EAX,ECX
007a899c  MOV EDX,dword ptr [EBP + -0x20]
007a899f  NOT EDX
007a89a1  AND EDX,dword ptr [EBP + 0xc]
007a89a4  ADD EDX,dword ptr [EBP + -0xc]
007a89a7  IMUL EDX,dword ptr [EBP + -0x14]
007a89ab  XOR EAX,EDX
007a89ad  AND EAX,dword ptr [EBP + -0x20]
007a89b0  XOR EAX,dword ptr [EBP + 0xc]
007a89b3  MOV ECX,dword ptr [EBP + -0x20]
007a89b6  NOT ECX
007a89b8  AND ECX,dword ptr [EBP + 0xc]
007a89bb  MOV EDX,dword ptr [EBP + -0x20]
007a89be  NOT EDX
007a89c0  AND EDX,dword ptr [EBP + 0xc]
007a89c3  ADD EDX,dword ptr [EBP + -0x18]
007a89c6  IMUL EDX,dword ptr [EBP + -0x1c]
007a89ca  XOR ECX,EDX
007a89cc  MOV EDX,dword ptr [EBP + -0x20]
007a89cf  NOT EDX
007a89d1  AND EDX,dword ptr [EBP + 0xc]
007a89d4  ADD EDX,dword ptr [EBP + -0xc]
007a89d7  IMUL EDX,dword ptr [EBP + -0x14]
007a89db  XOR ECX,EDX
007a89dd  AND ECX,dword ptr [EBP + -0x20]
007a89e0  XOR ECX,dword ptr [EBP + 0xc]
007a89e3  AND ECX,dword ptr [EBP + -0x20]
007a89e6  MOV EDX,dword ptr [EBP + -0x20]
007a89e9  NOT EDX
007a89eb  AND EDX,dword ptr [EBP + 0xc]
007a89ee  MOV ESI,dword ptr [EBP + -0x20]
007a89f1  NOT ESI
007a89f3  AND ESI,dword ptr [EBP + 0xc]
007a89f6  ADD ESI,dword ptr [EBP + -0x18]
007a89f9  IMUL ESI,dword ptr [EBP + -0x1c]
007a89fd  XOR EDX,ESI
007a89ff  MOV ESI,dword ptr [EBP + -0x20]
007a8a02  NOT ESI
007a8a04  AND ESI,dword ptr [EBP + 0xc]
007a8a07  ADD ESI,dword ptr [EBP + -0xc]
007a8a0a  IMUL ESI,dword ptr [EBP + -0x14]
007a8a0e  XOR EDX,ESI
007a8a10  AND EDX,dword ptr [EBP + -0x20]
007a8a13  XOR EDX,dword ptr [EBP + 0xc]
007a8a16  AND EDX,dword ptr [EBP + -0x20]
007a8a19  ADD EDX,dword ptr [EBP + -0x4]
007a8a1c  IMUL EDX,dword ptr [EBP + -0x28]
007a8a20  XOR ECX,EDX
007a8a22  MOV EDX,dword ptr [EBP + -0x20]
007a8a25  NOT EDX
007a8a27  AND EDX,dword ptr [EBP + 0xc]
007a8a2a  MOV ESI,dword ptr [EBP + -0x20]
007a8a2d  NOT ESI
007a8a2f  AND ESI,dword ptr [EBP + 0xc]
007a8a32  ADD ESI,dword ptr [EBP + -0x18]
007a8a35  IMUL ESI,dword ptr [EBP + -0x1c]
007a8a39  XOR EDX,ESI
007a8a3b  MOV ESI,dword ptr [EBP + -0x20]
007a8a3e  NOT ESI
007a8a40  AND ESI,dword ptr [EBP + 0xc]
007a8a43  ADD ESI,dword ptr [EBP + -0xc]
007a8a46  IMUL ESI,dword ptr [EBP + -0x14]
007a8a4a  XOR EDX,ESI
007a8a4c  AND EDX,dword ptr [EBP + -0x20]
007a8a4f  XOR EDX,dword ptr [EBP + 0xc]
007a8a52  AND EDX,dword ptr [EBP + -0x20]
007a8a55  ADD EDX,dword ptr [EBP + -0x24]
007a8a58  IMUL EDX,dword ptr [EBP + -0x8]
007a8a5c  XOR ECX,EDX
007a8a5e  MOV EDX,dword ptr [EBP + -0x20]
007a8a61  NOT EDX
007a8a63  AND ECX,EDX
007a8a65  XOR EAX,ECX
007a8a67  MOV dword ptr [EBP + -0x10],EAX
007a8a6a  PUSH EAX
007a8a6b  MOV EAX,0xcfcecdcc
007a8a70  MOV EAX,0x7a891d
007a8a75  MOV EAX,0x0
007a8a7a  MOV EAX,0x0
007a8a7f  MOV EAX,0xcecdcccb
007a8a84  POP EAX
007a8a85  MOV EAX,dword ptr [EBP + -0x10]
007a8a88  POP ESI
007a8a89  MOV ESP,EBP
007a8a8b  POP EBP
007a8a8c  RET
