007ca8b0  PUSH EBP
007ca8b1  MOV EBP,ESP
007ca8b3  SUB ESP,0x8
007ca8b6  CALL 0x007cd100
007ca8bb  MOV EAX,dword ptr [EAX + 0x64]
007ca8be  MOV dword ptr [EBP + -0x4],EAX
007ca8c1  MOV ECX,dword ptr [EBP + -0x4]
007ca8c4  CMP ECX,dword ptr [0x00906b3c]
007ca8ca  JZ 0x007ca8d4
007ca8cc  CALL 0x007d2f80
007ca8d1  MOV dword ptr [EBP + -0x4],EAX
007ca8d4  MOV EDX,dword ptr [EBP + -0x4]
007ca8d7  CMP dword ptr [EDX + 0x28],0x1
007ca8db  JLE 0x007ca8f4
007ca8dd  PUSH 0x8
007ca8df  MOV EAX,dword ptr [EBP + 0x8]
007ca8e2  PUSH EAX
007ca8e3  MOV ECX,dword ptr [EBP + -0x4]
007ca8e6  PUSH ECX
007ca8e7  CALL 0x007d4710
007ca8ec  ADD ESP,0xc
007ca8ef  MOV dword ptr [EBP + -0x8],EAX
007ca8f2  JMP 0x007ca909
007ca8f4  PUSH 0x8
007ca8f6  MOV EDX,dword ptr [EBP + 0x8]
007ca8f9  PUSH EDX
007ca8fa  MOV EAX,dword ptr [EBP + -0x4]
007ca8fd  PUSH EAX
007ca8fe  CALL 0x007d4690
007ca903  ADD ESP,0xc
007ca906  MOV dword ptr [EBP + -0x8],EAX
007ca909  MOV EAX,dword ptr [EBP + -0x8]
007ca90c  MOV ESP,EBP
007ca90e  POP EBP
007ca90f  RET
