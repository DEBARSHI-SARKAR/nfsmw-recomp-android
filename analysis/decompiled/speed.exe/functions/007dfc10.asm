007dfc10  PUSH EBP
007dfc11  MOV EBP,ESP
007dfc13  PUSH ECX
007dfc14  CALL 0x007cd100
007dfc19  MOV EAX,dword ptr [EAX + 0x64]
007dfc1c  MOV dword ptr [EBP + -0x4],EAX
007dfc1f  MOV ECX,dword ptr [EBP + -0x4]
007dfc22  CMP ECX,dword ptr [0x00906b3c]
007dfc28  JZ 0x007dfc32
007dfc2a  CALL 0x007d2f80
007dfc2f  MOV dword ptr [EBP + -0x4],EAX
007dfc32  MOV EDX,dword ptr [EBP + 0x18]
007dfc35  PUSH EDX
007dfc36  MOV EAX,dword ptr [EBP + 0x14]
007dfc39  PUSH EAX
007dfc3a  MOV ECX,dword ptr [EBP + 0x10]
007dfc3d  PUSH ECX
007dfc3e  MOV EDX,dword ptr [EBP + 0xc]
007dfc41  PUSH EDX
007dfc42  MOV EAX,dword ptr [EBP + 0x8]
007dfc45  PUSH EAX
007dfc46  MOV ECX,dword ptr [EBP + -0x4]
007dfc49  PUSH ECX
007dfc4a  CALL 0x007dfc60
007dfc4f  ADD ESP,0x18
007dfc52  MOV ESP,EBP
007dfc54  POP EBP
007dfc55  RET
