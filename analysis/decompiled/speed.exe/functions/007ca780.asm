007ca780  PUSH EBP
007ca781  MOV EBP,ESP
007ca783  SUB ESP,0x8
007ca786  CALL 0x007cd100
007ca78b  MOV EAX,dword ptr [EAX + 0x64]
007ca78e  MOV dword ptr [EBP + -0x4],EAX
007ca791  MOV ECX,dword ptr [EBP + -0x4]
007ca794  CMP ECX,dword ptr [0x00906b3c]
007ca79a  JZ 0x007ca7a4
007ca79c  CALL 0x007d2f80
007ca7a1  MOV dword ptr [EBP + -0x4],EAX
007ca7a4  MOV EDX,dword ptr [EBP + -0x4]
007ca7a7  CMP dword ptr [EDX + 0x28],0x1
007ca7ab  JLE 0x007ca7c4
007ca7ad  PUSH 0x2
007ca7af  MOV EAX,dword ptr [EBP + 0x8]
007ca7b2  PUSH EAX
007ca7b3  MOV ECX,dword ptr [EBP + -0x4]
007ca7b6  PUSH ECX
007ca7b7  CALL 0x007d4710
007ca7bc  ADD ESP,0xc
007ca7bf  MOV dword ptr [EBP + -0x8],EAX
007ca7c2  JMP 0x007ca7d9
007ca7c4  PUSH 0x2
007ca7c6  MOV EDX,dword ptr [EBP + 0x8]
007ca7c9  PUSH EDX
007ca7ca  MOV EAX,dword ptr [EBP + -0x4]
007ca7cd  PUSH EAX
007ca7ce  CALL 0x007d4690
007ca7d3  ADD ESP,0xc
007ca7d6  MOV dword ptr [EBP + -0x8],EAX
007ca7d9  MOV EAX,dword ptr [EBP + -0x8]
007ca7dc  MOV ESP,EBP
007ca7de  POP EBP
007ca7df  RET
