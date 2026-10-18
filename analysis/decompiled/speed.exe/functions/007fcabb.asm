007fcabb  PUSH EBP
007fcabc  MOV EBP,ESP
007fcabe  FLD double ptr [EBP + 0x18]
007fcac1  FSUB double ptr [EBP + 0x10]
007fcac4  FST double ptr [EBP + 0x18]
007fcac7  FMUL double ptr [EBP + 0x18]
007fcaca  FLD double ptr [EBP + 0x8]
007fcacd  FMUL double ptr [EBP + 0x8]
007fcad0  FADD ST0,ST0
007fcad2  FDIVP
007fcad4  FCHS
007fcad6  CALL 0x0085eaec
007fcadb  FLD double ptr [0x008c3898]
007fcae1  FSQRT
007fcae3  FMUL double ptr [EBP + 0x8]
007fcae6  FDIVP
007fcae8  POP EBP
007fcae9  RET
