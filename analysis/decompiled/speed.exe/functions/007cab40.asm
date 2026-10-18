007cab40  PUSH EBP
007cab41  MOV EBP,ESP
007cab43  PUSH ECX
007cab44  MOV EAX,dword ptr [EBP + 0x8]
007cab47  PUSH EAX
007cab48  CALL 0x007ca6b0
007cab4d  ADD ESP,0x4
007cab50  TEST EAX,EAX
007cab52  JNZ 0x007cab63
007cab54  CMP dword ptr [EBP + 0x8],0x5f
007cab58  JZ 0x007cab63
007cab5a  MOV dword ptr [EBP + -0x4],0x0
007cab61  JMP 0x007cab6a
007cab63  MOV dword ptr [EBP + -0x4],0x1
007cab6a  MOV EAX,dword ptr [EBP + -0x4]
007cab6d  MOV ESP,EBP
007cab6f  POP EBP
007cab70  RET
