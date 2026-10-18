0068e9e0  SUB ESP,0x8
0068e9e3  PUSH ESI
0068e9e4  MOV ESI,dword ptr [ESP + 0x10]
0068e9e8  MOV EAX,dword ptr [ESI + 0x8c]
0068e9ee  PUSH EDI
0068e9ef  MOV EDI,ECX
0068e9f1  MOV ECX,dword ptr [ESI + 0x48]
0068e9f4  PUSH ECX
0068e9f5  MOV ECX,0x8f8f30
0068e9fa  MOV dword ptr [ESP + 0x10],EAX
0068e9fe  CALL 0x006533b0
0068ea03  FSTP float ptr [ESP + 0x14]
0068ea07  MOV EAX,dword ptr [ESP + 0x18]
0068ea0b  DEC EAX
0068ea0c  JZ 0x0068ea1f
0068ea0e  DEC EAX
0068ea0f  JNZ 0x0068ea31
0068ea11  FLD float ptr [0x008a0dbc]
0068ea17  POP EDI
0068ea18  POP ESI
0068ea19  ADD ESP,0x8
0068ea1c  RET 0x8
0068ea1f  MOV EDX,dword ptr [ESI + 0x48]
0068ea22  PUSH EDX
0068ea23  MOV ECX,0x8f8f44
0068ea28  CALL 0x006533b0
0068ea2d  FSTP float ptr [ESP + 0x14]
0068ea31  FLD float ptr [ESI + 0x4c]
0068ea34  MOV EAX,dword ptr [ESI + 0x48]
0068ea37  FADD float ptr [0x0089096c]
0068ea3d  PUSH EAX
0068ea3e  FLD float ptr [ESI + 0x7c]
0068ea41  MOV ECX,0x8f8f6c
0068ea46  FADD float ptr [ESI + 0x5c]
0068ea49  FMUL float ptr [0x008933d4]
0068ea4f  FSUBP
0068ea51  FMUL float ptr [0x008933d4]
0068ea57  FSUBR float ptr [0x0089096c]
0068ea5d  FSTP float ptr [ESP + 0x1c]
0068ea61  CALL 0x006533b0
0068ea66  FMUL float ptr [0x008f8ab4]
0068ea6c  PUSH ECX
0068ea6d  MOV ECX,0x8f8f58
0068ea72  FMUL float ptr [ESP + 0x1c]
0068ea76  FADD float ptr [0x0089096c]
0068ea7c  FMUL float ptr [ESP + 0x18]
0068ea80  FSTP float ptr [ESP + 0x18]
0068ea84  FLD float ptr [EDI + 0x140]
0068ea8a  FABS
0068ea8c  FSTP float ptr [ESP]
0068ea8f  CALL 0x006533b0
0068ea94  FMUL float ptr [ESP + 0x14]
0068ea98  MOV ECX,dword ptr [EDI + 0x48]
0068ea9b  MOV EDX,dword ptr [ECX]
0068ea9d  FSTP float ptr [ESP + 0x14]
0068eaa1  CALL dword ptr [EDX + 0xcc]
0068eaa7  TEST EAX,EAX
0068eaa9  JZ 0x0068eac3
0068eaab  FLD float ptr [EAX]
0068eaad  FMUL float ptr [0x00895074]
0068eab3  FADD float ptr [0x0089096c]
0068eab9  FMUL float ptr [ESP + 0x14]
0068eabd  FST float ptr [ESP + 0x14]
0068eac1  JMP 0x0068eac7
0068eac3  FLD float ptr [ESP + 0x14]
0068eac7  FLD float ptr [EDI + 0x1a4]
0068eacd  FCOMP float ptr [0x00890968]
0068ead3  FNSTSW AX
0068ead5  TEST AH,0x41
0068ead8  JNZ 0x0068eb5f
0068eade  FLD float ptr [0x0089096c]
0068eae4  FSUB float ptr [EDI + 0x1a4]
0068eaea  FST float ptr [ESP + 0x18]
0068eaee  FCOMP float ptr [0x0089096c]
0068eaf4  FNSTSW AX
0068eaf6  TEST AH,0x5
0068eaf9  JP 0x0068eb5f
0068eafb  FLD float ptr [ESP + 0x18]
0068eaff  FCOMP float ptr [0x00890968]
0068eb05  FNSTSW AX
0068eb07  TEST AH,0x41
0068eb0a  JNZ 0x0068eb5f
0068eb0c  FSTP ST0
0068eb0e  FLD float ptr [ESI + 0x48]
0068eb11  FMUL float ptr [0x008ab240]
0068eb17  FLD float ptr [0x0089096c]
0068eb1d  FCOMP
0068eb1f  FNSTSW AX
0068eb21  TEST AH,0x5
0068eb24  JP 0x0068eb32
0068eb26  FSTP ST0
0068eb28  MOV dword ptr [ESP + 0x8],0x3f800000
0068eb30  JMP 0x0068eb36
0068eb32  FSTP float ptr [ESP + 0x8]
0068eb36  MOV EAX,dword ptr [ESP + 0x18]
0068eb3a  PUSH EAX
0068eb3b  MOV ECX,0x937888
0068eb40  CALL 0x00653790
0068eb45  FLD float ptr [0x0089096c]
0068eb4b  FSUB float ptr [ESP + 0x8]
0068eb4f  FLD float ptr [0x0089096c]
0068eb55  FSUB ST0,ST2
0068eb57  FMULP
0068eb59  FADDP
0068eb5b  FMUL float ptr [ESP + 0x14]
0068eb5f  MOV ECX,dword ptr [EDI + 0x1bc]
0068eb65  FLD float ptr [ECX + 0x118]
0068eb6b  MOV EDX,dword ptr [EDI + 0x1c0]
0068eb71  FMUL float ptr [0x00890960]
0068eb77  FSTP float ptr [ESP + 0x18]
0068eb7b  FLD float ptr [EDX + 0x118]
0068eb81  FMUL float ptr [0x00890960]
0068eb87  FSTP float ptr [ESP + 0x14]
0068eb8b  FLD float ptr [ESP + 0xc]
0068eb8f  FCOMP float ptr [0x00890968]
0068eb95  FNSTSW AX
0068eb97  TEST AH,0x41
0068eb9a  JNZ 0x0068ebd5
0068eb9c  FLD float ptr [ESP + 0x14]
0068eba0  FCOMP float ptr [0x00890968]
0068eba6  FNSTSW AX
0068eba8  TEST AH,0x41
0068ebab  JNZ 0x0068ebd5
0068ebad  FCOM float ptr [ESP + 0x14]
0068ebb1  FNSTSW AX
0068ebb3  TEST AH,0x41
0068ebb6  JZ 0x0068ebbe
0068ebb8  FSTP ST0
0068ebba  FLD float ptr [ESP + 0x14]
0068ebbe  FCOM float ptr [0x008a0dbc]
0068ebc4  FNSTSW AX
0068ebc6  TEST AH,0x5
0068ebc9  JNP 0x0068ec3f
0068ebcb  FSTP ST0
0068ebcd  FLD float ptr [0x008a0dbc]
0068ebd3  JMP 0x0068ec3f
0068ebd5  FLD float ptr [ESP + 0xc]
0068ebd9  FCOMP float ptr [0x00890968]
0068ebdf  FNSTSW AX
0068ebe1  TEST AH,0x5
0068ebe4  JP 0x0068ec03
0068ebe6  FLD float ptr [ESP + 0x18]
0068ebea  FCOMP float ptr [0x00890968]
0068ebf0  FNSTSW AX
0068ebf2  TEST AH,0x5
0068ebf5  JP 0x0068ec03
0068ebf7  FLD float ptr [ESP + 0x18]
0068ebfb  FCHS
0068ebfd  FSTP float ptr [ESP + 0x14]
0068ec01  JMP 0x0068ebad
0068ec03  FLD float ptr [EDI + 0x140]
0068ec09  FABS
0068ec0b  FCOMP float ptr [0x008933d4]
0068ec11  FNSTSW AX
0068ec13  TEST AH,0x1
0068ec16  JNZ 0x0068ec3f
0068ec18  FLD float ptr [ESI + 0xc0]
0068ec1e  FMUL float ptr [0x00890968]
0068ec24  FSUBR float ptr [EDI + 0x12c]
0068ec2a  FSTP float ptr [ESP + 0x14]
0068ec2e  FCOM float ptr [ESP + 0x14]
0068ec32  FNSTSW AX
0068ec34  TEST AH,0x41
0068ec37  JZ 0x0068ec3f
0068ec39  FSTP ST0
0068ec3b  FLD float ptr [ESP + 0x14]
0068ec3f  FCOM float ptr [0x008a0dbc]
0068ec45  FNSTSW AX
0068ec47  TEST AH,0x5
0068ec4a  JNP 0x0068ec54
0068ec4c  FSTP ST0
0068ec4e  FLD float ptr [0x008a0dbc]
0068ec54  FST float ptr [EDI + 0x12c]
0068ec5a  POP EDI
0068ec5b  POP ESI
0068ec5c  ADD ESP,0x8
0068ec5f  RET 0x8
