007cfc60  PUSH EBP
007cfc61  MOV EBP,ESP
007cfc63  PUSH -0x1
007cfc65  PUSH 0x8bcb78
007cfc6a  PUSH 0x7cd5e4
007cfc6f  MOV EAX,FS:[0x0]
007cfc75  PUSH EAX
007cfc76  MOV dword ptr FS:[0x0],ESP
007cfc7d  ADD ESP,-0x18
007cfc80  PUSH EBX
007cfc81  PUSH ESI
007cfc82  PUSH EDI
007cfc83  MOV dword ptr [EBP + -0x18],ESP
007cfc86  MOV EAX,dword ptr [EBP + 0x8]
007cfc89  MOV ECX,dword ptr [EAX + 0x8]
007cfc8c  MOV dword ptr [EBP + -0x1c],ECX
007cfc8f  CALL 0x007cd100
007cfc94  ADD EAX,0x84
007cfc99  MOV dword ptr [EBP + -0x24],EAX
007cfc9c  MOV EDX,dword ptr [EBP + -0x24]
007cfc9f  MOV EAX,dword ptr [EDX]
007cfca1  ADD EAX,0x1
007cfca4  MOV ECX,dword ptr [EBP + -0x24]
007cfca7  MOV dword ptr [ECX],EAX
007cfca9  MOV dword ptr [EBP + -0x4],0x0
007cfcb0  MOV EDX,dword ptr [EBP + -0x1c]
007cfcb3  CMP EDX,dword ptr [EBP + 0x14]
007cfcb6  JZ 0x007cfd4a
007cfcbc  CMP dword ptr [EBP + -0x1c],-0x1
007cfcc0  JLE 0x007cfccf
007cfcc2  MOV EAX,dword ptr [EBP + 0x10]
007cfcc5  MOV ECX,dword ptr [EBP + -0x1c]
007cfcc8  CMP ECX,dword ptr [EAX + 0x4]
007cfccb  JGE 0x007cfccf
007cfccd  JMP 0x007cfcd4
007cfccf  CALL 0x007d0ab0
007cfcd4  MOV EDX,dword ptr [EBP + 0x10]
007cfcd7  MOV EAX,dword ptr [EDX + 0x8]
007cfcda  MOV ECX,dword ptr [EBP + -0x1c]
007cfcdd  MOV EDX,dword ptr [EAX + ECX*0x8]
007cfce0  MOV dword ptr [EBP + -0x20],EDX
007cfce3  MOV dword ptr [EBP + -0x4],0x1
007cfcea  MOV EAX,dword ptr [EBP + 0x10]
007cfced  MOV ECX,dword ptr [EAX + 0x8]
007cfcf0  MOV EDX,dword ptr [EBP + -0x1c]
007cfcf3  CMP dword ptr [ECX + EDX*0x8 + 0x4],0x0
007cfcf8  JZ 0x007cfd1f
007cfcfa  MOV EAX,dword ptr [EBP + 0x8]
007cfcfd  MOV ECX,dword ptr [EBP + -0x20]
007cfd00  MOV dword ptr [EAX + 0x8],ECX
007cfd03  PUSH 0x103
007cfd08  MOV EDX,dword ptr [EBP + 0x8]
007cfd0b  PUSH EDX
007cfd0c  MOV EAX,dword ptr [EBP + 0x10]
007cfd0f  MOV ECX,dword ptr [EAX + 0x8]
007cfd12  MOV EDX,dword ptr [EBP + -0x1c]
007cfd15  MOV EAX,dword ptr [ECX + EDX*0x8 + 0x4]
007cfd19  PUSH EAX
007cfd1a  CALL 0x007d09d0
007cfd1f  MOV dword ptr [EBP + -0x4],0x0
007cfd26  JMP 0x007cfd3f
007cfd3f  MOV EDX,dword ptr [EBP + -0x20]
007cfd42  MOV dword ptr [EBP + -0x1c],EDX
007cfd45  JMP 0x007cfcb0
007cfd4a  MOV dword ptr [EBP + -0x4],0xffffffff
007cfd51  CALL 0x007cfd58
007cfd56  JMP 0x007cfd81
