005ca9f0  SUB ESP,0xc
005ca9f3  MOV EAX,dword ptr [ESP + 0x14]
005ca9f7  FLD float ptr [EAX]
005ca9f9  MOV ECX,dword ptr [ESP + 0x10]
005ca9fd  FLD ST0
005ca9ff  XOR EDX,EDX
005caa01  FMULP
005caa03  FADD ST0,ST0
005caa05  FLD float ptr [EAX + 0x4]
005caa08  FLD ST0
005caa0a  FMULP
005caa0c  FADD ST0,ST0
005caa0e  FLD float ptr [EAX + 0x8]
005caa11  FLD ST0
005caa13  FMULP
005caa15  FADD ST0,ST0
005caa17  FLD float ptr [EAX]
005caa19  FMUL float ptr [EAX + 0x4]
005caa1c  FADD ST0,ST0
005caa1e  FLD float ptr [EAX + 0x8]
005caa21  FMUL float ptr [EAX]
005caa23  FADD ST0,ST0
005caa25  FSTP float ptr [ESP]
005caa28  FLD float ptr [EAX + 0xc]
005caa2b  FMUL float ptr [EAX]
005caa2d  FADD ST0,ST0
005caa2f  FSTP float ptr [ESP + 0x8]
005caa33  FLD float ptr [EAX + 0x8]
005caa36  FMUL float ptr [EAX + 0x4]
005caa39  FADD ST0,ST0
005caa3b  FSTP float ptr [ESP + 0x4]
005caa3f  FLD float ptr [EAX + 0xc]
005caa42  FMUL float ptr [EAX + 0x4]
005caa45  FADD ST0,ST0
005caa47  FSTP float ptr [ESP + 0x14]
005caa4b  FLD float ptr [EAX + 0xc]
005caa4e  FMUL float ptr [EAX + 0x8]
005caa51  MOV EAX,dword ptr [ESP + 0x1c]
005caa55  FADD ST0,ST0
005caa57  FLD ST2
005caa59  FADD ST0,ST4
005caa5b  FSUBR float ptr [0x0089096c]
005caa61  FMUL float ptr [ECX]
005caa63  FSTP float ptr [EAX]
005caa65  FLD ST0
005caa67  FADD ST0,ST2
005caa69  FMUL float ptr [ECX + 0x4]
005caa6c  FSTP float ptr [EAX + 0x4]
005caa6f  FLD float ptr [ESP]
005caa72  FSUB float ptr [ESP + 0x14]
005caa76  FMUL float ptr [ECX + 0x8]
005caa79  FSTP float ptr [EAX + 0x8]
005caa7c  MOV dword ptr [EAX + 0xc],EDX
005caa7f  FXCH
005caa81  FSUB ST0,ST1
005caa83  FMUL float ptr [ECX]
005caa85  FSTP float ptr [EAX + 0x10]
005caa88  FSTP ST0
005caa8a  FADD ST0,ST2
005caa8c  FSUBR float ptr [0x0089096c]
005caa92  FMUL float ptr [ECX + 0x4]
005caa95  FSTP float ptr [EAX + 0x14]
005caa98  FLD float ptr [ESP + 0x4]
005caa9c  FADD float ptr [ESP + 0x8]
005caaa0  FMUL float ptr [ECX + 0x8]
005caaa3  FSTP float ptr [EAX + 0x18]
005caaa6  MOV dword ptr [EAX + 0x1c],EDX
005caaa9  FLD float ptr [ESP + 0x14]
005caaad  FADD float ptr [ESP]
005caab0  FMUL float ptr [ECX]
005caab2  FSTP float ptr [EAX + 0x20]
005caab5  FLD float ptr [ESP + 0x4]
005caab9  FSUB float ptr [ESP + 0x8]
005caabd  FMUL float ptr [ECX + 0x4]
005caac0  FSTP float ptr [EAX + 0x24]
005caac3  FADD ST0,ST1
005caac5  FSUBR float ptr [0x0089096c]
005caacb  FMUL float ptr [ECX + 0x8]
005caace  MOV ECX,dword ptr [ESP + 0x18]
005caad2  FSTP float ptr [EAX + 0x28]
005caad5  MOV dword ptr [EAX + 0x2c],EDX
005caad8  MOV EDX,dword ptr [ECX]
005caada  MOV dword ptr [EAX + 0x30],EDX
005caadd  FSTP ST0
005caadf  MOV EDX,dword ptr [ECX + 0x4]
005caae2  MOV dword ptr [EAX + 0x34],EDX
005caae5  MOV ECX,dword ptr [ECX + 0x8]
005caae8  MOV dword ptr [EAX + 0x38],ECX
005caaeb  MOV dword ptr [EAX + 0x3c],0x3f800000
005caaf2  ADD ESP,0xc
005caaf5  RET
