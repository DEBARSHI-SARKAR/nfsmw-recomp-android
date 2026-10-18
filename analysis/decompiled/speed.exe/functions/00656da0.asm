00656da0  PUSH EBP
00656da1  MOV EBP,ESP
00656da3  SUB ESP,0x28
00656da6  PUSH ESI
00656da7  PUSH EAX
00656da8  MOV EAX,0xcfcecdcc
00656dad  MOV EAX,0x656dad
00656db2  MOV EAX,0x1
00656db7  MOV EAX,0x0
00656dbc  MOV EAX,0xcfcecdcc
00656dc1  POP EAX
00656dc2  MOV EAX,dword ptr [EBP + 0x8]
00656dc5  MOV ECX,dword ptr [EAX + 0x14]
00656dc8  MOV dword ptr [EBP + -0x20],ECX
00656dcb  MOV EDX,dword ptr [EBP + 0x8]
00656dce  MOV EAX,dword ptr [EDX + 0x18]
00656dd1  MOV dword ptr [EBP + -0x1c],EAX
00656dd4  MOV ECX,dword ptr [EBP + 0x8]
00656dd7  MOV EDX,dword ptr [ECX + 0x1c]
00656dda  MOV dword ptr [EBP + -0x18],EDX
00656ddd  MOV EAX,dword ptr [EBP + 0x8]
00656de0  MOV ECX,dword ptr [EAX + 0x20]
00656de3  MOV dword ptr [EBP + -0x14],ECX
00656de6  MOV EDX,dword ptr [EBP + 0x8]
00656de9  MOV EAX,dword ptr [EDX + 0x24]
00656dec  MOV dword ptr [EBP + -0xc],EAX
00656def  MOV ECX,dword ptr [EBP + 0x8]
00656df2  MOV EDX,dword ptr [ECX + 0x28]
00656df5  MOV dword ptr [EBP + -0x4],EDX
00656df8  MOV EAX,dword ptr [EBP + 0x8]
00656dfb  MOV ECX,dword ptr [EAX + 0x2c]
00656dfe  MOV dword ptr [EBP + -0x28],ECX
00656e01  MOV EDX,dword ptr [EBP + 0x8]
00656e04  MOV EAX,dword ptr [EDX + 0x30]
00656e07  MOV dword ptr [EBP + -0x24],EAX
00656e0a  MOV ECX,dword ptr [EBP + 0x8]
00656e0d  MOV EDX,dword ptr [ECX + 0x34]
00656e10  MOV dword ptr [EBP + -0x8],EDX
00656e13  MOV EAX,dword ptr [EBP + -0x20]
00656e16  NOT EAX
00656e18  AND EAX,dword ptr [EBP + 0xc]
00656e1b  MOV ECX,dword ptr [EBP + -0x20]
00656e1e  NOT ECX
00656e20  AND ECX,dword ptr [EBP + 0xc]
00656e23  ADD ECX,dword ptr [EBP + -0x18]
00656e26  IMUL ECX,dword ptr [EBP + -0x1c]
00656e2a  XOR EAX,ECX
00656e2c  MOV EDX,dword ptr [EBP + -0x20]
00656e2f  NOT EDX
00656e31  AND EDX,dword ptr [EBP + 0xc]
00656e34  ADD EDX,dword ptr [EBP + -0xc]
00656e37  IMUL EDX,dword ptr [EBP + -0x14]
00656e3b  XOR EAX,EDX
00656e3d  AND EAX,dword ptr [EBP + -0x20]
00656e40  XOR EAX,dword ptr [EBP + 0xc]
00656e43  MOV ECX,dword ptr [EBP + -0x20]
00656e46  NOT ECX
00656e48  AND ECX,dword ptr [EBP + 0xc]
00656e4b  MOV EDX,dword ptr [EBP + -0x20]
00656e4e  NOT EDX
00656e50  AND EDX,dword ptr [EBP + 0xc]
00656e53  ADD EDX,dword ptr [EBP + -0x18]
00656e56  IMUL EDX,dword ptr [EBP + -0x1c]
00656e5a  XOR ECX,EDX
00656e5c  MOV EDX,dword ptr [EBP + -0x20]
00656e5f  NOT EDX
00656e61  AND EDX,dword ptr [EBP + 0xc]
00656e64  ADD EDX,dword ptr [EBP + -0xc]
00656e67  IMUL EDX,dword ptr [EBP + -0x14]
00656e6b  XOR ECX,EDX
00656e6d  AND ECX,dword ptr [EBP + -0x20]
00656e70  XOR ECX,dword ptr [EBP + 0xc]
00656e73  AND ECX,dword ptr [EBP + -0x20]
00656e76  MOV EDX,dword ptr [EBP + -0x20]
00656e79  NOT EDX
00656e7b  AND EDX,dword ptr [EBP + 0xc]
00656e7e  MOV ESI,dword ptr [EBP + -0x20]
00656e81  NOT ESI
00656e83  AND ESI,dword ptr [EBP + 0xc]
00656e86  ADD ESI,dword ptr [EBP + -0x18]
00656e89  IMUL ESI,dword ptr [EBP + -0x1c]
00656e8d  XOR EDX,ESI
00656e8f  MOV ESI,dword ptr [EBP + -0x20]
00656e92  NOT ESI
00656e94  AND ESI,dword ptr [EBP + 0xc]
00656e97  ADD ESI,dword ptr [EBP + -0xc]
00656e9a  IMUL ESI,dword ptr [EBP + -0x14]
00656e9e  XOR EDX,ESI
00656ea0  AND EDX,dword ptr [EBP + -0x20]
00656ea3  XOR EDX,dword ptr [EBP + 0xc]
00656ea6  AND EDX,dword ptr [EBP + -0x20]
00656ea9  ADD EDX,dword ptr [EBP + -0x4]
00656eac  IMUL EDX,dword ptr [EBP + -0x28]
00656eb0  XOR ECX,EDX
00656eb2  MOV EDX,dword ptr [EBP + -0x20]
00656eb5  NOT EDX
00656eb7  AND EDX,dword ptr [EBP + 0xc]
00656eba  MOV ESI,dword ptr [EBP + -0x20]
00656ebd  NOT ESI
00656ebf  AND ESI,dword ptr [EBP + 0xc]
00656ec2  ADD ESI,dword ptr [EBP + -0x18]
00656ec5  IMUL ESI,dword ptr [EBP + -0x1c]
00656ec9  XOR EDX,ESI
00656ecb  MOV ESI,dword ptr [EBP + -0x20]
00656ece  NOT ESI
00656ed0  AND ESI,dword ptr [EBP + 0xc]
00656ed3  ADD ESI,dword ptr [EBP + -0xc]
00656ed6  IMUL ESI,dword ptr [EBP + -0x14]
00656eda  XOR EDX,ESI
00656edc  AND EDX,dword ptr [EBP + -0x20]
00656edf  XOR EDX,dword ptr [EBP + 0xc]
00656ee2  AND EDX,dword ptr [EBP + -0x20]
00656ee5  ADD EDX,dword ptr [EBP + -0x24]
00656ee8  IMUL EDX,dword ptr [EBP + -0x8]
00656eec  XOR ECX,EDX
00656eee  MOV EDX,dword ptr [EBP + -0x20]
00656ef1  NOT EDX
00656ef3  AND ECX,EDX
00656ef5  XOR EAX,ECX
00656ef7  MOV dword ptr [EBP + -0x10],EAX
00656efa  PUSH EAX
00656efb  MOV EAX,0xcfcecdcc
00656f00  MOV EAX,0x656dad
00656f05  MOV EAX,0x0
00656f0a  MOV EAX,0x0
00656f0f  MOV EAX,0xcecdcccb
00656f14  POP EAX
00656f15  MOV EAX,dword ptr [EBP + -0x10]
00656f18  POP ESI
00656f19  MOV ESP,EBP
00656f1b  POP EBP
00656f1c  RET
