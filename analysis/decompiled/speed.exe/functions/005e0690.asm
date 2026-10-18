005e0690  PUSH EBP
005e0691  MOV EBP,ESP
005e0693  SUB ESP,0x28
005e0696  PUSH ESI
005e0697  PUSH EAX
005e0698  MOV EAX,0xcfcecdcc
005e069d  MOV EAX,0x5e069d
005e06a2  MOV EAX,0x1
005e06a7  MOV EAX,0x0
005e06ac  MOV EAX,0xcfcecdcc
005e06b1  POP EAX
005e06b2  MOV EAX,dword ptr [EBP + 0x8]
005e06b5  MOV ECX,dword ptr [EAX + 0x14]
005e06b8  MOV dword ptr [EBP + -0x20],ECX
005e06bb  MOV EDX,dword ptr [EBP + 0x8]
005e06be  MOV EAX,dword ptr [EDX + 0x18]
005e06c1  MOV dword ptr [EBP + -0x1c],EAX
005e06c4  MOV ECX,dword ptr [EBP + 0x8]
005e06c7  MOV EDX,dword ptr [ECX + 0x1c]
005e06ca  MOV dword ptr [EBP + -0x18],EDX
005e06cd  MOV EAX,dword ptr [EBP + 0x8]
005e06d0  MOV ECX,dword ptr [EAX + 0x20]
005e06d3  MOV dword ptr [EBP + -0x14],ECX
005e06d6  MOV EDX,dword ptr [EBP + 0x8]
005e06d9  MOV EAX,dword ptr [EDX + 0x24]
005e06dc  MOV dword ptr [EBP + -0xc],EAX
005e06df  MOV ECX,dword ptr [EBP + 0x8]
005e06e2  MOV EDX,dword ptr [ECX + 0x28]
005e06e5  MOV dword ptr [EBP + -0x4],EDX
005e06e8  MOV EAX,dword ptr [EBP + 0x8]
005e06eb  MOV ECX,dword ptr [EAX + 0x2c]
005e06ee  MOV dword ptr [EBP + -0x28],ECX
005e06f1  MOV EDX,dword ptr [EBP + 0x8]
005e06f4  MOV EAX,dword ptr [EDX + 0x30]
005e06f7  MOV dword ptr [EBP + -0x24],EAX
005e06fa  MOV ECX,dword ptr [EBP + 0x8]
005e06fd  MOV EDX,dword ptr [ECX + 0x34]
005e0700  MOV dword ptr [EBP + -0x8],EDX
005e0703  MOV EAX,dword ptr [EBP + 0xc]
005e0706  AND EAX,dword ptr [EBP + -0x20]
005e0709  MOV ECX,dword ptr [EBP + 0xc]
005e070c  AND ECX,dword ptr [EBP + -0x20]
005e070f  ADD ECX,dword ptr [EBP + -0x4]
005e0712  IMUL ECX,dword ptr [EBP + -0x28]
005e0716  XOR EAX,ECX
005e0718  MOV EDX,dword ptr [EBP + 0xc]
005e071b  AND EDX,dword ptr [EBP + -0x20]
005e071e  ADD EDX,dword ptr [EBP + -0x24]
005e0721  IMUL EDX,dword ptr [EBP + -0x8]
005e0725  XOR EAX,EDX
005e0727  MOV ECX,dword ptr [EBP + -0x20]
005e072a  NOT ECX
005e072c  AND EAX,ECX
005e072e  XOR EAX,dword ptr [EBP + 0xc]
005e0731  MOV EDX,dword ptr [EBP + 0xc]
005e0734  AND EDX,dword ptr [EBP + -0x20]
005e0737  MOV ECX,dword ptr [EBP + 0xc]
005e073a  AND ECX,dword ptr [EBP + -0x20]
005e073d  ADD ECX,dword ptr [EBP + -0x4]
005e0740  IMUL ECX,dword ptr [EBP + -0x28]
005e0744  XOR EDX,ECX
005e0746  MOV ECX,dword ptr [EBP + 0xc]
005e0749  AND ECX,dword ptr [EBP + -0x20]
005e074c  ADD ECX,dword ptr [EBP + -0x24]
005e074f  IMUL ECX,dword ptr [EBP + -0x8]
005e0753  XOR EDX,ECX
005e0755  MOV ECX,dword ptr [EBP + -0x20]
005e0758  NOT ECX
005e075a  AND EDX,ECX
005e075c  XOR EDX,dword ptr [EBP + 0xc]
005e075f  MOV ECX,dword ptr [EBP + -0x20]
005e0762  NOT ECX
005e0764  AND EDX,ECX
005e0766  MOV ECX,dword ptr [EBP + 0xc]
005e0769  AND ECX,dword ptr [EBP + -0x20]
005e076c  MOV ESI,dword ptr [EBP + 0xc]
005e076f  AND ESI,dword ptr [EBP + -0x20]
005e0772  ADD ESI,dword ptr [EBP + -0x4]
005e0775  IMUL ESI,dword ptr [EBP + -0x28]
005e0779  XOR ECX,ESI
005e077b  MOV ESI,dword ptr [EBP + 0xc]
005e077e  AND ESI,dword ptr [EBP + -0x20]
005e0781  ADD ESI,dword ptr [EBP + -0x24]
005e0784  IMUL ESI,dword ptr [EBP + -0x8]
005e0788  XOR ECX,ESI
005e078a  MOV ESI,dword ptr [EBP + -0x20]
005e078d  NOT ESI
005e078f  AND ECX,ESI
005e0791  XOR ECX,dword ptr [EBP + 0xc]
005e0794  MOV ESI,dword ptr [EBP + -0x20]
005e0797  NOT ESI
005e0799  AND ECX,ESI
005e079b  ADD ECX,dword ptr [EBP + -0x18]
005e079e  IMUL ECX,dword ptr [EBP + -0x1c]
005e07a2  XOR EDX,ECX
005e07a4  MOV ECX,dword ptr [EBP + 0xc]
005e07a7  AND ECX,dword ptr [EBP + -0x20]
005e07aa  MOV ESI,dword ptr [EBP + 0xc]
005e07ad  AND ESI,dword ptr [EBP + -0x20]
005e07b0  ADD ESI,dword ptr [EBP + -0x4]
005e07b3  IMUL ESI,dword ptr [EBP + -0x28]
005e07b7  XOR ECX,ESI
005e07b9  MOV ESI,dword ptr [EBP + 0xc]
005e07bc  AND ESI,dword ptr [EBP + -0x20]
005e07bf  ADD ESI,dword ptr [EBP + -0x24]
005e07c2  IMUL ESI,dword ptr [EBP + -0x8]
005e07c6  XOR ECX,ESI
005e07c8  MOV ESI,dword ptr [EBP + -0x20]
005e07cb  NOT ESI
005e07cd  AND ECX,ESI
005e07cf  XOR ECX,dword ptr [EBP + 0xc]
005e07d2  MOV ESI,dword ptr [EBP + -0x20]
005e07d5  NOT ESI
005e07d7  AND ECX,ESI
005e07d9  ADD ECX,dword ptr [EBP + -0xc]
005e07dc  IMUL ECX,dword ptr [EBP + -0x14]
005e07e0  XOR EDX,ECX
005e07e2  AND EDX,dword ptr [EBP + -0x20]
005e07e5  XOR EAX,EDX
005e07e7  MOV dword ptr [EBP + -0x10],EAX
005e07ea  PUSH EAX
005e07eb  MOV EAX,0xcfcecdcc
005e07f0  MOV EAX,0x5e069d
005e07f5  MOV EAX,0x0
005e07fa  MOV EAX,0x0
005e07ff  MOV EAX,0xcecdcccb
005e0804  POP EAX
005e0805  MOV EAX,dword ptr [EBP + -0x10]
005e0808  POP ESI
005e0809  MOV ESP,EBP
005e080b  POP EBP
005e080c  RET
