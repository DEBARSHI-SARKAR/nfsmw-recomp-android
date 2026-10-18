007c2ba0  PUSH -0x1
007c2ba2  PUSH 0x883b96
007c2ba7  MOV EAX,FS:[0x0]
007c2bad  PUSH EAX
007c2bae  MOV dword ptr FS:[0x0],ESP
007c2bb5  PUSH ECX
007c2bb6  PUSH EBX
007c2bb7  PUSH EBP
007c2bb8  MOV EBP,dword ptr [ESP + 0x1c]
007c2bbc  PUSH ESI
007c2bbd  PUSH EDI
007c2bbe  MOV ESI,ECX
007c2bc0  PUSH EBP
007c2bc1  MOV dword ptr [ESP + 0x14],ESI
007c2bc5  CALL 0x00586290
007c2bca  LEA EAX,[ESI + 0x2c]
007c2bcd  XOR EBX,EBX
007c2bcf  MOV dword ptr [ESI],0x8b7e3c
007c2bd5  MOV dword ptr [ESP + 0x1c],EBX
007c2bd9  MOV dword ptr [EAX],EAX
007c2bdb  MOV dword ptr [EAX + 0x4],EAX
007c2bde  MOV dword ptr [ESI + 0x38],EBX
007c2be1  MOV EAX,dword ptr [ESI + 0x10]
007c2be4  MOV dword ptr [ESI + 0x3c],EBX
007c2be7  MOV dword ptr [ESI + 0x40],EBX
007c2bea  MOV dword ptr [ESI + 0x44],EBX
007c2bed  MOV dword ptr [ESI + 0x48],EBX
007c2bf0  MOV dword ptr [ESI + 0x4c],EBX
007c2bf3  MOV dword ptr [ESI + 0x68],0xffffffff
007c2bfa  MOVZX ECX,byte ptr [EBP + 0x9]
007c2bfe  LEA EDI,[ESI + 0x6c]
007c2c01  MOV dword ptr [EDI],0x8b72b4
007c2c07  MOV dword ptr [EDI + 0xc],ECX
007c2c0a  MOV dword ptr [EDI + 0x10],EBX
007c2c0d  MOV dword ptr [EDI + 0x14],EAX
007c2c10  MOV byte ptr [EDI + 0x18],BL
007c2c13  MOV dword ptr [EDI + 0x4],EBX
007c2c16  MOV dword ptr [EDI + 0x8],EBX
007c2c19  MOV dword ptr [ESI + 0x88],0x8b7244
007c2c23  MOV dword ptr [ESI + 0x8c],EBX
007c2c29  MOV dword ptr [ESI + 0x90],0x3f800000
007c2c33  MOV dword ptr [ESI + 0x94],EBX
007c2c39  MOV dword ptr [ESI + 0x98],EBX
007c2c3f  MOV dword ptr [ESI + 0x9c],EBX
007c2c45  MOV dword ptr [ESI + 0xa0],0x5
007c2c4f  MOV dword ptr [ESI + 0xa4],EBX
007c2c55  MOV dword ptr [ESI + 0xd4],EBX
007c2c5b  MOV dword ptr [ESI + 0xac],EBX
007c2c61  MOV dword ptr [ESI + 0xb0],EBX
007c2c67  MOV dword ptr [ESI + 0xb4],EBX
007c2c6d  MOV dword ptr [ESI + 0xb8],EBX
007c2c73  MOV dword ptr [ESI + 0xbc],EBX
007c2c79  MOV dword ptr [ESI + 0xc0],EBX
007c2c7f  MOV dword ptr [ESI + 0xc4],EBX
007c2c85  MOV dword ptr [ESI + 0xc8],EBX
007c2c8b  MOV dword ptr [ESI + 0xcc],EBX
007c2c91  MOV dword ptr [ESI + 0xd0],EBX
007c2c97  LEA ECX,[ESI + 0xd8]
007c2c9d  MOV byte ptr [ESP + 0x1c],0x3
007c2ca2  CALL 0x0056c9f0
007c2ca7  MOV dword ptr [ESI + 0xd8],0x89b098
007c2cb1  LEA ECX,[ESI + 0x11c]
007c2cb7  MOV byte ptr [ESP + 0x1c],0x4
007c2cbc  CALL 0x0056c9f0
007c2cc1  MOV dword ptr [ESI + 0x11c],0x89b098
007c2ccb  LEA ECX,[ESI + 0x160]
007c2cd1  MOV byte ptr [ESP + 0x1c],0x5
007c2cd6  CALL 0x0056c9f0
007c2cdb  MOV dword ptr [ESI + 0x160],0x89b098
007c2ce5  MOV byte ptr [ESI + 0x1a4],BL
007c2ceb  MOV byte ptr [ESI + 0x1a5],BL
007c2cf1  MOV EAX,dword ptr [EBP + 0x8]
007c2cf4  AND EAX,0xff
007c2cf9  MOV dword ptr [ESI + 0x1a8],EAX
007c2cff  MOV EAX,dword ptr [ESI + 0x10]
007c2d02  MOV byte ptr [ESP + 0x1c],0x6
007c2d07  MOV dword ptr [ESI + 0x1ac],EBX
007c2d0d  MOV dword ptr [ESI + 0x1b0],EBX
007c2d13  MOV dword ptr [ESI + 0x38],EBX
007c2d16  PUSH 0x3e01ad1d
007c2d1b  PUSH EAX
007c2d1c  CALL 0x005251a0
007c2d21  MOV dword ptr [ESI + 0x3c],EAX
007c2d24  MOV EAX,dword ptr [ESI + 0x10]
007c2d27  PUSH 0xb05dd708
007c2d2c  PUSH EAX
007c2d2d  CALL 0x005251a0
007c2d32  MOV dword ptr [ESI + 0x40],EAX
007c2d35  MOV EAX,dword ptr [ESI + 0x10]
007c2d38  PUSH 0xd6d32016
007c2d3d  PUSH EAX
007c2d3e  CALL 0x005251e0
007c2d43  MOV dword ptr [ESI + 0x44],EAX
007c2d46  MOV EAX,dword ptr [ESI + 0x10]
007c2d49  PUSH 0x79d6e45c
007c2d4e  PUSH EAX
007c2d4f  CALL 0x005251e0
007c2d54  MOV dword ptr [ESI + 0x48],EAX
007c2d57  MOV EAX,dword ptr [ESI + 0x10]
007c2d5a  PUSH 0x5ba2f765
007c2d5f  PUSH EAX
007c2d60  CALL 0x005251e0
007c2d65  MOV dword ptr [ESI + 0x4c],EAX
007c2d68  MOV ECX,dword ptr [0x0091cf90]
007c2d6e  MOV AL,byte ptr [ECX + 0x12c]
007c2d74  ADD ESP,0x28
007c2d77  TEST AL,0x4
007c2d79  JZ 0x007c2de8
007c2d7b  CMP byte ptr [ECX],0x2
007c2d7e  JNZ 0x007c2de8
007c2d80  CMP dword ptr [ESI + 0x1a8],EBX
007c2d86  JNZ 0x007c2db9
007c2d88  PUSH 0x7b070984
007c2d8d  MOV dword ptr [0x009b9d5c],EBX
007c2d93  MOV ECX,dword ptr [ESI + 0x10]
007c2d96  PUSH 0xe3fe27fe
007c2d9b  PUSH ECX
007c2d9c  CALL 0x00525220
007c2da1  MOV ECX,dword ptr [0x0091cf90]
007c2da7  ADD ESP,0xc
007c2daa  PUSH 0x1
007c2dac  CALL 0x0058ffa0
007c2db1  MOV ECX,dword ptr [0x0091cf90]
007c2db7  JMP 0x007c2dee
007c2db9  PUSH 0x1
007c2dbb  MOV dword ptr [0x009b9d5c],0x1
007c2dc5  CALL 0x005aba50
007c2dca  MOV EDX,dword ptr [ESI + 0x10]
007c2dcd  PUSH 0x7b070985
007c2dd2  PUSH 0xe3fe27fe
007c2dd7  PUSH EDX
007c2dd8  CALL 0x00525220
007c2ddd  MOV ECX,dword ptr [0x0091cf90]
007c2de3  ADD ESP,0xc
007c2de6  JMP 0x007c2dee
007c2de8  MOV dword ptr [0x009b9d5c],EBX
007c2dee  MOV EAX,dword ptr [ECX + 0x12c]
007c2df4  SHR EAX,0xf
007c2df7  TEST AL,0x1
007c2df9  JNZ 0x007c2e54
007c2dfb  MOV EAX,dword ptr [ESI + 0x10]
007c2dfe  PUSH 0x19398802
007c2e03  PUSH EAX
007c2e04  CALL 0x00524850
007c2e09  PUSH EAX
007c2e0a  CALL 0x00514c70
007c2e0f  MOV EAX,dword ptr [ESI + 0x10]
007c2e12  PUSH 0x1930b057
007c2e17  PUSH EAX
007c2e18  CALL 0x00524850
007c2e1d  PUSH EAX
007c2e1e  CALL 0x00514c70
007c2e23  MOV EAX,dword ptr [ESI + 0x10]
007c2e26  PUSH 0x20d113dc
007c2e2b  PUSH EAX
007c2e2c  CALL 0x00524850
007c2e31  PUSH EAX
007c2e32  CALL 0x00514c70
007c2e37  MOV EAX,dword ptr [ESI + 0x10]
007c2e3a  PUSH 0x20c83c31
007c2e3f  PUSH EAX
007c2e40  CALL 0x00524850
007c2e45  PUSH EAX
007c2e46  CALL 0x00514c70
007c2e4b  MOV ECX,dword ptr [0x0091cf90]
007c2e51  ADD ESP,0x30
007c2e54  MOV EBP,dword ptr [ECX + 0x12c]
007c2e5a  MOV EDX,EBP
007c2e5c  SHR EDX,0x3
007c2e5f  TEST DL,0x1
007c2e62  JNZ 0x007c2e6d
007c2e64  MOV EAX,EBP
007c2e66  SHR EAX,0x6
007c2e69  TEST AL,0x1
007c2e6b  JZ 0x007c2e9e
007c2e6d  MOV EAX,dword ptr [ESI + 0x10]
007c2e70  PUSH 0xe9ed0a2
007c2e75  PUSH EAX
007c2e76  CALL 0x00524850
007c2e7b  PUSH EAX
007c2e7c  CALL 0x00514c70
007c2e81  MOV EAX,dword ptr [ESI + 0x10]
007c2e84  PUSH 0x18a4384f
007c2e89  PUSH EAX
007c2e8a  CALL 0x00524850
007c2e8f  PUSH EAX
007c2e90  CALL 0x00514c70
007c2e95  MOV ECX,dword ptr [0x0091cf90]
007c2e9b  ADD ESP,0x18
007c2e9e  TEST byte ptr [ECX + 0x12c],0x1
007c2ea5  JZ 0x007c2ebc
007c2ea7  MOV ECX,dword ptr [ECX + 0x12c]
007c2ead  SHR ECX,0xf
007c2eb0  TEST CL,0x1
007c2eb3  JNZ 0x007c2ebc
007c2eb5  MOV ECX,EDI
007c2eb7  CALL 0x007ad640
007c2ebc  MOV ECX,ESI
007c2ebe  CALL 0x007b4d70
007c2ec3  MOV ECX,ESI
007c2ec5  MOV byte ptr [ESI + 0x20],0x1
007c2ec9  CALL 0x007c2780
007c2ece  MOV EAX,[0x0091cf90]
007c2ed3  TEST byte ptr [EAX + 0x12c],0x1
007c2eda  JZ 0x007c2eea
007c2edc  MOV EDX,dword ptr [EAX + 0x12c]
007c2ee2  SHR EDX,0xf
007c2ee5  TEST DL,0x1
007c2ee8  JNZ 0x007c2efa
007c2eea  PUSH 0x89b2c8
007c2eef  CALL 0x00591e90
007c2ef4  ADD ESP,0x4
007c2ef7  MOV byte ptr [EAX + 0x58],BL
007c2efa  MOV ECX,dword ptr [ESP + 0x14]
007c2efe  POP EDI
007c2eff  MOV EAX,ESI
007c2f01  POP ESI
007c2f02  POP EBP
007c2f03  POP EBX
007c2f04  MOV dword ptr FS:[0x0],ECX
007c2f0b  ADD ESP,0x10
007c2f0e  RET 0x4
