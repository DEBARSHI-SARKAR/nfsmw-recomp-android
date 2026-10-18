004fcac0  MOV EAX,dword ptr [ECX + 0x40]
004fcac3  MOV EDX,dword ptr [ESP + 0x4]
004fcac7  FLD float ptr [EDX]
004fcac9  FSUB float ptr [EAX + 0x40]
004fcacc  FLD float ptr [EDX + 0x4]
004fcacf  FSUB float ptr [EAX + 0x44]
004fcad2  FLD float ptr [EDX + 0x8]
004fcad5  FSUB float ptr [EAX + 0x48]
004fcad8  FLD ST0
004fcada  FMUL float ptr [EAX + 0x58]
004fcadd  FLD ST2
004fcadf  FMUL float ptr [EAX + 0x54]
004fcae2  FADDP
004fcae4  FLD ST3
004fcae6  FMUL float ptr [EAX + 0x50]
004fcae9  FADDP
004fcaeb  FLD float ptr [ESP + 0x8]
004fcaef  FCHS
004fcaf1  FCOMPP
004fcaf3  FNSTSW AX
004fcaf5  TEST AH,0x41
004fcaf8  JNZ 0x004fcb05
004fcafa  FSTP ST0
004fcafc  XOR EAX,EAX
004fcafe  FSTP ST0
004fcb00  FSTP ST0
004fcb02  RET 0x8
004fcb05  FLD ST0
004fcb07  FMUL ST1
004fcb09  FLD ST2
004fcb0b  FMUL ST3
004fcb0d  FADDP
004fcb0f  FLD ST3
004fcb11  FMUL ST4
004fcb13  FADDP
004fcb15  FSQRT
004fcb17  FSTP ST3
004fcb19  FSTP ST0
004fcb1b  FSTP ST0
004fcb1d  FSUB float ptr [ESP + 0x8]
004fcb21  FLD float ptr [ESP + 0x8]
004fcb25  FMUL float ptr [0x008933d4]
004fcb2b  FLD ST1
004fcb2d  FCOMPP
004fcb2f  FNSTSW AX
004fcb31  TEST AH,0x41
004fcb34  JNZ 0x004fcb45
004fcb36  FDIVR float ptr [ECX + 0xc]
004fcb39  FMUL float ptr [ESP + 0x8]
004fcb3d  CALL 0x007c4b80
004fcb42  RET 0x8
004fcb45  FSTP ST0
004fcb47  FLD float ptr [ECX + 0xc]
004fcb4a  FADD ST0,ST0
004fcb4c  CALL 0x007c4b80
004fcb51  RET 0x8
