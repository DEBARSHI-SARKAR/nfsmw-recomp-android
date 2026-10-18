0046b980  SUB ESP,0xc
0046b983  FLD float ptr [ESP + 0x10]
0046b987  FSUB float ptr [ESP + 0x14]
0046b98b  FABS
0046b98d  FLD float ptr [ESP + 0x14]
0046b991  FADD float ptr [0x00890960]
0046b997  FSTP float ptr [ESP + 0x4]
0046b99b  FLD float ptr [ESP + 0x10]
0046b99f  FSUB float ptr [ESP + 0x4]
0046b9a3  FABS
0046b9a5  FSTP float ptr [ESP]
0046b9a8  FLD float ptr [ESP + 0x14]
0046b9ac  FSUB float ptr [0x00890960]
0046b9b2  FSTP float ptr [ESP + 0x8]
0046b9b6  FLD float ptr [ESP + 0x10]
0046b9ba  FSUB float ptr [ESP + 0x8]
0046b9be  FABS
0046b9c0  FSTP float ptr [ESP + 0x10]
0046b9c4  FLD float ptr [ESP]
0046b9c7  FCOMP
0046b9c9  FNSTSW AX
0046b9cb  TEST AH,0x5
0046b9ce  JP 0x0046b9ea
0046b9d0  FLD float ptr [ESP]
0046b9d3  FCOMP float ptr [ESP + 0x10]
0046b9d7  FNSTSW AX
0046b9d9  TEST AH,0x5
0046b9dc  JP 0x0046b9ea
0046b9de  FSTP ST0
0046b9e0  FLD float ptr [ESP + 0x4]
0046b9e4  ADD ESP,0xc
0046b9e7  RET 0x8
0046b9ea  FLD float ptr [ESP + 0x10]
0046b9ee  FCOMP
0046b9f0  FNSTSW AX
0046b9f2  FSTP ST0
0046b9f4  TEST AH,0x5
0046b9f7  JP 0x0046ba11
0046b9f9  FLD float ptr [ESP + 0x10]
0046b9fd  FCOMP float ptr [ESP]
0046ba00  FNSTSW AX
0046ba02  TEST AH,0x5
0046ba05  JP 0x0046ba11
0046ba07  FLD float ptr [ESP + 0x8]
0046ba0b  ADD ESP,0xc
0046ba0e  RET 0x8
0046ba11  FLD float ptr [ESP + 0x14]
0046ba15  ADD ESP,0xc
0046ba18  RET 0x8
