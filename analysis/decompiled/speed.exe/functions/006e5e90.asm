006e5e90  PUSH EBP
006e5e91  MOV EBP,ESP
006e5e93  SUB ESP,0xc8
006e5e99  PUSH EAX
006e5e9a  MOV EAX,0xcfcecdcc
006e5e9f  MOV EAX,0x6e5e9f
006e5ea4  MOV EAX,0x1
006e5ea9  MOV EAX,0x0
006e5eae  MOV EAX,0xcfcecdcc
006e5eb3  POP EAX
006e5eb4  MOV dword ptr [EBP + -0xc],0x0
006e5ebb  CALL 0x006cce70
006e5ec0  MOV dword ptr [EBP + -0x4],EAX
006e5ec3  MOV EAX,dword ptr [EBP + 0x8]
006e5ec6  PUSH EAX
006e5ec7  MOV ECX,dword ptr [EBP + -0x4]
006e5eca  PUSH ECX
006e5ecb  CALL 0x006ce350
006e5ed0  ADD ESP,0x8
006e5ed3  MOV dword ptr [EBP + -0x8],EAX
006e5ed6  MOV EDX,dword ptr [EBP + 0xc]
006e5ed9  PUSH EDX
006e5eda  MOV EAX,dword ptr [EBP + -0x4]
006e5edd  PUSH EAX
006e5ede  CALL 0x006ce350
006e5ee3  ADD ESP,0x8
006e5ee6  MOV dword ptr [EBP + -0x14],EAX
006e5ee9  XOR ECX,ECX
006e5eeb  MOV byte ptr [EBP + -0x15],CL
006e5eee  MOV EDX,dword ptr [EBP + -0x14]
006e5ef1  PUSH EDX
006e5ef2  MOV EAX,dword ptr [EBP + -0x8]
006e5ef5  PUSH EAX
006e5ef6  LEA ECX,[EBP + -0x15]
006e5ef9  CALL 0x006ce1c0
006e5efe  MOV dword ptr [EBP + -0x10],EAX
006e5f01  MOV ECX,dword ptr [EBP + -0x10]
006e5f04  PUSH ECX
006e5f05  MOV EDX,dword ptr [EBP + -0x14]
006e5f08  PUSH EDX
006e5f09  MOV EAX,dword ptr [EBP + -0x8]
006e5f0c  PUSH EAX
006e5f0d  PUSH 0x2
006e5f0f  PUSH 0x6
006e5f11  CALL 0x005ac310
006e5f16  ADD ESP,0x14
006e5f19  MOV dword ptr [EBP + -0x10],EAX
006e5f1c  XOR ECX,ECX
006e5f1e  JZ 0x006e5f30
006e5f20  CMP dword ptr [EBP + -0x8],0x1
006e5f24  JNZ 0x006e5f30
006e5f26  MOV EDX,dword ptr [EBP + -0x4]
006e5f29  MOV dword ptr [EDX + 0x18],0x0
006e5f30  XOR EAX,EAX
006e5f32  JZ 0x006e5f3a
006e5f34  MOV ECX,dword ptr [EBP + 0xc]
006e5f37  MOV dword ptr [EBP + -0x10],ECX
006e5f3a  XOR EDX,EDX
006e5f3c  JZ 0x006e5f46
006e5f3e  MOV EAX,dword ptr [EBP + -0x8]
006e5f41  MOV dword ptr [EBP + -0xc],EAX
006e5f44  JMP 0x006e5f59
006e5f46  MOV ECX,dword ptr [EBP + -0x10]
006e5f49  PUSH ECX
006e5f4a  MOV EDX,dword ptr [EBP + -0x4]
006e5f4d  PUSH EDX
006e5f4e  CALL 0x006ce1d0
006e5f53  ADD ESP,0x8
006e5f56  MOV dword ptr [EBP + -0xc],EAX
006e5f59  PUSH EAX
006e5f5a  MOV EAX,0xcfcecdcc
006e5f5f  MOV EAX,0x6e5e9f
006e5f64  MOV EAX,0x0
006e5f69  MOV EAX,0x0
006e5f6e  MOV EAX,0xcecdcccb
006e5f73  POP EAX
006e5f74  MOV EAX,dword ptr [EBP + -0xc]
006e5f77  MOV ESP,EBP
006e5f79  POP EBP
006e5f7a  RET
