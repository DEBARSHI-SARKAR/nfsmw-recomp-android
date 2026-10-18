006ffd80  PUSH ESI
006ffd81  MOV ESI,ECX
006ffd83  MOV EAX,dword ptr [ESI + 0x2c]
006ffd86  TEST EAX,EAX
006ffd88  JZ 0x006ffdbe
006ffd8a  MOV ECX,dword ptr [ESI + 0x88]
006ffd90  PUSH 0x0
006ffd92  PUSH ECX
006ffd93  LEA ECX,[EAX + 0x4]
006ffd96  CALL 0x004b2280
006ffd9b  MOV EAX,dword ptr [ESI + 0x7c]
006ffd9e  TEST EAX,EAX
006ffda0  MOV byte ptr [ESI + 0x50],0x0
006ffda4  JZ 0x006ffdb8
006ffda6  PUSH EAX
006ffda7  MOV ECX,0x912840
006ffdac  CALL 0x004ac0e0
006ffdb1  MOV dword ptr [ESI + 0x7c],0x0
006ffdb8  MOV AL,0x1
006ffdba  POP ESI
006ffdbb  RET 0x4
006ffdbe  XOR AL,AL
006ffdc0  POP ESI
006ffdc1  RET 0x4
