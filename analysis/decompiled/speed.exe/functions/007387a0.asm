007387a0  PUSH EBP
007387a1  MOV EBP,ESP
007387a3  MOV ECX,dword ptr [EBP + 0xc]
007387a6  MOV EAX,dword ptr [EBP + 0x10]
007387a9  FLD float ptr [ECX]
007387ab  FSUB float ptr [EAX]
007387ad  AND ESP,0xfffffff0
007387b0  FMUL float ptr [0x00903658]
007387b6  FADD float ptr [EAX]
007387b8  FLD float ptr [ECX + 0x4]
007387bb  FSUB float ptr [EAX + 0x4]
007387be  FMUL float ptr [0x00903658]
007387c4  FADD float ptr [EAX + 0x4]
007387c7  FLD float ptr [ECX + 0x8]
007387ca  MOV EAX,dword ptr [EBP + 0x8]
007387cd  FXCH ST2
007387cf  FSTP float ptr [EAX]
007387d1  FSTP float ptr [EAX + 0x4]
007387d4  FSTP float ptr [EAX + 0x8]
007387d7  MOV ESP,EBP
007387d9  POP EBP
007387da  RET
