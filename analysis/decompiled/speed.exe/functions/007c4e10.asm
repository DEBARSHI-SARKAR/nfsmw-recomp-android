007c4e10  PUSH EBP
007c4e11  MOV EBP,ESP
007c4e13  SUB ESP,0x34
007c4e16  PUSH EBX
007c4e17  CMP dword ptr [EBP + 0x8],0x123
007c4e1e  JNZ 0x007c4e34
007c4e20  MOV EAX,0x7c4ebe
007c4e25  MOV ECX,dword ptr [EBP + 0xc]
007c4e28  MOV dword ptr [ECX],EAX
007c4e2a  MOV EAX,0x1
007c4e2f  JMP 0x007c4ee7
007c4e34  MOV dword ptr [EBP + -0x28],0x0
007c4e3b  MOV dword ptr [EBP + -0x24],0x7c4ef0
007c4e42  MOV EAX,[0x00906980]
007c4e47  MOV dword ptr [EBP + -0x20],EAX
007c4e4a  MOV ECX,dword ptr [EBP + 0x18]
007c4e4d  MOV dword ptr [EBP + -0x1c],ECX
007c4e50  MOV EDX,dword ptr [EBP + 0xc]
007c4e53  MOV dword ptr [EBP + -0x18],EDX
007c4e56  MOV EAX,dword ptr [EBP + 0x1c]
007c4e59  MOV dword ptr [EBP + -0x14],EAX
007c4e5c  MOV ECX,dword ptr [EBP + 0x20]
007c4e5f  MOV dword ptr [EBP + -0x10],ECX
007c4e62  MOV dword ptr [EBP + -0xc],0x0
007c4e69  MOV dword ptr [EBP + -0x8],0x0
007c4e70  MOV dword ptr [EBP + -0x4],0x0
007c4e77  MOV dword ptr [EBP + -0xc],ESP
007c4e7a  MOV dword ptr [EBP + -0x8],EBP
007c4e7d  MOV EAX,FS:[0x0]
007c4e83  MOV dword ptr [EBP + -0x28],EAX
007c4e86  LEA EAX,[EBP + -0x28]
007c4e89  MOV FS:[0x0],EAX
007c4e8f  MOV dword ptr [EBP + -0x34],0x1
007c4e96  MOV EDX,dword ptr [EBP + 0x8]
007c4e99  MOV dword ptr [EBP + -0x30],EDX
007c4e9c  MOV EAX,dword ptr [EBP + 0x10]
007c4e9f  MOV dword ptr [EBP + -0x2c],EAX
007c4ea2  LEA ECX,[EBP + -0x30]
007c4ea5  PUSH ECX
007c4ea6  MOV EDX,dword ptr [EBP + 0x8]
007c4ea9  MOV EAX,dword ptr [EDX]
007c4eab  PUSH EAX
007c4eac  CALL 0x007cd100
007c4eb1  CALL dword ptr [EAX + 0x74]
007c4eb4  ADD ESP,0x8
007c4eb7  MOV dword ptr [EBP + -0x34],0x0
007c4ebe  CMP dword ptr [EBP + -0x4],0x0
007c4ec2  JZ 0x007c4edb
007c4ec4  MOV EBX,dword ptr FS:[0x0]
007c4ecb  MOV EAX,dword ptr [EBX]
007c4ecd  MOV EBX,dword ptr [EBP + -0x28]
007c4ed0  MOV dword ptr [EBX],EAX
007c4ed2  MOV dword ptr FS:[0x0],EBX
007c4ed9  JMP 0x007c4ee4
007c4edb  MOV EAX,dword ptr [EBP + -0x28]
007c4ede  MOV FS:[0x0],EAX
007c4ee4  MOV EAX,dword ptr [EBP + -0x34]
007c4ee7  POP EBX
007c4ee8  MOV ESP,EBP
007c4eea  POP EBP
007c4eeb  RET
