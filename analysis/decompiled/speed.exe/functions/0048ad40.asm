0048ad40  SUB ESP,0xc
0048ad43  MOV EDX,dword ptr [ESP + 0x14]
0048ad47  PUSH ESI
0048ad48  MOV ESI,ECX
0048ad4a  MOV ECX,dword ptr [ESP + 0x14]
0048ad4e  FLD float ptr [ECX + 0x8]
0048ad51  FMUL float ptr [EDX + 0x8]
0048ad54  FLD float ptr [ECX + 0x4]
0048ad57  FMUL float ptr [EDX + 0x4]
0048ad5a  FADDP
0048ad5c  FLD float ptr [ECX]
0048ad5e  FMUL float ptr [EDX]
0048ad60  FADDP
0048ad62  FST float ptr [ESP + 0x14]
0048ad66  FCOMP float ptr [0x0089096c]
0048ad6c  FNSTSW AX
0048ad6e  TEST AH,0x1
0048ad71  JNZ 0x0048ad8d
0048ad73  XOR EAX,EAX
0048ad75  MOV dword ptr [ESI + 0x8],EAX
0048ad78  MOV dword ptr [ESI + 0x4],EAX
0048ad7b  MOV dword ptr [ESI],EAX
0048ad7d  MOV dword ptr [ESI + 0xc],0x3f800000
0048ad84  MOV EAX,ESI
0048ad86  POP ESI
0048ad87  ADD ESP,0xc
0048ad8a  RET 0x8
0048ad8d  LEA EAX,[ESP + 0x4]
0048ad91  PUSH EAX
0048ad92  PUSH EDX
0048ad93  PUSH ECX
0048ad94  CALL 0x00401870
0048ad99  FLD float ptr [ESP + 0x20]
0048ad9d  FCOMP float ptr [0x00895400]
0048ada3  ADD ESP,0xc
0048ada6  FNSTSW AX
0048ada8  TEST AH,0x5
0048adab  JP 0x0048addc
0048adad  MOV ECX,dword ptr [ESP + 0x4]
0048adb1  MOV EDX,dword ptr [ESP + 0x8]
0048adb5  MOV EAX,dword ptr [ESP + 0xc]
0048adb9  PUSH ESI
0048adba  MOV dword ptr [ESI],ECX
0048adbc  MOV dword ptr [ESI + 0x4],EDX
0048adbf  MOV dword ptr [ESI + 0x8],EAX
0048adc2  MOV dword ptr [ESI + 0xc],0x0
0048adc9  CALL 0x004885d0
0048adce  FSTP ST0
0048add0  ADD ESP,0x4
0048add3  MOV EAX,ESI
0048add5  POP ESI
0048add6  ADD ESP,0xc
0048add9  RET 0x8
0048addc  FLD float ptr [ESP + 0x14]
0048ade0  PUSH ECX
0048ade1  FADD float ptr [0x0089096c]
0048ade7  FADD ST0,ST0
0048ade9  FSTP float ptr [ESP]
0048adec  CALL 0x005c5e80
0048adf1  FLD float ptr [0x0089096c]
0048adf7  ADD ESP,0x4
0048adfa  FDIV ST0,ST1
0048adfc  MOV EAX,ESI
0048adfe  FLD float ptr [ESP + 0x4]
0048ae02  FMUL ST1
0048ae04  FSTP float ptr [ESI]
0048ae06  FLD float ptr [ESP + 0x8]
0048ae0a  FMUL ST1
0048ae0c  FSTP float ptr [ESI + 0x4]
0048ae0f  FMUL float ptr [ESP + 0xc]
0048ae13  FSTP float ptr [ESI + 0x8]
0048ae16  FMUL float ptr [0x008933d4]
0048ae1c  FSTP float ptr [ESI + 0xc]
0048ae1f  POP ESI
0048ae20  ADD ESP,0xc
0048ae23  RET 0x8
