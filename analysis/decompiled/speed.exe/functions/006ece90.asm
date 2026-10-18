006ece90  PUSH ESI
006ece91  PUSH EDI
006ece92  MOV EDI,dword ptr [ESP + 0xc]
006ece96  FLD float ptr [EDI]
006ece98  MOV ESI,ECX
006ece9a  FSUB float ptr [ESI + 0x64]
006ece9d  PUSH ECX
006ece9e  FLD float ptr [EDI + 0x4]
006ecea1  FSUB float ptr [ESI + 0x68]
006ecea4  FLD float ptr [EDI + 0x8]
006ecea7  FSUB float ptr [ESI + 0x6c]
006eceaa  FLD ST0
006eceac  FMUL ST1
006eceae  FLD ST3
006eceb0  FMUL ST4
006eceb2  FADDP
006eceb4  FLD ST2
006eceb6  FMUL ST3
006eceb8  FADDP
006eceba  FSTP float ptr [ESP]
006ecebd  FSTP ST0
006ecebf  FSTP ST0
006ecec1  FSTP ST0
006ecec3  CALL 0x005c5e80
006ecec8  FMUL float ptr [ESI + 0x70]
006ececb  FSTP float ptr [ESP + 0x10]
006ececf  FLD float ptr [EDI]
006eced1  FSUB float ptr [ESI + 0x74]
006eced4  FLD float ptr [EDI + 0x4]
006eced7  FSUB float ptr [ESI + 0x78]
006eceda  FLD float ptr [EDI + 0x8]
006ecedd  FSUB float ptr [ESI + 0x7c]
006ecee0  FLD ST0
006ecee2  FMUL ST1
006ecee4  FLD ST2
006ecee6  FMUL ST3
006ecee8  FADDP
006eceea  FLD ST3
006eceec  FMUL ST4
006eceee  FADDP
006ecef0  FSTP float ptr [ESP]
006ecef3  FSTP ST0
006ecef5  FSTP ST0
006ecef7  FSTP ST0
006ecef9  CALL 0x005c5e80
006ecefe  FLD float ptr [ESP + 0x10]
006ecf02  ADD ESP,0x4
006ecf05  FCOMP
006ecf07  POP EDI
006ecf08  POP ESI
006ecf09  FNSTSW AX
006ecf0b  TEST AH,0x5
006ecf0e  JP 0x006ecf16
006ecf10  FSTP ST0
006ecf12  FLD float ptr [ESP + 0x4]
006ecf16  RET 0x4
