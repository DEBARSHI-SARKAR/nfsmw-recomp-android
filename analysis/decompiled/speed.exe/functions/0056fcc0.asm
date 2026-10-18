0056fcc0  MOV ECX,dword ptr [ESP + 0x4]
0056fcc4  FLD float ptr [ECX]
0056fcc6  FCOMP float ptr [ECX + 0x10]
0056fcc9  FNSTSW AX
0056fccb  TEST AH,0x41
0056fcce  JNZ 0x0056fce2
0056fcd0  MOV EAX,dword ptr [ECX + 0x10]
0056fcd3  FLD float ptr [ECX]
0056fcd5  MOV EDX,EAX
0056fcd7  FST float ptr [ECX + 0x10]
0056fcda  FSTP float ptr [ECX + 0x20]
0056fcdd  MOV dword ptr [ECX],EAX
0056fcdf  MOV dword ptr [ECX + 0x30],EDX
0056fce2  FLD float ptr [ECX + 0x4]
0056fce5  FCOMP float ptr [ECX + 0x34]
0056fce8  FNSTSW AX
0056fcea  TEST AH,0x41
0056fced  JNZ 0x0056fd03
0056fcef  MOV EAX,dword ptr [ECX + 0x34]
0056fcf2  FLD float ptr [ECX + 0x4]
0056fcf5  MOV EDX,EAX
0056fcf7  FST float ptr [ECX + 0x24]
0056fcfa  FSTP float ptr [ECX + 0x34]
0056fcfd  MOV dword ptr [ECX + 0x4],EAX
0056fd00  MOV dword ptr [ECX + 0x14],EDX
0056fd03  RET
