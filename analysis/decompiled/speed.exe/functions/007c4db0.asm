007c4db0  PUSH EBP
007c4db1  MOV EBP,ESP
007c4db3  PUSH ECX
007c4db4  CLD
007c4db5  MOV EAX,dword ptr [EBP + 0xc]
007c4db8  MOV ECX,dword ptr [EAX + 0x8]
007c4dbb  CMP ECX,dword ptr [0x00906980]
007c4dc1  JZ 0x007c4dd9
007c4dc3  MOV EDX,dword ptr [EBP + 0x8]
007c4dc6  MOV EAX,dword ptr [EDX + 0x4]
007c4dc9  OR EAX,0x8
007c4dcc  MOV ECX,dword ptr [EBP + 0x8]
007c4dcf  MOV dword ptr [ECX + 0x4],EAX
007c4dd2  MOV EAX,0x1
007c4dd7  JMP 0x007c4e0c
007c4dd9  PUSH 0x0
007c4ddb  MOV EDX,dword ptr [EBP + 0xc]
007c4dde  PUSH EDX
007c4ddf  MOV EAX,dword ptr [EBP + 0xc]
007c4de2  MOV ECX,dword ptr [EAX + 0x14]
007c4de5  PUSH ECX
007c4de6  MOV EDX,dword ptr [EBP + 0xc]
007c4de9  MOV EAX,dword ptr [EDX + 0xc]
007c4dec  PUSH EAX
007c4ded  PUSH 0x0
007c4def  MOV ECX,dword ptr [EBP + 0x10]
007c4df2  PUSH ECX
007c4df3  MOV EDX,dword ptr [EBP + 0xc]
007c4df6  MOV EAX,dword ptr [EDX + 0x10]
007c4df9  PUSH EAX
007c4dfa  MOV ECX,dword ptr [EBP + 0x8]
007c4dfd  PUSH ECX
007c4dfe  CALL 0x007cf6f0
007c4e03  ADD ESP,0x20
007c4e06  MOV dword ptr [EBP + -0x4],EAX
007c4e09  MOV EAX,dword ptr [EBP + -0x4]
007c4e0c  MOV ESP,EBP
007c4e0e  POP EBP
007c4e0f  RET
