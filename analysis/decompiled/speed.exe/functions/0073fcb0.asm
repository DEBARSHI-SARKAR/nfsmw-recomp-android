0073fcb0  MOV EAX,dword ptr [ECX]
0073fcb2  MOV DL,byte ptr [EAX + 0x15]
0073fcb5  TEST DL,DL
0073fcb7  JZ 0x0073fcbf
0073fcb9  MOV EAX,dword ptr [EAX + 0x8]
0073fcbc  MOV dword ptr [ECX],EAX
0073fcbe  RET
0073fcbf  MOV EDX,dword ptr [EAX]
0073fcc1  PUSH EBX
0073fcc2  MOV BL,byte ptr [EDX + 0x15]
0073fcc5  TEST BL,BL
0073fcc7  JNZ 0x0073fce3
0073fcc9  MOV EAX,dword ptr [EDX + 0x8]
0073fccc  MOV BL,byte ptr [EAX + 0x15]
0073fccf  TEST BL,BL
0073fcd1  JNZ 0x0073fcdf
0073fcd3  MOV EDX,EAX
0073fcd5  MOV EAX,dword ptr [EDX + 0x8]
0073fcd8  MOV BL,byte ptr [EAX + 0x15]
0073fcdb  TEST BL,BL
0073fcdd  JZ 0x0073fcd3
0073fcdf  MOV dword ptr [ECX],EDX
0073fce1  POP EBX
0073fce2  RET
0073fce3  MOV EAX,dword ptr [EAX + 0x4]
0073fce6  MOV DL,byte ptr [EAX + 0x15]
0073fce9  TEST DL,DL
0073fceb  JNZ 0x0073fd0b
0073fced  LEA ECX,[ECX]
0073fcf0  MOV EDX,dword ptr [ECX]
0073fcf2  CMP EDX,dword ptr [EAX]
0073fcf4  JNZ 0x0073fd02
0073fcf6  MOV dword ptr [ECX],EAX
0073fcf8  MOV EAX,dword ptr [EAX + 0x4]
0073fcfb  MOV DL,byte ptr [EAX + 0x15]
0073fcfe  TEST DL,DL
0073fd00  JZ 0x0073fcf0
0073fd02  MOV DL,byte ptr [EAX + 0x15]
0073fd05  TEST DL,DL
0073fd07  JNZ 0x0073fd0b
0073fd09  MOV dword ptr [ECX],EAX
0073fd0b  POP EBX
0073fd0c  RET
