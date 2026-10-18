0044bab0  MOV EAX,dword ptr [ESP + 0x4]
0044bab4  MOV dword ptr [ECX + 0x64],EAX
0044bab7  XOR EAX,EAX
0044bab9  MOV dword ptr [ECX + 0x8],EAX
0044babc  MOV dword ptr [ECX + 0x18],EAX
0044babf  MOV EAX,dword ptr [ECX + 0x34]
0044bac2  TEST AL,0x10
0044bac4  JZ 0x0044baf9
0044bac6  TEST AL,0x40
0044bac8  JZ 0x0044bad5
0044baca  FILD dword ptr [ECX + 0x3c]
0044bacd  FMUL float ptr [ECX + 0x5c]
0044bad0  FMUL float ptr [ECX + 0x40]
0044bad3  JMP 0x0044bad8
0044bad5  FLD float ptr [ECX + 0x60]
0044bad8  FLD float ptr [ESP + 0x4]
0044badc  FCOMP
0044bade  FNSTSW AX
0044bae0  TEST AH,0x41
0044bae3  JNZ 0x0044baf7
0044bae5  FLD float ptr [ESP + 0x4]
0044bae9  MOV dword ptr [ECX + 0x8],0x1
0044baf0  FSUB ST0,ST1
0044baf2  FSUBR ST0,ST1
0044baf4  FSTP float ptr [ECX + 0x64]
0044baf7  FSTP ST0
0044baf9  RET 0x4
