00802bec  PUSH EBP
00802bed  MOV EBP,ESP
00802bef  SUB ESP,0xb8
00802bf5  MOV EAX,dword ptr [EBP + 0x14]
00802bf8  PUSH EBX
00802bf9  PUSH ESI
00802bfa  LEA EBX,[EAX + EAX*0x4]
00802bfd  MOV dword ptr [EBP + -0x4c],EBX
00802c00  MOV EBX,dword ptr [EBP + 0x18]
00802c03  PUSH EDI
00802c04  MOV EDI,dword ptr [EBP + 0x1c]
00802c07  MOV ESI,EAX
00802c09  ADD EBX,EDI
00802c0b  SHL ESI,0x2
00802c0e  CMP EDI,EBX
00802c10  MOV dword ptr [EBP + -0x50],EDI
00802c13  LEA ECX,[EAX + EAX*0x1]
00802c16  LEA EDX,[EAX + EAX*0x2]
00802c19  MOV dword ptr [EBP + 0xffffff54],EBX
00802c1f  JNC 0x0080336b
00802c25  MOV EBX,dword ptr [EBP + 0x1c]
00802c28  SHL EBX,0x2
00802c2b  MOV dword ptr [EBP + -0x80],ESI
00802c2e  SUB dword ptr [EBP + -0x80],EAX
00802c31  MOV dword ptr [EBP + -0x78],ESI
00802c34  MOV ESI,dword ptr [EBP + 0xc]
00802c37  SUB dword ptr [EBP + -0x78],ECX
00802c3a  MOV dword ptr [EBP + -0x18],EBX
00802c3d  MOV EBX,dword ptr [EBP + 0xffffff54]
00802c43  MOV EDI,ESI
00802c45  SUB EDI,dword ptr [EBP + 0x10]
00802c48  SHL EBX,0x2
00802c4b  MOV dword ptr [EBP + 0xffffff70],EDI
00802c51  MOV EDI,dword ptr [EBP + -0x4c]
00802c54  MOV dword ptr [EBP + -0x48],EBX
00802c57  MOV EBX,EAX
00802c59  MOV dword ptr [EBP + -0x74],EAX
00802c5c  SUB dword ptr [EBP + -0x74],ECX
00802c5f  MOV dword ptr [EBP + 0xffffff60],EDI
00802c65  SUB dword ptr [EBP + 0xffffff60],EAX
00802c6b  MOV dword ptr [EBP + 0xffffff64],EAX
00802c71  MOV dword ptr [EBP + 0xffffff74],EDI
00802c77  SUB dword ptr [EBP + 0xffffff74],EDX
00802c7d  MOV dword ptr [EBP + 0xffffff6c],EDI
00802c83  SUB dword ptr [EBP + 0xffffff6c],ECX
00802c89  MOV EDI,EAX
00802c8b  MOV EAX,dword ptr [EBP + 0x10]
00802c8e  SHL EBX,0x3
00802c91  SUB EAX,EBX
00802c93  SHL EDI,0x2
00802c96  SUB dword ptr [EBP + 0xffffff64],EDI
00802c9c  MOV dword ptr [EBP + -0x64],EAX
00802c9f  ADD EAX,-0x2
00802ca2  MOV dword ptr [EBP + 0xffffff7c],EDX
00802ca8  SUB dword ptr [EBP + 0xffffff7c],ECX
00802cae  MOV dword ptr [EBP + -0x54],EDI
00802cb1  SUB dword ptr [EBP + -0x54],EDX
00802cb4  MOV EBX,ESI
00802cb6  SUB EBX,dword ptr [EBP + -0x4c]
00802cb9  MOV dword ptr [EBP + -0x58],EAX
00802cbc  MOV EAX,dword ptr [EBP + 0x10]
00802cbf  MOV dword ptr [EBP + -0x60],ESI
00802cc2  ADD ESI,EDX
00802cc4  MOV EDX,EAX
00802cc6  SUB EDX,EDI
00802cc8  ADD ECX,EAX
00802cca  PUSH 0x8
00802ccc  MOV dword ptr [EBP + -0x5c],ECX
00802ccf  MOV dword ptr [EBP + -0x68],EBX
00802cd2  MOV dword ptr [EBP + -0x7c],ESI
00802cd5  MOV dword ptr [EBP + -0x6c],EDX
00802cd8  POP ECX
00802cd9  MOV EAX,dword ptr [EBP + -0x60]
00802cdc  MOV EDX,dword ptr [EBP + -0x48]
00802cdf  MOV dword ptr [EBP + 0xffffff78],EAX
00802ce5  MOV EAX,dword ptr [EBP + 0x8]
00802ce8  MOV EAX,dword ptr [EAX + 0x24]
00802ceb  MOV EAX,dword ptr [EDX + EAX*0x1]
00802cee  MOV EDX,dword ptr [EBP + 0x20]
00802cf1  MOV EAX,dword ptr [EDX + EAX*0x4]
00802cf4  MOV EDX,dword ptr [EBP + -0x68]
00802cf7  MOV dword ptr [EBP + -0x14],EAX
00802cfa  IMUL EAX,EAX
00802cfd  LEA EAX,[EAX + EAX*0x2]
00802d00  SAR EAX,0x5
00802d03  MOV dword ptr [EBP + -0x4c],EAX
00802d06  MOV EAX,dword ptr [EBP + -0x6c]
00802d09  MOV dword ptr [EBP + -0x10],ESI
00802d0c  MOV ESI,dword ptr [EBP + -0x5c]
00802d0f  MOV dword ptr [EBP + 0xffffff68],EDX
00802d15  MOV dword ptr [EBP + -0x70],ECX
00802d18  MOV ECX,dword ptr [EBP + 0xffffff70]
00802d1e  ADD ECX,EAX
00802d20  MOV dword ptr [EBP + 0xffffff58],ECX
00802d26  MOVZX ECX,byte ptr [ECX]
00802d29  MOV dword ptr [EBP + -0x40],ECX
00802d2c  MOV ECX,dword ptr [EBP + 0xffffff74]
00802d32  ADD ECX,EDX
00802d34  MOV dword ptr [EBP + 0xffffff48],ECX
00802d3a  MOVZX ECX,byte ptr [ECX]
00802d3d  MOV EBX,dword ptr [EBP + -0x10]
00802d40  MOV dword ptr [EBP + -0x3c],ECX
00802d43  MOV ECX,dword ptr [EBP + 0xffffff6c]
00802d49  ADD ECX,EDX
00802d4b  MOV dword ptr [EBP + 0xffffff50],ECX
00802d51  MOVZX ECX,byte ptr [ECX]
00802d54  MOV dword ptr [EBP + -0x38],ECX
00802d57  MOV ECX,dword ptr [EBP + 0xffffff60]
00802d5d  MOVZX EDX,byte ptr [ECX + EDX*0x1]
00802d61  MOV ECX,dword ptr [EBP + 0xffffff78]
00802d67  MOVZX EDI,byte ptr [ECX]
00802d6a  MOV ECX,dword ptr [EBP + -0x54]
00802d6d  ADD ECX,EBX
00802d6f  MOV EBX,dword ptr [EBP + 0xffffff64]
00802d75  MOV dword ptr [EBP + 0xffffff5c],ECX
00802d7b  ADD ECX,EBX
00802d7d  MOV dword ptr [EBP + 0xffffff4c],ECX
00802d83  MOVZX ECX,byte ptr [ECX]
00802d86  MOV dword ptr [EBP + -0x2c],ECX
00802d89  MOV ECX,dword ptr [EBP + 0xffffff70]
00802d8f  MOVZX ECX,byte ptr [ECX + ESI*0x1]
00802d93  MOV dword ptr [EBP + -0x28],ECX
00802d96  MOV ECX,dword ptr [EBP + -0x10]
00802d99  MOVZX ECX,byte ptr [ECX]
00802d9c  MOV dword ptr [EBP + -0x24],ECX
00802d9f  XOR ECX,ECX
00802da1  MOV dword ptr [EBP + -0x34],EDX
00802da4  MOV dword ptr [EBP + -0x30],EDI
00802da7  MOV dword ptr [EBP + -0x4],ECX
00802daa  MOV dword ptr [EBP + -0x8],ECX
00802dad  MOV dword ptr [EBP + -0xc],ECX
00802db0  MOV dword ptr [EBP + -0x1c],ECX
00802db3  MOV dword ptr [EBP + 0x18],0x1
00802dba  MOV ECX,dword ptr [EBP + 0x18]
00802dbd  MOV ECX,dword ptr [EBP + ECX*0x4 + -0x44]
00802dc1  ADD dword ptr [EBP + -0x1c],ECX
00802dc4  MOV EBX,ECX
00802dc6  IMUL EBX,ECX
00802dc9  ADD dword ptr [EBP + -0x8],EBX
00802dcc  INC dword ptr [EBP + 0x18]
00802dcf  CMP dword ptr [EBP + 0x18],0x4
00802dd3  JBE 0x00802dba
00802dd5  MOV dword ptr [EBP + 0x18],0x5
00802ddc  MOV ECX,dword ptr [EBP + 0x18]
00802ddf  MOV ECX,dword ptr [EBP + ECX*0x4 + -0x44]
00802de3  ADD dword ptr [EBP + -0xc],ECX
00802de6  MOV EBX,ECX
00802de8  IMUL EBX,ECX
00802deb  ADD dword ptr [EBP + -0x4],EBX
00802dee  INC dword ptr [EBP + 0x18]
00802df1  CMP dword ptr [EBP + 0x18],0x8
00802df5  JBE 0x00802ddc
00802df7  MOV ECX,dword ptr [EBP + -0x1c]
00802dfa  LEA EBX,[ECX + 0x1]
00802dfd  SAR ECX,0x1
00802dff  SAR EBX,0x1
00802e01  IMUL EBX,ECX
00802e04  SUB dword ptr [EBP + -0x8],EBX
00802e07  MOV ECX,dword ptr [EBP + -0xc]
00802e0a  LEA EBX,[ECX + 0x1]
00802e0d  SAR ECX,0x1
00802e0f  SAR EBX,0x1
00802e11  IMUL EBX,ECX
00802e14  SUB dword ptr [EBP + -0x4],EBX
00802e17  MOV ECX,dword ptr [EBP + 0x8]
00802e1a  MOV ECX,dword ptr [ECX + 0x28]
00802e1d  MOV EBX,dword ptr [EBP + -0x18]
00802e20  ADD ECX,EBX
00802e22  MOV EBX,dword ptr [EBP + -0x8]
00802e25  ADD dword ptr [ECX],EBX
00802e27  MOV ECX,dword ptr [EBP + 0x8]
00802e2a  MOV ECX,dword ptr [ECX + 0x28]
00802e2d  MOV EBX,dword ptr [EBP + -0x48]
00802e30  ADD ECX,EBX
00802e32  MOV EBX,dword ptr [EBP + -0x4]
00802e35  ADD dword ptr [ECX],EBX
00802e37  MOV ECX,dword ptr [EBP + -0x4c]
00802e3a  CMP dword ptr [EBP + -0x8],ECX
00802e3d  JGE 0x00802fbe
00802e43  CMP EBX,ECX
00802e45  JGE 0x00802fbe
00802e4b  MOV ECX,EDI
00802e4d  SUB ECX,EDX
00802e4f  CMP ECX,dword ptr [EBP + -0x14]
00802e52  JGE 0x00802fbe
00802e58  MOV ECX,EDX
00802e5a  SUB ECX,EDI
00802e5c  CMP ECX,dword ptr [EBP + -0x14]
00802e5f  JGE 0x00802fbe
00802e65  MOV ECX,dword ptr [EBP + 0xffffff68]
00802e6b  MOVZX EBX,byte ptr [ECX]
00802e6e  MOV ECX,dword ptr [EBP + 0xffffff58]
00802e74  MOVZX ECX,byte ptr [ECX]
00802e77  MOV dword ptr [EBP + 0x18],ECX
00802e7a  SUB ECX,EBX
00802e7c  TEST ECX,ECX
00802e7e  MOV dword ptr [EBP + -0xc],EBX
00802e81  JG 0x00802e88
00802e83  MOV ECX,EBX
00802e85  SUB ECX,dword ptr [EBP + 0x18]
00802e88  CMP ECX,dword ptr [EBP + -0x14]
00802e8b  MOV ECX,dword ptr [EBP + -0xc]
00802e8e  JL 0x00802e93
00802e90  MOV ECX,dword ptr [EBP + 0x18]
00802e93  MOV dword ptr [EBP + 0x18],ECX
00802e96  MOV ECX,dword ptr [EBP + 0xffffff5c]
00802e9c  MOVZX EBX,byte ptr [ECX]
00802e9f  MOV ECX,dword ptr [EBP + -0x10]
00802ea2  MOVZX ECX,byte ptr [ECX]
00802ea5  MOV dword ptr [EBP + -0xc],ECX
00802ea8  SUB ECX,EBX
00802eaa  TEST ECX,ECX
00802eac  MOV dword ptr [EBP + 0xffffff5c],EBX
00802eb2  JG 0x00802eb9
00802eb4  MOV ECX,EBX
00802eb6  SUB ECX,dword ptr [EBP + -0xc]
00802eb9  CMP ECX,dword ptr [EBP + -0x14]
00802ebc  MOV ECX,dword ptr [EBP + 0xffffff5c]
00802ec2  JL 0x00802ec7
00802ec4  MOV ECX,dword ptr [EBP + -0xc]
00802ec7  MOV EBX,dword ptr [EBP + -0x40]
00802eca  MOV dword ptr [EBP + -0x4],ECX
00802ecd  MOV ECX,dword ptr [EBP + 0x18]
00802ed0  LEA ECX,[EDX + ECX*0x2]
00802ed3  ADD ECX,dword ptr [EBP + 0x18]
00802ed6  ADD ECX,dword ptr [EBP + -0x38]
00802ed9  ADD ECX,dword ptr [EBP + -0x3c]
00802edc  LEA ECX,[ECX + EBX*0x1 + 0x4]
00802ee0  ADD EBX,ECX
00802ee2  SHL EBX,0x1
00802ee4  SUB EBX,EDX
00802ee6  MOV EDX,EDI
00802ee8  SUB EDX,dword ptr [EBP + 0x18]
00802eeb  ADD EBX,EDI
00802eed  ADD ECX,EDX
00802eef  MOV EDX,dword ptr [EBP + -0x3c]
00802ef2  ADD EDX,ECX
00802ef4  SHL EDX,0x1
00802ef6  SUB EDX,EDI
00802ef8  ADD EDX,dword ptr [EBP + -0x2c]
00802efb  SAR EBX,0x4
00802efe  SAR EDX,0x4
00802f01  MOV byte ptr [EAX],BL
00802f03  MOV EBX,dword ptr [EBP + -0x54]
00802f06  MOV byte ptr [EBX + EAX*0x1],DL
00802f09  MOV EDX,dword ptr [EBP + -0x2c]
00802f0c  SUB EDX,dword ptr [EBP + 0x18]
00802f0f  MOV EBX,dword ptr [EBP + -0x78]
00802f12  ADD ECX,EDX
00802f14  MOV EDX,dword ptr [EBP + -0x38]
00802f17  ADD EDX,ECX
00802f19  SHL EDX,0x1
00802f1b  SUB EDX,dword ptr [EBP + -0x2c]
00802f1e  ADD EDX,dword ptr [EBP + -0x28]
00802f21  SAR EDX,0x4
00802f24  MOV byte ptr [EBX + EAX*0x1],DL
00802f27  MOV EDX,dword ptr [EBP + -0x28]
00802f2a  SUB EDX,dword ptr [EBP + 0x18]
00802f2d  MOV EBX,dword ptr [EBP + -0x80]
00802f30  ADD ECX,EDX
00802f32  MOV EDX,dword ptr [EBP + -0x34]
00802f35  ADD EDX,ECX
00802f37  SHL EDX,0x1
00802f39  SUB EDX,dword ptr [EBP + -0x28]
00802f3c  SUB EDX,dword ptr [EBP + -0x40]
00802f3f  ADD EDX,dword ptr [EBP + 0x18]
00802f42  ADD EDX,dword ptr [EBP + -0x24]
00802f45  SAR EDX,0x4
00802f48  MOV byte ptr [EBX + EAX*0x1],DL
00802f4b  MOV EDX,dword ptr [EBP + -0x24]
00802f4e  SUB EDX,dword ptr [EBP + -0x40]
00802f51  ADD ECX,EDX
00802f53  LEA EDX,[ECX + EDI*0x1]
00802f56  SHL EDX,0x1
00802f58  MOV EBX,EDX
00802f5a  SUB EBX,dword ptr [EBP + -0x24]
00802f5d  MOV EDX,dword ptr [EBP + 0x14]
00802f60  SUB EBX,dword ptr [EBP + -0x3c]
00802f63  SHL EDX,0x2
00802f66  ADD EBX,dword ptr [EBP + -0x4]
00802f69  ADD EBX,dword ptr [EBP + -0x40]
00802f6c  SAR EBX,0x4
00802f6f  MOV byte ptr [EAX + EDX*0x1],BL
00802f72  MOV EDX,dword ptr [EBP + -0x4]
00802f75  SUB EDX,dword ptr [EBP + -0x3c]
00802f78  MOV EBX,dword ptr [EBP + -0x74]
00802f7b  ADD ECX,EDX
00802f7d  MOV EDX,dword ptr [EBP + -0x2c]
00802f80  ADD EDX,ECX
00802f82  SHL EDX,0x1
00802f84  SUB EDX,dword ptr [EBP + -0x38]
00802f87  ADD EDX,dword ptr [EBP + -0x3c]
00802f8a  SAR EDX,0x4
00802f8d  MOV byte ptr [EBX + ESI*0x1],DL
00802f90  MOV EDX,dword ptr [EBP + -0x4]
00802f93  SUB EDX,dword ptr [EBP + -0x38]
00802f96  ADD ECX,EDX
00802f98  MOV EDX,dword ptr [EBP + -0x28]
00802f9b  ADD EDX,ECX
00802f9d  SHL EDX,0x1
00802f9f  SUB EDX,dword ptr [EBP + -0x34]
00802fa2  ADD EDX,dword ptr [EBP + -0x38]
00802fa5  SAR EDX,0x4
00802fa8  MOV byte ptr [ESI],DL
00802faa  MOV EDX,dword ptr [EBP + -0x4]
00802fad  ADD ECX,EDX
00802faf  ADD ECX,dword ptr [EBP + -0x24]
00802fb2  SHL ECX,0x1
00802fb4  SUB ECX,EDI
00802fb6  SUB ECX,dword ptr [EBP + -0x34]
00802fb9  SAR ECX,0x4
00802fbc  JMP 0x0080303d
00802fbe  MOV EBX,dword ptr [EBP + -0x38]
00802fc1  MOV ECX,EDI
00802fc3  SUB ECX,EDX
00802fc5  LEA ECX,[ECX + ECX*0x2]
00802fc8  SUB ECX,dword ptr [EBP + -0x2c]
00802fcb  LEA ECX,[ECX + EBX*0x1 + 0x4]
00802fcf  MOV EBX,dword ptr [EBP + 0x8]
00802fd2  MOV EBX,dword ptr [EBX + 0x38]
00802fd5  SAR ECX,0x3
00802fd8  MOV ECX,dword ptr [EBX + ECX*0x4]
00802fdb  MOV DL,byte ptr [ECX + EDX*0x1 + 0x9c6c00]
00802fe2  MOV EBX,dword ptr [EBP + -0x80]
00802fe5  SUB EDI,ECX
00802fe7  MOV ECX,dword ptr [EBP + 0x14]
00802fea  MOV byte ptr [EBX + EAX*0x1],DL
00802fed  MOV DL,byte ptr [EDI + 0x9c6c00]
00802ff3  SHL ECX,0x2
00802ff6  MOV byte ptr [EAX + ECX*0x1],DL
00802ff9  MOV ECX,dword ptr [EBP + 0xffffff58]
00802fff  MOV CL,byte ptr [ECX]
00803001  MOV EDX,dword ptr [EBP + -0x54]
00803004  MOV byte ptr [EAX],CL
00803006  MOV ECX,dword ptr [EBP + 0xffffff48]
0080300c  MOV CL,byte ptr [ECX]
0080300e  MOV byte ptr [EDX + EAX*0x1],CL
00803011  MOV ECX,dword ptr [EBP + 0xffffff50]
00803017  MOV CL,byte ptr [ECX]
00803019  MOV EDX,dword ptr [EBP + -0x78]
0080301c  MOV byte ptr [EDX + EAX*0x1],CL
0080301f  MOV ECX,dword ptr [EBP + 0xffffff4c]
00803025  MOV CL,byte ptr [ECX]
00803027  MOV EDX,dword ptr [EBP + -0x74]
0080302a  MOV byte ptr [EDX + ESI*0x1],CL
0080302d  MOV ECX,dword ptr [EBP + 0xffffff70]
00803033  MOV CL,byte ptr [ECX + ESI*0x1]
00803036  MOV byte ptr [ESI],CL
00803038  MOV ECX,dword ptr [EBP + -0x10]
0080303b  MOV CL,byte ptr [ECX]
0080303d  MOV EDX,dword ptr [EBP + 0xffffff7c]
00803043  INC dword ptr [EBP + 0xffffff78]
00803049  MOV byte ptr [EDX + ESI*0x1],CL
0080304c  MOV EDX,dword ptr [EBP + 0xffffff68]
00803052  INC EDX
00803053  INC dword ptr [EBP + -0x10]
00803056  INC EAX
00803057  PUSH 0x8
00803059  INC ESI
0080305a  DEC dword ptr [EBP + -0x70]
0080305d  POP ECX
0080305e  MOV dword ptr [EBP + 0xffffff68],EDX
00803064  JNZ 0x00802d18
0080306a  MOV EAX,dword ptr [EBP + -0x50]
0080306d  CMP EAX,dword ptr [EBP + 0x1c]
00803070  JNZ 0x00803097
00803072  INC dword ptr [EBP + -0x50]
00803075  ADD dword ptr [EBP + -0x60],ECX
00803078  ADD dword ptr [EBP + -0x7c],ECX
0080307b  ADD dword ptr [EBP + -0x68],ECX
0080307e  ADD dword ptr [EBP + -0x5c],ECX
00803081  ADD dword ptr [EBP + -0x6c],ECX
00803084  ADD dword ptr [EBP + -0x64],ECX
00803087  ADD dword ptr [EBP + -0x58],ECX
0080308a  ADD dword ptr [EBP + -0x18],0x4
0080308e  ADD dword ptr [EBP + -0x48],0x4
00803092  JMP 0x00803337
00803097  MOV EAX,dword ptr [EBP + -0x64]
0080309a  MOV EDX,dword ptr [EBP + -0x18]
0080309d  MOV dword ptr [EBP + -0x10],EAX
008030a0  MOV EAX,dword ptr [EBP + 0x8]
008030a3  MOV EAX,dword ptr [EAX + 0x24]
008030a6  MOV EAX,dword ptr [EDX + EAX*0x1]
008030a9  MOV EDX,dword ptr [EBP + 0x20]
008030ac  MOV EAX,dword ptr [EDX + EAX*0x4]
008030af  MOV dword ptr [EBP + -0x14],EAX
008030b2  IMUL EAX,EAX
008030b5  LEA EAX,[EAX + EAX*0x2]
008030b8  SAR EAX,0x5
008030bb  MOV dword ptr [EBP + -0x4c],EAX
008030be  MOV EAX,dword ptr [EBP + -0x58]
008030c1  MOV dword ptr [EBP + -0x70],ECX
008030c4  MOVZX ECX,byte ptr [EAX + -0x1]
008030c8  MOVZX EDX,byte ptr [EAX + -0x2]
008030cc  MOVZX EDI,byte ptr [EAX + 0x1]
008030d0  MOVZX ESI,byte ptr [EAX + 0x2]
008030d4  MOV dword ptr [EBP + -0x3c],ECX
008030d7  MOVZX ECX,byte ptr [EAX]
008030da  MOV dword ptr [EBP + -0x38],ECX
008030dd  MOVZX ECX,byte ptr [EAX + 0x3]
008030e1  MOV dword ptr [EBP + -0x2c],ECX
008030e4  MOVZX ECX,byte ptr [EAX + 0x4]
008030e8  MOV dword ptr [EBP + -0x28],ECX
008030eb  MOVZX ECX,byte ptr [EAX + 0x5]
008030ef  MOV dword ptr [EBP + -0x24],ECX
008030f2  XOR ECX,ECX
008030f4  MOV dword ptr [EBP + -0x40],EDX
008030f7  MOV dword ptr [EBP + -0x34],EDI
008030fa  MOV dword ptr [EBP + -0x30],ESI
008030fd  MOV dword ptr [EBP + -0x4],ECX
00803100  MOV dword ptr [EBP + -0x8],ECX
00803103  MOV dword ptr [EBP + -0xc],ECX
00803106  MOV dword ptr [EBP + -0x1c],ECX
00803109  MOV dword ptr [EBP + 0x18],0x1
00803110  MOV ECX,dword ptr [EBP + 0x18]
00803113  MOV ECX,dword ptr [EBP + ECX*0x4 + -0x44]
00803117  ADD dword ptr [EBP + -0x1c],ECX
0080311a  MOV EBX,ECX
0080311c  IMUL EBX,ECX
0080311f  ADD dword ptr [EBP + -0x8],EBX
00803122  INC dword ptr [EBP + 0x18]
00803125  CMP dword ptr [EBP + 0x18],0x4
00803129  JBE 0x00803110
0080312b  MOV dword ptr [EBP + 0x18],0x5
00803132  MOV ECX,dword ptr [EBP + 0x18]
00803135  MOV ECX,dword ptr [EBP + ECX*0x4 + -0x44]
00803139  ADD dword ptr [EBP + -0xc],ECX
0080313c  MOV EBX,ECX
0080313e  IMUL EBX,ECX
00803141  ADD dword ptr [EBP + -0x4],EBX
00803144  INC dword ptr [EBP + 0x18]
00803147  CMP dword ptr [EBP + 0x18],0x8
0080314b  JBE 0x00803132
0080314d  MOV ECX,dword ptr [EBP + -0x1c]
00803150  LEA EBX,[ECX + 0x1]
00803153  SAR ECX,0x1
00803155  SAR EBX,0x1
00803157  IMUL EBX,ECX
0080315a  SUB dword ptr [EBP + -0x8],EBX
0080315d  MOV ECX,dword ptr [EBP + -0xc]
00803160  LEA EBX,[ECX + 0x1]
00803163  SAR ECX,0x1
00803165  SAR EBX,0x1
00803167  IMUL EBX,ECX
0080316a  SUB dword ptr [EBP + -0x4],EBX
0080316d  MOV ECX,dword ptr [EBP + 0x8]
00803170  MOV ECX,dword ptr [ECX + 0x28]
00803173  MOV EBX,dword ptr [EBP + -0x18]
00803176  LEA ECX,[EBX + ECX*0x1 + -0x4]
0080317a  MOV EBX,dword ptr [EBP + -0x8]
0080317d  ADD dword ptr [ECX],EBX
0080317f  MOV ECX,dword ptr [EBP + 0x8]
00803182  MOV ECX,dword ptr [ECX + 0x28]
00803185  MOV EBX,dword ptr [EBP + -0x18]
00803188  ADD ECX,EBX
0080318a  MOV EBX,dword ptr [EBP + -0x4]
0080318d  ADD dword ptr [ECX],EBX
0080318f  MOV ECX,dword ptr [EBP + -0x4c]
00803192  CMP dword ptr [EBP + -0x8],ECX
00803195  JGE 0x008032ef
0080319b  CMP EBX,ECX
0080319d  JGE 0x008032ef
008031a3  MOV ECX,ESI
008031a5  SUB ECX,EDI
008031a7  CMP ECX,dword ptr [EBP + -0x14]
008031aa  JGE 0x008032ef
008031b0  MOV ECX,EDI
008031b2  SUB ECX,ESI
008031b4  CMP ECX,dword ptr [EBP + -0x14]
008031b7  JGE 0x008032ef
008031bd  MOVZX ECX,byte ptr [EAX + -0x3]
008031c1  MOVZX EBX,byte ptr [EAX + -0x2]
008031c5  SUB EBX,ECX
008031c7  TEST EBX,EBX
008031c9  JLE 0x008031cf
008031cb  MOV ECX,EBX
008031cd  JMP 0x008031d5
008031cf  MOVZX EBX,byte ptr [EAX + -0x2]
008031d3  SUB ECX,EBX
008031d5  CMP ECX,dword ptr [EBP + -0x14]
008031d8  JGE 0x008031e0
008031da  MOVZX ECX,byte ptr [EAX + -0x3]
008031de  JMP 0x008031e4
008031e0  MOVZX ECX,byte ptr [EAX + -0x2]
008031e4  MOVZX EBX,byte ptr [EAX + 0x5]
008031e8  MOV dword ptr [EBP + 0x18],ECX
008031eb  MOVZX ECX,byte ptr [EAX + 0x6]
008031ef  SUB EBX,ECX
008031f1  TEST EBX,EBX
008031f3  JLE 0x008031f9
008031f5  MOV ECX,EBX
008031f7  JMP 0x008031ff
008031f9  MOVZX EBX,byte ptr [EAX + 0x5]
008031fd  SUB ECX,EBX
008031ff  CMP ECX,dword ptr [EBP + -0x14]
00803202  JGE 0x0080320a
00803204  MOVZX ECX,byte ptr [EAX + 0x6]
00803208  JMP 0x0080320e
0080320a  MOVZX ECX,byte ptr [EAX + 0x5]
0080320e  MOV dword ptr [EBP + -0x4],ECX
00803211  MOV ECX,dword ptr [EBP + 0x18]
00803214  LEA EBX,[EDI + ECX*0x2]
00803217  ADD EBX,ECX
00803219  ADD EBX,dword ptr [EBP + -0x38]
0080321c  ADD EBX,dword ptr [EBP + -0x3c]
0080321f  LEA ECX,[EBX + EDX*0x1 + 0x4]
00803223  ADD EDX,ECX
00803225  SHL EDX,0x1
00803227  SUB EDX,EDI
00803229  ADD EDX,ESI
0080322b  SAR EDX,0x4
0080322e  MOV byte ptr [EAX + -0x2],DL
00803231  MOV EDX,ESI
00803233  SUB EDX,dword ptr [EBP + 0x18]
00803236  MOV EBX,dword ptr [EBP + -0x10]
00803239  ADD ECX,EDX
0080323b  MOV EDX,dword ptr [EBP + -0x3c]
0080323e  ADD EDX,ECX
00803240  SHL EDX,0x1
00803242  SUB EDX,ESI
00803244  ADD EDX,dword ptr [EBP + -0x2c]
00803247  SAR EDX,0x4
0080324a  MOV byte ptr [EAX + -0x1],DL
0080324d  MOV EDX,dword ptr [EBP + -0x2c]
00803250  SUB EDX,dword ptr [EBP + 0x18]
00803253  ADD ECX,EDX
00803255  MOV EDX,dword ptr [EBP + -0x38]
00803258  ADD EDX,ECX
0080325a  SHL EDX,0x1
0080325c  SUB EDX,dword ptr [EBP + -0x2c]
0080325f  ADD EDX,dword ptr [EBP + -0x28]
00803262  SAR EDX,0x4
00803265  MOV byte ptr [EAX],DL
00803267  MOV EDX,dword ptr [EBP + -0x28]
0080326a  SUB EDX,dword ptr [EBP + 0x18]
0080326d  ADD ECX,EDX
0080326f  LEA EDX,[ECX + EDI*0x1]
00803272  SHL EDX,0x1
00803274  SUB EDX,dword ptr [EBP + -0x28]
00803277  SUB EDX,dword ptr [EBP + -0x40]
0080327a  ADD EDX,dword ptr [EBP + 0x18]
0080327d  ADD EDX,dword ptr [EBP + -0x24]
00803280  SAR EDX,0x4
00803283  MOV byte ptr [EAX + 0x1],DL
00803286  MOV EDX,dword ptr [EBP + -0x24]
00803289  SUB EDX,dword ptr [EBP + -0x40]
0080328c  ADD ECX,EDX
0080328e  LEA EDX,[ECX + ESI*0x1]
00803291  SHL EDX,0x1
00803293  SUB EDX,dword ptr [EBP + -0x24]
00803296  SUB EDX,dword ptr [EBP + -0x3c]
00803299  ADD EDX,dword ptr [EBP + -0x4]
0080329c  ADD EDX,dword ptr [EBP + -0x40]
0080329f  SAR EDX,0x4
008032a2  MOV byte ptr [EBX],DL
008032a4  MOV EDX,dword ptr [EBP + -0x4]
008032a7  SUB EDX,dword ptr [EBP + -0x3c]
008032aa  ADD ECX,EDX
008032ac  MOV EDX,dword ptr [EBP + -0x2c]
008032af  ADD EDX,ECX
008032b1  SHL EDX,0x1
008032b3  SUB EDX,dword ptr [EBP + -0x38]
008032b6  ADD EDX,dword ptr [EBP + -0x3c]
008032b9  SAR EDX,0x4
008032bc  MOV byte ptr [EAX + 0x3],DL
008032bf  MOV EDX,dword ptr [EBP + -0x4]
008032c2  SUB EDX,dword ptr [EBP + -0x38]
008032c5  ADD ECX,EDX
008032c7  MOV EDX,dword ptr [EBP + -0x28]
008032ca  ADD EDX,ECX
008032cc  SHL EDX,0x1
008032ce  SUB EDX,EDI
008032d0  ADD EDX,dword ptr [EBP + -0x38]
008032d3  SAR EDX,0x4
008032d6  MOV byte ptr [EAX + 0x4],DL
008032d9  MOV EDX,dword ptr [EBP + -0x4]
008032dc  ADD ECX,EDX
008032de  ADD ECX,dword ptr [EBP + -0x24]
008032e1  SHL ECX,0x1
008032e3  SUB ECX,ESI
008032e5  SUB ECX,EDI
008032e7  SAR ECX,0x4
008032ea  MOV byte ptr [EAX + 0x5],CL
008032ed  JMP 0x00803323
008032ef  MOV EDX,dword ptr [EBP + -0x38]
008032f2  MOV ECX,ESI
008032f4  SUB ECX,EDI
008032f6  LEA ECX,[ECX + ECX*0x2]
008032f9  SUB ECX,dword ptr [EBP + -0x2c]
008032fc  LEA ECX,[ECX + EDX*0x1 + 0x4]
00803300  MOV EDX,dword ptr [EBP + 0x8]
00803303  MOV EDX,dword ptr [EDX + 0x38]
00803306  SAR ECX,0x3
00803309  MOV ECX,dword ptr [EDX + ECX*0x4]
0080330c  MOV DL,byte ptr [ECX + EDI*0x1 + 0x9c6c00]
00803313  MOV byte ptr [EAX + 0x1],DL
00803316  MOV EDX,dword ptr [EBP + -0x10]
00803319  SUB ESI,ECX
0080331b  MOV CL,byte ptr [ESI + 0x9c6c00]
00803321  MOV byte ptr [EDX],CL
00803323  MOV EDX,dword ptr [EBP + 0x14]
00803326  ADD dword ptr [EBP + -0x10],EDX
00803329  PUSH 0x8
0080332b  ADD EAX,EDX
0080332d  DEC dword ptr [EBP + -0x70]
00803330  POP ECX
00803331  JNZ 0x008030c4
00803337  INC dword ptr [EBP + -0x50]
0080333a  MOV ESI,dword ptr [EBP + -0x7c]
0080333d  MOV EAX,dword ptr [EBP + -0x50]
00803340  ADD dword ptr [EBP + -0x60],ECX
00803343  ADD dword ptr [EBP + -0x68],ECX
00803346  ADD dword ptr [EBP + -0x5c],ECX
00803349  ADD dword ptr [EBP + -0x6c],ECX
0080334c  ADD dword ptr [EBP + -0x64],ECX
0080334f  ADD dword ptr [EBP + -0x58],ECX
00803352  ADD dword ptr [EBP + -0x18],0x4
00803356  ADD dword ptr [EBP + -0x48],0x4
0080335a  ADD ESI,ECX
0080335c  CMP EAX,dword ptr [EBP + 0xffffff54]
00803362  MOV dword ptr [EBP + -0x7c],ESI
00803365  JC 0x00802cd9
0080336b  POP EDI
0080336c  POP ESI
0080336d  POP EBX
0080336e  LEAVE
0080336f  RET
