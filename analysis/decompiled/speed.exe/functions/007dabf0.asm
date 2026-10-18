007dabf0  PUSH EBP
007dabf1  MOV EBP,ESP
007dabf3  PUSH ECX
007dabf4  FNSTSW word ptr [EBP + -0x4]
007dabf7  FNCLEX
007dabf9  MOVSX EAX,word ptr [EBP + -0x4]
007dabfd  MOV ESP,EBP
007dabff  POP EBP
007dac00  RET
