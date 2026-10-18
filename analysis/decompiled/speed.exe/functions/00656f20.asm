00656f20  PUSH EBP
00656f21  MOV EBP,ESP
00656f23  SUB ESP,0x28
00656f26  PUSH ESI
00656f27  PUSH EAX
00656f28  MOV EAX,0xcfcecdcc
00656f2d  MOV EAX,0x656f2d
00656f32  MOV EAX,0x1
00656f37  MOV EAX,0x0
00656f3c  MOV EAX,0xcfcecdcc
00656f41  POP EAX
00656f42  MOV EAX,dword ptr [EBP + 0x8]
00656f45  MOV ECX,dword ptr [EAX + 0x14]
00656f48  MOV dword ptr [EBP + -0x20],ECX
00656f4b  MOV EDX,dword ptr [EBP + 0x8]
00656f4e  MOV EAX,dword ptr [EDX + 0x18]
00656f51  MOV dword ptr [EBP + -0x1c],EAX
00656f54  MOV ECX,dword ptr [EBP + 0x8]
00656f57  MOV EDX,dword ptr [ECX + 0x1c]
00656f5a  MOV dword ptr [EBP + -0x18],EDX
00656f5d  MOV EAX,dword ptr [EBP + 0x8]
00656f60  MOV ECX,dword ptr [EAX + 0x20]
00656f63  MOV dword ptr [EBP + -0x14],ECX
00656f66  MOV EDX,dword ptr [EBP + 0x8]
00656f69  MOV EAX,dword ptr [EDX + 0x24]
00656f6c  MOV dword ptr [EBP + -0xc],EAX
00656f6f  MOV ECX,dword ptr [EBP + 0x8]
00656f72  MOV EDX,dword ptr [ECX + 0x28]
00656f75  MOV dword ptr [EBP + -0x4],EDX
00656f78  MOV EAX,dword ptr [EBP + 0x8]
00656f7b  MOV ECX,dword ptr [EAX + 0x2c]
00656f7e  MOV dword ptr [EBP + -0x28],ECX
00656f81  MOV EDX,dword ptr [EBP + 0x8]
00656f84  MOV EAX,dword ptr [EDX + 0x30]
00656f87  MOV dword ptr [EBP + -0x24],EAX
00656f8a  MOV ECX,dword ptr [EBP + 0x8]
00656f8d  MOV EDX,dword ptr [ECX + 0x34]
00656f90  MOV dword ptr [EBP + -0x8],EDX
00656f93  MOV EAX,dword ptr [EBP + 0xc]
00656f96  AND EAX,dword ptr [EBP + -0x20]
00656f99  MOV ECX,dword ptr [EBP + 0xc]
00656f9c  AND ECX,dword ptr [EBP + -0x20]
00656f9f  ADD ECX,dword ptr [EBP + -0x4]
00656fa2  IMUL ECX,dword ptr [EBP + -0x28]
00656fa6  XOR EAX,ECX
00656fa8  MOV EDX,dword ptr [EBP + 0xc]
00656fab  AND EDX,dword ptr [EBP + -0x20]
00656fae  ADD EDX,dword ptr [EBP + -0x24]
00656fb1  IMUL EDX,dword ptr [EBP + -0x8]
00656fb5  XOR EAX,EDX
00656fb7  MOV ECX,dword ptr [EBP + -0x20]
00656fba  NOT ECX
00656fbc  AND EAX,ECX
00656fbe  XOR EAX,dword ptr [EBP + 0xc]
00656fc1  MOV EDX,dword ptr [EBP + 0xc]
00656fc4  AND EDX,dword ptr [EBP + -0x20]
00656fc7  MOV ECX,dword ptr [EBP + 0xc]
00656fca  AND ECX,dword ptr [EBP + -0x20]
00656fcd  ADD ECX,dword ptr [EBP + -0x4]
00656fd0  IMUL ECX,dword ptr [EBP + -0x28]
00656fd4  XOR EDX,ECX
00656fd6  MOV ECX,dword ptr [EBP + 0xc]
00656fd9  AND ECX,dword ptr [EBP + -0x20]
00656fdc  ADD ECX,dword ptr [EBP + -0x24]
00656fdf  IMUL ECX,dword ptr [EBP + -0x8]
00656fe3  XOR EDX,ECX
00656fe5  MOV ECX,dword ptr [EBP + -0x20]
00656fe8  NOT ECX
00656fea  AND EDX,ECX
00656fec  XOR EDX,dword ptr [EBP + 0xc]
00656fef  MOV ECX,dword ptr [EBP + -0x20]
00656ff2  NOT ECX
00656ff4  AND EDX,ECX
00656ff6  MOV ECX,dword ptr [EBP + 0xc]
00656ff9  AND ECX,dword ptr [EBP + -0x20]
00656ffc  MOV ESI,dword ptr [EBP + 0xc]
00656fff  AND ESI,dword ptr [EBP + -0x20]
00657002  ADD ESI,dword ptr [EBP + -0x4]
00657005  IMUL ESI,dword ptr [EBP + -0x28]
00657009  XOR ECX,ESI
0065700b  MOV ESI,dword ptr [EBP + 0xc]
0065700e  AND ESI,dword ptr [EBP + -0x20]
00657011  ADD ESI,dword ptr [EBP + -0x24]
00657014  IMUL ESI,dword ptr [EBP + -0x8]
00657018  XOR ECX,ESI
0065701a  MOV ESI,dword ptr [EBP + -0x20]
0065701d  NOT ESI
0065701f  AND ECX,ESI
00657021  XOR ECX,dword ptr [EBP + 0xc]
00657024  MOV ESI,dword ptr [EBP + -0x20]
00657027  NOT ESI
00657029  AND ECX,ESI
0065702b  ADD ECX,dword ptr [EBP + -0x18]
0065702e  IMUL ECX,dword ptr [EBP + -0x1c]
00657032  XOR EDX,ECX
00657034  MOV ECX,dword ptr [EBP + 0xc]
00657037  AND ECX,dword ptr [EBP + -0x20]
0065703a  MOV ESI,dword ptr [EBP + 0xc]
0065703d  AND ESI,dword ptr [EBP + -0x20]
00657040  ADD ESI,dword ptr [EBP + -0x4]
00657043  IMUL ESI,dword ptr [EBP + -0x28]
00657047  XOR ECX,ESI
00657049  MOV ESI,dword ptr [EBP + 0xc]
0065704c  AND ESI,dword ptr [EBP + -0x20]
0065704f  ADD ESI,dword ptr [EBP + -0x24]
00657052  IMUL ESI,dword ptr [EBP + -0x8]
00657056  XOR ECX,ESI
00657058  MOV ESI,dword ptr [EBP + -0x20]
0065705b  NOT ESI
0065705d  AND ECX,ESI
0065705f  XOR ECX,dword ptr [EBP + 0xc]
00657062  MOV ESI,dword ptr [EBP + -0x20]
00657065  NOT ESI
00657067  AND ECX,ESI
00657069  ADD ECX,dword ptr [EBP + -0xc]
0065706c  IMUL ECX,dword ptr [EBP + -0x14]
00657070  XOR EDX,ECX
00657072  AND EDX,dword ptr [EBP + -0x20]
00657075  XOR EAX,EDX
00657077  MOV dword ptr [EBP + -0x10],EAX
0065707a  PUSH EAX
0065707b  MOV EAX,0xcfcecdcc
00657080  MOV EAX,0x656f2d
00657085  MOV EAX,0x0
0065708a  MOV EAX,0x0
0065708f  MOV EAX,0xcecdcccb
00657094  POP EAX
00657095  MOV EAX,dword ptr [EBP + -0x10]
00657098  POP ESI
00657099  MOV ESP,EBP
0065709b  POP EBP
0065709c  RET
