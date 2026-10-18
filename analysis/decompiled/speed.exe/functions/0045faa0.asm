0045faa0  PUSH ESI
0045faa1  MOV ESI,dword ptr [ESP + 0x10]
0045faa5  FLD float ptr [ESI]
0045faa7  PUSH EDI
0045faa8  MOV EDI,dword ptr [ESP + 0x10]
0045faac  FCOMP float ptr [EDI]
0045faae  FNSTSW AX
0045fab0  TEST AH,0x5
0045fab3  JP 0x0045faea
0045fab5  MOV ECX,dword ptr [ESP + 0x18]
0045fab9  FLD float ptr [ECX]
0045fabb  MOV EDX,dword ptr [ESP + 0xc]
0045fabf  FCOMP float ptr [EDX]
0045fac1  FNSTSW AX
0045fac3  TEST AH,0x41
0045fac6  JNZ 0x0045faea
0045fac8  FLD float ptr [ESI + 0x4]
0045facb  FCOMP float ptr [EDI + 0x4]
0045face  FNSTSW AX
0045fad0  TEST AH,0x5
0045fad3  JP 0x0045faea
0045fad5  FLD float ptr [ECX + 0x4]
0045fad8  FCOMP float ptr [EDX + 0x4]
0045fadb  FNSTSW AX
0045fadd  TEST AH,0x41
0045fae0  JNZ 0x0045faea
0045fae2  POP EDI
0045fae3  MOV EAX,0x1
0045fae8  POP ESI
0045fae9  RET
0045faea  POP EDI
0045faeb  XOR EAX,EAX
0045faed  POP ESI
0045faee  RET
