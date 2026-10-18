007def40  PUSH EBP
007def41  MOV EBP,ESP
007def43  SUB ESP,0x8
007def46  FLD double ptr [EBP + 0x8]
007def49  FRNDINT
007def4b  FSTP double ptr [EBP + -0x8]
007def4e  FLD double ptr [EBP + -0x8]
007def51  MOV ESP,EBP
007def53  POP EBP
007def54  RET
