007caa50  PUSH EBP
007caa51  MOV EBP,ESP
007caa53  SUB ESP,0x8
007caa56  CALL 0x007cd100
007caa5b  MOV EAX,dword ptr [EAX + 0x64]
007caa5e  MOV dword ptr [EBP + -0x4],EAX
007caa61  MOV ECX,dword ptr [EBP + -0x4]
007caa64  CMP ECX,dword ptr [0x00906b3c]
007caa6a  JZ 0x007caa74
007caa6c  CALL 0x007d2f80
007caa71  MOV dword ptr [EBP + -0x4],EAX
007caa74  MOV EDX,dword ptr [EBP + -0x4]
007caa77  CMP dword ptr [EDX + 0x28],0x1
007caa7b  JLE 0x007caa97
007caa7d  PUSH 0x117
007caa82  MOV EAX,dword ptr [EBP + 0x8]
007caa85  PUSH EAX
007caa86  MOV ECX,dword ptr [EBP + -0x4]
007caa89  PUSH ECX
007caa8a  CALL 0x007d4710
007caa8f  ADD ESP,0xc
007caa92  MOV dword ptr [EBP + -0x8],EAX
007caa95  JMP 0x007caaaf
007caa97  PUSH 0x117
007caa9c  MOV EDX,dword ptr [EBP + 0x8]
007caa9f  PUSH EDX
007caaa0  MOV EAX,dword ptr [EBP + -0x4]
007caaa3  PUSH EAX
007caaa4  CALL 0x007d4690
007caaa9  ADD ESP,0xc
007caaac  MOV dword ptr [EBP + -0x8],EAX
007caaaf  MOV EAX,dword ptr [EBP + -0x8]
007caab2  MOV ESP,EBP
007caab4  POP EBP
007caab5  RET
