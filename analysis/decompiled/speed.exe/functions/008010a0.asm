008010a0  PUSH EBP
008010a1  MOV EBP,ESP
008010a3  MOV EAX,dword ptr [EBP + 0x8]
008010a6  MOV EDX,dword ptr [EBP + 0xc]
008010a9  XOR ECX,ECX
008010ab  MOV dword ptr [EAX],ECX
008010ad  MOV dword ptr [EAX + 0x4],0xff
008010b4  MOV dword ptr [EAX + 0x8],ECX
008010b7  MOV dword ptr [EAX + 0xc],0xffffffe8
008010be  MOV dword ptr [EAX + 0x14],EDX
008010c1  MOV dword ptr [EAX + 0x10],ECX
008010c4  POP EBP
008010c5  RET
