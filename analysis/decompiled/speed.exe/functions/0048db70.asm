0048db70  PUSH ECX
0048db71  MOV ECX,dword ptr [ESP + 0x8]
0048db75  FLD float ptr [ECX]
0048db77  FABS
0048db79  FLD float ptr [ECX + 0x4]
0048db7c  FABS
0048db7e  FSTP float ptr [ESP + 0x8]
0048db82  FLD float ptr [ECX + 0x8]
0048db85  FABS
0048db87  FSTP float ptr [ESP]
0048db8a  FCOM float ptr [ESP + 0x8]
0048db8e  FNSTSW AX
0048db90  TEST AH,0x41
0048db93  JNZ 0x0048dbbd
0048db95  FCOM float ptr [ESP]
0048db98  FNSTSW AX
0048db9a  TEST AH,0x41
0048db9d  JNZ 0x0048dbbd
0048db9f  MOV EAX,dword ptr [ESP + 0xc]
0048dba3  FSTP ST0
0048dba5  FLD float ptr [ECX + 0x8]
0048dba8  FADD float ptr [ECX + 0x4]
0048dbab  FSTP float ptr [EAX]
0048dbad  FLD float ptr [ECX]
0048dbaf  FCHS
0048dbb1  FSTP float ptr [EAX + 0x4]
0048dbb4  FLD float ptr [ECX]
0048dbb6  FCHS
0048dbb8  FSTP float ptr [EAX + 0x8]
0048dbbb  POP ECX
0048dbbc  RET
0048dbbd  FLD float ptr [ESP + 0x8]
0048dbc1  FCOMP
0048dbc3  FNSTSW AX
0048dbc5  FSTP ST0
0048dbc7  TEST AH,0x41
0048dbca  JNZ 0x0048dbf7
0048dbcc  FLD float ptr [ESP + 0x8]
0048dbd0  FCOMP float ptr [ESP]
0048dbd3  FNSTSW AX
0048dbd5  TEST AH,0x41
0048dbd8  JNZ 0x0048dbf7
0048dbda  FLD float ptr [ECX + 0x8]
0048dbdd  MOV EAX,dword ptr [ESP + 0xc]
0048dbe1  FADD float ptr [ECX]
0048dbe3  FSTP float ptr [EAX + 0x4]
0048dbe6  FLD float ptr [ECX + 0x4]
0048dbe9  FCHS
0048dbeb  FSTP float ptr [EAX + 0x8]
0048dbee  FLD float ptr [ECX + 0x4]
0048dbf1  FCHS
0048dbf3  FSTP float ptr [EAX]
0048dbf5  POP ECX
0048dbf6  RET
0048dbf7  FLD float ptr [ECX + 0x4]
0048dbfa  MOV EAX,dword ptr [ESP + 0xc]
0048dbfe  FADD float ptr [ECX]
0048dc00  FSTP float ptr [EAX + 0x8]
0048dc03  FLD float ptr [ECX + 0x8]
0048dc06  FCHS
0048dc08  FSTP float ptr [EAX]
0048dc0a  FLD float ptr [ECX + 0x8]
0048dc0d  FCHS
0048dc0f  FSTP float ptr [EAX + 0x4]
0048dc12  POP ECX
0048dc13  RET
