006cc850  PUSH EBP
006cc851  MOV EBP,ESP
006cc853  SUB ESP,0x28
006cc856  PUSH ESI
006cc857  PUSH EAX
006cc858  MOV EAX,0xcfcecdcc
006cc85d  MOV EAX,0x6cc85d
006cc862  MOV EAX,0x1
006cc867  MOV EAX,0x0
006cc86c  MOV EAX,0xcfcecdcc
006cc871  POP EAX
006cc872  MOV EAX,dword ptr [EBP + 0x8]
006cc875  MOV ECX,dword ptr [EAX + 0x14]
006cc878  MOV dword ptr [EBP + -0x20],ECX
006cc87b  MOV EDX,dword ptr [EBP + 0x8]
006cc87e  MOV EAX,dword ptr [EDX + 0x18]
006cc881  MOV dword ptr [EBP + -0x1c],EAX
006cc884  MOV ECX,dword ptr [EBP + 0x8]
006cc887  MOV EDX,dword ptr [ECX + 0x1c]
006cc88a  MOV dword ptr [EBP + -0x18],EDX
006cc88d  MOV EAX,dword ptr [EBP + 0x8]
006cc890  MOV ECX,dword ptr [EAX + 0x20]
006cc893  MOV dword ptr [EBP + -0x14],ECX
006cc896  MOV EDX,dword ptr [EBP + 0x8]
006cc899  MOV EAX,dword ptr [EDX + 0x24]
006cc89c  MOV dword ptr [EBP + -0xc],EAX
006cc89f  MOV ECX,dword ptr [EBP + 0x8]
006cc8a2  MOV EDX,dword ptr [ECX + 0x28]
006cc8a5  MOV dword ptr [EBP + -0x4],EDX
006cc8a8  MOV EAX,dword ptr [EBP + 0x8]
006cc8ab  MOV ECX,dword ptr [EAX + 0x2c]
006cc8ae  MOV dword ptr [EBP + -0x28],ECX
006cc8b1  MOV EDX,dword ptr [EBP + 0x8]
006cc8b4  MOV EAX,dword ptr [EDX + 0x30]
006cc8b7  MOV dword ptr [EBP + -0x24],EAX
006cc8ba  MOV ECX,dword ptr [EBP + 0x8]
006cc8bd  MOV EDX,dword ptr [ECX + 0x34]
006cc8c0  MOV dword ptr [EBP + -0x8],EDX
006cc8c3  MOV EAX,dword ptr [EBP + -0x20]
006cc8c6  NOT EAX
006cc8c8  AND EAX,dword ptr [EBP + 0xc]
006cc8cb  MOV ECX,dword ptr [EBP + -0x20]
006cc8ce  NOT ECX
006cc8d0  AND ECX,dword ptr [EBP + 0xc]
006cc8d3  ADD ECX,dword ptr [EBP + -0x18]
006cc8d6  IMUL ECX,dword ptr [EBP + -0x1c]
006cc8da  XOR EAX,ECX
006cc8dc  MOV EDX,dword ptr [EBP + -0x20]
006cc8df  NOT EDX
006cc8e1  AND EDX,dword ptr [EBP + 0xc]
006cc8e4  ADD EDX,dword ptr [EBP + -0xc]
006cc8e7  IMUL EDX,dword ptr [EBP + -0x14]
006cc8eb  XOR EAX,EDX
006cc8ed  AND EAX,dword ptr [EBP + -0x20]
006cc8f0  XOR EAX,dword ptr [EBP + 0xc]
006cc8f3  MOV ECX,dword ptr [EBP + -0x20]
006cc8f6  NOT ECX
006cc8f8  AND ECX,dword ptr [EBP + 0xc]
006cc8fb  MOV EDX,dword ptr [EBP + -0x20]
006cc8fe  NOT EDX
006cc900  AND EDX,dword ptr [EBP + 0xc]
006cc903  ADD EDX,dword ptr [EBP + -0x18]
006cc906  IMUL EDX,dword ptr [EBP + -0x1c]
006cc90a  XOR ECX,EDX
006cc90c  MOV EDX,dword ptr [EBP + -0x20]
006cc90f  NOT EDX
006cc911  AND EDX,dword ptr [EBP + 0xc]
006cc914  ADD EDX,dword ptr [EBP + -0xc]
006cc917  IMUL EDX,dword ptr [EBP + -0x14]
006cc91b  XOR ECX,EDX
006cc91d  AND ECX,dword ptr [EBP + -0x20]
006cc920  XOR ECX,dword ptr [EBP + 0xc]
006cc923  AND ECX,dword ptr [EBP + -0x20]
006cc926  MOV EDX,dword ptr [EBP + -0x20]
006cc929  NOT EDX
006cc92b  AND EDX,dword ptr [EBP + 0xc]
006cc92e  MOV ESI,dword ptr [EBP + -0x20]
006cc931  NOT ESI
006cc933  AND ESI,dword ptr [EBP + 0xc]
006cc936  ADD ESI,dword ptr [EBP + -0x18]
006cc939  IMUL ESI,dword ptr [EBP + -0x1c]
006cc93d  XOR EDX,ESI
006cc93f  MOV ESI,dword ptr [EBP + -0x20]
006cc942  NOT ESI
006cc944  AND ESI,dword ptr [EBP + 0xc]
006cc947  ADD ESI,dword ptr [EBP + -0xc]
006cc94a  IMUL ESI,dword ptr [EBP + -0x14]
006cc94e  XOR EDX,ESI
006cc950  AND EDX,dword ptr [EBP + -0x20]
006cc953  XOR EDX,dword ptr [EBP + 0xc]
006cc956  AND EDX,dword ptr [EBP + -0x20]
006cc959  ADD EDX,dword ptr [EBP + -0x4]
006cc95c  IMUL EDX,dword ptr [EBP + -0x28]
006cc960  XOR ECX,EDX
006cc962  MOV EDX,dword ptr [EBP + -0x20]
006cc965  NOT EDX
006cc967  AND EDX,dword ptr [EBP + 0xc]
006cc96a  MOV ESI,dword ptr [EBP + -0x20]
006cc96d  NOT ESI
006cc96f  AND ESI,dword ptr [EBP + 0xc]
006cc972  ADD ESI,dword ptr [EBP + -0x18]
006cc975  IMUL ESI,dword ptr [EBP + -0x1c]
006cc979  XOR EDX,ESI
006cc97b  MOV ESI,dword ptr [EBP + -0x20]
006cc97e  NOT ESI
006cc980  AND ESI,dword ptr [EBP + 0xc]
006cc983  ADD ESI,dword ptr [EBP + -0xc]
006cc986  IMUL ESI,dword ptr [EBP + -0x14]
006cc98a  XOR EDX,ESI
006cc98c  AND EDX,dword ptr [EBP + -0x20]
006cc98f  XOR EDX,dword ptr [EBP + 0xc]
006cc992  AND EDX,dword ptr [EBP + -0x20]
006cc995  ADD EDX,dword ptr [EBP + -0x24]
006cc998  IMUL EDX,dword ptr [EBP + -0x8]
006cc99c  XOR ECX,EDX
006cc99e  MOV EDX,dword ptr [EBP + -0x20]
006cc9a1  NOT EDX
006cc9a3  AND ECX,EDX
006cc9a5  XOR EAX,ECX
006cc9a7  MOV dword ptr [EBP + -0x10],EAX
006cc9aa  PUSH EAX
006cc9ab  MOV EAX,0xcfcecdcc
006cc9b0  MOV EAX,0x6cc85d
006cc9b5  MOV EAX,0x0
006cc9ba  MOV EAX,0x0
006cc9bf  MOV EAX,0xcecdcccb
006cc9c4  POP EAX
006cc9c5  MOV EAX,dword ptr [EBP + -0x10]
006cc9c8  POP ESI
006cc9c9  MOV ESP,EBP
006cc9cb  POP EBP
006cc9cc  RET
