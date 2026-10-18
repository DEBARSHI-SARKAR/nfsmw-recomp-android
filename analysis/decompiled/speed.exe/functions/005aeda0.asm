005aeda0  MOV EDX,dword ptr [ESP + 0x8]
005aeda4  PUSH ESI
005aeda5  MOV ESI,dword ptr [ESP + 0x8]
005aeda9  LEA ESP,[ESP]
005aedb0  MOV CL,byte ptr [ESI]
005aedb2  CMP CL,0x61
005aedb5  JL 0x005aedbf
005aedb7  CMP CL,0x7a
005aedba  JG 0x005aedbf
005aedbc  ADD CL,0xe0
005aedbf  MOV AL,byte ptr [EDX]
005aedc1  INC ESI
005aedc2  CMP AL,0x61
005aedc4  JL 0x005aedcc
005aedc6  CMP AL,0x7a
005aedc8  JG 0x005aedcc
005aedca  ADD AL,0xe0
005aedcc  INC EDX
005aedcd  TEST CL,CL
005aedcf  JZ 0x005aedd5
005aedd1  CMP CL,AL
005aedd3  JZ 0x005aedb0
005aedd5  MOVSX EDX,AL
005aedd8  MOVSX EAX,CL
005aeddb  SUB EAX,EDX
005aeddd  POP ESI
005aedde  RET
