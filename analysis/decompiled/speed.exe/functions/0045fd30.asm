0045fd30  SUB ESP,0xc
0045fd33  MOV EAX,dword ptr [ESP + 0x18]
0045fd37  MOV ECX,dword ptr [EAX + 0x4]
0045fd3a  FLD float ptr [EAX]
0045fd3c  MOV EDX,dword ptr [EAX + 0x8]
0045fd3f  FLD ST0
0045fd41  MOV EAX,dword ptr [ESP + 0x1c]
0045fd45  MOV dword ptr [ESP + 0x18],ECX
0045fd49  MOV ECX,dword ptr [EAX]
0045fd4b  MOV dword ptr [ESP + 0x1c],ECX
0045fd4f  MOV ECX,dword ptr [ESP + 0x10]
0045fd53  FCOMP float ptr [ECX]
0045fd55  MOV dword ptr [ESP],EDX
0045fd58  MOV EDX,dword ptr [EAX + 0x4]
0045fd5b  MOV EAX,dword ptr [EAX + 0x8]
0045fd5e  MOV dword ptr [ESP + 0x8],EAX
0045fd62  FNSTSW AX
0045fd64  MOV dword ptr [ESP + 0x4],EDX
0045fd68  TEST AH,0x5
0045fd6b  JP 0x0045fd71
0045fd6d  FSTP float ptr [ECX]
0045fd6f  JMP 0x0045fd73
0045fd71  FSTP ST0
0045fd73  FLD float ptr [ESP + 0x18]
0045fd77  FCOMP float ptr [ECX + 0x4]
0045fd7a  FNSTSW AX
0045fd7c  TEST AH,0x5
0045fd7f  JP 0x0045fd88
0045fd81  MOV EDX,dword ptr [ESP + 0x18]
0045fd85  MOV dword ptr [ECX + 0x4],EDX
0045fd88  FLD float ptr [ESP]
0045fd8b  FCOMP float ptr [ECX + 0x8]
0045fd8e  FNSTSW AX
0045fd90  TEST AH,0x5
0045fd93  JP 0x0045fd9b
0045fd95  MOV EAX,dword ptr [ESP]
0045fd98  MOV dword ptr [ECX + 0x8],EAX
0045fd9b  FLD float ptr [ESP + 0x1c]
0045fd9f  MOV ECX,dword ptr [ESP + 0x14]
0045fda3  FCOMP float ptr [ECX]
0045fda5  FNSTSW AX
0045fda7  TEST AH,0x41
0045fdaa  JNZ 0x0045fdb2
0045fdac  MOV EDX,dword ptr [ESP + 0x1c]
0045fdb0  MOV dword ptr [ECX],EDX
0045fdb2  FLD float ptr [ESP + 0x4]
0045fdb6  FCOMP float ptr [ECX + 0x4]
0045fdb9  FNSTSW AX
0045fdbb  TEST AH,0x41
0045fdbe  JNZ 0x0045fdc7
0045fdc0  MOV EAX,dword ptr [ESP + 0x4]
0045fdc4  MOV dword ptr [ECX + 0x4],EAX
0045fdc7  FLD float ptr [ESP + 0x8]
0045fdcb  FCOMP float ptr [ECX + 0x8]
0045fdce  FNSTSW AX
0045fdd0  TEST AH,0x41
0045fdd3  JNZ 0x0045fddc
0045fdd5  MOV EDX,dword ptr [ESP + 0x8]
0045fdd9  MOV dword ptr [ECX + 0x8],EDX
0045fddc  ADD ESP,0xc
0045fddf  RET
