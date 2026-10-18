007d9dc0  PUSH EBP
007d9dc1  MOV EBP,ESP
007d9dc3  SUB ESP,0x8
007d9dc6  FLD double ptr [EBP + 0x8]
007d9dc9  FSTP double ptr [EBP + -0x8]
007d9dcc  MOVZX EAX,word ptr [EBP + 0xe]
007d9dd0  AND EAX,0x800f
007d9dd5  MOV ECX,dword ptr [EBP + 0x10]
007d9dd8  SHL ECX,0x4
007d9ddb  OR EAX,ECX
007d9ddd  MOV word ptr [EBP + -0x2],AX
007d9de1  FLD double ptr [EBP + -0x8]
007d9de4  MOV ESP,EBP
007d9de6  POP EBP
007d9de7  RET
