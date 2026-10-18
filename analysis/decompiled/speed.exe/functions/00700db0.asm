00700db0  FLD float ptr [ESP + 0x4]
00700db4  FMUL float ptr [0x00890dc4]
00700dba  FLD float ptr [ECX + 0x28]
00700dbd  FMUL float ptr [0x00895c40]
00700dc3  FADDP
00700dc5  FST float ptr [ECX + 0x28]
00700dc8  FST float ptr [ESP + 0x4]
00700dcc  FCOMP float ptr [0x00890968]
00700dd2  FNSTSW AX
00700dd4  TEST AH,0x41
00700dd7  JNZ 0x00700dfc
00700dd9  FLD float ptr [ESP + 0x4]
00700ddd  FLD float ptr [0x0089096c]
00700de3  FCOMP float ptr [ESP + 0x4]
00700de7  FNSTSW AX
00700de9  TEST AH,0x5
00700dec  JP 0x00700df6
00700dee  FSTP ST0
00700df0  FLD float ptr [0x0089096c]
00700df6  FST float ptr [ECX + 0x28]
00700df9  RET 0x4
00700dfc  FLD float ptr [0x00890968]
00700e02  FST float ptr [ECX + 0x28]
00700e05  RET 0x4
