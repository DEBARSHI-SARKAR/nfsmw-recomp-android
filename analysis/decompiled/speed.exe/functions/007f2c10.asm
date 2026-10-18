007f2c10  PUSH EBP
007f2c11  MOV EBP,ESP
007f2c13  SUB ESP,0xb0
007f2c19  PUSH EBX
007f2c1a  PUSH ESI
007f2c1b  PUSH EDI
007f2c1c  XOR EAX,EAX
007f2c1e  XOR EDX,EDX
007f2c20  MOV dword ptr [EBP + -0x70],EDX
007f2c23  LEA EDI,[EBP + -0x6c]
007f2c26  STOSD ES:EDI
007f2c27  MOV dword ptr [EBP + 0xffffff68],EDX
007f2c2d  LEA EDI,[EBP + 0xffffff6c]
007f2c33  STOSD ES:EDI
007f2c34  STOSD ES:EDI
007f2c35  STOSD ES:EDI
007f2c36  PUSH 0x1a
007f2c38  MOV dword ptr [EBP + 0xffffff78],ECX
007f2c3e  LEA EDI,[ECX + 0x4]
007f2c41  POP ECX
007f2c42  MOV dword ptr [EBP + -0x30],EDX
007f2c45  MOV dword ptr [EBP + -0x7c],EDX
007f2c48  MOV EDX,dword ptr [EBP + 0x8]
007f2c4b  XOR EAX,EAX
007f2c4d  PUSH 0xe
007f2c4f  MOV ESI,EDX
007f2c51  MOVSD.REP ES:EDI,ESI
007f2c53  POP ECX
007f2c54  LEA EDI,[EBP + -0x68]
007f2c57  STOSD.REP ES:EDI
007f2c59  MOV EAX,dword ptr [EDX + 0xc]
007f2c5c  MOV dword ptr [EBP + -0x60],EAX
007f2c5f  MOV EAX,dword ptr [EDX + 0x14]
007f2c62  MOV dword ptr [EBP + -0x5c],EAX
007f2c65  MOV EAX,dword ptr [EDX + 0x4]
007f2c68  PUSH 0x2
007f2c6a  MOV dword ptr [EBP + -0x58],EAX
007f2c6d  MOV EAX,dword ptr [EDX + 0x18]
007f2c70  CMP EAX,-0x1
007f2c73  MOV EBX,0x8c048c
007f2c78  POP ECX
007f2c79  MOV dword ptr [EBP + -0x4],EBX
007f2c7c  MOV dword ptr [EBP + -0x78],0x4
007f2c83  MOV dword ptr [EBP + -0x74],0x8
007f2c8a  MOV dword ptr [EBP + -0x68],0x38
007f2c91  MOV dword ptr [EBP + -0x64],ECX
007f2c94  JNZ 0x007f2c9b
007f2c96  OR dword ptr [EBP + -0x54],EAX
007f2c99  JMP 0x007f2ca1
007f2c9b  ADD EAX,0x30
007f2c9e  MOV dword ptr [EBP + -0x54],EAX
007f2ca1  MOV EAX,dword ptr [EDX + 0x1c]
007f2ca4  MOV dword ptr [EBP + -0x50],EAX
007f2ca7  MOV EAX,dword ptr [EDX]
007f2ca9  CMP EAX,0x40
007f2cac  JG 0x007f2d66
007f2cb2  JZ 0x007f2d38
007f2cb8  DEC EAX
007f2cb9  JZ 0x007f2d20
007f2cbb  DEC EAX
007f2cbc  JZ 0x007f2cfe
007f2cbe  SUB EAX,ECX
007f2cc0  JZ 0x007f2cf5
007f2cc2  SUB EAX,0x4
007f2cc5  JZ 0x007f2cec
007f2cc7  SUB EAX,0x8
007f2cca  JZ 0x007f2ce3
007f2ccc  PUSH 0x10
007f2cce  POP ECX
007f2ccf  SUB EAX,ECX
007f2cd1  JNZ 0x007f2e1a
007f2cd7  MOV dword ptr [EBP + -0x4],0x8c043c
007f2cde  MOV dword ptr [EBP + -0x3c],ECX
007f2ce1  JMP 0x007f2d46
007f2ce3  MOV dword ptr [EBP + -0x4],0x8c044c
007f2cea  JMP 0x007f2d3f
007f2cec  MOV dword ptr [EBP + -0x4],0x8c045c
007f2cf3  JMP 0x007f2d3f
007f2cf5  MOV dword ptr [EBP + -0x4],0x8c046c
007f2cfc  JMP 0x007f2d3f
007f2cfe  MOV EAX,dword ptr [EDX + 0x50]
007f2d01  MOV dword ptr [EBP + -0x70],EAX
007f2d04  MOV EAX,dword ptr [EDX + 0x54]
007f2d07  MOV dword ptr [EBP + -0x6c],EAX
007f2d0a  MOV dword ptr [EBP + -0x4],0x8c047c
007f2d11  MOV dword ptr [EBP + -0x3c],0x8
007f2d18  LEA EAX,[EBP + -0x70]
007f2d1b  JMP 0x007f2e17
007f2d20  MOV EAX,dword ptr [EDX + 0x8]
007f2d23  MOV dword ptr [EBP + -0x30],EAX
007f2d26  MOV dword ptr [EBP + -0x4],EBX
007f2d29  MOV dword ptr [EBP + -0x3c],0x4
007f2d30  LEA EAX,[EBP + -0x30]
007f2d33  JMP 0x007f2e17
007f2d38  MOV dword ptr [EBP + -0x4],0x8c042c
007f2d3f  MOV dword ptr [EBP + -0x3c],0x10
007f2d46  MOV EAX,dword ptr [EDX + 0x50]
007f2d49  MOV dword ptr [EBP + -0x14],EAX
007f2d4c  MOV EAX,dword ptr [EDX + 0x54]
007f2d4f  MOV dword ptr [EBP + -0x10],EAX
007f2d52  MOV EAX,dword ptr [EDX + 0x5c]
007f2d55  MOV dword ptr [EBP + -0x8],EAX
007f2d58  MOV EAX,dword ptr [EDX + 0x58]
007f2d5b  MOV dword ptr [EBP + -0xc],EAX
007f2d5e  LEA EAX,[EBP + -0x14]
007f2d61  JMP 0x007f2e17
007f2d66  CMP EAX,0x100
007f2d6b  JZ 0x007f2de2
007f2d6d  CMP EAX,0x200
007f2d72  JZ 0x007f2dd9
007f2d74  CMP EAX,0x400
007f2d79  JZ 0x007f2dd0
007f2d7b  CMP EAX,0x800
007f2d80  JZ 0x007f2dc7
007f2d82  CMP EAX,0x1000
007f2d87  JNZ 0x007f2e1a
007f2d8d  MOV EAX,dword ptr [EDX + 0x24]
007f2d90  MOV dword ptr [EBP + 0xffffff68],EAX
007f2d96  MOV EAX,dword ptr [EDX + 0x54]
007f2d99  MOV dword ptr [EBP + 0xffffff6c],EAX
007f2d9f  MOV EAX,dword ptr [EDX + 0x50]
007f2da2  MOV dword ptr [EBP + 0xffffff70],EAX
007f2da8  MOV EAX,dword ptr [EDX + 0x58]
007f2dab  MOV dword ptr [EBP + 0xffffff74],EAX
007f2db1  MOV dword ptr [EBP + -0x4],0x8c03dc
007f2db8  MOV dword ptr [EBP + -0x3c],0x10
007f2dbf  LEA EAX,[EBP + 0xffffff68]
007f2dc5  JMP 0x007f2e17
007f2dc7  MOV dword ptr [EBP + -0x4],0x8c03ec
007f2dce  JMP 0x007f2de9
007f2dd0  MOV dword ptr [EBP + -0x4],0x8c03fc
007f2dd7  JMP 0x007f2de9
007f2dd9  MOV dword ptr [EBP + -0x4],0x8c040c
007f2de0  JMP 0x007f2de9
007f2de2  MOV dword ptr [EBP + -0x4],0x8c041c
007f2de9  MOV EAX,dword ptr [EDX + 0x50]
007f2dec  MOV dword ptr [EBP + -0x2c],EAX
007f2def  MOV EAX,dword ptr [EDX + 0x60]
007f2df2  MOV dword ptr [EBP + -0x1c],EAX
007f2df5  MOV EAX,dword ptr [EDX + 0x58]
007f2df8  MOV dword ptr [EBP + -0x24],EAX
007f2dfb  MOV EAX,dword ptr [EDX + 0x5c]
007f2dfe  MOV dword ptr [EBP + -0x20],EAX
007f2e01  MOV EAX,dword ptr [EDX + 0x54]
007f2e04  MOV dword ptr [EBP + -0x28],EAX
007f2e07  MOV EAX,dword ptr [EDX + 0x64]
007f2e0a  MOV dword ptr [EBP + -0x18],EAX
007f2e0d  MOV dword ptr [EBP + -0x3c],0x18
007f2e14  LEA EAX,[EBP + -0x2c]
007f2e17  MOV dword ptr [EBP + -0x38],EAX
007f2e1a  MOV EAX,dword ptr [EDX + 0x20]
007f2e1d  DEC EAX
007f2e1e  JZ 0x007f2e38
007f2e20  DEC EAX
007f2e21  JZ 0x007f2e2f
007f2e23  DEC EAX
007f2e24  JNZ 0x007f2e3f
007f2e26  MOV dword ptr [EBP + -0x64],0x42
007f2e2d  JMP 0x007f2e3f
007f2e2f  MOV dword ptr [EBP + -0x64],0x22
007f2e36  JMP 0x007f2e3f
007f2e38  MOV dword ptr [EBP + -0x64],0x12
007f2e3f  LEA ESI,[EDX + 0x34]
007f2e42  LEA EDI,[EBP + 0xffffff50]
007f2e48  MOVSD ES:EDI,ESI
007f2e49  MOVSD ES:EDI,ESI
007f2e4a  LEA EAX,[EDX + 0x28]
007f2e4d  MOVSD ES:EDI,ESI
007f2e4e  XOR ECX,ECX
007f2e50  MOV ESI,dword ptr [EAX]
007f2e52  MOV ESI,dword ptr [EBP + ESI*0x4 + -0x7c]
007f2e56  MOV dword ptr [EBP + ECX*0x1 + 0xffffff5c],ESI
007f2e5d  ADD ECX,0x4
007f2e60  ADD EAX,0x4
007f2e63  CMP ECX,0xc
007f2e66  JL 0x007f2e50
007f2e68  MOV EAX,dword ptr [EDX + 0x24]
007f2e6b  MOV dword ptr [EBP + -0x4c],EAX
007f2e6e  LEA EAX,[EBP + 0xffffff5c]
007f2e74  MOV dword ptr [EBP + -0x48],EAX
007f2e77  LEA EAX,[EBP + 0xffffff50]
007f2e7d  MOV dword ptr [EBP + -0x44],EAX
007f2e80  MOV EAX,dword ptr [EDX + 0x44]
007f2e83  TEST EAX,EAX
007f2e85  JNZ 0x007f2e8c
007f2e87  CMP dword ptr [EDX + 0x4c],EAX
007f2e8a  JZ 0x007f2eb4
007f2e8c  MOV ECX,dword ptr [EDX + 0x40]
007f2e8f  MOV dword ptr [EBP + -0x7c],EAX
007f2e92  MOV EAX,dword ptr [EDX + 0x48]
007f2e95  MOV dword ptr [EBP + -0x78],EAX
007f2e98  MOV EAX,dword ptr [EDX + 0x4c]
007f2e9b  MOV dword ptr [EBP + -0x74],EAX
007f2e9e  LEA EAX,[EBP + 0xffffff7c]
007f2ea4  MOV dword ptr [EBP + 0xffffff7c],0x14
007f2eae  MOV dword ptr [EBP + -0x80],ECX
007f2eb1  MOV dword ptr [EBP + -0x40],EAX
007f2eb4  MOV EDI,dword ptr [EBP + 0xffffff78]
007f2eba  LEA ESI,[EDI + 0x78]
007f2ebd  MOV EAX,dword ptr [ESI]
007f2ebf  XOR BL,BL
007f2ec1  TEST EAX,EAX
007f2ec3  JZ 0x007f2eeb
007f2ec5  MOV ECX,dword ptr [EAX]
007f2ec7  LEA EDX,[EBP + 0x8]
007f2eca  PUSH EDX
007f2ecb  PUSH EAX
007f2ecc  CALL dword ptr [ECX + 0x24]
007f2ecf  TEST byte ptr [EBP + 0x8],0x1
007f2ed3  JZ 0x007f2ee3
007f2ed5  MOV EAX,dword ptr [ESI]
007f2ed7  MOV ECX,dword ptr [EAX]
007f2ed9  PUSH EAX
007f2eda  CALL dword ptr [ECX + 0x20]
007f2edd  AND dword ptr [EDI + 0x70],0x0
007f2ee1  INC BL
007f2ee3  MOV EAX,dword ptr [ESI]
007f2ee5  MOV ECX,dword ptr [EAX]
007f2ee7  PUSH EAX
007f2ee8  CALL dword ptr [ECX + 0x8]
007f2eeb  MOV EAX,dword ptr [EDI + 0x6c]
007f2eee  MOV EAX,dword ptr [EAX + 0x468]
007f2ef4  MOV ECX,dword ptr [EAX]
007f2ef6  PUSH 0x0
007f2ef8  PUSH ESI
007f2ef9  LEA EDX,[EBP + -0x68]
007f2efc  PUSH EDX
007f2efd  PUSH dword ptr [EBP + -0x4]
007f2f00  PUSH EAX
007f2f01  CALL dword ptr [ECX + 0x48]
007f2f04  TEST BL,BL
007f2f06  JZ 0x007f2f0f
007f2f08  MOV EAX,dword ptr [EDI]
007f2f0a  MOV ECX,EDI
007f2f0c  CALL dword ptr [EAX + 0x4]
007f2f0f  POP EDI
007f2f10  POP ESI
007f2f11  POP EBX
007f2f12  LEAVE
007f2f13  RET 0x4
