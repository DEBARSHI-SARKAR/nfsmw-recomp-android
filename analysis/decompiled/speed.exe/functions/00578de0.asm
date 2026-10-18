00578de0  PUSH EBP
00578de1  MOV EBP,ESP
00578de3  SUB ESP,0x28
00578de6  PUSH ESI
00578de7  PUSH EAX
00578de8  MOV EAX,0xcfcecdcc
00578ded  MOV EAX,0x578ded
00578df2  MOV EAX,0x1
00578df7  MOV EAX,0x0
00578dfc  MOV EAX,0xcfcecdcc
00578e01  POP EAX
00578e02  MOV EAX,dword ptr [EBP + 0x8]
00578e05  MOV ECX,dword ptr [EAX + 0x14]
00578e08  MOV dword ptr [EBP + -0x20],ECX
00578e0b  MOV EDX,dword ptr [EBP + 0x8]
00578e0e  MOV EAX,dword ptr [EDX + 0x18]
00578e11  MOV dword ptr [EBP + -0x1c],EAX
00578e14  MOV ECX,dword ptr [EBP + 0x8]
00578e17  MOV EDX,dword ptr [ECX + 0x1c]
00578e1a  MOV dword ptr [EBP + -0x18],EDX
00578e1d  MOV EAX,dword ptr [EBP + 0x8]
00578e20  MOV ECX,dword ptr [EAX + 0x20]
00578e23  MOV dword ptr [EBP + -0x14],ECX
00578e26  MOV EDX,dword ptr [EBP + 0x8]
00578e29  MOV EAX,dword ptr [EDX + 0x24]
00578e2c  MOV dword ptr [EBP + -0xc],EAX
00578e2f  MOV ECX,dword ptr [EBP + 0x8]
00578e32  MOV EDX,dword ptr [ECX + 0x28]
00578e35  MOV dword ptr [EBP + -0x4],EDX
00578e38  MOV EAX,dword ptr [EBP + 0x8]
00578e3b  MOV ECX,dword ptr [EAX + 0x2c]
00578e3e  MOV dword ptr [EBP + -0x28],ECX
00578e41  MOV EDX,dword ptr [EBP + 0x8]
00578e44  MOV EAX,dword ptr [EDX + 0x30]
00578e47  MOV dword ptr [EBP + -0x24],EAX
00578e4a  MOV ECX,dword ptr [EBP + 0x8]
00578e4d  MOV EDX,dword ptr [ECX + 0x34]
00578e50  MOV dword ptr [EBP + -0x8],EDX
00578e53  MOV EAX,dword ptr [EBP + 0xc]
00578e56  AND EAX,dword ptr [EBP + -0x20]
00578e59  MOV ECX,dword ptr [EBP + 0xc]
00578e5c  AND ECX,dword ptr [EBP + -0x20]
00578e5f  ADD ECX,dword ptr [EBP + -0x4]
00578e62  IMUL ECX,dword ptr [EBP + -0x28]
00578e66  XOR EAX,ECX
00578e68  MOV EDX,dword ptr [EBP + 0xc]
00578e6b  AND EDX,dword ptr [EBP + -0x20]
00578e6e  ADD EDX,dword ptr [EBP + -0x24]
00578e71  IMUL EDX,dword ptr [EBP + -0x8]
00578e75  XOR EAX,EDX
00578e77  MOV ECX,dword ptr [EBP + -0x20]
00578e7a  NOT ECX
00578e7c  AND EAX,ECX
00578e7e  XOR EAX,dword ptr [EBP + 0xc]
00578e81  MOV EDX,dword ptr [EBP + 0xc]
00578e84  AND EDX,dword ptr [EBP + -0x20]
00578e87  MOV ECX,dword ptr [EBP + 0xc]
00578e8a  AND ECX,dword ptr [EBP + -0x20]
00578e8d  ADD ECX,dword ptr [EBP + -0x4]
00578e90  IMUL ECX,dword ptr [EBP + -0x28]
00578e94  XOR EDX,ECX
00578e96  MOV ECX,dword ptr [EBP + 0xc]
00578e99  AND ECX,dword ptr [EBP + -0x20]
00578e9c  ADD ECX,dword ptr [EBP + -0x24]
00578e9f  IMUL ECX,dword ptr [EBP + -0x8]
00578ea3  XOR EDX,ECX
00578ea5  MOV ECX,dword ptr [EBP + -0x20]
00578ea8  NOT ECX
00578eaa  AND EDX,ECX
00578eac  XOR EDX,dword ptr [EBP + 0xc]
00578eaf  MOV ECX,dword ptr [EBP + -0x20]
00578eb2  NOT ECX
00578eb4  AND EDX,ECX
00578eb6  MOV ECX,dword ptr [EBP + 0xc]
00578eb9  AND ECX,dword ptr [EBP + -0x20]
00578ebc  MOV ESI,dword ptr [EBP + 0xc]
00578ebf  AND ESI,dword ptr [EBP + -0x20]
00578ec2  ADD ESI,dword ptr [EBP + -0x4]
00578ec5  IMUL ESI,dword ptr [EBP + -0x28]
00578ec9  XOR ECX,ESI
00578ecb  MOV ESI,dword ptr [EBP + 0xc]
00578ece  AND ESI,dword ptr [EBP + -0x20]
00578ed1  ADD ESI,dword ptr [EBP + -0x24]
00578ed4  IMUL ESI,dword ptr [EBP + -0x8]
00578ed8  XOR ECX,ESI
00578eda  MOV ESI,dword ptr [EBP + -0x20]
00578edd  NOT ESI
00578edf  AND ECX,ESI
00578ee1  XOR ECX,dword ptr [EBP + 0xc]
00578ee4  MOV ESI,dword ptr [EBP + -0x20]
00578ee7  NOT ESI
00578ee9  AND ECX,ESI
00578eeb  ADD ECX,dword ptr [EBP + -0x18]
00578eee  IMUL ECX,dword ptr [EBP + -0x1c]
00578ef2  XOR EDX,ECX
00578ef4  MOV ECX,dword ptr [EBP + 0xc]
00578ef7  AND ECX,dword ptr [EBP + -0x20]
00578efa  MOV ESI,dword ptr [EBP + 0xc]
00578efd  AND ESI,dword ptr [EBP + -0x20]
00578f00  ADD ESI,dword ptr [EBP + -0x4]
00578f03  IMUL ESI,dword ptr [EBP + -0x28]
00578f07  XOR ECX,ESI
00578f09  MOV ESI,dword ptr [EBP + 0xc]
00578f0c  AND ESI,dword ptr [EBP + -0x20]
00578f0f  ADD ESI,dword ptr [EBP + -0x24]
00578f12  IMUL ESI,dword ptr [EBP + -0x8]
00578f16  XOR ECX,ESI
00578f18  MOV ESI,dword ptr [EBP + -0x20]
00578f1b  NOT ESI
00578f1d  AND ECX,ESI
00578f1f  XOR ECX,dword ptr [EBP + 0xc]
00578f22  MOV ESI,dword ptr [EBP + -0x20]
00578f25  NOT ESI
00578f27  AND ECX,ESI
00578f29  ADD ECX,dword ptr [EBP + -0xc]
00578f2c  IMUL ECX,dword ptr [EBP + -0x14]
00578f30  XOR EDX,ECX
00578f32  AND EDX,dword ptr [EBP + -0x20]
00578f35  XOR EAX,EDX
00578f37  MOV dword ptr [EBP + -0x10],EAX
00578f3a  PUSH EAX
00578f3b  MOV EAX,0xcfcecdcc
00578f40  MOV EAX,0x578ded
00578f45  MOV EAX,0x0
00578f4a  MOV EAX,0x0
00578f4f  MOV EAX,0xcecdcccb
00578f54  POP EAX
00578f55  MOV EAX,dword ptr [EBP + -0x10]
00578f58  POP ESI
00578f59  MOV ESP,EBP
00578f5b  POP EBP
00578f5c  RET
