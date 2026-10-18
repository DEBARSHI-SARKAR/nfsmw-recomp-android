007dd840  PUSH EBP
007dd841  MOV EBP,ESP
007dd843  PUSH ECX
007dd844  MOV dword ptr [EBP + -0x4],0x0
007dd84b  JMP 0x007dd856
007dd84d  MOV EAX,dword ptr [EBP + -0x4]
007dd850  ADD EAX,0x1
007dd853  MOV dword ptr [EBP + -0x4],EAX
007dd856  CMP dword ptr [EBP + -0x4],0x101
007dd85d  JGE 0x007dd86b
007dd85f  MOV ECX,dword ptr [EBP + -0x4]
007dd862  MOV byte ptr [ECX + 0x9c50c0],0x0
007dd869  JMP 0x007dd84d
007dd86b  MOV dword ptr [0x009c51c4],0x0
007dd875  MOV dword ptr [0x009c50a8],0x0
007dd87f  MOV dword ptr [0x009c50a0],0x0
007dd889  MOV dword ptr [EBP + -0x4],0x0
007dd890  JMP 0x007dd89b
007dd892  MOV EDX,dword ptr [EBP + -0x4]
007dd895  ADD EDX,0x1
007dd898  MOV dword ptr [EBP + -0x4],EDX
007dd89b  CMP dword ptr [EBP + -0x4],0x6
007dd89f  JGE 0x007dd8b0
007dd8a1  MOV EAX,dword ptr [EBP + -0x4]
007dd8a4  MOV word ptr [EAX*0x2 + 0x9c51d0],0x0
007dd8ae  JMP 0x007dd892
007dd8b0  MOV ESP,EBP
007dd8b2  POP EBP
007dd8b3  RET
