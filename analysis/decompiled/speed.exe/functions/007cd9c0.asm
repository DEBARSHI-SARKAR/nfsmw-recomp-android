007cd9c0  PUSH EBP
007cd9c1  MOV EBP,ESP
007cd9c3  SUB ESP,0x1c
007cd9c6  FLD double ptr [0x008b9190]
007cd9cc  FSTP double ptr [EBP + -0x8]
007cd9cf  FLD double ptr [0x008b9188]
007cd9d5  FSTP double ptr [EBP + -0x10]
007cd9d8  FLD double ptr [EBP + -0x10]
007cd9db  FDIV double ptr [EBP + -0x8]
007cd9de  FMUL double ptr [EBP + -0x8]
007cd9e1  FSUBR double ptr [EBP + -0x10]
007cd9e4  FSTP double ptr [EBP + -0x18]
007cd9e7  FLD double ptr [EBP + -0x18]
007cd9ea  FCOMP double ptr [0x008942e8]
007cd9f0  FNSTSW AX
007cd9f2  TEST AH,0x41
007cd9f5  JNZ 0x007cda00
007cd9f7  MOV dword ptr [EBP + -0x1c],0x1
007cd9fe  JMP 0x007cda07
007cda00  MOV dword ptr [EBP + -0x1c],0x0
007cda07  MOV EAX,dword ptr [EBP + -0x1c]
007cda0a  MOV ESP,EBP
007cda0c  POP EBP
007cda0d  RET
