007c4ef0  PUSH EBP
007c4ef1  MOV EBP,ESP
007c4ef3  PUSH ECX
007c4ef4  PUSH EBX
007c4ef5  CLD
007c4ef6  MOV EAX,dword ptr [EBP + 0xc]
007c4ef9  MOV ECX,dword ptr [EAX + 0x8]
007c4efc  CMP ECX,dword ptr [0x00906980]
007c4f02  JZ 0x007c4f1d
007c4f04  MOV EDX,dword ptr [EBP + 0x8]
007c4f07  MOV EAX,dword ptr [EDX + 0x4]
007c4f0a  OR EAX,0x8
007c4f0d  MOV ECX,dword ptr [EBP + 0x8]
007c4f10  MOV dword ptr [ECX + 0x4],EAX
007c4f13  MOV EAX,0x1
007c4f18  JMP 0x007c4fad
007c4f1d  MOV EDX,dword ptr [EBP + 0x8]
007c4f20  MOV EAX,dword ptr [EDX + 0x4]
007c4f23  AND EAX,0x66
007c4f26  JZ 0x007c4f39
007c4f28  MOV ECX,dword ptr [EBP + 0xc]
007c4f2b  MOV dword ptr [ECX + 0x24],0x1
007c4f32  MOV EAX,0x1
007c4f37  JMP 0x007c4fad
007c4f39  PUSH 0x1
007c4f3b  MOV EDX,dword ptr [EBP + 0xc]
007c4f3e  MOV EAX,dword ptr [EDX + 0x18]
007c4f41  PUSH EAX
007c4f42  MOV ECX,dword ptr [EBP + 0xc]
007c4f45  MOV EDX,dword ptr [ECX + 0x14]
007c4f48  PUSH EDX
007c4f49  MOV EAX,dword ptr [EBP + 0xc]
007c4f4c  MOV ECX,dword ptr [EAX + 0xc]
007c4f4f  PUSH ECX
007c4f50  PUSH 0x0
007c4f52  MOV EDX,dword ptr [EBP + 0x10]
007c4f55  PUSH EDX
007c4f56  MOV EAX,dword ptr [EBP + 0xc]
007c4f59  MOV ECX,dword ptr [EAX + 0x10]
007c4f5c  PUSH ECX
007c4f5d  MOV EDX,dword ptr [EBP + 0x8]
007c4f60  PUSH EDX
007c4f61  CALL 0x007cf6f0
007c4f66  ADD ESP,0x20
007c4f69  MOV EAX,dword ptr [EBP + 0xc]
007c4f6c  CMP dword ptr [EAX + 0x24],0x0
007c4f70  JNZ 0x007c4f7f
007c4f72  MOV ECX,dword ptr [EBP + 0x8]
007c4f75  PUSH ECX
007c4f76  MOV EDX,dword ptr [EBP + 0xc]
007c4f79  PUSH EDX
007c4f7a  CALL 0x007c4c70
007c4f7f  PUSH 0x0
007c4f81  PUSH 0x0
007c4f83  PUSH 0x0
007c4f85  PUSH 0x0
007c4f87  PUSH 0x0
007c4f89  LEA EAX,[EBP + -0x4]
007c4f8c  PUSH EAX
007c4f8d  PUSH 0x123
007c4f92  CALL 0x007c4e10
007c4f97  ADD ESP,0x1c
007c4f9a  MOV EAX,dword ptr [EBP + -0x4]
007c4f9d  MOV EBX,dword ptr [EBP + 0xc]
007c4fa0  MOV ESP,dword ptr [EBX + 0x1c]
007c4fa3  MOV EBP,dword ptr [EBX + 0x20]
007c4fa6  JMP EAX
007c4fad  POP EBX
007c4fae  MOV ESP,EBP
007c4fb0  POP EBP
007c4fb1  RET
