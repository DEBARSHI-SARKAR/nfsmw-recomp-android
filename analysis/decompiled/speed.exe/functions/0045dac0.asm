0045dac0  FLD float ptr [ESP + 0x8]
0045dac4  FABS
0045dac6  FLD float ptr [ESP + 0x4]
0045daca  FDIV ST0,ST1
0045dacc  FLD ST0
0045dace  CALL 0x007c4b80
0045dad3  MOV dword ptr [ESP + 0x8],EAX
0045dad7  FILD dword ptr [ESP + 0x8]
0045dadb  FCOM
0045dadd  FNSTSW AX
0045dadf  TEST AH,0x41
0045dae2  JNZ 0x0045daea
0045dae4  FSUB float ptr [0x0089096c]
0045daea  FXCH
0045daec  FSUB ST0,ST1
0045daee  FMULP ST2
0045daf0  FSTP ST0
0045daf2  RET
