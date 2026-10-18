0049ccb0  FLD float ptr [ESP + 0x4]
0049ccb4  PUSH ESI
0049ccb5  MOV ESI,ECX
0049ccb7  FCOMP float ptr [ESI + 0xc]
0049ccba  FLD float ptr [ESP + 0x8]
0049ccbe  FNSTSW AX
0049ccc0  TEST AH,0x5
0049ccc3  JP 0x0049cce6
0049ccc5  FSUB float ptr [ESI + 0xc]
0049ccc8  FLD ST0
0049ccca  FDIV float ptr [ESI + 0x14]
0049cccd  CALL 0x007c4b80
0049ccd2  MOV dword ptr [ESP + 0x8],EAX
0049ccd6  FILD dword ptr [ESP + 0x8]
0049ccda  FMUL float ptr [ESI + 0x14]
0049ccdd  FSUBP
0049ccdf  FSUBR float ptr [ESI + 0x10]
0049cce2  POP ESI
0049cce3  RET 0x4
0049cce6  FCOMP float ptr [ESI + 0x10]
0049cce9  FNSTSW AX
0049cceb  TEST AH,0x41
0049ccee  JNZ 0x0049cd15
0049ccf0  FLD float ptr [ESP + 0x8]
0049ccf4  FSUB float ptr [ESI + 0x10]
0049ccf7  FLD ST0
0049ccf9  FDIV float ptr [ESI + 0x14]
0049ccfc  CALL 0x007c4b80
0049cd01  MOV dword ptr [ESP + 0x8],EAX
0049cd05  FILD dword ptr [ESP + 0x8]
0049cd09  FMUL float ptr [ESI + 0x14]
0049cd0c  FSUBP
0049cd0e  FADD float ptr [ESI + 0xc]
0049cd11  POP ESI
0049cd12  RET 0x4
0049cd15  FLD float ptr [ESP + 0x8]
0049cd19  POP ESI
0049cd1a  RET 0x4
