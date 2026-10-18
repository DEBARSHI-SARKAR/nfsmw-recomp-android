0056cd20  FLD float ptr [ECX + 0x20]
0056cd23  MOV EAX,dword ptr [ECX + 0x28]
0056cd26  FLD float ptr [ESP + 0x4]
0056cd2a  MOV dword ptr [ECX + 0x24],EAX
0056cd2d  FCOMP
0056cd2f  FNSTSW AX
0056cd31  TEST AH,0x41
0056cd34  JNZ 0x0056cd3c
0056cd36  FSTP ST0
0056cd38  FLD float ptr [ESP + 0x4]
0056cd3c  MOV EDX,dword ptr [ECX + 0x1c]
0056cd3f  MOV dword ptr [ESP + 0x4],EDX
0056cd43  FCOM float ptr [ESP + 0x4]
0056cd47  FNSTSW AX
0056cd49  TEST AH,0x5
0056cd4c  JP 0x0056cd54
0056cd4e  FSTP float ptr [ECX + 0x28]
0056cd51  RET 0x4
0056cd54  MOV EAX,dword ptr [ESP + 0x4]
0056cd58  FSTP ST0
0056cd5a  MOV dword ptr [ECX + 0x28],EAX
0056cd5d  RET 0x4
