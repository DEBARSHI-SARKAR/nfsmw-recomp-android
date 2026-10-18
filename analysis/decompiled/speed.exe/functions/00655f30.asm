00655f30  PUSH EBP
00655f31  MOV EBP,ESP
00655f33  SUB ESP,0x28
00655f36  PUSH ESI
00655f37  PUSH EAX
00655f38  MOV EAX,0xcfcecdcc
00655f3d  MOV EAX,0x655f3d
00655f42  MOV EAX,0x1
00655f47  MOV EAX,0x0
00655f4c  MOV EAX,0xcfcecdcc
00655f51  POP EAX
00655f52  MOV EAX,dword ptr [EBP + 0x8]
00655f55  MOV ECX,dword ptr [EAX + 0x14]
00655f58  MOV dword ptr [EBP + -0x20],ECX
00655f5b  MOV EDX,dword ptr [EBP + 0x8]
00655f5e  MOV EAX,dword ptr [EDX + 0x18]
00655f61  MOV dword ptr [EBP + -0x1c],EAX
00655f64  MOV ECX,dword ptr [EBP + 0x8]
00655f67  MOV EDX,dword ptr [ECX + 0x1c]
00655f6a  MOV dword ptr [EBP + -0x18],EDX
00655f6d  MOV EAX,dword ptr [EBP + 0x8]
00655f70  MOV ECX,dword ptr [EAX + 0x20]
00655f73  MOV dword ptr [EBP + -0x14],ECX
00655f76  MOV EDX,dword ptr [EBP + 0x8]
00655f79  MOV EAX,dword ptr [EDX + 0x24]
00655f7c  MOV dword ptr [EBP + -0xc],EAX
00655f7f  MOV ECX,dword ptr [EBP + 0x8]
00655f82  MOV EDX,dword ptr [ECX + 0x28]
00655f85  MOV dword ptr [EBP + -0x4],EDX
00655f88  MOV EAX,dword ptr [EBP + 0x8]
00655f8b  MOV ECX,dword ptr [EAX + 0x2c]
00655f8e  MOV dword ptr [EBP + -0x28],ECX
00655f91  MOV EDX,dword ptr [EBP + 0x8]
00655f94  MOV EAX,dword ptr [EDX + 0x30]
00655f97  MOV dword ptr [EBP + -0x24],EAX
00655f9a  MOV ECX,dword ptr [EBP + 0x8]
00655f9d  MOV EDX,dword ptr [ECX + 0x34]
00655fa0  MOV dword ptr [EBP + -0x8],EDX
00655fa3  MOV EAX,dword ptr [EBP + 0xc]
00655fa6  AND EAX,dword ptr [EBP + -0x20]
00655fa9  MOV ECX,dword ptr [EBP + 0xc]
00655fac  AND ECX,dword ptr [EBP + -0x20]
00655faf  ADD ECX,dword ptr [EBP + -0x4]
00655fb2  IMUL ECX,dword ptr [EBP + -0x28]
00655fb6  XOR EAX,ECX
00655fb8  MOV EDX,dword ptr [EBP + 0xc]
00655fbb  AND EDX,dword ptr [EBP + -0x20]
00655fbe  ADD EDX,dword ptr [EBP + -0x24]
00655fc1  IMUL EDX,dword ptr [EBP + -0x8]
00655fc5  XOR EAX,EDX
00655fc7  MOV ECX,dword ptr [EBP + -0x20]
00655fca  NOT ECX
00655fcc  AND EAX,ECX
00655fce  XOR EAX,dword ptr [EBP + 0xc]
00655fd1  MOV EDX,dword ptr [EBP + 0xc]
00655fd4  AND EDX,dword ptr [EBP + -0x20]
00655fd7  MOV ECX,dword ptr [EBP + 0xc]
00655fda  AND ECX,dword ptr [EBP + -0x20]
00655fdd  ADD ECX,dword ptr [EBP + -0x4]
00655fe0  IMUL ECX,dword ptr [EBP + -0x28]
00655fe4  XOR EDX,ECX
00655fe6  MOV ECX,dword ptr [EBP + 0xc]
00655fe9  AND ECX,dword ptr [EBP + -0x20]
00655fec  ADD ECX,dword ptr [EBP + -0x24]
00655fef  IMUL ECX,dword ptr [EBP + -0x8]
00655ff3  XOR EDX,ECX
00655ff5  MOV ECX,dword ptr [EBP + -0x20]
00655ff8  NOT ECX
00655ffa  AND EDX,ECX
00655ffc  XOR EDX,dword ptr [EBP + 0xc]
00655fff  MOV ECX,dword ptr [EBP + -0x20]
00656002  NOT ECX
00656004  AND EDX,ECX
00656006  MOV ECX,dword ptr [EBP + 0xc]
00656009  AND ECX,dword ptr [EBP + -0x20]
0065600c  MOV ESI,dword ptr [EBP + 0xc]
0065600f  AND ESI,dword ptr [EBP + -0x20]
00656012  ADD ESI,dword ptr [EBP + -0x4]
00656015  IMUL ESI,dword ptr [EBP + -0x28]
00656019  XOR ECX,ESI
0065601b  MOV ESI,dword ptr [EBP + 0xc]
0065601e  AND ESI,dword ptr [EBP + -0x20]
00656021  ADD ESI,dword ptr [EBP + -0x24]
00656024  IMUL ESI,dword ptr [EBP + -0x8]
00656028  XOR ECX,ESI
0065602a  MOV ESI,dword ptr [EBP + -0x20]
0065602d  NOT ESI
0065602f  AND ECX,ESI
00656031  XOR ECX,dword ptr [EBP + 0xc]
00656034  MOV ESI,dword ptr [EBP + -0x20]
00656037  NOT ESI
00656039  AND ECX,ESI
0065603b  ADD ECX,dword ptr [EBP + -0x18]
0065603e  IMUL ECX,dword ptr [EBP + -0x1c]
00656042  XOR EDX,ECX
00656044  MOV ECX,dword ptr [EBP + 0xc]
00656047  AND ECX,dword ptr [EBP + -0x20]
0065604a  MOV ESI,dword ptr [EBP + 0xc]
0065604d  AND ESI,dword ptr [EBP + -0x20]
00656050  ADD ESI,dword ptr [EBP + -0x4]
00656053  IMUL ESI,dword ptr [EBP + -0x28]
00656057  XOR ECX,ESI
00656059  MOV ESI,dword ptr [EBP + 0xc]
0065605c  AND ESI,dword ptr [EBP + -0x20]
0065605f  ADD ESI,dword ptr [EBP + -0x24]
00656062  IMUL ESI,dword ptr [EBP + -0x8]
00656066  XOR ECX,ESI
00656068  MOV ESI,dword ptr [EBP + -0x20]
0065606b  NOT ESI
0065606d  AND ECX,ESI
0065606f  XOR ECX,dword ptr [EBP + 0xc]
00656072  MOV ESI,dword ptr [EBP + -0x20]
00656075  NOT ESI
00656077  AND ECX,ESI
00656079  ADD ECX,dword ptr [EBP + -0xc]
0065607c  IMUL ECX,dword ptr [EBP + -0x14]
00656080  XOR EDX,ECX
00656082  AND EDX,dword ptr [EBP + -0x20]
00656085  XOR EAX,EDX
00656087  MOV dword ptr [EBP + -0x10],EAX
0065608a  PUSH EAX
0065608b  MOV EAX,0xcfcecdcc
00656090  MOV EAX,0x655f3d
00656095  MOV EAX,0x0
0065609a  MOV EAX,0x0
0065609f  MOV EAX,0xcecdcccb
006560a4  POP EAX
006560a5  MOV EAX,dword ptr [EBP + -0x10]
006560a8  POP ESI
006560a9  MOV ESP,EBP
006560ab  POP EBP
006560ac  RET
