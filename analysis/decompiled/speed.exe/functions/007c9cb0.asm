007c9cb0  PUSH EBP
007c9cb1  MOV EBP,ESP
007c9cb3  SUB ESP,0x8
007c9cb6  MOV EAX,dword ptr [EBP + 0x8]
007c9cb9  MOV dword ptr [EBP + -0x8],EAX
007c9cbc  MOV ECX,dword ptr [EBP + 0xc]
007c9cbf  AND ECX,0x7fffffff
007c9cc5  MOV EDX,dword ptr [EBP + 0x14]
007c9cc8  AND EDX,0x80000000
007c9cce  OR ECX,EDX
007c9cd0  MOV dword ptr [EBP + -0x4],ECX
007c9cd3  FLD double ptr [EBP + -0x8]
007c9cd6  MOV ESP,EBP
007c9cd8  POP EBP
007c9cd9  RET
