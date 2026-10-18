007c9ce0  PUSH EBP
007c9ce1  MOV EBP,ESP
007c9ce3  SUB ESP,0x8
007c9ce6  MOV EAX,dword ptr [EBP + 0x8]
007c9ce9  MOV dword ptr [EBP + -0x8],EAX
007c9cec  MOV ECX,dword ptr [EBP + 0xc]
007c9cef  AND ECX,0x7fffffff
007c9cf5  MOV EDX,dword ptr [EBP + 0xc]
007c9cf8  NOT EDX
007c9cfa  AND EDX,0x80000000
007c9d00  OR ECX,EDX
007c9d02  MOV dword ptr [EBP + -0x4],ECX
007c9d05  FLD double ptr [EBP + -0x8]
007c9d08  MOV ESP,EBP
007c9d0a  POP EBP
007c9d0b  RET
