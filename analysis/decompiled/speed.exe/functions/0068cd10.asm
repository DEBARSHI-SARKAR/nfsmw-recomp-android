0068cd10  PUSH ESI
0068cd11  MOV ESI,ECX
0068cd13  MOV EAX,dword ptr [ESI + -0x4c]
0068cd16  LEA ECX,[ESI + -0x4c]
0068cd19  CALL dword ptr [EAX + 0x2c]
0068cd1c  TEST AL,AL
0068cd1e  MOV EAX,dword ptr [ESP + 0x8]
0068cd22  JNZ 0x0068cd2e
0068cd24  MOV dword ptr [EAX],0x0
0068cd2a  POP ESI
0068cd2b  RET 0x4
0068cd2e  MOV ECX,dword ptr [ESI + 0x4c]
0068cd31  MOV dword ptr [EAX],ECX
0068cd33  POP ESI
0068cd34  RET 0x4
