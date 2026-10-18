007ca9e0  PUSH EBP
007ca9e1  MOV EBP,ESP
007ca9e3  SUB ESP,0x8
007ca9e6  CALL 0x007cd100
007ca9eb  MOV EAX,dword ptr [EAX + 0x64]
007ca9ee  MOV dword ptr [EBP + -0x4],EAX
007ca9f1  MOV ECX,dword ptr [EBP + -0x4]
007ca9f4  CMP ECX,dword ptr [0x00906b3c]
007ca9fa  JZ 0x007caa04
007ca9fc  CALL 0x007d2f80
007caa01  MOV dword ptr [EBP + -0x4],EAX
007caa04  MOV EDX,dword ptr [EBP + -0x4]
007caa07  CMP dword ptr [EDX + 0x28],0x1
007caa0b  JLE 0x007caa27
007caa0d  PUSH 0x157
007caa12  MOV EAX,dword ptr [EBP + 0x8]
007caa15  PUSH EAX
007caa16  MOV ECX,dword ptr [EBP + -0x4]
007caa19  PUSH ECX
007caa1a  CALL 0x007d4710
007caa1f  ADD ESP,0xc
007caa22  MOV dword ptr [EBP + -0x8],EAX
007caa25  JMP 0x007caa3f
007caa27  PUSH 0x157
007caa2c  MOV EDX,dword ptr [EBP + 0x8]
007caa2f  PUSH EDX
007caa30  MOV EAX,dword ptr [EBP + -0x4]
007caa33  PUSH EAX
007caa34  CALL 0x007d4690
007caa39  ADD ESP,0xc
007caa3c  MOV dword ptr [EBP + -0x8],EAX
007caa3f  MOV EAX,dword ptr [EBP + -0x8]
007caa42  MOV ESP,EBP
007caa44  POP EBP
007caa45  RET
