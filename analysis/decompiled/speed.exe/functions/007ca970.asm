007ca970  PUSH EBP
007ca971  MOV EBP,ESP
007ca973  SUB ESP,0x8
007ca976  CALL 0x007cd100
007ca97b  MOV EAX,dword ptr [EAX + 0x64]
007ca97e  MOV dword ptr [EBP + -0x4],EAX
007ca981  MOV ECX,dword ptr [EBP + -0x4]
007ca984  CMP ECX,dword ptr [0x00906b3c]
007ca98a  JZ 0x007ca994
007ca98c  CALL 0x007d2f80
007ca991  MOV dword ptr [EBP + -0x4],EAX
007ca994  MOV EDX,dword ptr [EBP + -0x4]
007ca997  CMP dword ptr [EDX + 0x28],0x1
007ca99b  JLE 0x007ca9b7
007ca99d  PUSH 0x107
007ca9a2  MOV EAX,dword ptr [EBP + 0x8]
007ca9a5  PUSH EAX
007ca9a6  MOV ECX,dword ptr [EBP + -0x4]
007ca9a9  PUSH ECX
007ca9aa  CALL 0x007d4710
007ca9af  ADD ESP,0xc
007ca9b2  MOV dword ptr [EBP + -0x8],EAX
007ca9b5  JMP 0x007ca9cf
007ca9b7  PUSH 0x107
007ca9bc  MOV EDX,dword ptr [EBP + 0x8]
007ca9bf  PUSH EDX
007ca9c0  MOV EAX,dword ptr [EBP + -0x4]
007ca9c3  PUSH EAX
007ca9c4  CALL 0x007d4690
007ca9c9  ADD ESP,0xc
007ca9cc  MOV dword ptr [EBP + -0x8],EAX
007ca9cf  MOV EAX,dword ptr [EBP + -0x8]
007ca9d2  MOV ESP,EBP
007ca9d4  POP EBP
007ca9d5  RET
