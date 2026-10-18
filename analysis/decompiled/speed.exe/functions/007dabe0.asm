007dabe0  PUSH EBP
007dabe1  MOV EBP,ESP
007dabe3  PUSH ECX
007dabe4  FSTSW word ptr [EBP + -0x4]
007dabe8  MOVSX EAX,word ptr [EBP + -0x4]
007dabec  MOV ESP,EBP
007dabee  POP EBP
007dabef  RET
