0076df10  SUB ESP,0x24
0076df13  PUSH ESI
0076df14  MOV ESI,dword ptr [ESP + 0x2c]
0076df18  PUSH EDI
0076df19  MOV EDI,dword ptr [ESP + 0x34]
0076df1d  FLD float ptr [EDI]
0076df1f  LEA EAX,[ESP + 0x8]
0076df23  FSUB float ptr [ESI]
0076df25  PUSH EAX
0076df26  MOV ECX,EAX
0076df28  PUSH ECX
0076df29  FSTP float ptr [ESP + 0x10]
0076df2d  FLD float ptr [EDI + 0x4]
0076df30  FSUB float ptr [ESI + 0x4]
0076df33  FSTP float ptr [ESP + 0x14]
0076df37  FLD float ptr [EDI + 0x8]
0076df3a  FSUB float ptr [ESI + 0x8]
0076df3d  FSTP float ptr [ESP + 0x18]
0076df41  CALL 0x0040fe20
0076df46  MOV EAX,dword ptr [ESP + 0x40]
0076df4a  FLD float ptr [EAX]
0076df4c  ADD ESP,0x4
0076df4f  FSUB float ptr [ESI]
0076df51  FST float ptr [ESP + 0x18]
0076df55  FLD float ptr [EAX + 0x4]
0076df58  FSUB float ptr [ESI + 0x4]
0076df5b  FST float ptr [ESP + 0x1c]
0076df5f  FLD float ptr [EAX + 0x8]
0076df62  FSUB float ptr [ESI + 0x8]
0076df65  FST float ptr [ESP + 0x38]
0076df69  FSTP float ptr [ESP + 0x20]
0076df6d  FXCH
0076df6f  FSTP float ptr [ESP + 0x24]
0076df73  FLD float ptr [ESP + 0x38]
0076df77  FLD ST0
0076df79  FMUL ST1
0076df7b  FLD ST2
0076df7d  FMUL ST3
0076df7f  FADDP
0076df81  FLD float ptr [ESP + 0x24]
0076df85  FMUL float ptr [ESP + 0x24]
0076df89  FADDP
0076df8b  FSTP float ptr [ESP]
0076df8e  FSTP ST0
0076df90  FSTP ST0
0076df92  CALL 0x005c5e80
0076df97  LEA EDX,[ESP + 0x18]
0076df9b  FSTP float ptr [ESP + 0x38]
0076df9f  PUSH EDX
0076dfa0  MOV EAX,EDX
0076dfa2  PUSH EAX
0076dfa3  CALL 0x0040fe20
0076dfa8  FLD float ptr [ESP + 0x20]
0076dfac  FMUL float ptr [ESP + 0x14]
0076dfb0  FLD float ptr [ESP + 0x28]
0076dfb4  FMUL float ptr [ESP + 0x1c]
0076dfb8  FADDP
0076dfba  FLD float ptr [ESP + 0x24]
0076dfbe  FMUL float ptr [ESP + 0x18]
0076dfc2  FADDP
0076dfc4  FMUL float ptr [ESP + 0x40]
0076dfc8  FSTP float ptr [ESP + 0x40]
0076dfcc  FLD float ptr [ESI]
0076dfce  FSUB float ptr [EDI]
0076dfd0  FLD float ptr [ESI + 0x4]
0076dfd3  FSUB float ptr [EDI + 0x4]
0076dfd6  FLD float ptr [ESI + 0x8]
0076dfd9  FSUB float ptr [EDI + 0x8]
0076dfdc  FLD ST0
0076dfde  FMUL ST1
0076dfe0  FLD ST2
0076dfe2  FMUL ST3
0076dfe4  FADDP
0076dfe6  FLD ST3
0076dfe8  FMUL ST4
0076dfea  ADD ESP,0x8
0076dfed  FADDP
0076dfef  FSTP float ptr [ESP]
0076dff2  FSTP ST0
0076dff4  FSTP ST0
0076dff6  FSTP ST0
0076dff8  CALL 0x005c5e80
0076dffd  MOV AL,byte ptr [ESP + 0x44]
0076e001  FSTP float ptr [ESP + 0x34]
0076e005  ADD ESP,0x4
0076e008  TEST AL,AL
0076e00a  JZ 0x0076e070
0076e00c  FLD float ptr [ESP + 0x34]
0076e010  FCOMP float ptr [ESP + 0x30]
0076e014  FNSTSW AX
0076e016  TEST AH,0x1
0076e019  JNZ 0x0076e03d
0076e01b  MOV EDX,dword ptr [EDI]
0076e01d  FLD float ptr [0x0089096c]
0076e023  MOV ECX,dword ptr [ESP + 0x3c]
0076e027  MOV dword ptr [ECX],EDX
0076e029  MOV EAX,dword ptr [EDI + 0x4]
0076e02c  MOV dword ptr [ECX + 0x4],EAX
0076e02f  MOV EDX,dword ptr [EDI + 0x8]
0076e032  POP EDI
0076e033  MOV dword ptr [ECX + 0x8],EDX
0076e036  POP ESI
0076e037  ADD ESP,0x24
0076e03a  RET 0x14
0076e03d  FLD float ptr [ESP + 0x34]
0076e041  FCOMP float ptr [0x00890968]
0076e047  FNSTSW AX
0076e049  TEST AH,0x41
0076e04c  JP 0x0076e070
0076e04e  MOV ECX,dword ptr [ESI]
0076e050  FLD float ptr [0x00890968]
0076e056  MOV EAX,dword ptr [ESP + 0x3c]
0076e05a  MOV dword ptr [EAX],ECX
0076e05c  MOV EDX,dword ptr [ESI + 0x4]
0076e05f  MOV dword ptr [EAX + 0x4],EDX
0076e062  MOV ECX,dword ptr [ESI + 0x8]
0076e065  POP EDI
0076e066  MOV dword ptr [EAX + 0x8],ECX
0076e069  POP ESI
0076e06a  ADD ESP,0x24
0076e06d  RET 0x14
0076e070  LEA EDX,[ESP + 0x8]
0076e074  PUSH EDX
0076e075  MOV EAX,EDX
0076e077  PUSH EAX
0076e078  CALL 0x0040fe20
0076e07d  FLD float ptr [ESP + 0x10]
0076e081  FMUL float ptr [ESP + 0x3c]
0076e085  MOV EAX,dword ptr [ESP + 0x44]
0076e089  FLD float ptr [ESP + 0x14]
0076e08d  ADD ESP,0x8
0076e090  FMUL float ptr [ESP + 0x34]
0076e094  POP EDI
0076e095  FLD float ptr [ESP + 0xc]
0076e099  FMUL float ptr [ESP + 0x30]
0076e09d  FSTP float ptr [ESP + 0xc]
0076e0a1  FXCH
0076e0a3  FADD float ptr [ESI]
0076e0a5  FSTP float ptr [EAX]
0076e0a7  FADD float ptr [ESI + 0x4]
0076e0aa  FSTP float ptr [EAX + 0x4]
0076e0ad  FLD float ptr [ESP + 0xc]
0076e0b1  FADD float ptr [ESI + 0x8]
0076e0b4  POP ESI
0076e0b5  FSTP float ptr [EAX + 0x8]
0076e0b8  FLD float ptr [ESP + 0x2c]
0076e0bc  FDIV float ptr [ESP + 0x28]
0076e0c0  ADD ESP,0x24
0076e0c3  RET 0x14
