004feda0  MOV EDX,dword ptr [ESP + 0x4]
004feda4  LEA EAX,[ECX + 0x10]
004feda7  XOR ECX,ECX
004feda9  TEST EDX,EDX
004fedab  PUSH ESI
004fedac  JL 0x004fedc8
004fedae  MOV EDI,EDI
004fedb0  CMP ECX,EDX
004fedb2  LEA ESI,[EAX + 0x50]
004fedb5  JZ 0x004fedce
004fedb7  MOVZX EAX,word ptr [EAX + 0xa]
004fedbb  LEA EAX,[EAX + EAX*0x2]
004fedbe  SHL EAX,0x4
004fedc1  INC ECX
004fedc2  ADD EAX,ESI
004fedc4  CMP ECX,EDX
004fedc6  JLE 0x004fedb0
004fedc8  XOR EAX,EAX
004fedca  POP ESI
004fedcb  RET 0x4
004fedce  MOV AX,word ptr [EAX + 0xa]
004fedd2  NEG AX
004fedd5  SBB EAX,EAX
004fedd7  AND EAX,ESI
004fedd9  POP ESI
004fedda  RET 0x4
