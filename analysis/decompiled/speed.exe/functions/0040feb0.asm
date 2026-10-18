0040feb0  PUSH ESI
0040feb1  MOV ESI,dword ptr [ESP + 0x8]
0040feb5  FLD float ptr [ESI + 0x8]
0040feb8  FLD float ptr [ESI + 0x4]
0040febb  FLD float ptr [ESI]
0040febd  FLD ST0
0040febf  FMUL ST1
0040fec1  FLD ST2
0040fec3  FMUL ST3
0040fec5  FADDP
0040fec7  FLD ST3
0040fec9  FMUL ST4
0040fecb  FADDP
0040fecd  FSTP float ptr [ESP + 0x8]
0040fed1  MOV EAX,dword ptr [ESP + 0x8]
0040fed5  FSTP ST0
0040fed7  PUSH EAX
0040fed8  FSTP ST0
0040feda  FSTP ST0
0040fedc  CALL 0x005c5e80
0040fee1  FLD float ptr [0x00890968]
0040fee7  ADD ESP,0x4
0040feea  FLD ST1
0040feec  FUCOMPP
0040feee  FNSTSW AX
0040fef0  TEST AH,0x44
0040fef3  JNP 0x0040fefd
0040fef5  FDIVR float ptr [0x0089096c]
0040fefb  JMP 0x0040ff05
0040fefd  FSTP ST0
0040feff  FLD float ptr [0x00890968]
0040ff05  MOV EAX,dword ptr [ESP + 0xc]
0040ff09  FLD ST0
0040ff0b  FMUL float ptr [ESI]
0040ff0d  FSTP float ptr [EAX]
0040ff0f  FLD ST0
0040ff11  FMUL float ptr [ESI + 0x4]
0040ff14  FSTP float ptr [EAX + 0x4]
0040ff17  FMUL float ptr [ESI + 0x8]
0040ff1a  POP ESI
0040ff1b  FSTP float ptr [EAX + 0x8]
0040ff1e  RET
