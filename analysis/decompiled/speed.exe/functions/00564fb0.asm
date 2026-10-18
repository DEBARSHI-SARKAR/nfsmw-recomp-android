00564fb0  FLD float ptr [ESP + 0x14]
00564fb4  FCOMP float ptr [ESP + 0x4]
00564fb8  FNSTSW AX
00564fba  TEST AH,0x41
00564fbd  JNZ 0x00564fef
00564fbf  FLD float ptr [ESP + 0x14]
00564fc3  FCOMP float ptr [ESP + 0x8]
00564fc7  FNSTSW AX
00564fc9  TEST AH,0x5
00564fcc  JP 0x00564fef
00564fce  FLD float ptr [ESP + 0x14]
00564fd2  FSUB float ptr [ESP + 0x4]
00564fd6  FLD float ptr [ESP + 0x8]
00564fda  FSUB float ptr [ESP + 0x4]
00564fde  FDIVP
00564fe0  FLD float ptr [ESP + 0x10]
00564fe4  FSUB float ptr [ESP + 0xc]
00564fe8  FMULP
00564fea  FADD float ptr [ESP + 0xc]
00564fee  RET
00564fef  FLD float ptr [ESP + 0x14]
00564ff3  FCOMP float ptr [ESP + 0x4]
00564ff7  FNSTSW AX
00564ff9  TEST AH,0x41
00564ffc  JNP 0x00565012
00564ffe  FLD float ptr [ESP + 0x14]
00565002  FCOMP float ptr [ESP + 0x8]
00565006  FNSTSW AX
00565008  TEST AH,0x1
0056500b  JNZ 0x00565012
0056500d  FLD float ptr [ESP + 0x10]
00565011  RET
00565012  FLD float ptr [ESP + 0xc]
00565016  RET
