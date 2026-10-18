007e3cf0  PUSH EBP
007e3cf1  MOV EBP,ESP
007e3cf3  PUSH -0x1
007e3cf5  PUSH 0x8bf088
007e3cfa  PUSH 0x7cd5e4
007e3cff  MOV EAX,FS:[0x0]
007e3d05  PUSH EAX
007e3d06  MOV dword ptr FS:[0x0],ESP
007e3d0d  ADD ESP,0xfffffecc
007e3d13  MOV EAX,[0x00906980]
007e3d18  MOV dword ptr [EBP + -0x2c],EAX
007e3d1b  PUSH EBX
007e3d1c  PUSH ESI
007e3d1d  PUSH EDI
007e3d1e  MOV dword ptr [EBP + -0x18],ESP
007e3d21  CMP dword ptr [0x009baf48],0x0
007e3d28  JZ 0x007e3d60
007e3d2a  MOV dword ptr [EBP + -0x4],0x0
007e3d31  MOV EAX,dword ptr [EBP + 0xc]
007e3d34  PUSH EAX
007e3d35  MOV ECX,dword ptr [EBP + 0x8]
007e3d38  PUSH ECX
007e3d39  CALL dword ptr [0x009baf48]
007e3d3f  ADD ESP,0x8
007e3d42  MOV dword ptr [EBP + -0x4],0xffffffff
007e3d49  JMP 0x007e3d5b
007e3d5b  JMP 0x007e3eeb
007e3d60  MOV EDX,dword ptr [EBP + 0x8]
007e3d63  MOV dword ptr [EBP + 0xfffffec0],EDX
007e3d69  CMP dword ptr [EBP + 0xfffffec0],0x1
007e3d70  JZ 0x007e3d8c
007e3d72  MOV dword ptr [EBP + 0xfffffec4],0x8bf064
007e3d7c  MOV dword ptr [EBP + -0x20],0x8befb0
007e3d83  MOV dword ptr [EBP + -0x1c],0xd4
007e3d8a  JMP 0x007e3da4
007e3d8c  MOV dword ptr [EBP + 0xfffffec4],0x8bef90
007e3d96  MOV dword ptr [EBP + -0x20],0x8beef0
007e3d9d  MOV dword ptr [EBP + -0x1c],0xb9
007e3da4  MOV EAX,dword ptr [EBP + -0x20]
007e3da7  PUSH EAX
007e3da8  PUSH 0x8941f8
007e3dad  PUSH 0x0
007e3daf  PUSH 0x0
007e3db1  PUSH 0x0
007e3db3  PUSH 0x1
007e3db5  CALL 0x007d2670
007e3dba  ADD ESP,0x18
007e3dbd  CMP EAX,0x1
007e3dc0  JNZ 0x007e3dc3
007e3dc2  INT3
007e3dc3  MOV byte ptr [EBP + -0x34],0x0
007e3dc7  PUSH 0x104
007e3dcc  LEA EDX,[EBP + 0xfffffec8]
007e3dd2  PUSH EDX
007e3dd3  PUSH 0x0
007e3dd5  CALL dword ptr [0x008901d4]
007e3ddb  TEST EAX,EAX
007e3ddd  JNZ 0x007e3df3
007e3ddf  PUSH 0x8b9170
007e3de4  LEA EAX,[EBP + 0xfffffec8]
007e3dea  PUSH EAX
007e3deb  CALL 0x007d0bd0
007e3df0  ADD ESP,0x8
007e3df3  LEA ECX,[EBP + 0xfffffec8]
007e3df9  MOV dword ptr [EBP + -0x28],ECX
007e3dfc  LEA EDX,[EBP + 0xfffffec8]
007e3e02  PUSH EDX
007e3e03  CALL 0x007d0cd0
007e3e08  ADD ESP,0x4
007e3e0b  ADD EAX,0xb
007e3e0e  CMP EAX,0x3c
007e3e11  JBE 0x007e3e3f
007e3e13  LEA EAX,[EBP + 0xfffffec8]
007e3e19  PUSH EAX
007e3e1a  CALL 0x007d0cd0
007e3e1f  ADD ESP,0x4
007e3e22  MOV ECX,dword ptr [EBP + -0x28]
007e3e25  LEA EDX,[ECX + EAX*0x1 + -0x31]
007e3e29  MOV dword ptr [EBP + -0x28],EDX
007e3e2c  PUSH 0x3
007e3e2e  PUSH 0x8a40d8
007e3e33  MOV EAX,dword ptr [EBP + -0x28]
007e3e36  PUSH EAX
007e3e37  CALL 0x007c64e0
007e3e3c  ADD ESP,0xc
007e3e3f  MOV ECX,dword ptr [EBP + -0x28]
007e3e42  PUSH ECX
007e3e43  CALL 0x007d0cd0
007e3e48  ADD ESP,0x4
007e3e4b  MOV EDX,dword ptr [EBP + -0x1c]
007e3e4e  LEA EAX,[EDX + EAX*0x1 + 0xc]
007e3e52  ADD EAX,0x3
007e3e55  AND EAX,0xfffffffc
007e3e58  CALL 0x007c94b0
007e3e5d  MOV dword ptr [EBP + 0xfffffebc],ESP
007e3e63  MOV dword ptr [EBP + -0x18],ESP
007e3e66  MOV EAX,dword ptr [EBP + 0xfffffebc]
007e3e6c  MOV dword ptr [EBP + -0x24],EAX
007e3e6f  MOV ECX,dword ptr [EBP + 0xfffffec4]
007e3e75  PUSH ECX
007e3e76  MOV EDX,dword ptr [EBP + -0x24]
007e3e79  PUSH EDX
007e3e7a  CALL 0x007d0bd0
007e3e7f  ADD ESP,0x8
007e3e82  PUSH 0x8b9150
007e3e87  MOV EAX,dword ptr [EBP + -0x24]
007e3e8a  PUSH EAX
007e3e8b  CALL 0x007d0be0
007e3e90  ADD ESP,0x8
007e3e93  PUSH 0x8beee4
007e3e98  MOV ECX,dword ptr [EBP + -0x24]
007e3e9b  PUSH ECX
007e3e9c  CALL 0x007d0be0
007e3ea1  ADD ESP,0x8
007e3ea4  MOV EDX,dword ptr [EBP + -0x28]
007e3ea7  PUSH EDX
007e3ea8  MOV EAX,dword ptr [EBP + -0x24]
007e3eab  PUSH EAX
007e3eac  CALL 0x007d0be0
007e3eb1  ADD ESP,0x8
007e3eb4  PUSH 0x8b9150
007e3eb9  MOV ECX,dword ptr [EBP + -0x24]
007e3ebc  PUSH ECX
007e3ebd  CALL 0x007d0be0
007e3ec2  ADD ESP,0x8
007e3ec5  MOV EDX,dword ptr [EBP + -0x20]
007e3ec8  PUSH EDX
007e3ec9  MOV EAX,dword ptr [EBP + -0x24]
007e3ecc  PUSH EAX
007e3ecd  CALL 0x007d0be0
007e3ed2  ADD ESP,0x8
007e3ed5  PUSH 0x12010
007e3eda  PUSH 0x8b9128
007e3edf  MOV ECX,dword ptr [EBP + -0x24]
007e3ee2  PUSH ECX
007e3ee3  CALL 0x007de140
007e3ee8  ADD ESP,0xc
007e3eeb  PUSH 0x3
007e3eed  CALL 0x007ca340
007e3ef2  LEA ESP,[EBP + 0xfffffeb0]
007e3ef8  MOV ECX,dword ptr [EBP + -0x10]
007e3efb  MOV dword ptr FS:[0x0],ECX
007e3f02  MOV ECX,dword ptr [EBP + -0x2c]
007e3f05  CALL 0x007d6cb0
007e3f0a  POP EDI
007e3f0b  POP ESI
007e3f0c  POP EBX
007e3f0d  MOV ESP,EBP
007e3f0f  POP EBP
007e3f10  RET
