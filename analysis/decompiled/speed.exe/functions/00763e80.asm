00763e80  MOV EAX,dword ptr [ESP + 0x4]
00763e84  MOV ECX,dword ptr [ESP + 0x8]
00763e88  FLD float ptr [EAX + 0x8]
00763e8b  FSUB float ptr [ECX + 0x8]
00763e8e  MOV EDX,dword ptr [ESP + 0x10]
00763e92  FMUL float ptr [EDX + 0x8]
00763e95  FLD float ptr [EAX + 0x4]
00763e98  FSUB float ptr [ECX + 0x4]
00763e9b  FMUL float ptr [EDX + 0x4]
00763e9e  FADDP
00763ea0  FLD float ptr [EAX]
00763ea2  FSUB float ptr [ECX]
00763ea4  FMUL float ptr [EDX]
00763ea6  FADDP
00763ea8  FMUL float ptr [ESP + 0xc]
00763eac  FST float ptr [ESP + 0x8]
00763eb0  FCOMP float ptr [0x0089096c]
00763eb6  FNSTSW AX
00763eb8  TEST AH,0x5
00763ebb  JP 0x00763efb
00763ebd  FLD float ptr [ESP + 0x8]
00763ec1  FLD float ptr [ESP + 0x8]
00763ec5  FCOMP float ptr [0x00890968]
00763ecb  FNSTSW AX
00763ecd  TEST AH,0x41
00763ed0  JZ 0x00763eda
00763ed2  FSTP ST0
00763ed4  FLD float ptr [0x00890968]
00763eda  MOV EAX,dword ptr [ESP + 0x14]
00763ede  FLD ST0
00763ee0  FMUL float ptr [EDX]
00763ee2  FADD float ptr [ECX]
00763ee4  FSTP float ptr [EAX]
00763ee6  FLD ST0
00763ee8  FMUL float ptr [EDX + 0x4]
00763eeb  FADD float ptr [ECX + 0x4]
00763eee  FSTP float ptr [EAX + 0x4]
00763ef1  FMUL float ptr [EDX + 0x8]
00763ef4  FADD float ptr [ECX + 0x8]
00763ef7  FSTP float ptr [EAX + 0x8]
00763efa  RET
00763efb  FLD float ptr [0x0089096c]
00763f01  JMP 0x00763eda
