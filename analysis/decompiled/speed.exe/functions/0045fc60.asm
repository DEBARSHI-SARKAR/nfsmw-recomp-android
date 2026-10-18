0045fc60  SUB ESP,0xc
0045fc63  MOV EAX,dword ptr [ESP + 0x18]
0045fc67  FLD float ptr [EAX]
0045fc69  MOV ECX,dword ptr [ESP + 0x10]
0045fc6d  FSUB float ptr [ESP + 0x1c]
0045fc71  FLD float ptr [EAX + 0x4]
0045fc74  FSUB float ptr [ESP + 0x1c]
0045fc78  FSTP float ptr [ESP + 0x18]
0045fc7c  FLD float ptr [EAX + 0x8]
0045fc7f  FSUB float ptr [ESP + 0x1c]
0045fc83  FSTP float ptr [ESP]
0045fc86  FLD float ptr [ESP + 0x1c]
0045fc8a  FADD float ptr [EAX]
0045fc8c  FSTP float ptr [ESP + 0x4]
0045fc90  FLD float ptr [ESP + 0x1c]
0045fc94  FADD float ptr [EAX + 0x4]
0045fc97  FSTP float ptr [ESP + 0x8]
0045fc9b  FLD float ptr [ESP + 0x1c]
0045fc9f  FADD float ptr [EAX + 0x8]
0045fca2  FSTP float ptr [ESP + 0x1c]
0045fca6  FLD ST0
0045fca8  FCOMP float ptr [ECX]
0045fcaa  FNSTSW AX
0045fcac  TEST AH,0x5
0045fcaf  JP 0x0045fcb5
0045fcb1  FSTP float ptr [ECX]
0045fcb3  JMP 0x0045fcb7
0045fcb5  FSTP ST0
0045fcb7  FLD float ptr [ESP + 0x18]
0045fcbb  FCOMP float ptr [ECX + 0x4]
0045fcbe  FNSTSW AX
0045fcc0  TEST AH,0x5
0045fcc3  JP 0x0045fccc
0045fcc5  MOV EAX,dword ptr [ESP + 0x18]
0045fcc9  MOV dword ptr [ECX + 0x4],EAX
0045fccc  FLD float ptr [ESP]
0045fccf  FCOMP float ptr [ECX + 0x8]
0045fcd2  FNSTSW AX
0045fcd4  TEST AH,0x5
0045fcd7  JP 0x0045fcdf
0045fcd9  MOV EDX,dword ptr [ESP]
0045fcdc  MOV dword ptr [ECX + 0x8],EDX
0045fcdf  FLD float ptr [ESP + 0x4]
0045fce3  MOV ECX,dword ptr [ESP + 0x14]
0045fce7  FCOMP float ptr [ECX]
0045fce9  FNSTSW AX
0045fceb  TEST AH,0x41
0045fcee  JNZ 0x0045fcf6
0045fcf0  MOV EAX,dword ptr [ESP + 0x4]
0045fcf4  MOV dword ptr [ECX],EAX
0045fcf6  FLD float ptr [ESP + 0x8]
0045fcfa  FCOMP float ptr [ECX + 0x4]
0045fcfd  FNSTSW AX
0045fcff  TEST AH,0x41
0045fd02  JNZ 0x0045fd0b
0045fd04  MOV EDX,dword ptr [ESP + 0x8]
0045fd08  MOV dword ptr [ECX + 0x4],EDX
0045fd0b  FLD float ptr [ESP + 0x1c]
0045fd0f  FCOMP float ptr [ECX + 0x8]
0045fd12  FNSTSW AX
0045fd14  TEST AH,0x41
0045fd17  JNZ 0x0045fd20
0045fd19  MOV EAX,dword ptr [ESP + 0x1c]
0045fd1d  MOV dword ptr [ECX + 0x8],EAX
0045fd20  ADD ESP,0xc
0045fd23  RET
