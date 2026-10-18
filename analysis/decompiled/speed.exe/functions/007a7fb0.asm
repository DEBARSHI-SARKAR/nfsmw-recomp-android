007a7fb0  PUSH EBP
007a7fb1  MOV EBP,ESP
007a7fb3  SUB ESP,0x28
007a7fb6  PUSH ESI
007a7fb7  PUSH EAX
007a7fb8  MOV EAX,0xcfcecdcc
007a7fbd  MOV EAX,0x7a7fbd
007a7fc2  MOV EAX,0x1
007a7fc7  MOV EAX,0x0
007a7fcc  MOV EAX,0xcfcecdcc
007a7fd1  POP EAX
007a7fd2  MOV EAX,dword ptr [EBP + 0x8]
007a7fd5  MOV ECX,dword ptr [EAX + 0x14]
007a7fd8  MOV dword ptr [EBP + -0x20],ECX
007a7fdb  MOV EDX,dword ptr [EBP + 0x8]
007a7fde  MOV EAX,dword ptr [EDX + 0x18]
007a7fe1  MOV dword ptr [EBP + -0x1c],EAX
007a7fe4  MOV ECX,dword ptr [EBP + 0x8]
007a7fe7  MOV EDX,dword ptr [ECX + 0x1c]
007a7fea  MOV dword ptr [EBP + -0x18],EDX
007a7fed  MOV EAX,dword ptr [EBP + 0x8]
007a7ff0  MOV ECX,dword ptr [EAX + 0x20]
007a7ff3  MOV dword ptr [EBP + -0x14],ECX
007a7ff6  MOV EDX,dword ptr [EBP + 0x8]
007a7ff9  MOV EAX,dword ptr [EDX + 0x24]
007a7ffc  MOV dword ptr [EBP + -0xc],EAX
007a7fff  MOV ECX,dword ptr [EBP + 0x8]
007a8002  MOV EDX,dword ptr [ECX + 0x28]
007a8005  MOV dword ptr [EBP + -0x4],EDX
007a8008  MOV EAX,dword ptr [EBP + 0x8]
007a800b  MOV ECX,dword ptr [EAX + 0x2c]
007a800e  MOV dword ptr [EBP + -0x28],ECX
007a8011  MOV EDX,dword ptr [EBP + 0x8]
007a8014  MOV EAX,dword ptr [EDX + 0x30]
007a8017  MOV dword ptr [EBP + -0x24],EAX
007a801a  MOV ECX,dword ptr [EBP + 0x8]
007a801d  MOV EDX,dword ptr [ECX + 0x34]
007a8020  MOV dword ptr [EBP + -0x8],EDX
007a8023  MOV EAX,dword ptr [EBP + -0x20]
007a8026  NOT EAX
007a8028  AND EAX,dword ptr [EBP + 0xc]
007a802b  MOV ECX,dword ptr [EBP + -0x20]
007a802e  NOT ECX
007a8030  AND ECX,dword ptr [EBP + 0xc]
007a8033  ADD ECX,dword ptr [EBP + -0x18]
007a8036  IMUL ECX,dword ptr [EBP + -0x1c]
007a803a  XOR EAX,ECX
007a803c  MOV EDX,dword ptr [EBP + -0x20]
007a803f  NOT EDX
007a8041  AND EDX,dword ptr [EBP + 0xc]
007a8044  ADD EDX,dword ptr [EBP + -0xc]
007a8047  IMUL EDX,dword ptr [EBP + -0x14]
007a804b  XOR EAX,EDX
007a804d  AND EAX,dword ptr [EBP + -0x20]
007a8050  XOR EAX,dword ptr [EBP + 0xc]
007a8053  MOV ECX,dword ptr [EBP + -0x20]
007a8056  NOT ECX
007a8058  AND ECX,dword ptr [EBP + 0xc]
007a805b  MOV EDX,dword ptr [EBP + -0x20]
007a805e  NOT EDX
007a8060  AND EDX,dword ptr [EBP + 0xc]
007a8063  ADD EDX,dword ptr [EBP + -0x18]
007a8066  IMUL EDX,dword ptr [EBP + -0x1c]
007a806a  XOR ECX,EDX
007a806c  MOV EDX,dword ptr [EBP + -0x20]
007a806f  NOT EDX
007a8071  AND EDX,dword ptr [EBP + 0xc]
007a8074  ADD EDX,dword ptr [EBP + -0xc]
007a8077  IMUL EDX,dword ptr [EBP + -0x14]
007a807b  XOR ECX,EDX
007a807d  AND ECX,dword ptr [EBP + -0x20]
007a8080  XOR ECX,dword ptr [EBP + 0xc]
007a8083  AND ECX,dword ptr [EBP + -0x20]
007a8086  MOV EDX,dword ptr [EBP + -0x20]
007a8089  NOT EDX
007a808b  AND EDX,dword ptr [EBP + 0xc]
007a808e  MOV ESI,dword ptr [EBP + -0x20]
007a8091  NOT ESI
007a8093  AND ESI,dword ptr [EBP + 0xc]
007a8096  ADD ESI,dword ptr [EBP + -0x18]
007a8099  IMUL ESI,dword ptr [EBP + -0x1c]
007a809d  XOR EDX,ESI
007a809f  MOV ESI,dword ptr [EBP + -0x20]
007a80a2  NOT ESI
007a80a4  AND ESI,dword ptr [EBP + 0xc]
007a80a7  ADD ESI,dword ptr [EBP + -0xc]
007a80aa  IMUL ESI,dword ptr [EBP + -0x14]
007a80ae  XOR EDX,ESI
007a80b0  AND EDX,dword ptr [EBP + -0x20]
007a80b3  XOR EDX,dword ptr [EBP + 0xc]
007a80b6  AND EDX,dword ptr [EBP + -0x20]
007a80b9  ADD EDX,dword ptr [EBP + -0x4]
007a80bc  IMUL EDX,dword ptr [EBP + -0x28]
007a80c0  XOR ECX,EDX
007a80c2  MOV EDX,dword ptr [EBP + -0x20]
007a80c5  NOT EDX
007a80c7  AND EDX,dword ptr [EBP + 0xc]
007a80ca  MOV ESI,dword ptr [EBP + -0x20]
007a80cd  NOT ESI
007a80cf  AND ESI,dword ptr [EBP + 0xc]
007a80d2  ADD ESI,dword ptr [EBP + -0x18]
007a80d5  IMUL ESI,dword ptr [EBP + -0x1c]
007a80d9  XOR EDX,ESI
007a80db  MOV ESI,dword ptr [EBP + -0x20]
007a80de  NOT ESI
007a80e0  AND ESI,dword ptr [EBP + 0xc]
007a80e3  ADD ESI,dword ptr [EBP + -0xc]
007a80e6  IMUL ESI,dword ptr [EBP + -0x14]
007a80ea  XOR EDX,ESI
007a80ec  AND EDX,dword ptr [EBP + -0x20]
007a80ef  XOR EDX,dword ptr [EBP + 0xc]
007a80f2  AND EDX,dword ptr [EBP + -0x20]
007a80f5  ADD EDX,dword ptr [EBP + -0x24]
007a80f8  IMUL EDX,dword ptr [EBP + -0x8]
007a80fc  XOR ECX,EDX
007a80fe  MOV EDX,dword ptr [EBP + -0x20]
007a8101  NOT EDX
007a8103  AND ECX,EDX
007a8105  XOR EAX,ECX
007a8107  MOV dword ptr [EBP + -0x10],EAX
007a810a  PUSH EAX
007a810b  MOV EAX,0xcfcecdcc
007a8110  MOV EAX,0x7a7fbd
007a8115  MOV EAX,0x0
007a811a  MOV EAX,0x0
007a811f  MOV EAX,0xcecdcccb
007a8124  POP EAX
007a8125  MOV EAX,dword ptr [EBP + -0x10]
007a8128  POP ESI
007a8129  MOV ESP,EBP
007a812b  POP EBP
007a812c  RET
