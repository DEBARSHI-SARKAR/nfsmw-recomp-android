006c93a0  FLD float ptr [ECX]
006c93a2  MOV EDX,dword ptr [ESP + 0x4]
006c93a6  FCOMP float ptr [EDX]
006c93a8  FNSTSW AX
006c93aa  TEST AH,0x5
006c93ad  JP 0x006c93b3
006c93af  FLD float ptr [ECX]
006c93b1  JMP 0x006c93b5
006c93b3  FLD float ptr [EDX]
006c93b5  FSTP float ptr [ECX]
006c93b7  FLD float ptr [ECX + 0x4]
006c93ba  FCOMP float ptr [EDX + 0x4]
006c93bd  FNSTSW AX
006c93bf  TEST AH,0x5
006c93c2  JP 0x006c93c9
006c93c4  FLD float ptr [ECX + 0x4]
006c93c7  JMP 0x006c93cc
006c93c9  FLD float ptr [EDX + 0x4]
006c93cc  FSTP float ptr [ECX + 0x4]
006c93cf  FLD float ptr [ECX + 0x8]
006c93d2  FCOMP float ptr [EDX + 0x8]
006c93d5  FNSTSW AX
006c93d7  TEST AH,0x5
006c93da  JP 0x006c93e1
006c93dc  FLD float ptr [ECX + 0x8]
006c93df  JMP 0x006c93e4
006c93e1  FLD float ptr [EDX + 0x8]
006c93e4  FSTP float ptr [ECX + 0x8]
006c93e7  FLD float ptr [ECX + 0xc]
006c93ea  FCOMP float ptr [EDX]
006c93ec  FNSTSW AX
006c93ee  TEST AH,0x41
006c93f1  JNZ 0x006c93f8
006c93f3  FLD float ptr [ECX + 0xc]
006c93f6  JMP 0x006c93fa
006c93f8  FLD float ptr [EDX]
006c93fa  FSTP float ptr [ECX + 0xc]
006c93fd  FLD float ptr [ECX + 0x10]
006c9400  FCOMP float ptr [EDX + 0x4]
006c9403  FNSTSW AX
006c9405  TEST AH,0x41
006c9408  JNZ 0x006c940f
006c940a  FLD float ptr [ECX + 0x10]
006c940d  JMP 0x006c9412
006c940f  FLD float ptr [EDX + 0x4]
006c9412  FSTP float ptr [ECX + 0x10]
006c9415  FLD float ptr [ECX + 0x14]
006c9418  FCOMP float ptr [EDX + 0x8]
006c941b  FNSTSW AX
006c941d  TEST AH,0x41
006c9420  JNZ 0x006c942b
006c9422  MOV EAX,dword ptr [ECX + 0x14]
006c9425  MOV dword ptr [ECX + 0x14],EAX
006c9428  RET 0x4
006c942b  MOV EDX,dword ptr [EDX + 0x8]
006c942e  MOV dword ptr [ECX + 0x14],EDX
006c9431  RET 0x4
