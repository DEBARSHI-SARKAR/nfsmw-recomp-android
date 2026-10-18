00689d10  MOV EAX,dword ptr [ESP + 0x8]
00689d14  SUB ESP,0x14
00689d17  PUSH EBX
00689d18  PUSH ESI
00689d19  MOV ESI,dword ptr [ESP + 0x20]
00689d1d  PUSH EDI
00689d1e  MOV EDI,dword ptr [ESP + 0x30]
00689d22  XOR EDX,EDX
00689d24  CMP EDI,0x4
00689d27  JL 0x0068a023
00689d2d  ADD EDI,-0x4
00689d30  SHR EDI,0x2
00689d33  INC EDI
00689d34  LEA ECX,[EDI*0x4 + 0x0]
00689d3b  MOV dword ptr [ESP + 0xc],ECX
00689d3f  MOV ECX,dword ptr [ESP + 0x2c]
00689d43  LEA EDX,[ESI + 0x20]
00689d46  PUSH EBP
00689d47  MOV EBX,ESI
00689d49  MOV EBP,dword ptr [EBX]
00689d4b  MOV dword ptr [ESP + 0x14],EBP
00689d4f  MOV EBP,dword ptr [EBX + 0x4]
00689d52  MOV dword ptr [ESP + 0x18],EBP
00689d56  MOV EBP,dword ptr [EBX + 0x8]
00689d59  MOV EBX,dword ptr [EBX + 0xc]
00689d5c  MOV dword ptr [ESP + 0x1c],EBP
00689d60  FLD float ptr [ESP + 0x1c]
00689d64  FMUL float ptr [EAX + 0x20]
00689d67  MOV dword ptr [ESP + 0x20],EBX
00689d6b  FLD float ptr [ESP + 0x20]
00689d6f  LEA EBX,[EDX + -0x10]
00689d72  FMUL float ptr [EAX + 0x30]
00689d75  FADDP
00689d77  FLD float ptr [ESP + 0x14]
00689d7b  FMUL float ptr [EAX]
00689d7d  FADDP
00689d7f  FLD float ptr [ESP + 0x18]
00689d83  FMUL float ptr [EAX + 0x10]
00689d86  FADDP
00689d88  FSTP float ptr [ECX]
00689d8a  FLD float ptr [ESP + 0x1c]
00689d8e  FMUL float ptr [EAX + 0x24]
00689d91  FLD float ptr [ESP + 0x14]
00689d95  FMUL float ptr [EAX + 0x4]
00689d98  FADDP
00689d9a  FLD float ptr [ESP + 0x20]
00689d9e  FMUL float ptr [EAX + 0x34]
00689da1  FADDP
00689da3  FLD float ptr [ESP + 0x18]
00689da7  FMUL float ptr [EAX + 0x14]
00689daa  FADDP
00689dac  FSTP float ptr [ECX + 0x4]
00689daf  FLD float ptr [ESP + 0x1c]
00689db3  FMUL float ptr [EAX + 0x28]
00689db6  FLD float ptr [ESP + 0x14]
00689dba  FMUL float ptr [EAX + 0x8]
00689dbd  FADDP
00689dbf  FLD float ptr [ESP + 0x20]
00689dc3  FMUL float ptr [EAX + 0x38]
00689dc6  FADDP
00689dc8  FLD float ptr [ESP + 0x18]
00689dcc  FMUL float ptr [EAX + 0x18]
00689dcf  FADDP
00689dd1  FSTP float ptr [ECX + 0x8]
00689dd4  FLD float ptr [ESP + 0x20]
00689dd8  FMUL float ptr [EAX + 0x3c]
00689ddb  FLD float ptr [ESP + 0x18]
00689ddf  FMUL float ptr [EAX + 0x1c]
00689de2  FADDP
00689de4  FLD float ptr [ESP + 0x1c]
00689de8  FMUL float ptr [EAX + 0x2c]
00689deb  FADDP
00689ded  FLD float ptr [ESP + 0x14]
00689df1  FMUL float ptr [EAX + 0xc]
00689df4  FADDP
00689df6  FSTP float ptr [ECX + 0xc]
00689df9  MOV EBP,dword ptr [EBX]
00689dfb  MOV dword ptr [ESP + 0x14],EBP
00689dff  MOV EBP,dword ptr [EBX + 0x4]
00689e02  MOV dword ptr [ESP + 0x18],EBP
00689e06  MOV EBP,dword ptr [EBX + 0x8]
00689e09  MOV EBX,dword ptr [EBX + 0xc]
00689e0c  MOV dword ptr [ESP + 0x1c],EBP
00689e10  FLD float ptr [ESP + 0x1c]
00689e14  MOV dword ptr [ESP + 0x20],EBX
00689e18  FMUL float ptr [EAX + 0x20]
00689e1b  MOV EBX,EDX
00689e1d  FLD float ptr [ESP + 0x20]
00689e21  FMUL float ptr [EAX + 0x30]
00689e24  FADDP
00689e26  FLD float ptr [ESP + 0x14]
00689e2a  FMUL float ptr [EAX]
00689e2c  FADDP
00689e2e  FLD float ptr [ESP + 0x18]
00689e32  FMUL float ptr [EAX + 0x10]
00689e35  FADDP
00689e37  FSTP float ptr [ECX + 0x10]
00689e3a  FLD float ptr [ESP + 0x1c]
00689e3e  FMUL float ptr [EAX + 0x24]
00689e41  FLD float ptr [ESP + 0x14]
00689e45  FMUL float ptr [EAX + 0x4]
00689e48  FADDP
00689e4a  FLD float ptr [ESP + 0x20]
00689e4e  FMUL float ptr [EAX + 0x34]
00689e51  FADDP
00689e53  FLD float ptr [ESP + 0x18]
00689e57  FMUL float ptr [EAX + 0x14]
00689e5a  FADDP
00689e5c  FSTP float ptr [ECX + 0x14]
00689e5f  FLD float ptr [ESP + 0x1c]
00689e63  FMUL float ptr [EAX + 0x28]
00689e66  FLD float ptr [ESP + 0x14]
00689e6a  FMUL float ptr [EAX + 0x8]
00689e6d  FADDP
00689e6f  FLD float ptr [ESP + 0x20]
00689e73  FMUL float ptr [EAX + 0x38]
00689e76  FADDP
00689e78  FLD float ptr [ESP + 0x18]
00689e7c  FMUL float ptr [EAX + 0x18]
00689e7f  FADDP
00689e81  FSTP float ptr [ECX + 0x18]
00689e84  FLD float ptr [ESP + 0x20]
00689e88  FMUL float ptr [EAX + 0x3c]
00689e8b  FLD float ptr [ESP + 0x18]
00689e8f  FMUL float ptr [EAX + 0x1c]
00689e92  FADDP
00689e94  FLD float ptr [ESP + 0x1c]
00689e98  FMUL float ptr [EAX + 0x2c]
00689e9b  FADDP
00689e9d  FLD float ptr [ESP + 0x14]
00689ea1  FMUL float ptr [EAX + 0xc]
00689ea4  FADDP
00689ea6  FSTP float ptr [ECX + 0x1c]
00689ea9  MOV EBP,dword ptr [EBX]
00689eab  MOV dword ptr [ESP + 0x14],EBP
00689eaf  MOV EBP,dword ptr [EBX + 0x4]
00689eb2  MOV dword ptr [ESP + 0x18],EBP
00689eb6  MOV EBP,dword ptr [EBX + 0x8]
00689eb9  MOV EBX,dword ptr [EBX + 0xc]
00689ebc  MOV dword ptr [ESP + 0x1c],EBP
00689ec0  FLD float ptr [ESP + 0x1c]
00689ec4  FMUL float ptr [EAX + 0x20]
00689ec7  MOV dword ptr [ESP + 0x20],EBX
00689ecb  FLD float ptr [ESP + 0x20]
00689ecf  FMUL float ptr [EAX + 0x30]
00689ed2  FADDP
00689ed4  FLD float ptr [ESP + 0x14]
00689ed8  LEA EBX,[EDX + 0x10]
00689edb  FMUL float ptr [EAX]
00689edd  FADDP
00689edf  FLD float ptr [ESP + 0x18]
00689ee3  FMUL float ptr [EAX + 0x10]
00689ee6  FADDP
00689ee8  FSTP float ptr [ECX + 0x20]
00689eeb  FLD float ptr [ESP + 0x1c]
00689eef  FMUL float ptr [EAX + 0x24]
00689ef2  FLD float ptr [ESP + 0x14]
00689ef6  FMUL float ptr [EAX + 0x4]
00689ef9  FADDP
00689efb  FLD float ptr [ESP + 0x20]
00689eff  FMUL float ptr [EAX + 0x34]
00689f02  FADDP
00689f04  FLD float ptr [ESP + 0x18]
00689f08  FMUL float ptr [EAX + 0x14]
00689f0b  FADDP
00689f0d  FSTP float ptr [ECX + 0x24]
00689f10  FLD float ptr [ESP + 0x1c]
00689f14  FMUL float ptr [EAX + 0x28]
00689f17  FLD float ptr [ESP + 0x14]
00689f1b  FMUL float ptr [EAX + 0x8]
00689f1e  FADDP
00689f20  FLD float ptr [ESP + 0x20]
00689f24  FMUL float ptr [EAX + 0x38]
00689f27  FADDP
00689f29  FLD float ptr [ESP + 0x18]
00689f2d  FMUL float ptr [EAX + 0x18]
00689f30  FADDP
00689f32  FSTP float ptr [ECX + 0x28]
00689f35  FLD float ptr [ESP + 0x20]
00689f39  FMUL float ptr [EAX + 0x3c]
00689f3c  FLD float ptr [ESP + 0x18]
00689f40  FMUL float ptr [EAX + 0x1c]
00689f43  FADDP
00689f45  FLD float ptr [ESP + 0x1c]
00689f49  FMUL float ptr [EAX + 0x2c]
00689f4c  FADDP
00689f4e  FLD float ptr [ESP + 0x14]
00689f52  FMUL float ptr [EAX + 0xc]
00689f55  FADDP
00689f57  FSTP float ptr [ECX + 0x2c]
00689f5a  MOV EBP,dword ptr [EBX]
00689f5c  MOV dword ptr [ESP + 0x14],EBP
00689f60  MOV EBP,dword ptr [EBX + 0x4]
00689f63  MOV dword ptr [ESP + 0x18],EBP
00689f67  MOV EBP,dword ptr [EBX + 0x8]
00689f6a  MOV EBX,dword ptr [EBX + 0xc]
00689f6d  MOV dword ptr [ESP + 0x1c],EBP
00689f71  FLD float ptr [ESP + 0x1c]
00689f75  FMUL float ptr [EAX + 0x20]
00689f78  MOV dword ptr [ESP + 0x20],EBX
00689f7c  FLD float ptr [ESP + 0x20]
00689f80  FMUL float ptr [EAX + 0x30]
00689f83  FADDP
00689f85  FLD float ptr [ESP + 0x14]
00689f89  FMUL float ptr [EAX]
00689f8b  FADDP
00689f8d  FLD float ptr [ESP + 0x18]
00689f91  FMUL float ptr [EAX + 0x10]
00689f94  FADDP
00689f96  FSTP float ptr [ECX + 0x30]
00689f99  ADD ESI,0x40
00689f9c  FLD float ptr [ESP + 0x1c]
00689fa0  ADD EDX,0x40
00689fa3  FMUL float ptr [EAX + 0x24]
00689fa6  ADD ECX,0x40
00689fa9  DEC EDI
00689faa  FLD float ptr [ESP + 0x14]
00689fae  FMUL float ptr [EAX + 0x4]
00689fb1  FADDP
00689fb3  FLD float ptr [ESP + 0x20]
00689fb7  FMUL float ptr [EAX + 0x34]
00689fba  FADDP
00689fbc  FLD float ptr [ESP + 0x18]
00689fc0  FMUL float ptr [EAX + 0x14]
00689fc3  FADDP
00689fc5  FSTP float ptr [ECX + -0xc]
00689fc8  FLD float ptr [ESP + 0x1c]
00689fcc  FMUL float ptr [EAX + 0x28]
00689fcf  FLD float ptr [ESP + 0x14]
00689fd3  FMUL float ptr [EAX + 0x8]
00689fd6  FADDP
00689fd8  FLD float ptr [ESP + 0x20]
00689fdc  FMUL float ptr [EAX + 0x38]
00689fdf  FADDP
00689fe1  FLD float ptr [ESP + 0x18]
00689fe5  FMUL float ptr [EAX + 0x18]
00689fe8  FADDP
00689fea  FSTP float ptr [ECX + -0x8]
00689fed  FLD float ptr [ESP + 0x20]
00689ff1  FMUL float ptr [EAX + 0x3c]
00689ff4  FLD float ptr [ESP + 0x18]
00689ff8  FMUL float ptr [EAX + 0x1c]
00689ffb  FADDP
00689ffd  FLD float ptr [ESP + 0x1c]
0068a001  FMUL float ptr [EAX + 0x2c]
0068a004  FADDP
0068a006  FLD float ptr [ESP + 0x14]
0068a00a  FMUL float ptr [EAX + 0xc]
0068a00d  FADDP
0068a00f  FSTP float ptr [ECX + -0x4]
0068a012  JNZ 0x00689d47
0068a018  MOV EDX,dword ptr [ESP + 0x10]
0068a01c  MOV EDI,dword ptr [ESP + 0x34]
0068a020  POP EBP
0068a021  JMP 0x0068a027
0068a023  MOV ECX,dword ptr [ESP + 0x2c]
0068a027  CMP EDX,EDI
0068a029  JGE 0x0068a0ee
0068a02f  SUB EDI,EDX
0068a031  MOV EDX,ESI
0068a033  MOV EBX,dword ptr [EDX]
0068a035  MOV dword ptr [ESP + 0x10],EBX
0068a039  MOV EBX,dword ptr [EDX + 0x4]
0068a03c  MOV dword ptr [ESP + 0x14],EBX
0068a040  MOV EBX,dword ptr [EDX + 0x8]
0068a043  MOV EDX,dword ptr [EDX + 0xc]
0068a046  MOV dword ptr [ESP + 0x18],EBX
0068a04a  FLD float ptr [ESP + 0x18]
0068a04e  FMUL float ptr [EAX + 0x20]
0068a051  MOV dword ptr [ESP + 0x1c],EDX
0068a055  FLD float ptr [ESP + 0x1c]
0068a059  ADD ESI,0x10
0068a05c  FMUL float ptr [EAX + 0x30]
0068a05f  ADD ECX,0x10
0068a062  DEC EDI
0068a063  FADDP
0068a065  FLD float ptr [ESP + 0x10]
0068a069  FMUL float ptr [EAX]
0068a06b  FADDP
0068a06d  FLD float ptr [ESP + 0x14]
0068a071  FMUL float ptr [EAX + 0x10]
0068a074  FADDP
0068a076  FSTP float ptr [ECX + -0x10]
0068a079  FLD float ptr [ESP + 0x18]
0068a07d  FMUL float ptr [EAX + 0x24]
0068a080  FLD float ptr [ESP + 0x10]
0068a084  FMUL float ptr [EAX + 0x4]
0068a087  FADDP
0068a089  FLD float ptr [ESP + 0x1c]
0068a08d  FMUL float ptr [EAX + 0x34]
0068a090  FADDP
0068a092  FLD float ptr [ESP + 0x14]
0068a096  FMUL float ptr [EAX + 0x14]
0068a099  FADDP
0068a09b  FSTP float ptr [ECX + -0xc]
0068a09e  FLD float ptr [ESP + 0x18]
0068a0a2  FMUL float ptr [EAX + 0x28]
0068a0a5  FLD float ptr [ESP + 0x10]
0068a0a9  FMUL float ptr [EAX + 0x8]
0068a0ac  FADDP
0068a0ae  FLD float ptr [ESP + 0x1c]
0068a0b2  FMUL float ptr [EAX + 0x38]
0068a0b5  FADDP
0068a0b7  FLD float ptr [ESP + 0x14]
0068a0bb  FMUL float ptr [EAX + 0x18]
0068a0be  FADDP
0068a0c0  FSTP float ptr [ECX + -0x8]
0068a0c3  FLD float ptr [ESP + 0x1c]
0068a0c7  FMUL float ptr [EAX + 0x3c]
0068a0ca  FLD float ptr [ESP + 0x14]
0068a0ce  FMUL float ptr [EAX + 0x1c]
0068a0d1  FADDP
0068a0d3  FLD float ptr [ESP + 0x18]
0068a0d7  FMUL float ptr [EAX + 0x2c]
0068a0da  FADDP
0068a0dc  FLD float ptr [ESP + 0x10]
0068a0e0  FMUL float ptr [EAX + 0xc]
0068a0e3  FADDP
0068a0e5  FSTP float ptr [ECX + -0x4]
0068a0e8  JNZ 0x0068a031
0068a0ee  POP EDI
0068a0ef  POP ESI
0068a0f0  POP EBX
0068a0f1  ADD ESP,0x14
0068a0f4  RET
