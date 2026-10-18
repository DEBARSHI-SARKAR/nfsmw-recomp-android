007f40a9  PUSH EBP
007f40aa  MOV EBP,ESP
007f40ac  MOV EAX,ECX
007f40ae  MOV ECX,dword ptr [EBP + 0x8]
007f40b1  MOV EDX,dword ptr [ECX]
007f40b3  MOV dword ptr [EAX],EDX
007f40b5  MOV EDX,dword ptr [ECX + 0x4]
007f40b8  MOV dword ptr [EAX + 0x4],EDX
007f40bb  MOV EDX,dword ptr [ECX + 0x8]
007f40be  MOV dword ptr [EAX + 0x8],EDX
007f40c1  MOV ECX,dword ptr [ECX + 0xc]
007f40c4  MOV dword ptr [EAX + 0xc],ECX
007f40c7  POP EBP
007f40c8  RET 0x4
