007d0d60  PUSH EBP
007d0d61  MOV EBP,ESP
007d0d63  SUB ESP,0x8
007d0d66  MOV dword ptr [EBP + -0x4],0x0
007d0d6d  MOV dword ptr [EBP + -0x8],0x0
007d0d74  JMP 0x007d0d7f
007d0d76  MOV EAX,dword ptr [EBP + -0x8]
007d0d79  ADD EAX,0x1
007d0d7c  MOV dword ptr [EBP + -0x8],EAX
007d0d7f  CMP dword ptr [EBP + -0x8],0x24
007d0d83  JGE 0x007d0de1
007d0d85  MOV ECX,dword ptr [EBP + -0x8]
007d0d88  CMP dword ptr [ECX*0x8 + 0x906994],0x1
007d0d90  JNZ 0x007d0ddf
007d0d92  MOV EDX,dword ptr [EBP + -0x4]
007d0d95  IMUL EDX,EDX,0x18
007d0d98  ADD EDX,0x9bac20
007d0d9e  MOV EAX,dword ptr [EBP + -0x8]
007d0da1  MOV dword ptr [EAX*0x8 + 0x906990],EDX
007d0da8  MOV ECX,dword ptr [EBP + -0x4]
007d0dab  ADD ECX,0x1
007d0dae  MOV dword ptr [EBP + -0x4],ECX
007d0db1  PUSH 0xfa0
007d0db6  MOV EDX,dword ptr [EBP + -0x8]
007d0db9  MOV EAX,dword ptr [EDX*0x8 + 0x906990]
007d0dc0  PUSH EAX
007d0dc1  CALL 0x007ddc30
007d0dc6  ADD ESP,0x8
007d0dc9  TEST EAX,EAX
007d0dcb  JNZ 0x007d0ddf
007d0dcd  MOV ECX,dword ptr [EBP + -0x8]
007d0dd0  MOV dword ptr [ECX*0x8 + 0x906990],0x0
007d0ddb  XOR EAX,EAX
007d0ddd  JMP 0x007d0de6
007d0ddf  JMP 0x007d0d76
007d0de1  MOV EAX,0x1
007d0de6  MOV ESP,EBP
007d0de8  POP EBP
007d0de9  RET
