007ca6b0  PUSH EBP
007ca6b1  MOV EBP,ESP
007ca6b3  SUB ESP,0x8
007ca6b6  CALL 0x007cd100
007ca6bb  MOV EAX,dword ptr [EAX + 0x64]
007ca6be  MOV dword ptr [EBP + -0x4],EAX
007ca6c1  MOV ECX,dword ptr [EBP + -0x4]
007ca6c4  CMP ECX,dword ptr [0x00906b3c]
007ca6ca  JZ 0x007ca6d4
007ca6cc  CALL 0x007d2f80
007ca6d1  MOV dword ptr [EBP + -0x4],EAX
007ca6d4  MOV EDX,dword ptr [EBP + -0x4]
007ca6d7  CMP dword ptr [EDX + 0x28],0x1
007ca6db  JLE 0x007ca6f7
007ca6dd  PUSH 0x103
007ca6e2  MOV EAX,dword ptr [EBP + 0x8]
007ca6e5  PUSH EAX
007ca6e6  MOV ECX,dword ptr [EBP + -0x4]
007ca6e9  PUSH ECX
007ca6ea  CALL 0x007d4710
007ca6ef  ADD ESP,0xc
007ca6f2  MOV dword ptr [EBP + -0x8],EAX
007ca6f5  JMP 0x007ca70f
007ca6f7  PUSH 0x103
007ca6fc  MOV EDX,dword ptr [EBP + 0x8]
007ca6ff  PUSH EDX
007ca700  MOV EAX,dword ptr [EBP + -0x4]
007ca703  PUSH EAX
007ca704  CALL 0x007d4690
007ca709  ADD ESP,0xc
007ca70c  MOV dword ptr [EBP + -0x8],EAX
007ca70f  MOV EAX,dword ptr [EBP + -0x8]
007ca712  MOV ESP,EBP
007ca714  POP EBP
007ca715  RET
