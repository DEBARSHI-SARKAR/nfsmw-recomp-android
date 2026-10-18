005ce080  MOV ECX,dword ptr [ESP + 0x4]
005ce084  PUSH ESI
005ce085  MOV ESI,dword ptr [ESP + 0x10]
005ce089  FLD float ptr [ESI]
005ce08b  PUSH EDI
005ce08c  FSUB float ptr [ECX]
005ce08e  MOV EDI,dword ptr [ESP + 0x10]
005ce092  FSTP float ptr [ESP + 0x10]
005ce096  FLD float ptr [EDI]
005ce098  FSUB float ptr [ECX]
005ce09a  FSTP float ptr [ESP + 0xc]
005ce09e  FLD float ptr [EDI + 0x8]
005ce0a1  FSUB float ptr [ECX + 0x8]
005ce0a4  FMUL float ptr [ESP + 0x10]
005ce0a8  FLD float ptr [ESI + 0x8]
005ce0ab  FSUB float ptr [ECX + 0x8]
005ce0ae  FMUL float ptr [ESP + 0xc]
005ce0b2  FSUBP
005ce0b4  FCOMP float ptr [0x00890968]
005ce0ba  FNSTSW AX
005ce0bc  TEST AH,0x41
005ce0bf  JP 0x005ce114
005ce0c1  MOV EDX,dword ptr [ESP + 0x18]
005ce0c5  FLD float ptr [EDX]
005ce0c7  FSUB float ptr [ECX]
005ce0c9  FLD float ptr [ESI + 0x8]
005ce0cc  FSUB float ptr [ECX + 0x8]
005ce0cf  FMUL ST1
005ce0d1  FLD float ptr [EDX + 0x8]
005ce0d4  FSUB float ptr [ECX + 0x8]
005ce0d7  FMUL float ptr [ESP + 0x10]
005ce0db  FSUBP
005ce0dd  FCOMP float ptr [0x00890968]
005ce0e3  FNSTSW AX
005ce0e5  TEST AH,0x41
005ce0e8  JP 0x005ce112
005ce0ea  FLD float ptr [EDX + 0x8]
005ce0ed  FSUB float ptr [ECX + 0x8]
005ce0f0  FMUL float ptr [ESP + 0xc]
005ce0f4  FLD float ptr [EDI + 0x8]
005ce0f7  FSUB float ptr [ECX + 0x8]
005ce0fa  FMUL ST2
005ce0fc  FSUBP
005ce0fe  FCOMP float ptr [0x00890968]
005ce104  FNSTSW AX
005ce106  FSTP ST0
005ce108  TEST AH,0x41
005ce10b  JP 0x005ce114
005ce10d  POP EDI
005ce10e  MOV AL,0x1
005ce110  POP ESI
005ce111  RET
005ce112  FSTP ST0
005ce114  POP EDI
005ce115  XOR AL,AL
005ce117  POP ESI
005ce118  RET
