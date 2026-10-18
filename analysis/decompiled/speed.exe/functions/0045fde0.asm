0045fde0  MOV ECX,dword ptr [ESP + 0xc]
0045fde4  PUSH ESI
0045fde5  MOV ESI,dword ptr [ESP + 0x8]
0045fde9  FLD float ptr [ESI]
0045fdeb  FSUB float ptr [ESP + 0x14]
0045fdef  FCOMP float ptr [ECX]
0045fdf1  FNSTSW AX
0045fdf3  TEST AH,0x41
0045fdf6  JZ 0x0045fe56
0045fdf8  FLD float ptr [ESP + 0x14]
0045fdfc  MOV EDX,dword ptr [ESP + 0xc]
0045fe00  FADD float ptr [EDX]
0045fe02  FCOMP float ptr [ECX]
0045fe04  FNSTSW AX
0045fe06  TEST AH,0x5
0045fe09  JNP 0x0045fe56
0045fe0b  FLD float ptr [ESI + 0x4]
0045fe0e  FSUB float ptr [ESP + 0x14]
0045fe12  FCOMP float ptr [ECX + 0x4]
0045fe15  FNSTSW AX
0045fe17  TEST AH,0x41
0045fe1a  JZ 0x0045fe56
0045fe1c  FLD float ptr [ESP + 0x14]
0045fe20  FADD float ptr [EDX + 0x4]
0045fe23  FCOMP float ptr [ECX + 0x4]
0045fe26  FNSTSW AX
0045fe28  TEST AH,0x5
0045fe2b  JNP 0x0045fe56
0045fe2d  FLD float ptr [ESI + 0x8]
0045fe30  FSUB float ptr [ESP + 0x14]
0045fe34  FCOMP float ptr [ECX + 0x8]
0045fe37  FNSTSW AX
0045fe39  TEST AH,0x41
0045fe3c  JZ 0x0045fe56
0045fe3e  FLD float ptr [ESP + 0x14]
0045fe42  FADD float ptr [EDX + 0x8]
0045fe45  FCOMP float ptr [ECX + 0x8]
0045fe48  FNSTSW AX
0045fe4a  TEST AH,0x5
0045fe4d  JNP 0x0045fe56
0045fe4f  MOV EAX,0x1
0045fe54  POP ESI
0045fe55  RET
0045fe56  XOR EAX,EAX
0045fe58  POP ESI
0045fe59  RET
