007c5aa0  PUSH EBP
007c5aa1  MOV EBP,ESP
007c5aa3  PUSH ECX
007c5aa4  MOV dword ptr [EBP + -0x4],ECX
007c5aa7  MOV EAX,dword ptr [EBP + 0x8]
007c5aaa  PUSH EAX
007c5aab  MOV ECX,dword ptr [EBP + -0x4]
007c5aae  CALL 0x007c59f0
007c5ab3  MOV ECX,dword ptr [EBP + -0x4]
007c5ab6  MOV dword ptr [ECX],0x8b8108
007c5abc  MOV EAX,dword ptr [EBP + -0x4]
007c5abf  MOV ESP,EBP
007c5ac1  POP EBP
007c5ac2  RET 0x4
