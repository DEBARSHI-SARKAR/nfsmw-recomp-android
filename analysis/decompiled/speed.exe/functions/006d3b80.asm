006d3b80  SUB ESP,0x140
006d3b86  PUSH EBP
006d3b87  PUSH ESI
006d3b88  MOV ESI,dword ptr [ESP + 0x14c]
006d3b8f  MOV EAX,dword ptr [ESI]
006d3b91  LEA ECX,[ESP + 0xe8]
006d3b98  PUSH ECX
006d3b99  PUSH ESI
006d3b9a  CALL dword ptr [EAX + 0x30]
006d3b9d  MOV EAX,[0x00982bdc]
006d3ba2  MOV EDX,dword ptr [EAX]
006d3ba4  PUSH ESI
006d3ba5  XOR EBP,EBP
006d3ba7  PUSH EBP
006d3ba8  PUSH EAX
006d3ba9  CALL dword ptr [EDX + 0x94]
006d3baf  CMP dword ptr [0x00901808],EBP
006d3bb5  JLE 0x006d3bc6
006d3bb7  MOV EAX,[0x00982bdc]
006d3bbc  MOV ECX,dword ptr [EAX]
006d3bbe  PUSH EBP
006d3bbf  PUSH EAX
006d3bc0  CALL dword ptr [ECX + 0x9c]
006d3bc6  MOV EAX,dword ptr [ESP + 0x168]
006d3bcd  FILD dword ptr [ESP + 0x100]
006d3bd4  MOV EDX,dword ptr [ESP + 0x100]
006d3bdb  TEST EDX,EDX
006d3bdd  PUSH EBX
006d3bde  PUSH EDI
006d3bdf  MOV dword ptr [ESP + 0x30],0xbf800000
006d3be7  MOV dword ptr [ESP + 0x34],0x3f800000
006d3bef  MOV dword ptr [ESP + 0x38],0x0
006d3bf7  MOV dword ptr [ESP + 0x3c],EAX
006d3bfb  MOV dword ptr [ESP + 0x60],0x3f800000
006d3c03  MOV dword ptr [ESP + 0x64],0x3f800000
006d3c0b  MOV dword ptr [ESP + 0x68],0x0
006d3c13  MOV dword ptr [ESP + 0x6c],EAX
006d3c17  MOV dword ptr [ESP + 0x90],0x3f800000
006d3c22  MOV dword ptr [ESP + 0x94],0xbf800000
006d3c2d  MOV dword ptr [ESP + 0x98],0x0
006d3c38  MOV dword ptr [ESP + 0x9c],EAX
006d3c3f  MOV dword ptr [ESP + 0xc0],0xbf800000
006d3c4a  MOV dword ptr [ESP + 0xc4],0xbf800000
006d3c55  MOV dword ptr [ESP + 0xc8],0x0
006d3c60  MOV dword ptr [ESP + 0xcc],EAX
006d3c67  JGE 0x006d3c6f
006d3c69  FADD float ptr [0x00891214]
006d3c6f  FDIVR float ptr [0x00891068]
006d3c75  MOV EAX,dword ptr [ESP + 0x10c]
006d3c7c  TEST EAX,EAX
006d3c7e  FSTP float ptr [ESP + 0x14]
006d3c82  FILD dword ptr [ESP + 0x10c]
006d3c89  JGE 0x006d3c91
006d3c8b  FADD float ptr [0x00891214]
006d3c91  FDIVR float ptr [0x00891068]
006d3c97  MOV EDI,dword ptr [ESP + 0x158]
006d3c9e  XOR ESI,ESI
006d3ca0  CMP EDI,0x5
006d3ca3  FSTP float ptr [ESP + 0x10]
006d3ca7  FLD float ptr [ESP + 0x14]
006d3cab  FCHS
006d3cad  FST float ptr [ESP + 0x40]
006d3cb1  FLD float ptr [ESP + 0x10]
006d3cb5  FCHS
006d3cb7  FST float ptr [ESP + 0x44]
006d3cbb  FLD float ptr [0x0089096c]
006d3cc1  FSUB float ptr [ESP + 0x14]
006d3cc5  FST float ptr [ESP + 0x70]
006d3cc9  FLD ST1
006d3ccb  FSTP float ptr [ESP + 0x74]
006d3ccf  FST float ptr [ESP + 0xa0]
006d3cd6  FLD float ptr [0x0089096c]
006d3cdc  FSUB float ptr [ESP + 0x10]
006d3ce0  FST float ptr [ESP + 0x10]
006d3ce4  MOV ECX,dword ptr [ESP + 0x10]
006d3ce8  FST float ptr [ESP + 0xa4]
006d3cef  MOV EDX,ECX
006d3cf1  FLD ST3
006d3cf3  MOV dword ptr [ESP + 0xbc],ECX
006d3cfa  FSTP float ptr [ESP + 0xd0]
006d3d01  MOV dword ptr [ESP + 0xec],EDX
006d3d08  FST float ptr [ESP + 0xd4]
006d3d0f  FLD ST3
006d3d11  FSTP float ptr [ESP + 0x48]
006d3d15  FLD ST2
006d3d17  FSTP float ptr [ESP + 0x4c]
006d3d1b  FLD ST1
006d3d1d  FSTP float ptr [ESP + 0x78]
006d3d21  FLD ST2
006d3d23  FSTP float ptr [ESP + 0x7c]
006d3d27  FLD ST1
006d3d29  FSTP float ptr [ESP + 0xa8]
006d3d30  FST float ptr [ESP + 0xac]
006d3d37  FLD ST3
006d3d39  FSTP float ptr [ESP + 0xd8]
006d3d40  FST float ptr [ESP + 0xdc]
006d3d47  FLD ST3
006d3d49  FSTP float ptr [ESP + 0x50]
006d3d4d  FLD ST2
006d3d4f  FSTP float ptr [ESP + 0x54]
006d3d53  FLD ST1
006d3d55  FSTP float ptr [ESP + 0x80]
006d3d5c  FLD ST2
006d3d5e  FSTP float ptr [ESP + 0x84]
006d3d65  FLD ST1
006d3d67  FSTP float ptr [ESP + 0xb0]
006d3d6e  FST float ptr [ESP + 0xb4]
006d3d75  FLD ST3
006d3d77  FSTP float ptr [ESP + 0xe0]
006d3d7e  FSTP float ptr [ESP + 0xe4]
006d3d85  FLD ST2
006d3d87  FSTP float ptr [ESP + 0x58]
006d3d8b  FLD ST1
006d3d8d  FSTP float ptr [ESP + 0x5c]
006d3d91  FST float ptr [ESP + 0x88]
006d3d98  FXCH
006d3d9a  FSTP float ptr [ESP + 0x8c]
006d3da1  FSTP float ptr [ESP + 0xb8]
006d3da8  FSTP float ptr [ESP + 0xe8]
006d3daf  JNZ 0x006d3e0d
006d3db1  MOV dword ptr [0x00982c80],EBP
006d3db7  MOV EAX,dword ptr [ESI]
006d3db9  XOR ECX,ECX
006d3dbb  CALL dword ptr [EAX + 0x4]
006d3dbe  MOV EDX,dword ptr [0x0000004c]
006d3dc4  MOV EAX,[0x00982bdc]
006d3dc9  MOV ECX,dword ptr [EAX]
006d3dcb  PUSH EDX
006d3dcc  PUSH EAX
006d3dcd  CALL dword ptr [ECX + 0x15c]
006d3dd3  MOV EAX,[0x00000048]
006d3dd8  MOV ECX,dword ptr [EAX]
006d3dda  PUSH EBP
006d3ddb  LEA EDX,[ESP + 0x14]
006d3ddf  PUSH EDX
006d3de0  PUSH EAX
006d3de1  CALL dword ptr [ECX + 0xfc]
006d3de7  MOV ECX,dword ptr [0x00000048]
006d3ded  MOV EDX,dword ptr [ECX]
006d3def  PUSH EBP
006d3df0  MOV EAX,ECX
006d3df2  PUSH EAX
006d3df3  CALL dword ptr [EDX + 0x100]
006d3df9  MOV dword ptr [ESP + 0x158],0x2
006d3e04  MOV EDI,dword ptr [ESP + 0x158]
006d3e0b  JMP 0x006d3e54
006d3e0d  MOV ESI,dword ptr [0x0093dea4]
006d3e13  MOV dword ptr [0x00982c80],ESI
006d3e19  MOV EDX,dword ptr [ESI]
006d3e1b  MOV ECX,ESI
006d3e1d  CALL dword ptr [EDX + 0x4]
006d3e20  MOV EDX,dword ptr [ESI + 0x4c]
006d3e23  MOV EAX,[0x00982bdc]
006d3e28  MOV ECX,dword ptr [EAX]
006d3e2a  PUSH EDX
006d3e2b  PUSH EAX
006d3e2c  CALL dword ptr [ECX + 0x15c]
006d3e32  MOV EAX,dword ptr [ESI + 0x48]
006d3e35  MOV ECX,dword ptr [EAX]
006d3e37  PUSH EBP
006d3e38  LEA EDX,[ESP + 0x14]
006d3e3c  PUSH EDX
006d3e3d  PUSH EAX
006d3e3e  CALL dword ptr [ECX + 0xfc]
006d3e44  MOV EAX,dword ptr [ESI + 0x48]
006d3e47  MOV ECX,dword ptr [EAX]
006d3e49  LEA EDX,[EDI + -0x1]
006d3e4c  PUSH EDX
006d3e4d  PUSH EAX
006d3e4e  CALL dword ptr [ECX + 0x100]
006d3e54  MOV ECX,dword ptr [0x0093dea4]
006d3e5a  MOV EAX,dword ptr [ECX + 0x48]
006d3e5d  MOV ECX,dword ptr [ECX + 0x44]
006d3e60  MOV ECX,dword ptr [ECX + 0x18c]
006d3e66  MOV EDX,dword ptr [EAX]
006d3e68  PUSH 0xf
006d3e6a  PUSH ECX
006d3e6b  PUSH EAX
006d3e6c  CALL dword ptr [EDX + 0x68]
006d3e6f  MOV EDX,dword ptr [ESP + 0x16c]
006d3e76  MOV EAX,dword ptr [ESP + 0x168]
006d3e7d  MOV ECX,dword ptr [ESP + 0x164]
006d3e84  PUSH EDX
006d3e85  PUSH EAX
006d3e86  PUSH ECX
006d3e87  CALL 0x006c6810
006d3e8c  ADD ESP,0xc
006d3e8f  CMP EDI,EBP
006d3e91  MOV dword ptr [ESP + 0x18],0x1f
006d3e99  MOV dword ptr [ESP + 0x1c],0x20
006d3ea1  MOV dword ptr [ESP + 0x20],0x21
006d3ea9  MOV dword ptr [ESP + 0x24],0x22
006d3eb1  JLE 0x006d3f82
006d3eb7  MOV EDI,dword ptr [ESP + 0x160]
006d3ebe  MOV ECX,dword ptr [ESP + 0x15c]
006d3ec5  LEA EDX,[ESP + 0x18]
006d3ec9  ADD EDI,0x2
006d3ecc  SUB ECX,EDX
006d3ece  LEA EBX,[ESP + 0x114]
006d3ed5  MOV dword ptr [ESP + 0x10],ECX
006d3ed9  JMP 0x006d3ee0
006d3edb  MOV ECX,dword ptr [ESP + 0x10]
006d3edf  NOP
006d3ee0  MOV EAX,dword ptr [ESI + 0x48]
006d3ee3  MOV EDX,dword ptr [EAX]
006d3ee5  LEA EAX,[ECX + EBP*0x4]
006d3ee8  MOV ECX,dword ptr [ESP + EAX*0x1 + 0x18]
006d3eec  MOV EAX,dword ptr [ESP + EBP*0x4 + 0x18]
006d3ef0  PUSH ECX
006d3ef1  MOV ECX,dword ptr [ESI + 0x44]
006d3ef4  LEA EAX,[EAX + EAX*0x4]
006d3ef7  MOV EAX,dword ptr [ECX + EAX*0x8 + 0x24]
006d3efb  PUSH EAX
006d3efc  MOV EAX,dword ptr [ESI + 0x48]
006d3eff  PUSH EAX
006d3f00  CALL dword ptr [EDX + 0xd0]
006d3f06  MOV ECX,dword ptr [EDI + -0x2]
006d3f09  AND ECX,0xff
006d3f0f  TEST ECX,ECX
006d3f11  MOV dword ptr [ESP + 0x14],ECX
006d3f15  FILD dword ptr [ESP + 0x14]
006d3f19  JGE 0x006d3f21
006d3f1b  FADD float ptr [0x00891214]
006d3f21  FMUL float ptr [0x00899dd0]
006d3f27  MOVZX EDX,byte ptr [EDI + -0x1]
006d3f2b  MOVZX EAX,byte ptr [EDI]
006d3f2e  FSTP float ptr [EBX + -0x4]
006d3f31  MOVZX ECX,byte ptr [EDI + 0x1]
006d3f35  MOV dword ptr [ESP + 0x14],EDX
006d3f39  INC EBP
006d3f3a  ADD EDI,0x4
006d3f3d  FILD dword ptr [ESP + 0x14]
006d3f41  MOV dword ptr [ESP + 0x14],EAX
006d3f45  MOV EAX,dword ptr [ESP + 0x158]
006d3f4c  ADD EBX,0x10
006d3f4f  CMP EBP,EAX
006d3f51  FMUL float ptr [0x00899dd0]
006d3f57  FSTP float ptr [EBX + -0x10]
006d3f5a  FILD dword ptr [ESP + 0x14]
006d3f5e  MOV dword ptr [ESP + 0x14],ECX
006d3f62  FMUL float ptr [0x00899dd0]
006d3f68  FSTP float ptr [EBX + -0xc]
006d3f6b  FILD dword ptr [ESP + 0x14]
006d3f6f  FMUL float ptr [0x00899dd0]
006d3f75  FSTP float ptr [EBX + -0x8]
006d3f78  JL 0x006d3edb
006d3f7e  XOR EBP,EBP
006d3f80  MOV EDI,EAX
006d3f82  CMP dword ptr [ESI + 0x4],0xb
006d3f86  JNZ 0x006d3fd2
006d3f88  CMP EDI,0x4
006d3f8b  MOV EBX,EDI
006d3f8d  JGE 0x006d3fd2
006d3f8f  SHL EDI,0x4
006d3f92  LEA EDI,[ESP + EDI*0x1 + 0x114]
006d3f99  LEA ESP,[ESP]
006d3fa0  MOV ECX,dword ptr [ESP + EBX*0x4 + 0x18]
006d3fa4  MOV EAX,dword ptr [ESI + 0x48]
006d3fa7  MOV EDX,dword ptr [EAX]
006d3fa9  PUSH EBP
006d3faa  MOV EBP,dword ptr [ESI + 0x44]
006d3fad  LEA ECX,[ECX + ECX*0x4]
006d3fb0  MOV ECX,dword ptr [EBP + ECX*0x8 + 0x24]
006d3fb4  PUSH ECX
006d3fb5  PUSH EAX
006d3fb6  CALL dword ptr [EDX + 0xd0]
006d3fbc  XOR EBP,EBP
006d3fbe  MOV dword ptr [EDI + -0x4],EBP
006d3fc1  MOV dword ptr [EDI],EBP
006d3fc3  MOV dword ptr [EDI + 0x4],EBP
006d3fc6  MOV dword ptr [EDI + 0x8],EBP
006d3fc9  INC EBX
006d3fca  ADD EDI,0x10
006d3fcd  CMP EBX,0x4
006d3fd0  JL 0x006d3fa0
006d3fd2  PUSH EBP
006d3fd3  PUSH EBP
006d3fd4  CALL 0x006c67c0
006d3fd9  ADD ESP,0x8
006d3fdc  CALL 0x006c83a0
006d3fe1  CMP dword ptr [ESI + 0x4],0xb
006d3fe5  POP EDI
006d3fe6  POP EBX
006d3fe7  JNZ 0x006d4009
006d3fe9  MOV EAX,dword ptr [ESI + 0x48]
006d3fec  MOV EDX,dword ptr [EAX]
006d3fee  PUSH 0x4
006d3ff0  LEA ECX,[ESP + 0x10c]
006d3ff7  PUSH ECX
006d3ff8  MOV ECX,dword ptr [ESI + 0x44]
006d3ffb  MOV ECX,dword ptr [ECX + 0x59c]
006d4001  PUSH ECX
006d4002  PUSH EAX
006d4003  CALL dword ptr [EDX + 0x90]
006d4009  MOV EDX,dword ptr [0x00982c80]
006d400f  MOV dword ptr [0x00982ca0],EBP
006d4015  MOV EAX,dword ptr [EDX + 0x48]
006d4018  MOV ECX,dword ptr [EAX]
006d401a  PUSH EAX
006d401b  CALL dword ptr [ECX + 0x104]
006d4021  MOV EAX,[0x00982bdc]
006d4026  MOV EDX,dword ptr [EAX]
006d4028  PUSH 0x30
006d402a  LEA ECX,[ESP + 0x2c]
006d402e  PUSH ECX
006d402f  PUSH 0x2
006d4031  PUSH 0x6
006d4033  PUSH EAX
006d4034  CALL dword ptr [EDX + 0x14c]
006d403a  MOV EAX,dword ptr [ESI + 0x48]
006d403d  MOV EDX,dword ptr [EAX]
006d403f  PUSH EAX
006d4040  CALL dword ptr [EDX + 0x108]
006d4046  MOV EAX,dword ptr [ESI]
006d4048  MOV ECX,ESI
006d404a  CALL dword ptr [EAX + 0x8]
006d404d  MOV ESI,dword ptr [ESI + 0x48]
006d4050  MOV ECX,dword ptr [ESI]
006d4052  PUSH ESI
006d4053  CALL dword ptr [ECX + 0x10c]
006d4059  MOV ESI,dword ptr [0x00982a20]
006d405f  MOV dword ptr [0x00982c80],EBP
006d4065  CALL 0x006e2f50
006d406a  MOV ECX,dword ptr [ESI + 0x8]
006d406d  MOV EAX,[0x00982bdc]
006d4072  MOV EDX,dword ptr [EAX]
006d4074  PUSH ECX
006d4075  PUSH EBP
006d4076  PUSH EAX
006d4077  CALL dword ptr [EDX + 0x94]
006d407d  MOV ECX,dword ptr [ESI + 0xc]
006d4080  MOV EAX,[0x00982bdc]
006d4085  MOV EDX,dword ptr [EAX]
006d4087  PUSH ECX
006d4088  PUSH EAX
006d4089  CALL dword ptr [EDX + 0x9c]
006d408f  MOV EDX,dword ptr [ESI + 0x14]
006d4092  MOV EAX,dword ptr [ESI + 0x18]
006d4095  MOV dword ptr [ESP + 0x18],EDX
006d4099  MOV dword ptr [ESP + 0x1c],EAX
006d409d  MOV EAX,[0x00982bdc]
006d40a2  LEA EDX,[ESP + 0x10]
006d40a6  PUSH EDX
006d40a7  MOV dword ptr [ESP + 0x14],EBP
006d40ab  MOV dword ptr [ESP + 0x18],EBP
006d40af  MOV dword ptr [ESP + 0x24],0x0
006d40b7  MOV dword ptr [ESP + 0x28],0x3f800000
006d40bf  MOV ECX,dword ptr [EAX]
006d40c1  PUSH EAX
006d40c2  CALL dword ptr [ECX + 0xbc]
006d40c8  MOV dword ptr [0x00982a20],ESI
006d40ce  POP ESI
006d40cf  MOV dword ptr [0x00982c80],EBP
006d40d5  POP EBP
006d40d6  ADD ESP,0x140
006d40dc  RET
