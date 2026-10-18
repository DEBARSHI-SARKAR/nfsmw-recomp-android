007c8f50  PUSH EBP
007c8f51  MOV EBP,ESP
007c8f53  PUSH -0x1
007c8f55  PUSH 0x8b8a98
007c8f5a  PUSH 0x7cd5e4
007c8f5f  MOV EAX,FS:[0x0]
007c8f65  PUSH EAX
007c8f66  MOV dword ptr FS:[0x0],ESP
007c8f6d  ADD ESP,-0xc
007c8f70  PUSH EBX
007c8f71  PUSH ESI
007c8f72  PUSH EDI
007c8f73  MOV dword ptr [EBP + -0x1c],0x0
007c8f7a  MOV EAX,dword ptr [EBP + 0xc]
007c8f7d  IMUL EAX,dword ptr [EBP + 0x10]
007c8f81  ADD EAX,dword ptr [EBP + 0x8]
007c8f84  MOV dword ptr [EBP + 0x8],EAX
007c8f87  MOV dword ptr [EBP + -0x4],0x0
007c8f8e  MOV ECX,dword ptr [EBP + 0x10]
007c8f91  SUB ECX,0x1
007c8f94  MOV dword ptr [EBP + 0x10],ECX
007c8f97  JS 0x007c8faa
007c8f99  MOV EDX,dword ptr [EBP + 0x8]
007c8f9c  SUB EDX,dword ptr [EBP + 0xc]
007c8f9f  MOV dword ptr [EBP + 0x8],EDX
007c8fa2  MOV ECX,dword ptr [EBP + 0x8]
007c8fa5  CALL dword ptr [EBP + 0x14]
007c8fa8  JMP 0x007c8f8e
007c8faa  MOV dword ptr [EBP + -0x1c],0x1
007c8fb1  MOV dword ptr [EBP + -0x4],0xffffffff
007c8fb8  CALL 0x007c8fbf
007c8fbd  JMP 0x007c8fdb
