007c90a0  PUSH EBP
007c90a1  MOV EBP,ESP
007c90a3  PUSH -0x1
007c90a5  PUSH 0x8b8ab8
007c90aa  PUSH 0x7cd5e4
007c90af  MOV EAX,FS:[0x0]
007c90b5  PUSH EAX
007c90b6  MOV dword ptr FS:[0x0],ESP
007c90bd  ADD ESP,-0x10
007c90c0  PUSH EBX
007c90c1  PUSH ESI
007c90c2  PUSH EDI
007c90c3  MOV dword ptr [EBP + -0x20],0x0
007c90ca  MOV dword ptr [EBP + -0x4],0x0
007c90d1  MOV dword ptr [EBP + -0x1c],0x0
007c90d8  JMP 0x007c90e3
007c90da  MOV EAX,dword ptr [EBP + -0x1c]
007c90dd  ADD EAX,0x1
007c90e0  MOV dword ptr [EBP + -0x1c],EAX
007c90e3  MOV ECX,dword ptr [EBP + -0x1c]
007c90e6  CMP ECX,dword ptr [EBP + 0x10]
007c90e9  JGE 0x007c90fc
007c90eb  MOV ECX,dword ptr [EBP + 0x8]
007c90ee  CALL dword ptr [EBP + 0x14]
007c90f1  MOV EDX,dword ptr [EBP + 0x8]
007c90f4  ADD EDX,dword ptr [EBP + 0xc]
007c90f7  MOV dword ptr [EBP + 0x8],EDX
007c90fa  JMP 0x007c90da
007c90fc  MOV dword ptr [EBP + -0x20],0x1
007c9103  MOV dword ptr [EBP + -0x4],0xffffffff
007c910a  CALL 0x007c9111
007c910f  JMP 0x007c912d
