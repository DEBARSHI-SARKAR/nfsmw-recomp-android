0076ad80  MOV EAX,dword ptr [ECX]
0076ad82  MOV DL,byte ptr [EAX + 0x15]
0076ad85  TEST DL,DL
0076ad87  JNZ 0x0076add6
0076ad89  MOV EDX,dword ptr [EAX + 0x8]
0076ad8c  PUSH EBX
0076ad8d  MOV BL,byte ptr [EDX + 0x15]
0076ad90  TEST BL,BL
0076ad92  JNZ 0x0076adaf
0076ad94  MOV EAX,dword ptr [EDX]
0076ad96  MOV BL,byte ptr [EAX + 0x15]
0076ad99  TEST BL,BL
0076ad9b  JNZ 0x0076adab
0076ad9d  LEA ECX,[ECX]
0076ada0  MOV EDX,EAX
0076ada2  MOV EAX,dword ptr [EDX]
0076ada4  MOV BL,byte ptr [EAX + 0x15]
0076ada7  TEST BL,BL
0076ada9  JZ 0x0076ada0
0076adab  MOV dword ptr [ECX],EDX
0076adad  POP EBX
0076adae  RET
0076adaf  MOV EAX,dword ptr [EAX + 0x4]
0076adb2  MOV DL,byte ptr [EAX + 0x15]
0076adb5  TEST DL,DL
0076adb7  JNZ 0x0076add3
0076adb9  LEA ESP,[ESP]
0076adc0  MOV EDX,dword ptr [ECX]
0076adc2  CMP EDX,dword ptr [EAX + 0x8]
0076adc5  JNZ 0x0076add3
0076adc7  MOV dword ptr [ECX],EAX
0076adc9  MOV EAX,dword ptr [EAX + 0x4]
0076adcc  MOV DL,byte ptr [EAX + 0x15]
0076adcf  TEST DL,DL
0076add1  JZ 0x0076adc0
0076add3  MOV dword ptr [ECX],EAX
0076add5  POP EBX
0076add6  RET
