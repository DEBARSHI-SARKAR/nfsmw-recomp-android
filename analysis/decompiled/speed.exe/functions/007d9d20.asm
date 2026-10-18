007d9d20  PUSH EBP
007d9d21  MOV EBP,ESP
007d9d23  SUB ESP,0x10
007d9d26  FLD double ptr [EBP + 0x8]
007d9d29  FSTP double ptr [EBP + -0x10]
007d9d2c  MOV EAX,dword ptr [EBP + 0x10]
007d9d2f  ADD EAX,0x3fe
007d9d34  MOV dword ptr [EBP + -0x4],EAX
007d9d37  MOVZX ECX,word ptr [EBP + 0xe]
007d9d3b  AND ECX,0x800f
007d9d41  MOV EDX,dword ptr [EBP + -0x4]
007d9d44  SHL EDX,0x4
007d9d47  OR ECX,EDX
007d9d49  MOV word ptr [EBP + -0xa],CX
007d9d4d  FLD double ptr [EBP + -0x10]
007d9d50  MOV ESP,EBP
007d9d52  POP EBP
007d9d53  RET
