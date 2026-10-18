007dac40  PUSH EBP
007dac41  MOV EBP,ESP
007dac43  SUB ESP,0xc
007dac46  MOV EAX,dword ptr [EBP + 0x8]
007dac49  AND EAX,0x1
007dac4c  JZ 0x007dac58
007dac4e  FLD extended double ptr [0x00906fd0]
007dac54  FISTP dword ptr [EBP + -0xc]
007dac57  WAIT
007dac58  MOV ECX,dword ptr [EBP + 0x8]
007dac5b  AND ECX,0x8
007dac5e  JZ 0x007dac70
007dac60  FSTSW AX
007dac63  FLD extended double ptr [0x00906fd0]
007dac69  FSTP double ptr [EBP + -0x8]
007dac6c  WAIT
007dac6d  FSTSW AX
007dac70  MOV EDX,dword ptr [EBP + 0x8]
007dac73  AND EDX,0x10
007dac76  JZ 0x007dac82
007dac78  FLD extended double ptr [0x00906fdc]
007dac7e  FSTP double ptr [EBP + -0x8]
007dac81  WAIT
007dac82  MOV EAX,dword ptr [EBP + 0x8]
007dac85  AND EAX,0x4
007dac88  JZ 0x007dac93
007dac8a  FLDZ
007dac8c  FLD1
007dac8e  FDIVRP
007dac90  FSTP ST0
007dac92  WAIT
007dac93  MOV ECX,dword ptr [EBP + 0x8]
007dac96  AND ECX,0x20
007dac99  JZ 0x007daca1
007dac9b  FLDPI
007dac9d  FSTP double ptr [EBP + -0x8]
007daca0  WAIT
007daca1  MOV ESP,EBP
007daca3  POP EBP
007daca4  RET
