0068ccd0  PUSH ESI
0068ccd1  MOV ESI,ECX
0068ccd3  MOV EAX,dword ptr [ESI + -0x58]
0068ccd6  LEA ECX,[ESI + -0x58]
0068ccd9  CALL dword ptr [EAX + 0x2c]
0068ccdc  TEST AL,AL
0068ccde  JNZ 0x0068cce4
0068cce0  POP ESI
0068cce1  RET 0x4
0068cce4  MOV EDX,dword ptr [ESI + -0xc]
0068cce7  LEA ECX,[ESI + -0xc]
0068ccea  CALL dword ptr [EDX + 0x18]
0068cced  TEST AL,AL
0068ccef  JZ 0x0068ccf7
0068ccf1  MOV AL,0x1
0068ccf3  POP ESI
0068ccf4  RET 0x4
0068ccf7  MOV EAX,dword ptr [ESP + 0x8]
0068ccfb  TEST dword ptr [ESI + 0x5c],EAX
0068ccfe  SETNZ AL
0068cd01  POP ESI
0068cd02  RET 0x4
